#ifndef INCLUDED_nme_geom_Rectangle
#define INCLUDED_nme_geom_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,geom,Matrix)
HX_DECLARE_CLASS2(nme,geom,Point)
HX_DECLARE_CLASS2(nme,geom,Rectangle)
namespace nme{
namespace geom{


class Rectangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();
		Void __construct(Dynamic inX,Dynamic inY,Dynamic inWidth,Dynamic inHeight);

	public:
		static hx::ObjectPtr< Rectangle_obj > __new(Dynamic inX,Dynamic inY,Dynamic inWidth,Dynamic inHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Rectangle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Rectangle"); }

		double x; /* REM */ 
		double y; /* REM */ 
		double width; /* REM */ 
		double height; /* REM */ 
		double left; /* REM */ 
		virtual double get_left( );
		Dynamic get_left_dyn();

		virtual double set_left( double l);
		Dynamic set_left_dyn();

		double right; /* REM */ 
		virtual double get_right( );
		Dynamic get_right_dyn();

		virtual double set_right( double r);
		Dynamic set_right_dyn();

		double top; /* REM */ 
		virtual double get_top( );
		Dynamic get_top_dyn();

		virtual double set_top( double t);
		Dynamic set_top_dyn();

		double bottom; /* REM */ 
		virtual double get_bottom( );
		Dynamic get_bottom_dyn();

		virtual double set_bottom( double b);
		Dynamic set_bottom_dyn();

		::nme::geom::Point topLeft; /* REM */ 
		virtual ::nme::geom::Point get_topLeft( );
		Dynamic get_topLeft_dyn();

		virtual ::nme::geom::Point set_topLeft( ::nme::geom::Point p);
		Dynamic set_topLeft_dyn();

		::nme::geom::Point size; /* REM */ 
		virtual ::nme::geom::Point get_size( );
		Dynamic get_size_dyn();

		virtual ::nme::geom::Point set_size( ::nme::geom::Point p);
		Dynamic set_size_dyn();

		::nme::geom::Point bottomRight; /* REM */ 
		virtual ::nme::geom::Point get_bottomRight( );
		Dynamic get_bottomRight_dyn();

		virtual ::nme::geom::Point set_bottomRight( ::nme::geom::Point p);
		Dynamic set_bottomRight_dyn();

		virtual ::nme::geom::Rectangle clone( );
		Dynamic clone_dyn();

		virtual bool contains( double inX,double inY);
		Dynamic contains_dyn();

		virtual bool containsPoint( ::nme::geom::Point point);
		Dynamic containsPoint_dyn();

		virtual bool containsRect( ::nme::geom::Rectangle rect);
		Dynamic containsRect_dyn();

		virtual bool equals( ::nme::geom::Rectangle toCompare);
		Dynamic equals_dyn();

		virtual Void inflate( double dx,double dy);
		Dynamic inflate_dyn();

		virtual Void inflatePoint( ::nme::geom::Point point);
		Dynamic inflatePoint_dyn();

		virtual ::nme::geom::Rectangle intersection( ::nme::geom::Rectangle toIntersect);
		Dynamic intersection_dyn();

		virtual bool intersects( ::nme::geom::Rectangle toIntersect);
		Dynamic intersects_dyn();

		virtual ::nme::geom::Rectangle _union( ::nme::geom::Rectangle toUnion);
		Dynamic _union_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual Void offset( double dx,double dy);
		Dynamic offset_dyn();

		virtual Void offsetPoint( ::nme::geom::Point point);
		Dynamic offsetPoint_dyn();

		virtual Void setEmpty( );
		Dynamic setEmpty_dyn();

		virtual ::nme::geom::Rectangle transform( ::nme::geom::Matrix m);
		Dynamic transform_dyn();

		virtual Void extendBounds( ::nme::geom::Rectangle r);
		Dynamic extendBounds_dyn();

};

} // end namespace nme
} // end namespace geom

#endif /* INCLUDED_nme_geom_Rectangle */ 
