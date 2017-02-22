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
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_ParcelProgress
#include <luxe/ParcelProgress.h>
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
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_luxe_components_sprite_SpriteAnimation
#include <luxe/components/sprite/SpriteAnimation.h>
#endif
#ifndef INCLUDED_luxe_resource_JSONResource
#include <luxe/resource/JSONResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
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
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetJSON
#include <snow/systems/assets/AssetJSON.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",13,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->move_speed = ((Float)0);
	HX_STACK_LINE(19)
	this->max_right = ((Float)0);
	HX_STACK_LINE(18)
	this->max_left = ((Float)0);
	HX_STACK_LINE(13)
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
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",22,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(24)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = HX_HCSTRING("luxe game","\x9c","\x14","\x33","\xb3");
	HX_STACK_LINE(25)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = (int)960;
	HX_STACK_LINE(26)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = (int)640;
	HX_STACK_LINE(27)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = false;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",29,0x087e5c05)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/stand.png","\x45","\xed","\x6a","\x78"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(29)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	config->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(31)
	Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	return tmp1;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",35,0x087e5c05)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",63,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/anim.json","\xd9","\xf9","\x9a","\x42"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(63)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",65,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/apartment.png","\xe1","\x0c","\x36","\xce"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(65)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",66,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/player.png","\x68","\x5e","\x22","\x38"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(66)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp2,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",62,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , cpp::ArrayBase_obj::__new().Add(tmp),false);
					__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , cpp::ArrayBase_obj::__new().Add(tmp1).Add(tmp2),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(62)
		Dynamic tmp3 = _Function_1_4::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		::luxe::Parcel tmp4 = ::luxe::Parcel_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		::luxe::Parcel parcel = tmp4;		HX_STACK_VAR(parcel,"parcel");
		HX_STACK_LINE(71)
		::luxe::Parcel tmp5 = parcel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		::phoenix::Color tmp6 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,((Float)0.85));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		Dynamic tmp7 = this->assets_loaded_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_5{
			inline static Dynamic Block( ::luxe::Parcel &tmp5,::phoenix::Color &tmp6,Dynamic &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",70,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed") , tmp5,false);
					__result->Add(HX_HCSTRING("background","\xee","\x93","\x1d","\x26") , tmp6,false);
					__result->Add(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83") , tmp7,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(70)
		Dynamic tmp8 = _Function_1_5::Block(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(70)
		::luxe::ParcelProgress_obj::__new(tmp8);
		HX_STACK_LINE(76)
		parcel->load(null());
	}
return null();
}


Void Main_obj::assets_loaded( ::luxe::Parcel _){
{
		HX_STACK_FRAME("Main","assets_loaded",0x9ea260ac,"Main.assets_loaded","Main.hx",80,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(82)
		this->create_apartment();
		HX_STACK_LINE(83)
		this->create_player();
		HX_STACK_LINE(84)
		this->create_player_animation();
		HX_STACK_LINE(85)
		this->connect_input();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,assets_loaded,(void))

Void Main_obj::create_apartment( ){
{
		HX_STACK_FRAME("Main","create_apartment",0x349d41e4,"Main.create_apartment","Main.hx",89,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/apartment.png","\xe1","\x0c","\x36","\xce"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		::phoenix::Texture apartment = ((::phoenix::Texture)(tmp1));		HX_STACK_VAR(apartment,"apartment");
		HX_STACK_LINE(91)
		int tmp2 = apartment->set_filter_mag((int)9728);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		apartment->set_filter_min(tmp2);
		HX_STACK_LINE(92)
		::luxe::Engine tmp3 = ::Luxe_obj::core;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		int tmp4 = tmp3->screen->get_h();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		int height = tmp4;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(93)
		Float tmp5 = (Float(height) / Float(apartment->height));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		int tmp6 = apartment->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		Float width = tmp7;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(97)
		::phoenix::Texture tmp8 = apartment;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		::phoenix::Vector tmp9 = ::phoenix::Vector_obj::__new(width,height,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &tmp9,::phoenix::Texture &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",95,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("apartment","\x72","\x68","\xb0","\x5c"),false);
					__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp8,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp9,false);
					__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(95)
		Dynamic tmp10 = _Function_1_1::Block(tmp9,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(95)
		::luxe::Sprite_obj::__new(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,create_apartment,(void))

Void Main_obj::create_player( ){
{
		HX_STACK_FRAME("Main","create_player",0x999796af,"Main.create_player","Main.hx",103,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/player.png","\x68","\x5e","\x22","\x38"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		this->image = ((::phoenix::Texture)(tmp1));
		HX_STACK_LINE(106)
		::phoenix::Texture tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		::phoenix::Texture tmp3 = this->image;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		int tmp4 = tmp3->set_filter_mag((int)9728);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		tmp2->set_filter_min(tmp4);
		HX_STACK_LINE(108)
		int frame_width = (int)32;		HX_STACK_VAR(frame_width,"frame_width");
		HX_STACK_LINE(109)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		int tmp6 = tmp5->screen->get_h();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		Float tmp7 = (Float(tmp6) / Float(((Float)1.75)));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(109)
		Float height = tmp7;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(110)
		Float tmp8 = height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(110)
		::phoenix::Texture tmp9 = this->image;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(110)
		int tmp10 = tmp9->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(110)
		Float tmp11 = (Float(tmp8) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(110)
		Float ratio = tmp11;		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(111)
		Float tmp12 = (ratio * frame_width);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(111)
		Float width = tmp12;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(113)
		Float tmp13 = (width * ((Float)1.5));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(113)
		this->move_speed = tmp13;
		HX_STACK_LINE(115)
		::luxe::Engine tmp14 = ::Luxe_obj::core;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(115)
		int tmp15 = tmp14->screen->get_w();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(115)
		Float tmp16 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(115)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(115)
		this->max_right = tmp17;
		HX_STACK_LINE(116)
		Float tmp18 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(116)
		this->max_left = tmp18;
		HX_STACK_LINE(120)
		::phoenix::Texture tmp19 = this->image;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(121)
		::luxe::Engine tmp20 = ::Luxe_obj::core;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(121)
		::phoenix::Vector tmp21 = tmp20->screen->get_mid();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(121)
		Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(121)
		::luxe::Engine tmp23 = ::Luxe_obj::core;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(121)
		int tmp24 = tmp23->screen->get_h();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(121)
		Float tmp25 = (Float(height) / Float(((Float)1.75)));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(121)
		Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(121)
		::phoenix::Vector tmp27 = ::phoenix::Vector_obj::__new(tmp22,tmp26,null(),null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(122)
		::phoenix::Vector tmp28 = ::phoenix::Vector_obj::__new(width,height,null(),null());		HX_STACK_VAR(tmp28,"tmp28");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &tmp28,::phoenix::Texture &tmp19,::phoenix::Vector &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",118,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),false);
					__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp19,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp27,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp28,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(118)
		Dynamic tmp29 = _Function_1_1::Block(tmp28,tmp19,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(118)
		::luxe::Sprite tmp30 = ::luxe::Sprite_obj::__new(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(118)
		this->player = tmp30;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,create_player,(void))

Void Main_obj::create_player_animation( ){
{
		HX_STACK_FRAME("Main","create_player_animation",0x2e11d234,"Main.create_player_animation","Main.hx",126,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/anim.json","\xd9","\xf9","\x9a","\x42"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		::luxe::resource::JSONResource anim_object = ((::luxe::resource::JSONResource)(tmp1));		HX_STACK_VAR(anim_object,"anim_object");
		HX_STACK_LINE(128)
		::luxe::components::sprite::SpriteAnimation tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			::luxe::Sprite tmp3 = this->player;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			::luxe::Sprite _this = tmp3;		HX_STACK_VAR(_this,"_this");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",128,0x087e5c05)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("anim","\x11","\x86","\x71","\x40"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(128)
			Dynamic tmp4 = _Function_2_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			::luxe::components::sprite::SpriteAnimation tmp5 = ::luxe::components::sprite::SpriteAnimation_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			::luxe::components::sprite::SpriteAnimation _component = tmp5;		HX_STACK_VAR(_component,"_component");
			HX_STACK_LINE(128)
			(_this->component_count)++;
			HX_STACK_LINE(128)
			::luxe::components::sprite::SpriteAnimation tmp6 = _component;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(128)
			tmp2 = _this->_components->add(tmp6);
		}
		HX_STACK_LINE(128)
		this->anim = tmp2;
		HX_STACK_LINE(129)
		::luxe::components::sprite::SpriteAnimation tmp3 = this->anim;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		Dynamic tmp4 = anim_object->asset->json;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		tmp3->add_from_json_object(tmp4);
		HX_STACK_LINE(130)
		::luxe::components::sprite::SpriteAnimation tmp5 = this->anim;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		tmp5->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
		HX_STACK_LINE(131)
		::luxe::components::sprite::SpriteAnimation tmp6 = this->anim;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		tmp6->play();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,create_player_animation,(void))

Void Main_obj::connect_input( ){
{
		HX_STACK_FRAME("Main","connect_input",0x3cf7fbe0,"Main.connect_input","Main.hx",134,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		::luxe::Input tmp = ::Luxe_obj::input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		tmp->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),(int)1073741904);
		HX_STACK_LINE(136)
		::luxe::Input tmp1 = ::Luxe_obj::input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		tmp1->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),(int)97);
		HX_STACK_LINE(138)
		::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		tmp2->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),(int)1073741903);
		HX_STACK_LINE(139)
		::luxe::Input tmp3 = ::Luxe_obj::input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		tmp3->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),(int)100);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,connect_input,(void))

Void Main_obj::onkeyup( ::luxe::KeyEvent event){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",146,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(148)
		bool tmp = (event->keycode == (int)27);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		if ((tmp)){
			HX_STACK_LINE(149)
			::luxe::Engine tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(149)
			tmp1->shutdown();
		}
	}
return null();
}


Void Main_obj::update( Float delta){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",154,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(156)
		::luxe::Sprite tmp = this->player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		if ((tmp1)){
			HX_STACK_LINE(157)
			return null();
		}
		HX_STACK_LINE(160)
		bool moving = false;		HX_STACK_VAR(moving,"moving");
		HX_STACK_LINE(161)
		::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		bool tmp3 = tmp2->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		if ((tmp3)){
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				::luxe::Sprite tmp4 = this->player;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(162)
				::phoenix::Vector tmp5 = tmp4->get_pos();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(162)
				::phoenix::Vector _g = tmp5;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(162)
				{
					HX_STACK_LINE(162)
					Float tmp6 = _g->x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(162)
					Float tmp7 = this->move_speed;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(162)
					Float tmp8 = delta;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(162)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(162)
					Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(162)
					Float _x = tmp10;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(162)
					_g->x = _x;
					HX_STACK_LINE(162)
					bool tmp11 = _g->_construct;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(162)
					if ((tmp11)){
						HX_STACK_LINE(162)
						_g->x;
					}
					else{
						HX_STACK_LINE(162)
						bool tmp12 = (_g->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(162)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(162)
						if ((tmp12)){
							HX_STACK_LINE(162)
							bool tmp14 = _g->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(162)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(162)
							tmp13 = !(tmp15);
						}
						else{
							HX_STACK_LINE(162)
							tmp13 = false;
						}
						HX_STACK_LINE(162)
						if ((tmp13)){
							HX_STACK_LINE(162)
							Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(162)
							_g->listen_x(tmp14);
						}
						HX_STACK_LINE(162)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(163)
			::luxe::Sprite tmp4 = this->player;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(163)
			tmp4->set_flipx(false);
			HX_STACK_LINE(164)
			moving = true;
		}
		else{
			HX_STACK_LINE(165)
			::luxe::Input tmp4 = ::Luxe_obj::input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			bool tmp5 = tmp4->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			if ((tmp5)){
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					::luxe::Sprite tmp6 = this->player;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(166)
					::phoenix::Vector tmp7 = tmp6->get_pos();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(166)
					::phoenix::Vector _g = tmp7;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						Float tmp8 = _g->x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(166)
						Float tmp9 = this->move_speed;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(166)
						Float tmp10 = delta;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(166)
						Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(166)
						Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(166)
						Float _x = tmp12;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(166)
						_g->x = _x;
						HX_STACK_LINE(166)
						bool tmp13 = _g->_construct;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(166)
						if ((tmp13)){
							HX_STACK_LINE(166)
							_g->x;
						}
						else{
							HX_STACK_LINE(166)
							bool tmp14 = (_g->listen_x != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(166)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(166)
							if ((tmp14)){
								HX_STACK_LINE(166)
								bool tmp16 = _g->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(166)
								bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(166)
								tmp15 = !(tmp17);
							}
							else{
								HX_STACK_LINE(166)
								tmp15 = false;
							}
							HX_STACK_LINE(166)
							if ((tmp15)){
								HX_STACK_LINE(166)
								Float tmp16 = _x;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(166)
								_g->listen_x(tmp16);
							}
							HX_STACK_LINE(166)
							_g->x;
						}
					}
				}
				HX_STACK_LINE(167)
				::luxe::Sprite tmp6 = this->player;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(167)
				tmp6->set_flipx(true);
				HX_STACK_LINE(168)
				moving = true;
			}
		}
		HX_STACK_LINE(171)
		::luxe::Sprite tmp4 = this->player;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		::phoenix::Vector tmp5 = tmp4->get_pos();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		Float tmp7 = this->max_right;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(171)
		bool tmp8 = (tmp6 >= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(171)
		if ((tmp8)){
			HX_STACK_LINE(172)
			{
				HX_STACK_LINE(172)
				::luxe::Sprite tmp9 = this->player;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(172)
				::phoenix::Vector tmp10 = tmp9->get_pos();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				::phoenix::Vector _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(172)
				Float tmp11 = this->max_right;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				Float _x = tmp11;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(172)
				_this->x = _x;
				HX_STACK_LINE(172)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(172)
				if ((tmp12)){
					HX_STACK_LINE(172)
					_this->x;
				}
				else{
					HX_STACK_LINE(172)
					bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(172)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(172)
					if ((tmp13)){
						HX_STACK_LINE(172)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(172)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(172)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(172)
						tmp14 = false;
					}
					HX_STACK_LINE(172)
					if ((tmp14)){
						HX_STACK_LINE(172)
						Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(172)
						_this->listen_x(tmp15);
					}
					HX_STACK_LINE(172)
					_this->x;
				}
			}
			HX_STACK_LINE(173)
			moving = false;
		}
		HX_STACK_LINE(175)
		::luxe::Sprite tmp9 = this->player;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		::phoenix::Vector tmp10 = tmp9->get_pos();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		Float tmp12 = this->max_left;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(175)
		bool tmp13 = (tmp11 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(175)
		if ((tmp13)){
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				::luxe::Sprite tmp14 = this->player;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(176)
				::phoenix::Vector tmp15 = tmp14->get_pos();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(176)
				::phoenix::Vector _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(176)
				Float tmp16 = this->max_left;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(176)
				Float _x = tmp16;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(176)
				_this->x = _x;
				HX_STACK_LINE(176)
				bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(176)
				if ((tmp17)){
					HX_STACK_LINE(176)
					_this->x;
				}
				else{
					HX_STACK_LINE(176)
					bool tmp18 = (_this->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(176)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					if ((tmp18)){
						HX_STACK_LINE(176)
						bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(176)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(176)
						tmp19 = !(tmp21);
					}
					else{
						HX_STACK_LINE(176)
						tmp19 = false;
					}
					HX_STACK_LINE(176)
					if ((tmp19)){
						HX_STACK_LINE(176)
						Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(176)
						_this->listen_x(tmp20);
					}
					HX_STACK_LINE(176)
					_this->x;
				}
			}
			HX_STACK_LINE(177)
			moving = false;
		}
		HX_STACK_LINE(180)
		bool tmp14 = moving;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(180)
		if ((tmp14)){
			HX_STACK_LINE(181)
			::luxe::components::sprite::SpriteAnimation tmp15 = this->anim;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(181)
			::String tmp16 = tmp15->animation;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(181)
			bool tmp17 = (tmp16 != HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(181)
			if ((tmp17)){
				HX_STACK_LINE(182)
				::luxe::components::sprite::SpriteAnimation tmp18 = this->anim;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(182)
				tmp18->set_animation(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"));
			}
		}
		else{
			HX_STACK_LINE(185)
			::luxe::components::sprite::SpriteAnimation tmp15 = this->anim;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(185)
			::String tmp16 = tmp15->animation;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(185)
			bool tmp17 = (tmp16 != HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(185)
			if ((tmp17)){
				HX_STACK_LINE(186)
				::luxe::components::sprite::SpriteAnimation tmp18 = this->anim;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(186)
				tmp18->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
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
	HX_MARK_MEMBER_NAME(anim,"anim");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(max_left,"max_left");
	HX_MARK_MEMBER_NAME(max_right,"max_right");
	HX_MARK_MEMBER_NAME(move_speed,"move_speed");
	::luxe::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(anim,"anim");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(max_left,"max_left");
	HX_VISIT_MEMBER_NAME(max_right,"max_right");
	HX_VISIT_MEMBER_NAME(move_speed,"move_speed");
	::luxe::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"anim") ) { return anim; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
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
	case 8:
		if (HX_FIELD_EQ(inName,"max_left") ) { return max_left; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_right") ) { return max_right; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"move_speed") ) { return move_speed; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"assets_loaded") ) { return assets_loaded_dyn(); }
		if (HX_FIELD_EQ(inName,"create_player") ) { return create_player_dyn(); }
		if (HX_FIELD_EQ(inName,"connect_input") ) { return connect_input_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"create_apartment") ) { return create_apartment_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"create_player_animation") ) { return create_player_animation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"anim") ) { anim=inValue.Cast< ::luxe::components::sprite::SpriteAnimation >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"max_left") ) { max_left=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_right") ) { max_right=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"move_speed") ) { move_speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("anim","\x11","\x86","\x71","\x40"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("max_left","\xc2","\x06","\xb1","\x11"));
	outFields->push(HX_HCSTRING("max_right","\xc1","\xf0","\x41","\xe0"));
	outFields->push(HX_HCSTRING("move_speed","\x99","\xe4","\xea","\x98"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::components::sprite::SpriteAnimation*/ ,(int)offsetof(Main_obj,anim),HX_HCSTRING("anim","\x11","\x86","\x71","\x40")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Main_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Main_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsFloat,(int)offsetof(Main_obj,max_left),HX_HCSTRING("max_left","\xc2","\x06","\xb1","\x11")},
	{hx::fsFloat,(int)offsetof(Main_obj,max_right),HX_HCSTRING("max_right","\xc1","\xf0","\x41","\xe0")},
	{hx::fsFloat,(int)offsetof(Main_obj,move_speed),HX_HCSTRING("move_speed","\x99","\xe4","\xea","\x98")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("anim","\x11","\x86","\x71","\x40"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("max_left","\xc2","\x06","\xb1","\x11"),
	HX_HCSTRING("max_right","\xc1","\xf0","\x41","\xe0"),
	HX_HCSTRING("move_speed","\x99","\xe4","\xea","\x98"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("assets_loaded","\x81","\x77","\x2c","\xc6"),
	HX_HCSTRING("create_apartment","\x2f","\x5e","\xcf","\xf6"),
	HX_HCSTRING("create_player","\x84","\xad","\x21","\xc1"),
	HX_HCSTRING("create_player_animation","\x49","\xa5","\x62","\x3c"),
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

