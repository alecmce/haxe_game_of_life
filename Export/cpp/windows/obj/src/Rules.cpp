#include <hxcpp.h>

#ifndef INCLUDED_Rules
#include <Rules.h>
#endif

Void Rules_obj::__construct()
{
{
}
;
	return null();
}

Rules_obj::~Rules_obj() { }

Dynamic Rules_obj::__CreateEmpty() { return  new Rules_obj; }
hx::ObjectPtr< Rules_obj > Rules_obj::__new()
{  hx::ObjectPtr< Rules_obj > result = new Rules_obj();
	result->__construct();
	return result;}

Dynamic Rules_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rules_obj > result = new Rules_obj();
	result->__construct();
	return result;}

bool Rules_obj::apply( bool isCellAlive,int liveNeighbors){
	HX_SOURCE_PUSH("Rules_obj::apply")
	HX_SOURCE_POS("src/Rules.hx",16)
	return (bool((liveNeighbors == (int)3)) || bool((bool((liveNeighbors == (int)2)) && bool(isCellAlive))));
}


HX_DEFINE_DYNAMIC_FUNC2(Rules_obj,apply,return )


Rules_obj::Rules_obj()
{
}

void Rules_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rules);
	HX_MARK_END_CLASS();
}

Dynamic Rules_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Rules_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Rules_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("apply"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Rules_obj::__mClass;

void Rules_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Rules"), hx::TCanCast< Rules_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Rules_obj::__boot()
{
}

