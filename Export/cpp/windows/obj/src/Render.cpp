#include <hxcpp.h>

#ifndef INCLUDED_Render
#include <Render.h>
#endif
#ifndef INCLUDED_nme_display_Bitmap
#include <nme/display/Bitmap.h>
#endif
#ifndef INCLUDED_nme_display_BitmapData
#include <nme/display/BitmapData.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObjectContainer
#include <nme/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_display_MovieClip
#include <nme/display/MovieClip.h>
#endif
#ifndef INCLUDED_nme_display_PixelSnapping
#include <nme/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif

Void Render_obj::__construct(::nme::display::MovieClip container,int cols,int rows,int cellSize)
{
{
	HX_SOURCE_POS("src/Render.hx",21)
	this->_cellSize = cellSize;
	HX_SOURCE_POS("src/Render.hx",22)
	this->_renderTarget = ::nme::display::BitmapData_obj::__new((cols * cellSize),(rows * cellSize),false,null());
	HX_SOURCE_POS("src/Render.hx",23)
	container->addChild(::nme::display::Bitmap_obj::__new(this->_renderTarget,null(),null()));
	HX_SOURCE_POS("src/Render.hx",25)
	this->_rect = ::nme::geom::Rectangle_obj::__new((int)0,(int)0,this->_cellSize,this->_cellSize);
}
;
	return null();
}

Render_obj::~Render_obj() { }

Dynamic Render_obj::__CreateEmpty() { return  new Render_obj; }
hx::ObjectPtr< Render_obj > Render_obj::__new(::nme::display::MovieClip container,int cols,int rows,int cellSize)
{  hx::ObjectPtr< Render_obj > result = new Render_obj();
	result->__construct(container,cols,rows,cellSize);
	return result;}

Dynamic Render_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Render_obj > result = new Render_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Render_obj::lock( ){
{
		HX_SOURCE_PUSH("Render_obj::lock")
		HX_SOURCE_POS("src/Render.hx",30)
		this->_renderTarget->lock();
		HX_SOURCE_POS("src/Render.hx",31)
		this->_renderTarget->fillRect(this->_renderTarget->nmeGetRect(),(int)16711680);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,lock,(void))

Void Render_obj::renderCell( int x,int y,bool isLive){
{
		HX_SOURCE_PUSH("Render_obj::renderCell")
		HX_SOURCE_POS("src/Render.hx",35)
		if ((isLive)){
			HX_SOURCE_POS("src/Render.hx",38)
			this->_rect->x = (x * this->_cellSize);
			HX_SOURCE_POS("src/Render.hx",39)
			this->_rect->y = (y * this->_cellSize);
			HX_SOURCE_POS("src/Render.hx",40)
			this->_renderTarget->fillRect(this->_rect,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Render_obj,renderCell,(void))

Void Render_obj::unlock( ){
{
		HX_SOURCE_PUSH("Render_obj::unlock")
		HX_SOURCE_POS("src/Render.hx",45)
		this->_renderTarget->unlock(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,unlock,(void))


Render_obj::Render_obj()
{
}

void Render_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Render);
	HX_MARK_MEMBER_NAME(_cellSize,"_cellSize");
	HX_MARK_MEMBER_NAME(_renderTarget,"_renderTarget");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_END_CLASS();
}

Dynamic Render_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cellSize") ) { return _cellSize; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderCell") ) { return renderCell_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_renderTarget") ) { return _renderTarget; }
	}
	return super::__Field(inName);
}

Dynamic Render_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::nme::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cellSize") ) { _cellSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_renderTarget") ) { _renderTarget=inValue.Cast< ::nme::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Render_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_cellSize"));
	outFields->push(HX_CSTRING("_renderTarget"));
	outFields->push(HX_CSTRING("_rect"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_cellSize"),
	HX_CSTRING("_renderTarget"),
	HX_CSTRING("_rect"),
	HX_CSTRING("lock"),
	HX_CSTRING("renderCell"),
	HX_CSTRING("unlock"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Render_obj::__mClass;

void Render_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Render"), hx::TCanCast< Render_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Render_obj::__boot()
{
}

