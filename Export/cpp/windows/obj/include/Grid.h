#ifndef INCLUDED_Grid
#define INCLUDED_Grid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Grid)


class Grid_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Grid_obj OBJ_;
		Grid_obj();
		Void __construct(int columns,int rows);

	public:
		static hx::ObjectPtr< Grid_obj > __new(int columns,int rows);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Grid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Grid"); }

		int _columns; /* REM */ 
		int _rows; /* REM */ 
		int _bitshift; /* REM */ 
		Array< int > _grid; /* REM */ 
		virtual bool get( int x,int y);
		Dynamic get_dyn();

		virtual Void set( int x,int y,bool value);
		Dynamic set_dyn();

		virtual int getLiveNeighbors( int x,int y);
		Dynamic getLiveNeighbors_dyn();

		virtual int getCellValue( int x,int y);
		Dynamic getCellValue_dyn();

		virtual int getCellReference( int x,int y);
		Dynamic getCellReference_dyn();

};


#endif /* INCLUDED_Grid */ 
