#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Render
#include <Render.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
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
#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
#ifndef INCLUDED_nme_display_Stage
#include <nme/display/Stage.h>
#endif
#ifndef INCLUDED_nme_display_StageAlign
#include <nme/display/StageAlign.h>
#endif
#ifndef INCLUDED_nme_display_StageScaleMode
#include <nme/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_MouseEvent
#include <nme/events/MouseEvent.h>
#endif

Void Main_obj::__construct()
{
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

::Game Main_obj::_game;

Void Main_obj::main( ){
{
		HX_SOURCE_PUSH("Main_obj::main")
		HX_SOURCE_POS("src/Main.hx",24)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeSetAlign(::nme::display::StageAlign_obj::TOP_LEFT_dyn());
		HX_SOURCE_POS("src/Main.hx",25)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeSetScaleMode(::nme::display::StageScaleMode_obj::NO_SCALE_dyn());
		HX_SOURCE_POS("src/Main.hx",27)
		int cols = (int)350;
		HX_SOURCE_POS("src/Main.hx",28)
		int rows = (int)200;
		HX_SOURCE_POS("src/Main.hx",29)
		int cellSize = (int)2;
		HX_SOURCE_POS("src/Main.hx",31)
		::Render renderer = ::Render_obj::__new(::nme::Lib_obj::nmeGetCurrent(),cols,rows,cellSize);
		HX_SOURCE_POS("src/Main.hx",32)
		::Main_obj::_game = ::Game_obj::__new(renderer,cols,rows);
		HX_SOURCE_POS("src/Main.hx",34)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::nme::events::MouseEvent_obj::CLICK,::Main_obj::onClick_dyn(),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))

Void Main_obj::onClick( ::nme::events::MouseEvent e){
{
		HX_SOURCE_PUSH("Main_obj::onClick")
		HX_SOURCE_POS("src/Main.hx",38)
		::Main_obj::_game->reset();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onClick,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_END_CLASS();
}

Dynamic Main_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_game") ) { return _game; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_game") ) { _game=inValue.Cast< ::Game >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_game"),
	HX_CSTRING("main"),
	HX_CSTRING("onClick"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::_game,"_game");
};

Class Main_obj::__mClass;

void Main_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Main_obj::__boot()
{
	hx::Static(_game);
}

