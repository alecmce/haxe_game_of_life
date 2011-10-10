#ifndef INCLUDED_Render
#define INCLUDED_Render

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Render)
HX_DECLARE_CLASS2(nme,display,BitmapData)
HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,InteractiveObject)
HX_DECLARE_CLASS2(nme,display,MovieClip)
HX_DECLARE_CLASS2(nme,display,Sprite)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,geom,Rectangle)


class Render_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Render_obj OBJ_;
		Render_obj();
		Void __construct(::nme::display::MovieClip container,int cols,int rows,int cellSize);

	public:
		static hx::ObjectPtr< Render_obj > __new(::nme::display::MovieClip container,int cols,int rows,int cellSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Render_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Render"); }

		int _cellSize; /* REM */ 
		::nme::display::BitmapData _renderTarget; /* REM */ 
		::nme::geom::Rectangle _rect; /* REM */ 
		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Void renderCell( int x,int y,bool isLive);
		Dynamic renderCell_dyn();

		virtual Void unlock( );
		Dynamic unlock_dyn();

};


#endif /* INCLUDED_Render */ 
