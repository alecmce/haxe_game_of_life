#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_Grid
#include <Grid.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Render
#include <Render.h>
#endif
#ifndef INCLUDED_Rules
#include <Rules.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_nme_display_BitmapData
#include <nme/display/BitmapData.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif

Void Game_obj::__construct(::Render renderer,int cols,int rows)
{
{
	HX_SOURCE_POS("src/Game.hx",25)
	this->_columns = cols;
	HX_SOURCE_POS("src/Game.hx",26)
	this->_rows = rows;
	HX_SOURCE_POS("src/Game.hx",28)
	this->_current = ::Grid_obj::__new(this->_columns,this->_rows);
	HX_SOURCE_POS("src/Game.hx",29)
	this->_future = ::Grid_obj::__new(this->_columns,this->_rows);
	HX_SOURCE_POS("src/Game.hx",31)
	this->_rules = ::Rules_obj::__new();
	HX_SOURCE_POS("src/Game.hx",33)
	this->_timer = ::haxe::Timer_obj::__new((int)15);
	HX_SOURCE_POS("src/Game.hx",34)
	this->_timer->run = this->iterate_dyn();
	HX_SOURCE_POS("src/Game.hx",36)
	this->_renderer = renderer;
	HX_SOURCE_POS("src/Game.hx",38)
	this->reset();
}
;
	return null();
}

Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new(::Render renderer,int cols,int rows)
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct(renderer,cols,rows);
	return result;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Game_obj::reset( ){
{
		HX_SOURCE_PUSH("Game_obj::reset")
		HX_SOURCE_POS("src/Game.hx",43)
		int _g1 = (int)0;
		int _g = this->_columns;
		HX_SOURCE_POS("src/Game.hx",43)
		while(((_g1 < _g))){
			HX_SOURCE_POS("src/Game.hx",43)
			int x = (_g1)++;
			HX_SOURCE_POS("src/Game.hx",45)
			{
				HX_SOURCE_POS("src/Game.hx",45)
				int _g3 = (int)0;
				int _g2 = this->_rows;
				HX_SOURCE_POS("src/Game.hx",45)
				while(((_g3 < _g2))){
					HX_SOURCE_POS("src/Game.hx",45)
					int y = (_g3)++;
					HX_SOURCE_POS("src/Game.hx",47)
					{
						HX_SOURCE_POS("src/Game.hx",47)
						::Grid _this = this->_current;
						HX_SOURCE_POS("src/Game.hx",47)
						_this->_grid[(int((int(y) << int(_this->_bitshift))) | int(x))] = (  (((::Math_obj::random() < .5))) ? int((int)1) : int((int)0) );
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,reset,(void))

Void Game_obj::iterate( ){
{
		HX_SOURCE_PUSH("Game_obj::iterate")
		HX_SOURCE_POS("src/Game.hx",54)
		{
			HX_SOURCE_POS("src/Game.hx",54)
			::Render _this = this->_renderer;
			HX_SOURCE_POS("src/Game.hx",54)
			_this->_renderTarget->lock();
			HX_SOURCE_POS("src/Game.hx",54)
			_this->_renderTarget->fillRect(_this->_renderTarget->nmeGetRect(),(int)16711680);
		}
		HX_SOURCE_POS("src/Game.hx",56)
		{
			HX_SOURCE_POS("src/Game.hx",56)
			int _g1 = (int)0;
			int _g = this->_columns;
			HX_SOURCE_POS("src/Game.hx",56)
			while(((_g1 < _g))){
				HX_SOURCE_POS("src/Game.hx",56)
				int x = (_g1)++;
				HX_SOURCE_POS("src/Game.hx",58)
				{
					HX_SOURCE_POS("src/Game.hx",58)
					int _g3 = (int)0;
					int _g2 = this->_rows;
					HX_SOURCE_POS("src/Game.hx",58)
					while(((_g3 < _g2))){
						HX_SOURCE_POS("src/Game.hx",58)
						int y = (_g3)++;
						struct _Function_5_1{
							inline static bool Block( ::Game_obj *__this,int &y,int &x){
								HX_SOURCE_POS("src/Game.hx",60)
								::Grid _this = __this->_current;
								HX_SOURCE_POS("src/Game.hx",60)
								return (_this->_grid->__get((int((int(y) << int(_this->_bitshift))) | int(x))) == (int)1);
							}
						};
						HX_SOURCE_POS("src/Game.hx",60)
						bool isLive = _Function_5_1::Block(this,y,x);
						HX_SOURCE_POS("src/Game.hx",61)
						int liveNeighbors = this->_current->getLiveNeighbors(x,y);
						HX_SOURCE_POS("src/Game.hx",62)
						bool futureLive = (bool((liveNeighbors == (int)3)) || bool((bool((liveNeighbors == (int)2)) && bool(isLive))));
						HX_SOURCE_POS("src/Game.hx",64)
						{
							HX_SOURCE_POS("src/Game.hx",64)
							::Grid _this = this->_future;
							HX_SOURCE_POS("src/Game.hx",64)
							_this->_grid[(int((int(y) << int(_this->_bitshift))) | int(x))] = (  ((futureLive)) ? int((int)1) : int((int)0) );
						}
						HX_SOURCE_POS("src/Game.hx",65)
						{
							HX_SOURCE_POS("src/Game.hx",65)
							::Render _this = this->_renderer;
							HX_SOURCE_POS("src/Game.hx",65)
							if ((futureLive)){
								HX_SOURCE_POS("src/Game.hx",65)
								_this->_rect->x = (x * _this->_cellSize);
								HX_SOURCE_POS("src/Game.hx",65)
								_this->_rect->y = (y * _this->_cellSize);
								HX_SOURCE_POS("src/Game.hx",65)
								_this->_renderTarget->fillRect(_this->_rect,(int)0);
							}
						}
					}
				}
			}
		}
		HX_SOURCE_POS("src/Game.hx",69)
		::Grid tmp = this->_current;
		HX_SOURCE_POS("src/Game.hx",70)
		this->_current = this->_future;
		HX_SOURCE_POS("src/Game.hx",71)
		this->_future = tmp;
		HX_SOURCE_POS("src/Game.hx",73)
		this->_renderer->_renderTarget->unlock(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,iterate,(void))


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(_columns,"_columns");
	HX_MARK_MEMBER_NAME(_rows,"_rows");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(_future,"_future");
	HX_MARK_MEMBER_NAME(_rules,"_rules");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_renderer,"_renderer");
	HX_MARK_END_CLASS();
}

Dynamic Game_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { return _rows; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { return _rules; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_future") ) { return _future; }
		if (HX_FIELD_EQ(inName,"iterate") ) { return iterate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { return _columns; }
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_renderer") ) { return _renderer; }
	}
	return super::__Field(inName);
}

Dynamic Game_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { _rows=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { _rules=inValue.Cast< ::Rules >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_future") ) { _future=inValue.Cast< ::Grid >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< ::Grid >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_renderer") ) { _renderer=inValue.Cast< ::Render >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_columns"));
	outFields->push(HX_CSTRING("_rows"));
	outFields->push(HX_CSTRING("_current"));
	outFields->push(HX_CSTRING("_future"));
	outFields->push(HX_CSTRING("_rules"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_renderer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_columns"),
	HX_CSTRING("_rows"),
	HX_CSTRING("_current"),
	HX_CSTRING("_future"),
	HX_CSTRING("_rules"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_renderer"),
	HX_CSTRING("reset"),
	HX_CSTRING("iterate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Game_obj::__mClass;

void Game_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Game"), hx::TCanCast< Game_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Game_obj::__boot()
{
}

