#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
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
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",9,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->move_speed = ((Float)0);
	HX_STACK_LINE(9)
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
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",14,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(16)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = HX_HCSTRING("luxe game","\x9c","\x14","\x33","\xb3");
	HX_STACK_LINE(17)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = (int)960;
	HX_STACK_LINE(18)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = (int)640;
	HX_STACK_LINE(19)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = false;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",21,0x087e5c05)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/stand.png","\x45","\xed","\x6a","\x78"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(21)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	config->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(23)
	Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	return tmp1;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",27,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/stand.png","\x45","\xed","\x6a","\x78"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		::phoenix::Texture image = ((::phoenix::Texture)(tmp1));		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(37)
		int tmp2 = image->set_filter_mag((int)9728);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		image->set_filter_min(tmp2);
		HX_STACK_LINE(39)
		Float ratio = ((Float)1.75);		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(40)
		::luxe::Engine tmp3 = ::Luxe_obj::core;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		int tmp4 = tmp3->screen->get_h();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		Float tmp5 = ratio;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		Float height = tmp6;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(41)
		Float tmp7 = (Float(height) / Float(image->height));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		int tmp8 = image->width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		Float width = tmp9;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(45)
		::phoenix::Texture tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		::luxe::Engine tmp11 = ::Luxe_obj::core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		::phoenix::Vector tmp12 = tmp11->screen->get_mid();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(46)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(46)
		::luxe::Engine tmp14 = ::Luxe_obj::core;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(46)
		int tmp15 = tmp14->screen->get_h();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(46)
		Float tmp16 = (Float(height) / Float(ratio));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(46)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(46)
		::phoenix::Vector tmp18 = ::phoenix::Vector_obj::__new(tmp13,tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(47)
		::phoenix::Vector tmp19 = ::phoenix::Vector_obj::__new(width,height,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &tmp19,::phoenix::Texture &tmp10,::phoenix::Vector &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",43,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),false);
					__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp10,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp18,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp19,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(43)
		Dynamic tmp20 = _Function_1_1::Block(tmp19,tmp10,tmp18);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(43)
		::luxe::Sprite tmp21 = ::luxe::Sprite_obj::__new(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(43)
		this->player = tmp21;
		HX_STACK_LINE(50)
		Float tmp22 = (width * (int)3);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(50)
		this->move_speed = tmp22;
		HX_STACK_LINE(52)
		this->connect_input();
	}
return null();
}


Void Main_obj::connect_input( ){
{
		HX_STACK_FRAME("Main","connect_input",0x3cf7fbe0,"Main.connect_input","Main.hx",55,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		::luxe::Input tmp = ::Luxe_obj::input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		tmp->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),(int)1073741904);
		HX_STACK_LINE(57)
		::luxe::Input tmp1 = ::Luxe_obj::input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		tmp1->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),(int)97);
		HX_STACK_LINE(59)
		::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		tmp2->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),(int)1073741903);
		HX_STACK_LINE(60)
		::luxe::Input tmp3 = ::Luxe_obj::input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		tmp3->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),(int)100);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,connect_input,(void))

Void Main_obj::onkeyup( ::luxe::KeyEvent event){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",67,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(69)
		bool tmp = (event->keycode == (int)27);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		if ((tmp)){
			HX_STACK_LINE(70)
			::luxe::Engine tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			tmp1->shutdown();
		}
	}
return null();
}


Void Main_obj::update( Float delta){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",75,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(77)
		::luxe::Input tmp = ::Luxe_obj::input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		bool tmp1 = tmp->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		if ((tmp1)){
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				::luxe::Sprite tmp2 = this->player;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(78)
				::phoenix::Vector tmp3 = tmp2->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				::phoenix::Vector _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					Float tmp4 = _g->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(78)
					Float tmp5 = this->move_speed;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(78)
					Float tmp6 = delta;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(78)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(78)
					Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(78)
					Float _x = tmp8;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(78)
					_g->x = _x;
					HX_STACK_LINE(78)
					bool tmp9 = _g->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(78)
					if ((tmp9)){
						HX_STACK_LINE(78)
						_g->x;
					}
					else{
						HX_STACK_LINE(78)
						bool tmp10 = (_g->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(78)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(78)
						if ((tmp10)){
							HX_STACK_LINE(78)
							bool tmp12 = _g->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(78)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(78)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(78)
							tmp11 = false;
						}
						HX_STACK_LINE(78)
						if ((tmp11)){
							HX_STACK_LINE(78)
							Float tmp12 = _x;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(78)
							_g->listen_x(tmp12);
						}
						HX_STACK_LINE(78)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(79)
			::luxe::Sprite tmp2 = this->player;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			tmp2->set_flipx(false);
		}
		else{
			HX_STACK_LINE(80)
			::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			bool tmp3 = tmp2->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(80)
			if ((tmp3)){
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					::luxe::Sprite tmp4 = this->player;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(81)
					::phoenix::Vector tmp5 = tmp4->get_pos();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					::phoenix::Vector _g = tmp5;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(81)
						Float tmp6 = _g->x;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(81)
						Float tmp7 = this->move_speed;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(81)
						Float tmp8 = delta;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(81)
						Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(81)
						Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(81)
						Float _x = tmp10;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(81)
						_g->x = _x;
						HX_STACK_LINE(81)
						bool tmp11 = _g->_construct;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(81)
						if ((tmp11)){
							HX_STACK_LINE(81)
							_g->x;
						}
						else{
							HX_STACK_LINE(81)
							bool tmp12 = (_g->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(81)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(81)
							if ((tmp12)){
								HX_STACK_LINE(81)
								bool tmp14 = _g->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(81)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(81)
								tmp13 = !(tmp15);
							}
							else{
								HX_STACK_LINE(81)
								tmp13 = false;
							}
							HX_STACK_LINE(81)
							if ((tmp13)){
								HX_STACK_LINE(81)
								Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(81)
								_g->listen_x(tmp14);
							}
							HX_STACK_LINE(81)
							_g->x;
						}
					}
				}
				HX_STACK_LINE(82)
				::luxe::Sprite tmp4 = this->player;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(82)
				tmp4->set_flipx(true);
			}
		}
	}
return null();
}



Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(move_speed,"move_speed");
	::luxe::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(move_speed,"move_speed");
	::luxe::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"move_speed") ) { return move_speed; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"connect_input") ) { return connect_input_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"move_speed") ) { move_speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("move_speed","\x99","\xe4","\xea","\x98"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Main_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsFloat,(int)offsetof(Main_obj,move_speed),HX_HCSTRING("move_speed","\x99","\xe4","\xea","\x98")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("move_speed","\x99","\xe4","\xea","\x98"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("connect_input","\xb5","\x12","\x82","\x64"),
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

