#ifndef INCLUDED_Game
#define INCLUDED_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(Grid)
HX_DECLARE_CLASS0(Render)
HX_DECLARE_CLASS0(Rules)
HX_DECLARE_CLASS1(haxe,Timer)


class Game_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct(::Render renderer,int cols,int rows);

	public:
		static hx::ObjectPtr< Game_obj > __new(::Render renderer,int cols,int rows);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Game_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Game"); }

		int _columns; /* REM */ 
		int _rows; /* REM */ 
		::Grid _current; /* REM */ 
		::Grid _future; /* REM */ 
		::Rules _rules; /* REM */ 
		::haxe::Timer _timer; /* REM */ 
		::Render _renderer; /* REM */ 
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void iterate( );
		Dynamic iterate_dyn();

};


#endif /* INCLUDED_Game */ 
