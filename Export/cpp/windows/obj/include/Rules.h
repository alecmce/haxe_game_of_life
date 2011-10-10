#ifndef INCLUDED_Rules
#define INCLUDED_Rules

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Rules)


class Rules_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rules_obj OBJ_;
		Rules_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Rules_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Rules_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Rules"); }

		virtual bool apply( bool isCellAlive,int liveNeighbors);
		Dynamic apply_dyn();

};


#endif /* INCLUDED_Rules */ 
