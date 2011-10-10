#include <hxcpp.h>

#ifndef INCLUDED_Grid
#include <Grid.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Grid_obj::__construct(int columns,int rows)
{
{
	HX_SOURCE_POS("src/Grid.hx",17)
	this->_columns = columns;
	HX_SOURCE_POS("src/Grid.hx",18)
	this->_rows = rows;
	HX_SOURCE_POS("src/Grid.hx",20)
	this->_bitshift = ::Math_obj::ceil((double(::Math_obj::log(this->_columns)) / double(::Math_obj::log((int)2))));
	HX_SOURCE_POS("src/Grid.hx",21)
	this->_grid = Array_obj< int >::__new();
	HX_SOURCE_POS("src/Grid.hx",23)
	{
		HX_SOURCE_POS("src/Grid.hx",23)
		int _g1 = (int)0;
		int _g = this->_columns;
		HX_SOURCE_POS("src/Grid.hx",23)
		while(((_g1 < _g))){
			HX_SOURCE_POS("src/Grid.hx",23)
			int x = (_g1)++;
			HX_SOURCE_POS("src/Grid.hx",25)
			{
				HX_SOURCE_POS("src/Grid.hx",25)
				int _g3 = (int)0;
				int _g2 = this->_rows;
				HX_SOURCE_POS("src/Grid.hx",25)
				while(((_g3 < _g2))){
					HX_SOURCE_POS("src/Grid.hx",25)
					int y = (_g3)++;
					HX_SOURCE_POS("src/Grid.hx",27)
					this->_grid[(int((int(y) << int(this->_bitshift))) | int(x))] = (int)0;
				}
			}
		}
	}
}
;
	return null();
}

Grid_obj::~Grid_obj() { }

Dynamic Grid_obj::__CreateEmpty() { return  new Grid_obj; }
hx::ObjectPtr< Grid_obj > Grid_obj::__new(int columns,int rows)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(columns,rows);
	return result;}

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool Grid_obj::get( int x,int y){
	HX_SOURCE_PUSH("Grid_obj::get")
	HX_SOURCE_POS("src/Grid.hx",33)
	return (this->_grid->__get((int((int(y) << int(this->_bitshift))) | int(x))) == (int)1);
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,get,return )

Void Grid_obj::set( int x,int y,bool value){
{
		HX_SOURCE_PUSH("Grid_obj::set")
		HX_SOURCE_POS("src/Grid.hx",38)
		this->_grid[(int((int(y) << int(this->_bitshift))) | int(x))] = (  ((value)) ? int((int)1) : int((int)0) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,set,(void))

int Grid_obj::getLiveNeighbors( int x,int y){
	HX_SOURCE_PUSH("Grid_obj::getLiveNeighbors")
	HX_SOURCE_POS("src/Grid.hx",44)
	int left = (  ((((x - (int)1) < (int)0))) ? int((int)0) : int((x - (int)1)) );
	HX_SOURCE_POS("src/Grid.hx",45)
	int right = (  ((((x + (int)2) > this->_columns))) ? int(this->_columns) : int((x + (int)2)) );
	HX_SOURCE_POS("src/Grid.hx",46)
	int top = (  ((((y - (int)1) < (int)0))) ? int((int)0) : int((y - (int)1)) );
	HX_SOURCE_POS("src/Grid.hx",47)
	int bottom = (  ((((y + (int)2) > this->_rows))) ? int(this->_rows) : int((y + (int)2)) );
	HX_SOURCE_POS("src/Grid.hx",49)
	int count = (int)0;
	HX_SOURCE_POS("src/Grid.hx",50)
	{
		HX_SOURCE_POS("src/Grid.hx",50)
		int _g = left;
		HX_SOURCE_POS("src/Grid.hx",50)
		while(((_g < right))){
			HX_SOURCE_POS("src/Grid.hx",50)
			int i = (_g)++;
			HX_SOURCE_POS("src/Grid.hx",52)
			{
				HX_SOURCE_POS("src/Grid.hx",52)
				int _g1 = top;
				HX_SOURCE_POS("src/Grid.hx",52)
				while(((_g1 < bottom))){
					HX_SOURCE_POS("src/Grid.hx",52)
					int j = (_g1)++;
					HX_SOURCE_POS("src/Grid.hx",54)
					hx::AddEq(count,this->_grid->__get((int((int(j) << int(this->_bitshift))) | int(i))));
				}
			}
		}
	}
	HX_SOURCE_POS("src/Grid.hx",58)
	hx::SubEq(count,this->_grid->__get((int((int(y) << int(this->_bitshift))) | int(x))));
	HX_SOURCE_POS("src/Grid.hx",59)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getLiveNeighbors,return )

int Grid_obj::getCellValue( int x,int y){
	HX_SOURCE_PUSH("Grid_obj::getCellValue")
	HX_SOURCE_POS("src/Grid.hx",63)
	return this->_grid->__get((int((int(y) << int(this->_bitshift))) | int(x)));
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getCellValue,return )

int Grid_obj::getCellReference( int x,int y){
	HX_SOURCE_PUSH("Grid_obj::getCellReference")
	HX_SOURCE_POS("src/Grid.hx",68)
	return (int((int(y) << int(this->_bitshift))) | int(x));
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getCellReference,return )


Grid_obj::Grid_obj()
{
}

void Grid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grid);
	HX_MARK_MEMBER_NAME(_columns,"_columns");
	HX_MARK_MEMBER_NAME(_rows,"_rows");
	HX_MARK_MEMBER_NAME(_bitshift,"_bitshift");
	HX_MARK_MEMBER_NAME(_grid,"_grid");
	HX_MARK_END_CLASS();
}

Dynamic Grid_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { return _rows; }
		if (HX_FIELD_EQ(inName,"_grid") ) { return _grid; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { return _columns; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bitshift") ) { return _bitshift; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getCellValue") ) { return getCellValue_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getLiveNeighbors") ) { return getLiveNeighbors_dyn(); }
		if (HX_FIELD_EQ(inName,"getCellReference") ) { return getCellReference_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Grid_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { _rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_grid") ) { _grid=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bitshift") ) { _bitshift=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_columns"));
	outFields->push(HX_CSTRING("_rows"));
	outFields->push(HX_CSTRING("_bitshift"));
	outFields->push(HX_CSTRING("_grid"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_columns"),
	HX_CSTRING("_rows"),
	HX_CSTRING("_bitshift"),
	HX_CSTRING("_grid"),
	HX_CSTRING("get"),
	HX_CSTRING("set"),
	HX_CSTRING("getLiveNeighbors"),
	HX_CSTRING("getCellValue"),
	HX_CSTRING("getCellReference"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Grid"), hx::TCanCast< Grid_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Grid_obj::__boot()
{
}

