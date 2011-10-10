#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_display_BitmapData
#include <nme/display/BitmapData.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
#ifndef INCLUDED_nme_media_Sound
#include <nme/media/Sound.h>
#endif
#ifndef INCLUDED_nme_text_Font
#include <nme/text/Font.h>
#endif
#ifndef INCLUDED_nme_utils_ByteArray
#include <nme/utils/ByteArray.h>
#endif
#ifndef INCLUDED_nme_utils_IDataInput
#include <nme/utils/IDataInput.h>
#endif
namespace nme{
namespace installer{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::nme::display::BitmapData Assets_obj::getBitmapData( ::String id){
	HX_SOURCE_PUSH("Assets_obj::getBitmapData")
	HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",21)
	::String _switch_1 = (id);
;
	HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",26)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBitmapData,return )

::nme::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_SOURCE_PUSH("Assets_obj::getBytes")
	HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",33)
	::String _switch_2 = (id);
;
	HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",38)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::nme::text::Font Assets_obj::getFont( ::String id){
	HX_SOURCE_PUSH("Assets_obj::getFont")
	HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",45)
	::String _switch_3 = (id);
;
	HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",50)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::nme::media::Sound Assets_obj::getSound( ::String id){
	HX_SOURCE_PUSH("Assets_obj::getSound")
	HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",57)
	::String _switch_4 = (id);
;
	HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",62)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_SOURCE_PUSH("Assets_obj::getText")
	HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",69)
	::nme::utils::ByteArray bytes = ::nme::installer::Assets_obj::getBytes(id);
	HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",71)
	if (((bytes == null()))){
		HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",71)
		return null();
	}
	else{
		HX_SOURCE_POS("Export/cpp/windows/haxe/nme/installer/Assets.hx",75)
		return bytes->readUTFBytes(bytes->length);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

Dynamic Assets_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.installer.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Assets_obj::__boot()
{
}

} // end namespace nme
} // end namespace installer
