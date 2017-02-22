#include <hxcpp.h>

#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void Vector_obj::__construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w)
{
HX_STACK_FRAME("phoenix.Vector","new",0x8c9315d4,"phoenix.Vector.new","phoenix/Vector.hx",6,0x5d0bf7fb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__x,"_x")
HX_STACK_ARG(__o__y,"_y")
HX_STACK_ARG(__o__z,"_z")
HX_STACK_ARG(__o__w,"_w")
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
Float _z = __o__z.Default(0);
Float _w = __o__w.Default(0);
{
	HX_STACK_LINE(25)
	this->_construct = false;
	HX_STACK_LINE(19)
	this->ignore_listeners = false;
	HX_STACK_LINE(11)
	this->w = ((Float)0);
	HX_STACK_LINE(10)
	this->z = ((Float)0);
	HX_STACK_LINE(9)
	this->y = ((Float)0);
	HX_STACK_LINE(8)
	this->x = ((Float)0);
	HX_STACK_LINE(29)
	this->_construct = true;
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		this->x = _x;
		HX_STACK_LINE(31)
		bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		if ((tmp)){
			HX_STACK_LINE(31)
			this->x;
		}
		else{
			HX_STACK_LINE(31)
			Dynamic tmp1 = this->listen_x_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(31)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			if ((tmp2)){
				HX_STACK_LINE(31)
				bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(31)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(31)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(31)
				tmp3 = !(tmp6);
			}
			else{
				HX_STACK_LINE(31)
				tmp3 = false;
			}
			HX_STACK_LINE(31)
			if ((tmp3)){
				HX_STACK_LINE(31)
				Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(31)
				this->listen_x(tmp4);
			}
			HX_STACK_LINE(31)
			this->x;
		}
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		this->y = _y;
		HX_STACK_LINE(32)
		bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		if ((tmp)){
			HX_STACK_LINE(32)
			this->y;
		}
		else{
			HX_STACK_LINE(32)
			Dynamic tmp1 = this->listen_y_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(32)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			if ((tmp2)){
				HX_STACK_LINE(32)
				bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(32)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(32)
				tmp3 = !(tmp6);
			}
			else{
				HX_STACK_LINE(32)
				tmp3 = false;
			}
			HX_STACK_LINE(32)
			if ((tmp3)){
				HX_STACK_LINE(32)
				Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				this->listen_y(tmp4);
			}
			HX_STACK_LINE(32)
			this->y;
		}
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		this->z = _z;
		HX_STACK_LINE(33)
		bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(33)
			this->z;
		}
		else{
			HX_STACK_LINE(33)
			Dynamic tmp1 = this->listen_z_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			if ((tmp2)){
				HX_STACK_LINE(33)
				bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(33)
				tmp3 = !(tmp6);
			}
			else{
				HX_STACK_LINE(33)
				tmp3 = false;
			}
			HX_STACK_LINE(33)
			if ((tmp3)){
				HX_STACK_LINE(33)
				Float tmp4 = _z;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				this->listen_z(tmp4);
			}
			HX_STACK_LINE(33)
			this->z;
		}
	}
	HX_STACK_LINE(34)
	this->w = _w;
	HX_STACK_LINE(36)
	this->_construct = false;
}
;
	return null();
}

//Vector_obj::~Vector_obj() { }

Dynamic Vector_obj::__CreateEmpty() { return  new Vector_obj; }
hx::ObjectPtr< Vector_obj > Vector_obj::__new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w)
{  hx::ObjectPtr< Vector_obj > _result_ = new Vector_obj();
	_result_->__construct(__o__x,__o__y,__o__z,__o__w);
	return _result_;}

Dynamic Vector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_obj > _result_ = new Vector_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String Vector_obj::toString( ){
	HX_STACK_FRAME("phoenix.Vector","toString",0xe91b46b8,"phoenix.Vector.toString","phoenix/Vector.hx",213,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	::String tmp1 = (HX_HCSTRING("{ x:","\x47","\xef","\x65","\x51") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	::String tmp2 = (tmp1 + HX_HCSTRING(", y:","\x15","\x15","\x2e","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(215)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(215)
	::String tmp5 = (tmp4 + HX_HCSTRING(", z:","\xf4","\x15","\x2e","\x1d"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(215)
	Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(215)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(215)
	::String tmp8 = (tmp7 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(215)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,toString,return )


Vector_obj::Vector_obj()
{
}

void Vector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lengthsq,"lengthsq");
	HX_MARK_MEMBER_NAME(angle2D,"angle2D");
	HX_MARK_MEMBER_NAME(normalized,"normalized");
	HX_MARK_MEMBER_NAME(inverted,"inverted");
	HX_MARK_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_MARK_MEMBER_NAME(listen_x,"listen_x");
	HX_MARK_MEMBER_NAME(listen_y,"listen_y");
	HX_MARK_MEMBER_NAME(listen_z,"listen_z");
	HX_MARK_MEMBER_NAME(_construct,"_construct");
	HX_MARK_END_CLASS();
}

void Vector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(lengthsq,"lengthsq");
	HX_VISIT_MEMBER_NAME(angle2D,"angle2D");
	HX_VISIT_MEMBER_NAME(normalized,"normalized");
	HX_VISIT_MEMBER_NAME(inverted,"inverted");
	HX_VISIT_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_VISIT_MEMBER_NAME(listen_x,"listen_x");
	HX_VISIT_MEMBER_NAME(listen_y,"listen_y");
	HX_VISIT_MEMBER_NAME(listen_z,"listen_z");
	HX_VISIT_MEMBER_NAME(_construct,"_construct");
}

Dynamic Vector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"angle2D") ) { return angle2D; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lengthsq") ) { return lengthsq; }
		if (HX_FIELD_EQ(inName,"inverted") ) { return inverted; }
		if (HX_FIELD_EQ(inName,"listen_x") ) { return listen_x; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { return listen_y; }
		if (HX_FIELD_EQ(inName,"listen_z") ) { return listen_z; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { return normalized; }
		if (HX_FIELD_EQ(inName,"_construct") ) { return _construct; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { return ignore_listeners; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"angle2D") ) { angle2D=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lengthsq") ) { lengthsq=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inverted") ) { inverted=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_x") ) { listen_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { listen_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_z") ) { listen_z=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { normalized=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_construct") ) { _construct=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { ignore_listeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("lengthsq","\x04","\x7f","\xc3","\x1f"));
	outFields->push(HX_HCSTRING("angle2D","\x65","\x4a","\xd9","\x52"));
	outFields->push(HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"));
	outFields->push(HX_HCSTRING("inverted","\xf5","\xb0","\x31","\xf5"));
	outFields->push(HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7"));
	outFields->push(HX_HCSTRING("_construct","\xd8","\xd3","\x4f","\xab"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Vector_obj,lengthsq),HX_HCSTRING("lengthsq","\x04","\x7f","\xc3","\x1f")},
	{hx::fsFloat,(int)offsetof(Vector_obj,angle2D),HX_HCSTRING("angle2D","\x65","\x4a","\xd9","\x52")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vector_obj,normalized),HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vector_obj,inverted),HX_HCSTRING("inverted","\xf5","\xb0","\x31","\xf5")},
	{hx::fsBool,(int)offsetof(Vector_obj,ignore_listeners),HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_x),HX_HCSTRING("listen_x","\x40","\xfb","\x31","\x38")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_y),HX_HCSTRING("listen_y","\x41","\xfb","\x31","\x38")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_z),HX_HCSTRING("listen_z","\x42","\xfb","\x31","\x38")},
	{hx::fsBool,(int)offsetof(Vector_obj,_construct),HX_HCSTRING("_construct","\xd8","\xd3","\x4f","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("lengthsq","\x04","\x7f","\xc3","\x1f"),
	HX_HCSTRING("angle2D","\x65","\x4a","\xd9","\x52"),
	HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"),
	HX_HCSTRING("inverted","\xf5","\xb0","\x31","\xf5"),
	HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7"),
	HX_HCSTRING("listen_x","\x40","\xfb","\x31","\x38"),
	HX_HCSTRING("listen_y","\x41","\xfb","\x31","\x38"),
	HX_HCSTRING("listen_z","\x42","\xfb","\x31","\x38"),
	HX_HCSTRING("_construct","\xd8","\xd3","\x4f","\xab"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

#endif

hx::Class Vector_obj::__mClass;

void Vector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Vector","\xe2","\xdb","\x3e","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace phoenix
