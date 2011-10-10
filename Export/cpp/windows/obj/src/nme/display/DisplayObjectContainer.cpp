#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
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
#ifndef INCLUDED_nme_errors_Error
#include <nme/errors/Error.h>
#endif
#ifndef INCLUDED_nme_errors_RangeError
#include <nme/errors/RangeError.h>
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
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
namespace nme{
namespace display{

Void DisplayObjectContainer_obj::__construct(Dynamic inHandle,::String inType)
{
{
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",22)
	super::__construct(inHandle,inType);
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",23)
	this->nmeChildren = Array_obj< ::nme::display::DisplayObject >::__new();
}
;
	return null();
}

DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new(Dynamic inHandle,::String inType)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct(inHandle,inType);
	return result;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::nme::display::DisplayObject DisplayObjectContainer_obj::nmeFindByID( int inID){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::nmeFindByID")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",28)
	if (((this->nmeID == inID))){
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",29)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",30)
	{
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",30)
		int _g = (int)0;
		Array< ::nme::display::DisplayObject > _g1 = this->nmeChildren;
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",30)
		while(((_g < _g1->length))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",30)
			::nme::display::DisplayObject child = _g1->__get(_g);
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",30)
			++(_g);
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",32)
			::nme::display::DisplayObject found = child->nmeFindByID(inID);
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",33)
			if (((found != null()))){
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",34)
				return found;
			}
		}
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",36)
	return this->super::nmeFindByID(inID);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,nmeFindByID,return )

Void DisplayObjectContainer_obj::nmeBroadcast( ::nme::events::Event inEvt){
{
		HX_SOURCE_PUSH("DisplayObjectContainer_obj::nmeBroadcast")
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",41)
		int i = (int)0;
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",42)
		if (((this->nmeChildren->length > (int)0))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",43)
			while((true)){
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",45)
				::nme::display::DisplayObject child = this->nmeChildren->__get(i);
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",46)
				child->nmeBroadcast(inEvt);
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",47)
				if (((i >= this->nmeChildren->length))){
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",48)
					break;
				}
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",49)
				if (((this->nmeChildren->__get(i) == child))){
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",51)
					(i)++;
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",52)
					if (((i >= this->nmeChildren->length))){
						HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",53)
						break;
					}
				}
			}
		}
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",56)
		this->dispatchEvent(inEvt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,nmeBroadcast,(void))

bool DisplayObjectContainer_obj::nmeGetTabChildren( ){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::nmeGetTabChildren")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",60)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,nmeGetTabChildren,return )

bool DisplayObjectContainer_obj::nmeSetTabChildren( bool inValue){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::nmeSetTabChildren")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",61)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,nmeSetTabChildren,return )

int DisplayObjectContainer_obj::nmeGetNumChildren( ){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::nmeGetNumChildren")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",62)
	return this->nmeChildren->length;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,nmeGetNumChildren,return )

Void DisplayObjectContainer_obj::nmeRemoveChildFromArray( ::nme::display::DisplayObject child){
{
		HX_SOURCE_PUSH("DisplayObjectContainer_obj::nmeRemoveChildFromArray")
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",66)
		int i = this->getChildIndex(child);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",67)
		if (((i >= (int)0))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",69)
			::nme::display::DisplayObjectContainer_obj::nme_doc_remove_child(this->nmeHandle,i);
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",70)
			this->nmeChildren->splice(i,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,nmeRemoveChildFromArray,(void))

Void DisplayObjectContainer_obj::nmeOnAdded( ::nme::display::DisplayObject inObj,bool inIsOnStage){
{
		HX_SOURCE_PUSH("DisplayObjectContainer_obj::nmeOnAdded")
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",76)
		this->super::nmeOnAdded(inObj,inIsOnStage);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",77)
		{
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",77)
			int _g = (int)0;
			Array< ::nme::display::DisplayObject > _g1 = this->nmeChildren;
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",77)
			while(((_g < _g1->length))){
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",77)
				::nme::display::DisplayObject child = _g1->__get(_g);
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",77)
				++(_g);
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",78)
				child->nmeOnAdded(inObj,inIsOnStage);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,nmeOnAdded,(void))

Void DisplayObjectContainer_obj::nmeOnRemoved( ::nme::display::DisplayObject inObj,bool inWasOnStage){
{
		HX_SOURCE_PUSH("DisplayObjectContainer_obj::nmeOnRemoved")
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",83)
		this->super::nmeOnRemoved(inObj,inWasOnStage);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",84)
		{
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",84)
			int _g = (int)0;
			Array< ::nme::display::DisplayObject > _g1 = this->nmeChildren;
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",84)
			while(((_g < _g1->length))){
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",84)
				::nme::display::DisplayObject child = _g1->__get(_g);
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",84)
				++(_g);
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",85)
				child->nmeOnRemoved(inObj,inWasOnStage);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,nmeOnRemoved,(void))

::nme::display::DisplayObject DisplayObjectContainer_obj::addChild( ::nme::display::DisplayObject child){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::addChild")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",90)
	if (((child == hx::ObjectPtr<OBJ_>(this)))){
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",90)
		hx::Throw (HX_CSTRING("Adding to self"));
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",93)
	if (((child->nmeParent == hx::ObjectPtr<OBJ_>(this)))){
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",94)
		this->setChildIndex(child,(this->nmeChildren->length - (int)1));
	}
	else{
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",99)
		child->nmeSetParent(hx::ObjectPtr<OBJ_>(this));
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",100)
		this->nmeChildren->push(child);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",101)
		::nme::display::DisplayObjectContainer_obj::nme_doc_add_child(this->nmeHandle,child->nmeHandle);
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",103)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::nme::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::nme::display::DisplayObject child,int index){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::addChildAt")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",108)
	this->addChild(child);
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",109)
	this->setChildIndex(child,index);
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",110)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::nme::geom::Point point){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",112)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::nme::display::DisplayObject child){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::contains")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",115)
	if (((child == null()))){
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",116)
		return false;
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",117)
	if (((hx::ObjectPtr<OBJ_>(this) == child))){
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",118)
		return true;
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",119)
	{
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",119)
		int _g = (int)0;
		Array< ::nme::display::DisplayObject > _g1 = this->nmeChildren;
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",119)
		while(((_g < _g1->length))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",119)
			::nme::display::DisplayObject c = _g1->__get(_g);
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",119)
			++(_g);
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",120)
			if (((c == child))){
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",121)
				return true;
			}
		}
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",122)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::nme::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::getChildByName")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",126)
	{
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",126)
		int _g = (int)0;
		Array< ::nme::display::DisplayObject > _g1 = this->nmeChildren;
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",126)
		while(((_g < _g1->length))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",126)
			::nme::display::DisplayObject c = _g1->__get(_g);
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",126)
			++(_g);
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",127)
			if (((name == c->nmeGetName()))){
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",128)
				return c;
			}
		}
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",129)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

::nme::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::getChildAt")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",134)
	if (((bool((index >= (int)0)) && bool((index < this->nmeChildren->length))))){
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",135)
		return this->nmeChildren->__get(index);
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",137)
	hx::Throw (::nme::errors::RangeError_obj::__new((((HX_CSTRING("getChildAt : index out of bounds ") + index) + HX_CSTRING("/")) + this->nmeChildren->length)));
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",138)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

int DisplayObjectContainer_obj::getChildIndex( ::nme::display::DisplayObject child){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::getChildIndex")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",143)
	{
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",143)
		int _g1 = (int)0;
		int _g = this->nmeChildren->length;
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",143)
		while(((_g1 < _g))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",143)
			int i = (_g1)++;
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",144)
			if (((this->nmeChildren->__get(i) == child))){
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",145)
				return i;
			}
		}
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",146)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Void DisplayObjectContainer_obj::nmeGetObjectsUnderPoint( ::nme::geom::Point point,Array< ::nme::display::DisplayObject > result){
{
		HX_SOURCE_PUSH("DisplayObjectContainer_obj::nmeGetObjectsUnderPoint")
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",151)
		this->super::nmeGetObjectsUnderPoint(point,result);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",152)
		{
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",152)
			int _g = (int)0;
			Array< ::nme::display::DisplayObject > _g1 = this->nmeChildren;
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",152)
			while(((_g < _g1->length))){
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",152)
				::nme::display::DisplayObject child = _g1->__get(_g);
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",152)
				++(_g);
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",153)
				this->nmeGetObjectsUnderPoint(point,result);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,nmeGetObjectsUnderPoint,(void))

Array< ::nme::display::DisplayObject > DisplayObjectContainer_obj::getObjectsUnderPoint( ::nme::geom::Point point){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::getObjectsUnderPoint")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",158)
	Array< ::nme::display::DisplayObject > result = Array_obj< ::nme::display::DisplayObject >::__new();
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",159)
	this->nmeGetObjectsUnderPoint(point,result);
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",160)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::nme::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::nme::display::DisplayObject child){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::removeChild")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",164)
	int c = this->getChildIndex(child);
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",165)
	if (((c >= (int)0))){
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",167)
		child->nmeSetParent(null());
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",168)
		return child;
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",170)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::nme::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::removeChildAt")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",175)
	if (((bool((index >= (int)0)) && bool((index < this->nmeChildren->length))))){
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",177)
		::nme::display::DisplayObject result = this->nmeChildren->__get(index);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",178)
		result->nmeSetParent(null());
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",179)
		return result;
	}
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",181)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::setChildIndex( ::nme::display::DisplayObject child,int index){
{
		HX_SOURCE_PUSH("DisplayObjectContainer_obj::setChildIndex")
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",186)
		if (((index > this->nmeChildren->length))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",187)
			hx::Throw ((HX_CSTRING("Invalid index position ") + index));
		}
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",189)
		::nme::display::DisplayObject s = null();
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",190)
		int orig = this->getChildIndex(child);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",192)
		if (((orig < (int)0))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",193)
			::String msg = ((HX_CSTRING("setChildIndex : object ") + child->toString()) + HX_CSTRING(" not found."));
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",194)
			if (((child->nmeParent == hx::ObjectPtr<OBJ_>(this)))){
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",195)
				int realindex = (int)-1;
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",196)
				{
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",196)
					int _g1 = (int)0;
					int _g = this->nmeChildren->length;
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",196)
					while(((_g1 < _g))){
						HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",196)
						int i = (_g1)++;
						HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",197)
						if (((this->nmeChildren->__get(i) == child))){
							HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",198)
							realindex = i;
							HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",199)
							break;
						}
					}
				}
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",202)
				if (((realindex != (int)-1))){
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",203)
					hx::AddEq(msg,(HX_CSTRING("Internal error: Real child index was ") + ::Std_obj::string(realindex)));
				}
				else{
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",205)
					hx::AddEq(msg,HX_CSTRING("Internal error: Child was not in nmeChildren array!"));
				}
			}
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",207)
			hx::Throw (msg);
		}
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",210)
		::nme::display::DisplayObjectContainer_obj::nme_doc_set_child_index(this->nmeHandle,child->nmeHandle,index);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",213)
		if (((index < orig))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",215)
			int i = orig;
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",216)
			while(((i > index))){
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",217)
				this->nmeChildren[i] = this->nmeChildren->__get((i - (int)1));
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",218)
				(i)--;
			}
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",220)
			this->nmeChildren[index] = child;
		}
		else{
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",223)
			if (((orig < index))){
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",225)
				int i = orig;
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",226)
				while(((i < index))){
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",227)
					this->nmeChildren[i] = this->nmeChildren->__get((i + (int)1));
					HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",228)
					(i)++;
				}
				HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",230)
				this->nmeChildren[index] = child;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::swapChildren( ::nme::display::DisplayObject child1,::nme::display::DisplayObject child2){
{
		HX_SOURCE_PUSH("DisplayObjectContainer_obj::swapChildren")
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",236)
		int idx1 = this->getChildIndex(child1);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",237)
		int idx2 = this->getChildIndex(child2);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",238)
		if (((bool((idx1 < (int)0)) || bool((idx2 < (int)0))))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",239)
			hx::Throw (HX_CSTRING("swapChildren:Could not find children"));
		}
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",240)
		this->swapChildrenAt(idx1,idx2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int index1,int index2){
{
		HX_SOURCE_PUSH("DisplayObjectContainer_obj::swapChildrenAt")
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",245)
		if (((bool((bool((bool((index1 < (int)0)) || bool((index2 < (int)0)))) || bool((index1 > this->nmeChildren->length)))) || bool((index2 > this->nmeChildren->length))))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",246)
			hx::Throw (::nme::errors::RangeError_obj::__new(HX_CSTRING("swapChildrenAt : index out of bounds")));
		}
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",247)
		if (((index1 == index2))){
			HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",248)
			return null();
		}
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",249)
		::nme::display::DisplayObject tmp = this->nmeChildren->__get(index1);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",250)
		this->nmeChildren[index1] = this->nmeChildren->__get(index2);
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",251)
		this->nmeChildren[index2] = tmp;
		HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",252)
		::nme::display::DisplayObjectContainer_obj::nme_doc_swap_children(this->nmeHandle,index1,index2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::nmeGetMouseChildren( ){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::nmeGetMouseChildren")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",255)
	return ::nme::display::DisplayObjectContainer_obj::nme_doc_get_mouse_children(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,nmeGetMouseChildren,return )

bool DisplayObjectContainer_obj::nmeSetMouseChildren( bool inVal){
	HX_SOURCE_PUSH("DisplayObjectContainer_obj::nmeSetMouseChildren")
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",258)
	::nme::display::DisplayObjectContainer_obj::nme_doc_set_mouse_children(this->nmeHandle,inVal);
	HX_SOURCE_POS("C:\\Motion-Twin\\haxe\\dev\\nme/nme/display/DisplayObjectContainer.hx",259)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,nmeSetMouseChildren,return )

Dynamic DisplayObjectContainer_obj::nme_create_display_object_container;

Dynamic DisplayObjectContainer_obj::nme_doc_add_child;

Dynamic DisplayObjectContainer_obj::nme_doc_remove_child;

Dynamic DisplayObjectContainer_obj::nme_doc_set_child_index;

Dynamic DisplayObjectContainer_obj::nme_doc_get_mouse_children;

Dynamic DisplayObjectContainer_obj::nme_doc_set_mouse_children;

Dynamic DisplayObjectContainer_obj::nme_doc_swap_children;


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(nmeChildren,"nmeChildren");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeOnAdded") ) { return nmeOnAdded_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return nmeGetNumChildren(); }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return nmeGetTabChildren(); }
		if (HX_FIELD_EQ(inName,"nmeChildren") ) { return nmeChildren; }
		if (HX_FIELD_EQ(inName,"nmeFindByID") ) { return nmeFindByID_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nmeBroadcast") ) { return nmeBroadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnRemoved") ) { return nmeOnRemoved_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return nmeGetMouseChildren(); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { return nme_doc_add_child; }
		if (HX_FIELD_EQ(inName,"nmeGetTabChildren") ) { return nmeGetTabChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetTabChildren") ) { return nmeSetTabChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetNumChildren") ) { return nmeGetNumChildren_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nmeGetMouseChildren") ) { return nmeGetMouseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetMouseChildren") ) { return nmeSetMouseChildren_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_doc_remove_child") ) { return nme_doc_remove_child; }
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_doc_swap_children") ) { return nme_doc_swap_children; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_doc_set_child_index") ) { return nme_doc_set_child_index; }
		if (HX_FIELD_EQ(inName,"nmeRemoveChildFromArray") ) { return nmeRemoveChildFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetObjectsUnderPoint") ) { return nmeGetObjectsUnderPoint_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_doc_get_mouse_children") ) { return nme_doc_get_mouse_children; }
		if (HX_FIELD_EQ(inName,"nme_doc_set_mouse_children") ) { return nme_doc_set_mouse_children; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_create_display_object_container") ) { return nme_create_display_object_container; }
	}
	return super::__Field(inName);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return nmeSetTabChildren(inValue); }
		if (HX_FIELD_EQ(inName,"nmeChildren") ) { nmeChildren=inValue.Cast< Array< ::nme::display::DisplayObject > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return nmeSetMouseChildren(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { nme_doc_add_child=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_doc_remove_child") ) { nme_doc_remove_child=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_doc_swap_children") ) { nme_doc_swap_children=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_doc_set_child_index") ) { nme_doc_set_child_index=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_doc_get_mouse_children") ) { nme_doc_get_mouse_children=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_doc_set_mouse_children") ) { nme_doc_set_mouse_children=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_create_display_object_container") ) { nme_create_display_object_container=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mouseChildren"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("tabChildren"));
	outFields->push(HX_CSTRING("nmeChildren"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_create_display_object_container"),
	HX_CSTRING("nme_doc_add_child"),
	HX_CSTRING("nme_doc_remove_child"),
	HX_CSTRING("nme_doc_set_child_index"),
	HX_CSTRING("nme_doc_get_mouse_children"),
	HX_CSTRING("nme_doc_set_mouse_children"),
	HX_CSTRING("nme_doc_swap_children"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mouseChildren"),
	HX_CSTRING("numChildren"),
	HX_CSTRING("tabChildren"),
	HX_CSTRING("nmeChildren"),
	HX_CSTRING("nmeFindByID"),
	HX_CSTRING("nmeBroadcast"),
	HX_CSTRING("nmeGetTabChildren"),
	HX_CSTRING("nmeSetTabChildren"),
	HX_CSTRING("nmeGetNumChildren"),
	HX_CSTRING("nmeRemoveChildFromArray"),
	HX_CSTRING("nmeOnAdded"),
	HX_CSTRING("nmeOnRemoved"),
	HX_CSTRING("addChild"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("areInaccessibleObjectsUnderPoint"),
	HX_CSTRING("contains"),
	HX_CSTRING("getChildByName"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("getChildIndex"),
	HX_CSTRING("nmeGetObjectsUnderPoint"),
	HX_CSTRING("getObjectsUnderPoint"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("setChildIndex"),
	HX_CSTRING("swapChildren"),
	HX_CSTRING("swapChildrenAt"),
	HX_CSTRING("nmeGetMouseChildren"),
	HX_CSTRING("nmeSetMouseChildren"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_create_display_object_container,"nme_create_display_object_container");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_add_child,"nme_doc_add_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_remove_child,"nme_doc_remove_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_child_index,"nme_doc_set_child_index");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_get_mouse_children,"nme_doc_get_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_mouse_children,"nme_doc_set_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_swap_children,"nme_doc_swap_children");
};

Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.display.DisplayObjectContainer"), hx::TCanCast< DisplayObjectContainer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void DisplayObjectContainer_obj::__boot()
{
	hx::Static(nme_create_display_object_container) = ::nme::Loader_obj::load(HX_CSTRING("nme_create_display_object_container"),(int)0);
	hx::Static(nme_doc_add_child) = ::nme::Loader_obj::load(HX_CSTRING("nme_doc_add_child"),(int)2);
	hx::Static(nme_doc_remove_child) = ::nme::Loader_obj::load(HX_CSTRING("nme_doc_remove_child"),(int)2);
	hx::Static(nme_doc_set_child_index) = ::nme::Loader_obj::load(HX_CSTRING("nme_doc_set_child_index"),(int)3);
	hx::Static(nme_doc_get_mouse_children) = ::nme::Loader_obj::load(HX_CSTRING("nme_doc_get_mouse_children"),(int)1);
	hx::Static(nme_doc_set_mouse_children) = ::nme::Loader_obj::load(HX_CSTRING("nme_doc_set_mouse_children"),(int)2);
	hx::Static(nme_doc_swap_children) = ::nme::Loader_obj::load(HX_CSTRING("nme_doc_swap_children"),(int)3);
}

} // end namespace nme
} // end namespace display
