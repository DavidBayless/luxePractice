#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_MouseEvent
#include <luxe/MouseEvent.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",8,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::config( Dynamic config){
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",11,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(13)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = HX_HCSTRING("luxe game","\x9c","\x14","\x33","\xb3");
	HX_STACK_LINE(14)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = (int)960;
	HX_STACK_LINE(15)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = (int)640;
	HX_STACK_LINE(16)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = false;
	HX_STACK_LINE(18)
	Dynamic tmp = config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	return tmp;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",22,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		::phoenix::Vector tmp1 = tmp->screen->get_mid();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		::phoenix::Color tmp2 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		::phoenix::Color tmp3 = tmp2->rgb((int)16337668);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new((int)128,(int)128,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &tmp4,::phoenix::Color &tmp3,::phoenix::Vector &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",23,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("block sprite","\x78","\x32","\x1d","\x5b"),false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp1,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp3,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(23)
		Dynamic tmp5 = _Function_1_1::Block(tmp4,tmp3,tmp1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		::luxe::Sprite tmp6 = ::luxe::Sprite_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		this->block = tmp6;
	}
return null();
}


Void Main_obj::onmousemove( ::luxe::MouseEvent event){
{
		HX_STACK_FRAME("Main","onmousemove",0x89532b22,"Main.onmousemove","Main.hx",31,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(32)
		::luxe::Sprite tmp = this->block;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::phoenix::Vector tmp1 = event->pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		tmp->set_pos(tmp1);
	}
return null();
}


Void Main_obj::onkeyup( ::luxe::KeyEvent event){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",35,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(37)
		bool tmp = (event->keycode == (int)27);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		if ((tmp)){
			HX_STACK_LINE(38)
			::luxe::Engine tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(38)
			tmp1->shutdown();
		}
	}
return null();
}


Void Main_obj::update( Float delta){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",44,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(44)
		::luxe::Sprite tmp = this->block;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		::luxe::Sprite _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		Float tmp1 = _g->get_rotation_z();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		Float tmp2 = ((int)40 * delta);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		_g->set_rotation_z(tmp3);
	}
return null();
}



Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(block,"block");
	::luxe::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(block,"block");
	::luxe::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"block") ) { return block; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"block") ) { block=inValue.Cast< ::luxe::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("block","\x4d","\x75","\xfc","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Main_obj,block),HX_HCSTRING("block","\x4d","\x75","\xfc","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("block","\x4d","\x75","\xfc","\xb4"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

