#include <hxcpp.h>

#include "linc_opengl.h"
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_phoenix_BatchState
#include <phoenix/BatchState.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Uniforms
#include <phoenix/Uniforms.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix__Shader_Uniform_snow_api_buffers_Float32Array
#include <phoenix/_Shader/Uniform_snow_api_buffers_Float32Array.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
namespace phoenix{

Void Batcher_obj::__construct(::phoenix::Renderer _r,::String __o__name,Dynamic __o__max_verts)
{
HX_STACK_FRAME("phoenix.Batcher","new",0x3e82c79a,"phoenix.Batcher.new","phoenix/Batcher.hx",16,0xa9541457)
HX_STACK_THIS(this)
HX_STACK_ARG(_r,"_r")
HX_STACK_ARG(__o__name,"_name")
HX_STACK_ARG(__o__max_verts,"_max_verts")
::String _name = __o__name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Dynamic _max_verts = __o__max_verts.Default(16384);
{
	HX_STACK_LINE(59)
	this->normal_floats = (int)0;
	HX_STACK_LINE(58)
	this->color_floats = (int)0;
	HX_STACK_LINE(57)
	this->tcoord_floats = (int)0;
	HX_STACK_LINE(56)
	this->pos_floats = (int)0;
	HX_STACK_LINE(54)
	this->sequence = (int)-1;
	HX_STACK_LINE(49)
	this->show_stats = (int)1;
	HX_STACK_LINE(47)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(46)
	this->log = false;
	HX_STACK_LINE(44)
	this->visible_count = (int)0;
	HX_STACK_LINE(43)
	this->static_batched_count = (int)0;
	HX_STACK_LINE(42)
	this->dynamic_batched_count = (int)0;
	HX_STACK_LINE(41)
	this->draw_calls = (int)0;
	HX_STACK_LINE(33)
	this->vert_count = (int)0;
	HX_STACK_LINE(32)
	this->max_floats = (int)0;
	HX_STACK_LINE(31)
	this->max_verts = (int)0;
	HX_STACK_LINE(24)
	this->tree_changed = false;
	HX_STACK_LINE(20)
	this->layer = (int)0;
	HX_STACK_LINE(19)
	this->enabled = true;
	HX_STACK_LINE(66)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	this->id = tmp1;
	HX_STACK_LINE(67)
	this->renderer = _r;
	HX_STACK_LINE(68)
	int tmp2 = ++(::phoenix::Batcher_obj::_sequence_key);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	this->sequence = tmp2;
	HX_STACK_LINE(70)
	Dynamic tmp3 = this->geometry_compare_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	this->geometry = tmp4;
	HX_STACK_LINE(71)
	::luxe::Emitter tmp5 = ::luxe::Emitter_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
	this->emitter = tmp5;
	HX_STACK_LINE(73)
	this->max_verts = _max_verts;
	HX_STACK_LINE(75)
	int tmp6 = this->max_verts;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(75)
	int tmp7 = (tmp6 * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(75)
	this->max_floats = tmp7;
	HX_STACK_LINE(78)
	::snow::api::buffers::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(78)
		::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			int tmp10 = this->max_floats;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(78)
			int _elements = tmp10;		HX_STACK_VAR(_elements,"_elements");
			HX_STACK_LINE(78)
			bool tmp11 = (_elements < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(78)
			if ((tmp11)){
				HX_STACK_LINE(78)
				_elements = (int)0;
			}
			HX_STACK_LINE(78)
			::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(78)
			::snow::api::buffers::ArrayBufferView _view = tmp12;		HX_STACK_VAR(_view,"_view");
			HX_STACK_LINE(78)
			int tmp13 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(78)
			int _bytelen = tmp13;		HX_STACK_VAR(_bytelen,"_bytelen");
			HX_STACK_LINE(78)
			_view->byteOffset = (int)0;
			HX_STACK_LINE(78)
			_view->byteLength = _bytelen;
			HX_STACK_LINE(78)
			Array< unsigned char > tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(78)
				this2 = Array_obj< unsigned char >::__new();
				HX_STACK_LINE(78)
				bool tmp15 = (_bytelen > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(78)
				if ((tmp15)){
					HX_STACK_LINE(78)
					int tmp16 = (_bytelen - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(78)
					this2[tmp16] = (int)0;
				}
				HX_STACK_LINE(78)
				tmp14 = this2;
			}
			HX_STACK_LINE(78)
			_view->buffer = tmp14;
			HX_STACK_LINE(78)
			_view->length = _elements;
			HX_STACK_LINE(78)
			tmp9 = _view;
		}
		HX_STACK_LINE(78)
		this1 = tmp9;
		HX_STACK_LINE(78)
		tmp8 = this1;
	}
	HX_STACK_LINE(78)
	this->pos_list = tmp8;
	HX_STACK_LINE(79)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(79)
		::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int tmp11 = this->max_floats;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(79)
			int _elements = tmp11;		HX_STACK_VAR(_elements,"_elements");
			HX_STACK_LINE(79)
			bool tmp12 = (_elements < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(79)
			if ((tmp12)){
				HX_STACK_LINE(79)
				_elements = (int)0;
			}
			HX_STACK_LINE(79)
			::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(79)
			::snow::api::buffers::ArrayBufferView _view = tmp13;		HX_STACK_VAR(_view,"_view");
			HX_STACK_LINE(79)
			int tmp14 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(79)
			int _bytelen = tmp14;		HX_STACK_VAR(_bytelen,"_bytelen");
			HX_STACK_LINE(79)
			_view->byteOffset = (int)0;
			HX_STACK_LINE(79)
			_view->byteLength = _bytelen;
			HX_STACK_LINE(79)
			Array< unsigned char > tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(79)
				this2 = Array_obj< unsigned char >::__new();
				HX_STACK_LINE(79)
				bool tmp16 = (_bytelen > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(79)
				if ((tmp16)){
					HX_STACK_LINE(79)
					int tmp17 = (_bytelen - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(79)
					this2[tmp17] = (int)0;
				}
				HX_STACK_LINE(79)
				tmp15 = this2;
			}
			HX_STACK_LINE(79)
			_view->buffer = tmp15;
			HX_STACK_LINE(79)
			_view->length = _elements;
			HX_STACK_LINE(79)
			tmp10 = _view;
		}
		HX_STACK_LINE(79)
		this1 = tmp10;
		HX_STACK_LINE(79)
		tmp9 = this1;
	}
	HX_STACK_LINE(79)
	this->tcoord_list = tmp9;
	HX_STACK_LINE(80)
	::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(80)
		::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int tmp12 = this->max_floats;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(80)
			int _elements = tmp12;		HX_STACK_VAR(_elements,"_elements");
			HX_STACK_LINE(80)
			bool tmp13 = (_elements < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(80)
			if ((tmp13)){
				HX_STACK_LINE(80)
				_elements = (int)0;
			}
			HX_STACK_LINE(80)
			::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(80)
			::snow::api::buffers::ArrayBufferView _view = tmp14;		HX_STACK_VAR(_view,"_view");
			HX_STACK_LINE(80)
			int tmp15 = (_elements * _view->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(80)
			int _bytelen = tmp15;		HX_STACK_VAR(_bytelen,"_bytelen");
			HX_STACK_LINE(80)
			_view->byteOffset = (int)0;
			HX_STACK_LINE(80)
			_view->byteLength = _bytelen;
			HX_STACK_LINE(80)
			Array< unsigned char > tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				Array< unsigned char > this2;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(80)
				this2 = Array_obj< unsigned char >::__new();
				HX_STACK_LINE(80)
				bool tmp17 = (_bytelen > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(80)
				if ((tmp17)){
					HX_STACK_LINE(80)
					int tmp18 = (_bytelen - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(80)
					this2[tmp18] = (int)0;
				}
				HX_STACK_LINE(80)
				tmp16 = this2;
			}
			HX_STACK_LINE(80)
			_view->buffer = tmp16;
			HX_STACK_LINE(80)
			_view->length = _elements;
			HX_STACK_LINE(80)
			tmp11 = _view;
		}
		HX_STACK_LINE(80)
		this1 = tmp11;
		HX_STACK_LINE(80)
		tmp10 = this1;
	}
	HX_STACK_LINE(80)
	this->color_list = tmp10;
	HX_STACK_LINE(87)
	::phoenix::Renderer tmp11 = this->renderer;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(87)
	this->view = tmp11->camera;
	HX_STACK_LINE(89)
	glEnableVertexAttribArray((int)0);
	HX_STACK_LINE(90)
	glEnableVertexAttribArray((int)1);
	HX_STACK_LINE(91)
	glEnableVertexAttribArray((int)2);
	HX_STACK_LINE(98)
	bool tmp12 = (_name.length == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(98)
	if ((tmp12)){
		HX_STACK_LINE(99)
		::luxe::utils::Utils tmp13 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(99)
		::String tmp14 = tmp13->uniqueid(null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(99)
		this->name = tmp14;
	}
	else{
		HX_STACK_LINE(101)
		this->name = _name;
	}
	HX_STACK_LINE(104)
	this->_dropped = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(106)
	::phoenix::Renderer tmp13 = this->renderer;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(106)
	(tmp13->stats->batchers)++;
	HX_STACK_LINE(107)
	::phoenix::Batcher_obj::all->push(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Batcher_obj::~Batcher_obj() { }

Dynamic Batcher_obj::__CreateEmpty() { return  new Batcher_obj; }
hx::ObjectPtr< Batcher_obj > Batcher_obj::__new(::phoenix::Renderer _r,::String __o__name,Dynamic __o__max_verts)
{  hx::ObjectPtr< Batcher_obj > _result_ = new Batcher_obj();
	_result_->__construct(_r,__o__name,__o__max_verts);
	return _result_;}

Dynamic Batcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Batcher_obj > _result_ = new Batcher_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Batcher_obj::on( int event,Dynamic handler){
{
		HX_STACK_FRAME("phoenix.Batcher","on",0x2875af25,"phoenix.Batcher.on","phoenix/Batcher.hx",113,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(114)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		tmp->on(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,on,(void))

bool Batcher_obj::off( int event,Dynamic handler){
	HX_STACK_FRAME("phoenix.Batcher","off",0x3e838aa9,"phoenix.Batcher.off","phoenix/Batcher.hx",118,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(119)
	::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	bool tmp3 = tmp->off(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(119)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,off,return )

Void Batcher_obj::add( ::phoenix::geometry::Geometry _geom,hx::Null< bool >  __o__force_add){
bool _force_add = __o__force_add.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","add",0x3e78e95b,"phoenix.Batcher.add","phoenix/Batcher.hx",122,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_geom,"_geom")
	HX_STACK_ARG(_force_add,"_force_add")
{
		HX_STACK_LINE(128)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		::phoenix::geometry::GeometryKey tmp1 = _geom->key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		::phoenix::geometry::Geometry tmp2 = tmp->find(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		if ((tmp4)){
			HX_STACK_LINE(128)
			tmp5 = _force_add;
		}
		else{
			HX_STACK_LINE(128)
			tmp5 = true;
		}
		HX_STACK_LINE(128)
		if ((tmp5)){
			HX_STACK_LINE(131)
			bool tmp6 = ::Lambda_obj::has(_geom->batchers,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			if ((tmp7)){
				HX_STACK_LINE(132)
				_geom->batchers->push(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(136)
			{
				HX_STACK_LINE(136)
				::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->geometry;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(136)
				::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(136)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = _this->root;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(136)
				::phoenix::geometry::GeometryKey tmp10 = _geom->key;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(136)
				::phoenix::geometry::Geometry tmp11 = _geom;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(136)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp12 = _this->node_insert(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(136)
				_this->root = tmp12;
				HX_STACK_LINE(136)
				_this->root->color = false;
			}
			HX_STACK_LINE(139)
			_geom->added = true;
			HX_STACK_LINE(142)
			this->tree_changed = true;
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,add,(void))

Void Batcher_obj::empty( hx::Null< bool >  __o__drop){
bool _drop = __o__drop.Default(true);
	HX_STACK_FRAME("phoenix.Batcher","empty",0xd120f447,"phoenix.Batcher.empty","phoenix/Batcher.hx",154,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_drop,"_drop")
{
		HX_STACK_LINE(156)
		bool tmp = _drop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		if ((tmp)){
			HX_STACK_LINE(157)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(157)
			while((true)){
				HX_STACK_LINE(157)
				bool tmp3 = (_g->current == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(157)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(157)
				if ((tmp4)){
					HX_STACK_LINE(157)
					tmp5 = (_g->rightest == null());
				}
				else{
					HX_STACK_LINE(157)
					tmp5 = true;
				}
				HX_STACK_LINE(157)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(157)
				if ((tmp5)){
					HX_STACK_LINE(157)
					tmp6 = false;
				}
				else{
					HX_STACK_LINE(157)
					::phoenix::geometry::GeometryKey tmp7 = _g->current->key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(157)
					::phoenix::geometry::GeometryKey tmp8 = _g->rightest->key;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(157)
					int tmp9 = _g->tree->compare(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(157)
					tmp6 = (tmp9 <= (int)0);
				}
				HX_STACK_LINE(157)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(157)
				if ((tmp7)){
					HX_STACK_LINE(157)
					break;
				}
				HX_STACK_LINE(157)
				::phoenix::geometry::Geometry tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(157)
				{
					HX_STACK_LINE(157)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp = _g->current;		HX_STACK_VAR(_temp,"_temp");
					HX_STACK_LINE(157)
					bool tmp9 = (_g->current == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(157)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(157)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(157)
					if ((tmp10)){
						HX_STACK_LINE(157)
						tmp11 = (_g->rightest == null());
					}
					else{
						HX_STACK_LINE(157)
						tmp11 = true;
					}
					HX_STACK_LINE(157)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(157)
					if ((tmp11)){
						HX_STACK_LINE(157)
						tmp12 = false;
					}
					else{
						HX_STACK_LINE(157)
						::phoenix::geometry::GeometryKey tmp13 = _g->current->key;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(157)
						::phoenix::geometry::GeometryKey tmp14 = _g->rightest->key;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(157)
						int tmp15 = _g->tree->compare(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(157)
						tmp12 = (tmp15 <= (int)0);
					}
					HX_STACK_LINE(157)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(157)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(157)
					if ((tmp13)){
						HX_STACK_LINE(157)
						tmp14 = null();
					}
					else{
						HX_STACK_LINE(157)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp15 = _g->current->right;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(157)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(157)
						if ((tmp16)){
							HX_STACK_LINE(157)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->current->right;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(157)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp17;		HX_STACK_VAR(_node,"_node");
							HX_STACK_LINE(157)
							while((true)){
								HX_STACK_LINE(157)
								bool tmp18 = (_node->left != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(157)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(157)
								if ((tmp19)){
									HX_STACK_LINE(157)
									break;
								}
								HX_STACK_LINE(157)
								_node = _node->left;
							}
							HX_STACK_LINE(157)
							tmp14 = _node;
						}
						else{
							HX_STACK_LINE(157)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _next = null();		HX_STACK_VAR(_next,"_next");
							HX_STACK_LINE(157)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->tree->root;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(157)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp1 = tmp17;		HX_STACK_VAR(_temp1,"_temp1");
							HX_STACK_LINE(157)
							while((true)){
								HX_STACK_LINE(157)
								bool tmp18 = (_temp1 != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(157)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(157)
								if ((tmp19)){
									HX_STACK_LINE(157)
									break;
								}
								HX_STACK_LINE(157)
								::phoenix::geometry::GeometryKey tmp20 = _g->current->key;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(157)
								::phoenix::geometry::GeometryKey tmp21 = _temp1->key;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(157)
								int tmp22 = _g->tree->compare(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(157)
								int _comp = tmp22;		HX_STACK_VAR(_comp,"_comp");
								HX_STACK_LINE(157)
								bool tmp23 = (_comp < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(157)
								if ((tmp23)){
									HX_STACK_LINE(157)
									_next = _temp1;
									HX_STACK_LINE(157)
									_temp1 = _temp1->left;
								}
								else{
									HX_STACK_LINE(157)
									bool tmp24 = (_comp > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(157)
									if ((tmp24)){
										HX_STACK_LINE(157)
										_temp1 = _temp1->right;
									}
									else{
										HX_STACK_LINE(157)
										_g->current = _next;
										HX_STACK_LINE(157)
										break;
									}
								}
							}
							HX_STACK_LINE(157)
							tmp14 = _next;
						}
					}
					HX_STACK_LINE(157)
					_g->current = tmp14;
					HX_STACK_LINE(157)
					tmp8 = _temp->value;
				}
				HX_STACK_LINE(157)
				::phoenix::geometry::Geometry geom = tmp8;		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(158)
				geom->drop(true);
				HX_STACK_LINE(159)
				geom = null();
			}
		}
		else{
			HX_STACK_LINE(162)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(162)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(162)
			while((true)){
				HX_STACK_LINE(162)
				bool tmp3 = (_g->current == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(162)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(162)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(162)
				if ((tmp4)){
					HX_STACK_LINE(162)
					tmp5 = (_g->rightest == null());
				}
				else{
					HX_STACK_LINE(162)
					tmp5 = true;
				}
				HX_STACK_LINE(162)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(162)
				if ((tmp5)){
					HX_STACK_LINE(162)
					tmp6 = false;
				}
				else{
					HX_STACK_LINE(162)
					::phoenix::geometry::GeometryKey tmp7 = _g->current->key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(162)
					::phoenix::geometry::GeometryKey tmp8 = _g->rightest->key;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(162)
					int tmp9 = _g->tree->compare(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(162)
					tmp6 = (tmp9 <= (int)0);
				}
				HX_STACK_LINE(162)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(162)
				if ((tmp7)){
					HX_STACK_LINE(162)
					break;
				}
				HX_STACK_LINE(162)
				::phoenix::geometry::Geometry tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(162)
				{
					HX_STACK_LINE(162)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp = _g->current;		HX_STACK_VAR(_temp,"_temp");
					HX_STACK_LINE(162)
					bool tmp9 = (_g->current == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(162)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(162)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(162)
					if ((tmp10)){
						HX_STACK_LINE(162)
						tmp11 = (_g->rightest == null());
					}
					else{
						HX_STACK_LINE(162)
						tmp11 = true;
					}
					HX_STACK_LINE(162)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(162)
					if ((tmp11)){
						HX_STACK_LINE(162)
						tmp12 = false;
					}
					else{
						HX_STACK_LINE(162)
						::phoenix::geometry::GeometryKey tmp13 = _g->current->key;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(162)
						::phoenix::geometry::GeometryKey tmp14 = _g->rightest->key;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(162)
						int tmp15 = _g->tree->compare(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(162)
						tmp12 = (tmp15 <= (int)0);
					}
					HX_STACK_LINE(162)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(162)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(162)
					if ((tmp13)){
						HX_STACK_LINE(162)
						tmp14 = null();
					}
					else{
						HX_STACK_LINE(162)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp15 = _g->current->right;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(162)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(162)
						if ((tmp16)){
							HX_STACK_LINE(162)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->current->right;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(162)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp17;		HX_STACK_VAR(_node,"_node");
							HX_STACK_LINE(162)
							while((true)){
								HX_STACK_LINE(162)
								bool tmp18 = (_node->left != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(162)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(162)
								if ((tmp19)){
									HX_STACK_LINE(162)
									break;
								}
								HX_STACK_LINE(162)
								_node = _node->left;
							}
							HX_STACK_LINE(162)
							tmp14 = _node;
						}
						else{
							HX_STACK_LINE(162)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _next = null();		HX_STACK_VAR(_next,"_next");
							HX_STACK_LINE(162)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->tree->root;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(162)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp1 = tmp17;		HX_STACK_VAR(_temp1,"_temp1");
							HX_STACK_LINE(162)
							while((true)){
								HX_STACK_LINE(162)
								bool tmp18 = (_temp1 != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(162)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(162)
								if ((tmp19)){
									HX_STACK_LINE(162)
									break;
								}
								HX_STACK_LINE(162)
								::phoenix::geometry::GeometryKey tmp20 = _g->current->key;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(162)
								::phoenix::geometry::GeometryKey tmp21 = _temp1->key;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(162)
								int tmp22 = _g->tree->compare(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(162)
								int _comp = tmp22;		HX_STACK_VAR(_comp,"_comp");
								HX_STACK_LINE(162)
								bool tmp23 = (_comp < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(162)
								if ((tmp23)){
									HX_STACK_LINE(162)
									_next = _temp1;
									HX_STACK_LINE(162)
									_temp1 = _temp1->left;
								}
								else{
									HX_STACK_LINE(162)
									bool tmp24 = (_comp > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(162)
									if ((tmp24)){
										HX_STACK_LINE(162)
										_temp1 = _temp1->right;
									}
									else{
										HX_STACK_LINE(162)
										_g->current = _next;
										HX_STACK_LINE(162)
										break;
									}
								}
							}
							HX_STACK_LINE(162)
							tmp14 = _next;
						}
					}
					HX_STACK_LINE(162)
					_g->current = tmp14;
					HX_STACK_LINE(162)
					tmp8 = _temp->value;
				}
				HX_STACK_LINE(162)
				::phoenix::geometry::Geometry geom = tmp8;		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(163)
				::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = this->geometry;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(163)
				::phoenix::geometry::GeometryKey tmp10 = geom->key;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(163)
				tmp9->remove(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,empty,(void))

Void Batcher_obj::destroy( hx::Null< bool >  __o__drop){
bool _drop = __o__drop.Default(true);
	HX_STACK_FRAME("phoenix.Batcher","destroy",0x703a4934,"phoenix.Batcher.destroy","phoenix/Batcher.hx",174,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_drop,"_drop")
{
		HX_STACK_LINE(176)
		bool tmp = _drop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		this->empty(tmp);
		HX_STACK_LINE(178)
		::phoenix::Renderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		tmp1->remove_batch(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(180)
		this->emitter = null();
		HX_STACK_LINE(181)
		this->geometry = null();
		HX_STACK_LINE(182)
		this->pos_list = null();
		HX_STACK_LINE(183)
		this->tcoord_list = null();
		HX_STACK_LINE(184)
		this->color_list = null();
		HX_STACK_LINE(185)
		this->normal_list = null();
		HX_STACK_LINE(187)
		this->max_verts = (int)0;
		HX_STACK_LINE(188)
		this->max_floats = (int)0;
		HX_STACK_LINE(189)
		this->vert_count = (int)0;
		HX_STACK_LINE(191)
		this->renderer = null();
		HX_STACK_LINE(192)
		this->view = null();
		HX_STACK_LINE(194)
		::phoenix::Batcher_obj::all->remove(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,destroy,(void))

Void Batcher_obj::remove( ::phoenix::geometry::Geometry _geom,Dynamic __o__remove_batcher_from_geometry){
Dynamic _remove_batcher_from_geometry = __o__remove_batcher_from_geometry.Default(true);
	HX_STACK_FRAME("phoenix.Batcher","remove",0xc124654a,"phoenix.Batcher.remove","phoenix/Batcher.hx",198,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_geom,"_geom")
	HX_STACK_ARG(_remove_batcher_from_geometry,"_remove_batcher_from_geometry")
{
		HX_STACK_LINE(200)
		Dynamic tmp = _remove_batcher_from_geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		if ((tmp)){
			HX_STACK_LINE(201)
			_geom->batchers->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(202)
			int tmp1 = _geom->batchers->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(202)
			bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			if ((tmp2)){
				HX_STACK_LINE(203)
				_geom->added = false;
			}
		}
		HX_STACK_LINE(207)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(207)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(207)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp2->root;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(207)
			bool tmp3 = (_node == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			if ((tmp3)){
				HX_STACK_LINE(207)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(207)
				tmp1 = _node->nodecount;
			}
		}
		HX_STACK_LINE(207)
		int countbefore = tmp1;		HX_STACK_VAR(countbefore,"countbefore");
		HX_STACK_LINE(209)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		::phoenix::geometry::GeometryKey tmp3 = _geom->key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		tmp2->remove(tmp3);
		HX_STACK_LINE(211)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->geometry;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(211)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp5->root;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(211)
			bool tmp6 = (_node == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			if ((tmp6)){
				HX_STACK_LINE(211)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(211)
				tmp4 = _node->nodecount;
			}
		}
		HX_STACK_LINE(211)
		int countafter = tmp4;		HX_STACK_VAR(countafter,"countafter");
		HX_STACK_LINE(213)
		bool tmp5 = (countbefore == countafter);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		if ((tmp5)){
		}
		HX_STACK_LINE(218)
		this->tree_changed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,remove,(void))

Void Batcher_obj::batch( hx::Null< bool >  __o_persist_immediate){
bool persist_immediate = __o_persist_immediate.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","batch",0x0f01a174,"phoenix.Batcher.batch","phoenix/Batcher.hx",227,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(persist_immediate,"persist_immediate")
{
		HX_STACK_LINE(230)
		this->dynamic_batched_count = (int)0;
		HX_STACK_LINE(231)
		this->static_batched_count = (int)0;
		HX_STACK_LINE(232)
		this->visible_count = (int)0;
		HX_STACK_LINE(234)
		this->pos_floats = (int)0;
		HX_STACK_LINE(235)
		this->tcoord_floats = (int)0;
		HX_STACK_LINE(236)
		this->color_floats = (int)0;
		HX_STACK_LINE(237)
		this->normal_floats = (int)0;
		HX_STACK_LINE(240)
		::phoenix::BatchState tmp = ::phoenix::BatchState_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		this->state = tmp;
		HX_STACK_LINE(242)
		::phoenix::geometry::Geometry geom = null();		HX_STACK_VAR(geom,"geom");
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(245)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(245)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				bool tmp3 = (_g->current == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(245)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(245)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(245)
				if ((tmp4)){
					HX_STACK_LINE(245)
					tmp5 = (_g->rightest == null());
				}
				else{
					HX_STACK_LINE(245)
					tmp5 = true;
				}
				HX_STACK_LINE(245)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(245)
				if ((tmp5)){
					HX_STACK_LINE(245)
					tmp6 = false;
				}
				else{
					HX_STACK_LINE(245)
					::phoenix::geometry::GeometryKey tmp7 = _g->current->key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(245)
					::phoenix::geometry::GeometryKey tmp8 = _g->rightest->key;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(245)
					int tmp9 = _g->tree->compare(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(245)
					tmp6 = (tmp9 <= (int)0);
				}
				HX_STACK_LINE(245)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(245)
				if ((tmp7)){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(245)
				::phoenix::geometry::Geometry tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp = _g->current;		HX_STACK_VAR(_temp,"_temp");
					HX_STACK_LINE(245)
					bool tmp9 = (_g->current == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(245)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(245)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(245)
					if ((tmp10)){
						HX_STACK_LINE(245)
						tmp11 = (_g->rightest == null());
					}
					else{
						HX_STACK_LINE(245)
						tmp11 = true;
					}
					HX_STACK_LINE(245)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(245)
					if ((tmp11)){
						HX_STACK_LINE(245)
						tmp12 = false;
					}
					else{
						HX_STACK_LINE(245)
						::phoenix::geometry::GeometryKey tmp13 = _g->current->key;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(245)
						::phoenix::geometry::GeometryKey tmp14 = _g->rightest->key;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(245)
						int tmp15 = _g->tree->compare(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(245)
						tmp12 = (tmp15 <= (int)0);
					}
					HX_STACK_LINE(245)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(245)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(245)
					if ((tmp13)){
						HX_STACK_LINE(245)
						tmp14 = null();
					}
					else{
						HX_STACK_LINE(245)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp15 = _g->current->right;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(245)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(245)
						if ((tmp16)){
							HX_STACK_LINE(245)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->current->right;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(245)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp17;		HX_STACK_VAR(_node,"_node");
							HX_STACK_LINE(245)
							while((true)){
								HX_STACK_LINE(245)
								bool tmp18 = (_node->left != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(245)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(245)
								if ((tmp19)){
									HX_STACK_LINE(245)
									break;
								}
								HX_STACK_LINE(245)
								_node = _node->left;
							}
							HX_STACK_LINE(245)
							tmp14 = _node;
						}
						else{
							HX_STACK_LINE(245)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _next = null();		HX_STACK_VAR(_next,"_next");
							HX_STACK_LINE(245)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->tree->root;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(245)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp1 = tmp17;		HX_STACK_VAR(_temp1,"_temp1");
							HX_STACK_LINE(245)
							while((true)){
								HX_STACK_LINE(245)
								bool tmp18 = (_temp1 != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(245)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(245)
								if ((tmp19)){
									HX_STACK_LINE(245)
									break;
								}
								HX_STACK_LINE(245)
								::phoenix::geometry::GeometryKey tmp20 = _g->current->key;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(245)
								::phoenix::geometry::GeometryKey tmp21 = _temp1->key;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(245)
								int tmp22 = _g->tree->compare(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(245)
								int _comp = tmp22;		HX_STACK_VAR(_comp,"_comp");
								HX_STACK_LINE(245)
								bool tmp23 = (_comp < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(245)
								if ((tmp23)){
									HX_STACK_LINE(245)
									_next = _temp1;
									HX_STACK_LINE(245)
									_temp1 = _temp1->left;
								}
								else{
									HX_STACK_LINE(245)
									bool tmp24 = (_comp > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(245)
									if ((tmp24)){
										HX_STACK_LINE(245)
										_temp1 = _temp1->right;
									}
									else{
										HX_STACK_LINE(245)
										_g->current = _next;
										HX_STACK_LINE(245)
										break;
									}
								}
							}
							HX_STACK_LINE(245)
							tmp14 = _next;
						}
					}
					HX_STACK_LINE(245)
					_g->current = tmp14;
					HX_STACK_LINE(245)
					tmp8 = _temp->value;
				}
				HX_STACK_LINE(245)
				::phoenix::geometry::Geometry _geom = tmp8;		HX_STACK_VAR(_geom,"_geom");
				HX_STACK_LINE(248)
				geom = _geom;
				HX_STACK_LINE(251)
				bool tmp9 = (geom != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(251)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(251)
				if ((tmp9)){
					HX_STACK_LINE(251)
					bool tmp11 = geom->dropped;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(251)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(251)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(251)
					tmp10 = false;
				}
				HX_STACK_LINE(251)
				if ((tmp10)){
					HX_STACK_LINE(254)
					::phoenix::BatchState tmp11 = this->state;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(254)
					::phoenix::geometry::Geometry tmp12 = geom;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(254)
					bool tmp13 = tmp11->update(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(254)
					if ((tmp13)){
						HX_STACK_LINE(258)
						int tmp14 = this->pos_floats;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(258)
						bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(258)
						if ((tmp15)){
							HX_STACK_LINE(258)
							false;
						}
						else{
							HX_STACK_LINE(258)
							int tmp16 = this->pos_floats;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(258)
							int tmp17 = this->max_floats;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(258)
							bool tmp18 = (tmp16 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(258)
							if ((tmp18)){
								HX_STACK_LINE(258)
								HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
							}
							HX_STACK_LINE(258)
							::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::snow::api::buffers::ArrayBufferView tmp20 = this->pos_list;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(258)
								Array< unsigned char > _buffer = tmp20->buffer;		HX_STACK_VAR(_buffer,"_buffer");
								HX_STACK_LINE(258)
								int tmp21 = this->pos_floats;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(258)
								int tmp22 = (tmp21 * (int)4);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(258)
								int _byteLength = tmp22;		HX_STACK_VAR(_byteLength,"_byteLength");
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::snow::api::buffers::ArrayBufferView tmp23 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(258)
									::snow::api::buffers::ArrayBufferView _view = tmp23;		HX_STACK_VAR(_view,"_view");
									HX_STACK_LINE(258)
									int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
									HX_STACK_LINE(258)
									bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(258)
									if ((tmp24)){
										HX_STACK_LINE(258)
										::snow::api::buffers::TAError tmp25 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(258)
										HX_STACK_DO_THROW(tmp25);
									}
									HX_STACK_LINE(258)
									int tmp25 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(258)
									bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(258)
									if ((tmp26)){
										HX_STACK_LINE(258)
										::snow::api::buffers::TAError tmp27 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(258)
										HX_STACK_DO_THROW(tmp27);
									}
									HX_STACK_LINE(258)
									int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
									HX_STACK_LINE(258)
									int tmp27 = _byteLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(258)
									int _new_range = tmp27;		HX_STACK_VAR(_new_range,"_new_range");
									HX_STACK_LINE(258)
									bool tmp28 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(258)
									if ((tmp28)){
										HX_STACK_LINE(258)
										::snow::api::buffers::TAError tmp29 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(258)
										HX_STACK_DO_THROW(tmp29);
									}
									HX_STACK_LINE(258)
									_view->buffer = _buffer;
									HX_STACK_LINE(258)
									_view->byteOffset = (int)0;
									HX_STACK_LINE(258)
									_view->byteLength = _byteLength;
									HX_STACK_LINE(258)
									Float tmp29 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(258)
									int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(258)
									_view->length = tmp30;
									HX_STACK_LINE(258)
									tmp19 = _view;
								}
							}
							HX_STACK_LINE(258)
							::snow::api::buffers::ArrayBufferView _pos = tmp19;		HX_STACK_VAR(_pos,"_pos");
							HX_STACK_LINE(258)
							::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::snow::api::buffers::ArrayBufferView tmp21 = this->tcoord_list;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(258)
								Array< unsigned char > _buffer = tmp21->buffer;		HX_STACK_VAR(_buffer,"_buffer");
								HX_STACK_LINE(258)
								int tmp22 = this->tcoord_floats;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(258)
								int tmp23 = (tmp22 * (int)4);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(258)
								int _byteLength = tmp23;		HX_STACK_VAR(_byteLength,"_byteLength");
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::snow::api::buffers::ArrayBufferView tmp24 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(258)
									::snow::api::buffers::ArrayBufferView _view = tmp24;		HX_STACK_VAR(_view,"_view");
									HX_STACK_LINE(258)
									int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
									HX_STACK_LINE(258)
									bool tmp25 = false;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(258)
									if ((tmp25)){
										HX_STACK_LINE(258)
										::snow::api::buffers::TAError tmp26 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(258)
										HX_STACK_DO_THROW(tmp26);
									}
									HX_STACK_LINE(258)
									int tmp26 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(258)
									bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(258)
									if ((tmp27)){
										HX_STACK_LINE(258)
										::snow::api::buffers::TAError tmp28 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(258)
										HX_STACK_DO_THROW(tmp28);
									}
									HX_STACK_LINE(258)
									int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
									HX_STACK_LINE(258)
									int tmp28 = _byteLength;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(258)
									int _new_range = tmp28;		HX_STACK_VAR(_new_range,"_new_range");
									HX_STACK_LINE(258)
									bool tmp29 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(258)
									if ((tmp29)){
										HX_STACK_LINE(258)
										::snow::api::buffers::TAError tmp30 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(258)
										HX_STACK_DO_THROW(tmp30);
									}
									HX_STACK_LINE(258)
									_view->buffer = _buffer;
									HX_STACK_LINE(258)
									_view->byteOffset = (int)0;
									HX_STACK_LINE(258)
									_view->byteLength = _byteLength;
									HX_STACK_LINE(258)
									Float tmp30 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(258)
									int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(258)
									_view->length = tmp31;
									HX_STACK_LINE(258)
									tmp20 = _view;
								}
							}
							HX_STACK_LINE(258)
							::snow::api::buffers::ArrayBufferView _tcoords = tmp20;		HX_STACK_VAR(_tcoords,"_tcoords");
							HX_STACK_LINE(258)
							::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::snow::api::buffers::ArrayBufferView tmp22 = this->color_list;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(258)
								Array< unsigned char > _buffer = tmp22->buffer;		HX_STACK_VAR(_buffer,"_buffer");
								HX_STACK_LINE(258)
								int tmp23 = this->color_floats;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(258)
								int tmp24 = (tmp23 * (int)4);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(258)
								int _byteLength = tmp24;		HX_STACK_VAR(_byteLength,"_byteLength");
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									::snow::api::buffers::ArrayBufferView tmp25 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(258)
									::snow::api::buffers::ArrayBufferView _view = tmp25;		HX_STACK_VAR(_view,"_view");
									HX_STACK_LINE(258)
									int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
									HX_STACK_LINE(258)
									bool tmp26 = false;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(258)
									if ((tmp26)){
										HX_STACK_LINE(258)
										::snow::api::buffers::TAError tmp27 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(258)
										HX_STACK_DO_THROW(tmp27);
									}
									HX_STACK_LINE(258)
									int tmp27 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(258)
									bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(258)
									if ((tmp28)){
										HX_STACK_LINE(258)
										::snow::api::buffers::TAError tmp29 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(258)
										HX_STACK_DO_THROW(tmp29);
									}
									HX_STACK_LINE(258)
									int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
									HX_STACK_LINE(258)
									int tmp29 = _byteLength;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(258)
									int _new_range = tmp29;		HX_STACK_VAR(_new_range,"_new_range");
									HX_STACK_LINE(258)
									bool tmp30 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(258)
									if ((tmp30)){
										HX_STACK_LINE(258)
										::snow::api::buffers::TAError tmp31 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(258)
										HX_STACK_DO_THROW(tmp31);
									}
									HX_STACK_LINE(258)
									_view->buffer = _buffer;
									HX_STACK_LINE(258)
									_view->byteOffset = (int)0;
									HX_STACK_LINE(258)
									_view->byteLength = _byteLength;
									HX_STACK_LINE(258)
									Float tmp31 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(258)
									int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(258)
									_view->length = tmp32;
									HX_STACK_LINE(258)
									tmp21 = _view;
								}
							}
							HX_STACK_LINE(258)
							::snow::api::buffers::ArrayBufferView _colors = tmp21;		HX_STACK_VAR(_colors,"_colors");
							HX_STACK_LINE(258)
							::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
							HX_STACK_LINE(258)
							::phoenix::BatchState tmp22 = this->state;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(258)
							int tmp23 = tmp22->last_geom_state->primitive_type;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(258)
							::snow::api::buffers::ArrayBufferView tmp24 = _pos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(258)
							::snow::api::buffers::ArrayBufferView tmp25 = _tcoords;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(258)
							::snow::api::buffers::ArrayBufferView tmp26 = _colors;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(258)
							::snow::api::buffers::ArrayBufferView tmp27 = _normals;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(258)
							this->submit_buffers(tmp23,tmp24,tmp25,tmp26,tmp27);
							HX_STACK_LINE(258)
							_pos = null();
							HX_STACK_LINE(258)
							_tcoords = null();
							HX_STACK_LINE(258)
							_colors = null();
							HX_STACK_LINE(258)
							_normals = null();
							HX_STACK_LINE(258)
							this->pos_floats = (int)0;
							HX_STACK_LINE(258)
							this->tcoord_floats = (int)0;
							HX_STACK_LINE(258)
							this->color_floats = (int)0;
							HX_STACK_LINE(258)
							this->normal_floats = (int)0;
							HX_STACK_LINE(258)
							true;
						}
					}
					HX_STACK_LINE(263)
					{
						HX_STACK_LINE(263)
						::phoenix::BatchState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(263)
						::phoenix::BatchState _this = tmp14;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(263)
						bool tmp15 = _this->geom_state->dirty;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(263)
						if ((tmp15)){
							HX_STACK_LINE(263)
							::phoenix::Texture tmp16 = _this->geom_state->texture;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(263)
							bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(263)
							if ((tmp17)){
								HX_STACK_LINE(263)
								Dynamic tmp18 = _this->last_texture_id;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(263)
								::phoenix::Texture tmp19 = _this->geom_state->texture;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(263)
								::String tmp20 = tmp19->id;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(263)
								bool tmp21 = (tmp18 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(263)
								if ((tmp21)){
									HX_STACK_LINE(263)
									::phoenix::Texture tmp22 = _this->geom_state->texture;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(263)
									_this->last_texture_id = tmp22->id;
									HX_STACK_LINE(263)
									::phoenix::Texture tmp23 = _this->geom_state->texture;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(263)
									::opengl::GLObject tmp24 = tmp23->texture;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(263)
									bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(263)
									if ((tmp25)){
										HX_STACK_LINE(263)
										::phoenix::Texture tmp26 = _this->geom_state->texture;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(263)
										tmp26->bind();
									}
								}
							}
							else{
								HX_STACK_LINE(263)
								::phoenix::Renderer tmp18 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(263)
								tmp18->state->bindTexture2D(null());
								HX_STACK_LINE(263)
								_this->last_texture_id = null();
							}
							HX_STACK_LINE(263)
							::phoenix::Shader tmp18 = this->shader;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(263)
							bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(263)
							::phoenix::Shader tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(263)
							if ((tmp19)){
								HX_STACK_LINE(263)
								tmp20 = _this->geom_state->shader;
							}
							else{
								HX_STACK_LINE(263)
								tmp20 = this->shader;
							}
							HX_STACK_LINE(263)
							::phoenix::Shader _shader = tmp20;		HX_STACK_VAR(_shader,"_shader");
							HX_STACK_LINE(263)
							bool tmp21 = (_shader == null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(263)
							if ((tmp21)){
								HX_STACK_LINE(263)
								::phoenix::Texture tmp22 = _this->geom_state->texture;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(263)
								bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(263)
								if ((tmp23)){
									HX_STACK_LINE(263)
									::phoenix::Renderer tmp24 = this->renderer;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(263)
									Dynamic tmp25 = tmp24->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(263)
									_shader = tmp25->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
								}
								else{
									HX_STACK_LINE(263)
									::phoenix::Renderer tmp24 = this->renderer;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(263)
									Dynamic tmp25 = tmp24->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(263)
									_shader = tmp25->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
								}
							}
							HX_STACK_LINE(263)
							::opengl::GLObject tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(263)
							{
								HX_STACK_LINE(263)
								int _id = _this->last_shader_id;		HX_STACK_VAR(_id,"_id");
								HX_STACK_LINE(263)
								::opengl::GLObject tmp23 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(263)
								tmp22 = tmp23;
							}
							HX_STACK_LINE(263)
							::opengl::GLObject tmp23 = _shader->program;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(263)
							bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(263)
							if ((tmp24)){
								HX_STACK_LINE(263)
								{
									HX_STACK_LINE(263)
									bool tmp25 = _shader->no_default_uniforms;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(263)
									bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(263)
									if ((tmp26)){
										HX_STACK_LINE(263)
										{
											HX_STACK_LINE(263)
											::phoenix::Camera tmp27 = this->view;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(263)
											::snow::api::buffers::ArrayBufferView _value = tmp27->proj_arr;		HX_STACK_VAR(_value,"_value");
											HX_STACK_LINE(263)
											{
												HX_STACK_LINE(263)
												::phoenix::Uniforms _this1 = _shader->uniforms;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(263)
												::opengl::GLObject tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(263)
												{
													HX_STACK_LINE(263)
													::opengl::GLObject program = _shader->program;		HX_STACK_VAR(program,"program");
													HX_STACK_LINE(263)
													{
														HX_STACK_LINE(263)
														bool tmp29 = (program == null());		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(263)
														int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(263)
														if ((tmp29)){
															HX_STACK_LINE(263)
															tmp30 = (int)0;
														}
														else{
															HX_STACK_LINE(263)
															tmp30 = program->id;
														}
														HX_STACK_LINE(263)
														int tmp31 = glGetUniformLocation(tmp30,HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(263)
														int _id = tmp31;		HX_STACK_VAR(_id,"_id");
														HX_STACK_LINE(263)
														::opengl::GLObject tmp32 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(263)
														tmp28 = tmp32;
													}
												}
												HX_STACK_LINE(263)
												::opengl::GLObject _location = tmp28;		HX_STACK_VAR(_location,"_location");
												HX_STACK_LINE(263)
												::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp29 = _this1->matrix4arrs->get(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(263)
												::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp29;		HX_STACK_VAR(_matrix4,"_matrix4");
												HX_STACK_LINE(263)
												bool tmp30 = (_matrix4 != null());		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(263)
												if ((tmp30)){
													HX_STACK_LINE(263)
													_matrix4->value = _value;
												}
												else{
													HX_STACK_LINE(263)
													::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp31 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),_value,_location);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(263)
													_matrix4 = tmp31;
													HX_STACK_LINE(263)
													::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp32 = _matrix4;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(263)
													_this1->matrix4arrs->set(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),tmp32);
												}
												HX_STACK_LINE(263)
												::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp31 = _matrix4;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(263)
												_this1->dirty_matrix4arrs->push(tmp31);
											}
										}
										HX_STACK_LINE(263)
										{
											HX_STACK_LINE(263)
											::phoenix::Camera tmp27 = this->view;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(263)
											::snow::api::buffers::ArrayBufferView _value = tmp27->view_inverse_arr;		HX_STACK_VAR(_value,"_value");
											HX_STACK_LINE(263)
											{
												HX_STACK_LINE(263)
												::phoenix::Uniforms _this1 = _shader->uniforms;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(263)
												::opengl::GLObject tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(263)
												{
													HX_STACK_LINE(263)
													::opengl::GLObject program = _shader->program;		HX_STACK_VAR(program,"program");
													HX_STACK_LINE(263)
													{
														HX_STACK_LINE(263)
														bool tmp29 = (program == null());		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(263)
														int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(263)
														if ((tmp29)){
															HX_STACK_LINE(263)
															tmp30 = (int)0;
														}
														else{
															HX_STACK_LINE(263)
															tmp30 = program->id;
														}
														HX_STACK_LINE(263)
														int tmp31 = glGetUniformLocation(tmp30,HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(263)
														int _id = tmp31;		HX_STACK_VAR(_id,"_id");
														HX_STACK_LINE(263)
														::opengl::GLObject tmp32 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(263)
														tmp28 = tmp32;
													}
												}
												HX_STACK_LINE(263)
												::opengl::GLObject _location = tmp28;		HX_STACK_VAR(_location,"_location");
												HX_STACK_LINE(263)
												::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp29 = _this1->matrix4arrs->get(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(263)
												::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp29;		HX_STACK_VAR(_matrix4,"_matrix4");
												HX_STACK_LINE(263)
												bool tmp30 = (_matrix4 != null());		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(263)
												if ((tmp30)){
													HX_STACK_LINE(263)
													_matrix4->value = _value;
												}
												else{
													HX_STACK_LINE(263)
													::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp31 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),_value,_location);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(263)
													_matrix4 = tmp31;
													HX_STACK_LINE(263)
													::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp32 = _matrix4;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(263)
													_this1->matrix4arrs->set(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),tmp32);
												}
												HX_STACK_LINE(263)
												::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp31 = _matrix4;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(263)
												_this1->dirty_matrix4arrs->push(tmp31);
											}
										}
									}
								}
								HX_STACK_LINE(263)
								{
									HX_STACK_LINE(263)
									_shader->use();
									HX_STACK_LINE(263)
									_shader->uniforms->apply();
									HX_STACK_LINE(263)
									::phoenix::Renderer tmp25 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(263)
									tmp25->state->activeTexture((int)33984);
								}
								HX_STACK_LINE(263)
								Dynamic tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(263)
								{
									HX_STACK_LINE(263)
									::opengl::GLObject this1 = _shader->program;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(263)
									bool tmp26 = (this1 == null());		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(263)
									if ((tmp26)){
										HX_STACK_LINE(263)
										tmp25 = (int)0;
									}
									else{
										HX_STACK_LINE(263)
										tmp25 = this1->id;
									}
								}
								HX_STACK_LINE(263)
								_this->last_shader_id = tmp25;
							}
						}
						HX_STACK_LINE(263)
						bool tmp16 = _this->geom_state->clip;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(263)
						if ((tmp16)){
							HX_STACK_LINE(263)
							bool tmp17 = _this->is_clipping;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(263)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(263)
							if ((tmp18)){
								HX_STACK_LINE(263)
								glEnable((int)3089);
								HX_STACK_LINE(263)
								_this->is_clipping = true;
							}
							HX_STACK_LINE(263)
							bool tmp19 = (_this->clip_rect != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(263)
							if ((tmp19)){
								HX_STACK_LINE(263)
								::phoenix::Rectangle tmp20 = _this->last_clip_rect;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(263)
								bool tmp21 = _this->clip_rect->equal(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(263)
								bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(263)
								if ((tmp22)){
									HX_STACK_LINE(263)
									::phoenix::Renderer tmp23 = this->renderer;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(263)
									Float tmp24 = _this->clip_rect->x;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(263)
									Float tmp25 = _this->clip_rect->y;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(263)
									Float tmp26 = _this->clip_rect->w;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(263)
									Float tmp27 = _this->clip_rect->h;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(263)
									tmp23->state->scissor(tmp24,tmp25,tmp26,tmp27);
								}
							}
						}
						else{
							HX_STACK_LINE(263)
							bool tmp17 = _this->is_clipping;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(263)
							if ((tmp17)){
								HX_STACK_LINE(263)
								glDisable((int)3089);
								HX_STACK_LINE(263)
								_this->is_clipping = false;
							}
						}
						HX_STACK_LINE(263)
						_this->geom_state->dirty = false;
					}
					HX_STACK_LINE(265)
					bool tmp14 = geom->visible;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(265)
					if ((tmp14)){
						HX_STACK_LINE(268)
						(this->visible_count)++;
						HX_STACK_LINE(271)
						bool tmp15 = geom->buffer_based;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(271)
						if ((tmp15)){
							HX_STACK_LINE(272)
							(this->visible_count)--;
							HX_STACK_LINE(273)
							continue;
						}
						HX_STACK_LINE(277)
						bool tmp16 = geom->locked;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(277)
						if ((tmp16)){
							HX_STACK_LINE(280)
							int tmp17 = this->pos_floats;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(280)
							bool tmp18 = (tmp17 == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(280)
							if ((tmp18)){
								HX_STACK_LINE(280)
								false;
							}
							else{
								HX_STACK_LINE(280)
								int tmp19 = this->pos_floats;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(280)
								int tmp20 = this->max_floats;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(280)
								bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(280)
								if ((tmp21)){
									HX_STACK_LINE(280)
									HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
								}
								HX_STACK_LINE(280)
								::snow::api::buffers::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(280)
								{
									HX_STACK_LINE(280)
									::snow::api::buffers::ArrayBufferView tmp23 = this->pos_list;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(280)
									Array< unsigned char > _buffer = tmp23->buffer;		HX_STACK_VAR(_buffer,"_buffer");
									HX_STACK_LINE(280)
									int tmp24 = this->pos_floats;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(280)
									int tmp25 = (tmp24 * (int)4);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(280)
									int _byteLength = tmp25;		HX_STACK_VAR(_byteLength,"_byteLength");
									HX_STACK_LINE(280)
									{
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView tmp26 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView _view = tmp26;		HX_STACK_VAR(_view,"_view");
										HX_STACK_LINE(280)
										int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
										HX_STACK_LINE(280)
										bool tmp27 = false;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(280)
										if ((tmp27)){
											HX_STACK_LINE(280)
											::snow::api::buffers::TAError tmp28 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(280)
											HX_STACK_DO_THROW(tmp28);
										}
										HX_STACK_LINE(280)
										int tmp28 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(280)
										bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(280)
										if ((tmp29)){
											HX_STACK_LINE(280)
											::snow::api::buffers::TAError tmp30 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(280)
											HX_STACK_DO_THROW(tmp30);
										}
										HX_STACK_LINE(280)
										int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
										HX_STACK_LINE(280)
										int tmp30 = _byteLength;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(280)
										int _new_range = tmp30;		HX_STACK_VAR(_new_range,"_new_range");
										HX_STACK_LINE(280)
										bool tmp31 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(280)
										if ((tmp31)){
											HX_STACK_LINE(280)
											::snow::api::buffers::TAError tmp32 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(280)
											HX_STACK_DO_THROW(tmp32);
										}
										HX_STACK_LINE(280)
										_view->buffer = _buffer;
										HX_STACK_LINE(280)
										_view->byteOffset = (int)0;
										HX_STACK_LINE(280)
										_view->byteLength = _byteLength;
										HX_STACK_LINE(280)
										Float tmp32 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(280)
										int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(280)
										_view->length = tmp33;
										HX_STACK_LINE(280)
										tmp22 = _view;
									}
								}
								HX_STACK_LINE(280)
								::snow::api::buffers::ArrayBufferView _pos = tmp22;		HX_STACK_VAR(_pos,"_pos");
								HX_STACK_LINE(280)
								::snow::api::buffers::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(280)
								{
									HX_STACK_LINE(280)
									::snow::api::buffers::ArrayBufferView tmp24 = this->tcoord_list;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(280)
									Array< unsigned char > _buffer = tmp24->buffer;		HX_STACK_VAR(_buffer,"_buffer");
									HX_STACK_LINE(280)
									int tmp25 = this->tcoord_floats;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(280)
									int tmp26 = (tmp25 * (int)4);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(280)
									int _byteLength = tmp26;		HX_STACK_VAR(_byteLength,"_byteLength");
									HX_STACK_LINE(280)
									{
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView tmp27 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView _view = tmp27;		HX_STACK_VAR(_view,"_view");
										HX_STACK_LINE(280)
										int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
										HX_STACK_LINE(280)
										bool tmp28 = false;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(280)
										if ((tmp28)){
											HX_STACK_LINE(280)
											::snow::api::buffers::TAError tmp29 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(280)
											HX_STACK_DO_THROW(tmp29);
										}
										HX_STACK_LINE(280)
										int tmp29 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(280)
										bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(280)
										if ((tmp30)){
											HX_STACK_LINE(280)
											::snow::api::buffers::TAError tmp31 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(280)
											HX_STACK_DO_THROW(tmp31);
										}
										HX_STACK_LINE(280)
										int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
										HX_STACK_LINE(280)
										int tmp31 = _byteLength;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(280)
										int _new_range = tmp31;		HX_STACK_VAR(_new_range,"_new_range");
										HX_STACK_LINE(280)
										bool tmp32 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(280)
										if ((tmp32)){
											HX_STACK_LINE(280)
											::snow::api::buffers::TAError tmp33 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(280)
											HX_STACK_DO_THROW(tmp33);
										}
										HX_STACK_LINE(280)
										_view->buffer = _buffer;
										HX_STACK_LINE(280)
										_view->byteOffset = (int)0;
										HX_STACK_LINE(280)
										_view->byteLength = _byteLength;
										HX_STACK_LINE(280)
										Float tmp33 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(280)
										int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(280)
										_view->length = tmp34;
										HX_STACK_LINE(280)
										tmp23 = _view;
									}
								}
								HX_STACK_LINE(280)
								::snow::api::buffers::ArrayBufferView _tcoords = tmp23;		HX_STACK_VAR(_tcoords,"_tcoords");
								HX_STACK_LINE(280)
								::snow::api::buffers::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(280)
								{
									HX_STACK_LINE(280)
									::snow::api::buffers::ArrayBufferView tmp25 = this->color_list;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(280)
									Array< unsigned char > _buffer = tmp25->buffer;		HX_STACK_VAR(_buffer,"_buffer");
									HX_STACK_LINE(280)
									int tmp26 = this->color_floats;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(280)
									int tmp27 = (tmp26 * (int)4);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(280)
									int _byteLength = tmp27;		HX_STACK_VAR(_byteLength,"_byteLength");
									HX_STACK_LINE(280)
									{
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView tmp28 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView _view = tmp28;		HX_STACK_VAR(_view,"_view");
										HX_STACK_LINE(280)
										int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
										HX_STACK_LINE(280)
										bool tmp29 = false;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(280)
										if ((tmp29)){
											HX_STACK_LINE(280)
											::snow::api::buffers::TAError tmp30 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(280)
											HX_STACK_DO_THROW(tmp30);
										}
										HX_STACK_LINE(280)
										int tmp30 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(280)
										bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(280)
										if ((tmp31)){
											HX_STACK_LINE(280)
											::snow::api::buffers::TAError tmp32 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(280)
											HX_STACK_DO_THROW(tmp32);
										}
										HX_STACK_LINE(280)
										int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
										HX_STACK_LINE(280)
										int tmp32 = _byteLength;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(280)
										int _new_range = tmp32;		HX_STACK_VAR(_new_range,"_new_range");
										HX_STACK_LINE(280)
										bool tmp33 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(280)
										if ((tmp33)){
											HX_STACK_LINE(280)
											::snow::api::buffers::TAError tmp34 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(280)
											HX_STACK_DO_THROW(tmp34);
										}
										HX_STACK_LINE(280)
										_view->buffer = _buffer;
										HX_STACK_LINE(280)
										_view->byteOffset = (int)0;
										HX_STACK_LINE(280)
										_view->byteLength = _byteLength;
										HX_STACK_LINE(280)
										Float tmp34 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(280)
										int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(280)
										_view->length = tmp35;
										HX_STACK_LINE(280)
										tmp24 = _view;
									}
								}
								HX_STACK_LINE(280)
								::snow::api::buffers::ArrayBufferView _colors = tmp24;		HX_STACK_VAR(_colors,"_colors");
								HX_STACK_LINE(280)
								::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
								HX_STACK_LINE(280)
								::phoenix::BatchState tmp25 = this->state;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(280)
								int tmp26 = tmp25->last_geom_state->primitive_type;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(280)
								::snow::api::buffers::ArrayBufferView tmp27 = _pos;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(280)
								::snow::api::buffers::ArrayBufferView tmp28 = _tcoords;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(280)
								::snow::api::buffers::ArrayBufferView tmp29 = _colors;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(280)
								::snow::api::buffers::ArrayBufferView tmp30 = _normals;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(280)
								this->submit_buffers(tmp26,tmp27,tmp28,tmp29,tmp30);
								HX_STACK_LINE(280)
								_pos = null();
								HX_STACK_LINE(280)
								_tcoords = null();
								HX_STACK_LINE(280)
								_colors = null();
								HX_STACK_LINE(280)
								_normals = null();
								HX_STACK_LINE(280)
								this->pos_floats = (int)0;
								HX_STACK_LINE(280)
								this->tcoord_floats = (int)0;
								HX_STACK_LINE(280)
								this->color_floats = (int)0;
								HX_STACK_LINE(280)
								this->normal_floats = (int)0;
								HX_STACK_LINE(280)
								true;
							}
							HX_STACK_LINE(282)
							{
								HX_STACK_LINE(282)
								int tmp19 = geom->vertices->length;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(282)
								int _length = tmp19;		HX_STACK_VAR(_length,"_length");
								HX_STACK_LINE(282)
								bool tmp20 = (_length == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(282)
								if ((tmp20)){
									HX_STACK_LINE(282)
									false;
								}
								else{
									HX_STACK_LINE(282)
									bool tmp21 = geom->update_buffers();		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(282)
									bool _updated = tmp21;		HX_STACK_VAR(_updated,"_updated");
									HX_STACK_LINE(282)
									bool tmp22 = _updated;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(282)
									if ((tmp22)){
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												::opengl::GLObject buffer = geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(282)
												bool tmp23 = (buffer == null());		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(282)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(282)
												if ((tmp23)){
													HX_STACK_LINE(282)
													tmp24 = (int)0;
												}
												else{
													HX_STACK_LINE(282)
													tmp24 = buffer->id;
												}
												HX_STACK_LINE(282)
												glBindBuffer((int)34962,tmp24);
											}
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												;;
												HX_STACK_LINE(282)
												glVertexAttribPointer((int)0, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
											}
										}
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											;;
											HX_STACK_LINE(282)
											glBufferData((int)34962, geom->buffer_pos->byteLength, (GLvoid*)(&geom->buffer_pos->buffer[0] + geom->buffer_pos->byteOffset), geom->buffer_type);
										}
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												::opengl::GLObject buffer = geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(282)
												bool tmp23 = (buffer == null());		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(282)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(282)
												if ((tmp23)){
													HX_STACK_LINE(282)
													tmp24 = (int)0;
												}
												else{
													HX_STACK_LINE(282)
													tmp24 = buffer->id;
												}
												HX_STACK_LINE(282)
												glBindBuffer((int)34962,tmp24);
											}
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												;;
												HX_STACK_LINE(282)
												glVertexAttribPointer((int)1, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
											}
										}
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											;;
											HX_STACK_LINE(282)
											glBufferData((int)34962, geom->buffer_tcoords->byteLength, (GLvoid*)(&geom->buffer_tcoords->buffer[0] + geom->buffer_tcoords->byteOffset), geom->buffer_type);
										}
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												::opengl::GLObject buffer = geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(282)
												bool tmp23 = (buffer == null());		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(282)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(282)
												if ((tmp23)){
													HX_STACK_LINE(282)
													tmp24 = (int)0;
												}
												else{
													HX_STACK_LINE(282)
													tmp24 = buffer->id;
												}
												HX_STACK_LINE(282)
												glBindBuffer((int)34962,tmp24);
											}
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												;;
												HX_STACK_LINE(282)
												glVertexAttribPointer((int)2, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
											}
										}
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											;;
											HX_STACK_LINE(282)
											glBufferData((int)34962, geom->buffer_colors->byteLength, (GLvoid*)(&geom->buffer_colors->buffer[0] + geom->buffer_colors->byteOffset), geom->buffer_type);
										}
									}
									else{
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												::opengl::GLObject buffer = geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(282)
												bool tmp23 = (buffer == null());		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(282)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(282)
												if ((tmp23)){
													HX_STACK_LINE(282)
													tmp24 = (int)0;
												}
												else{
													HX_STACK_LINE(282)
													tmp24 = buffer->id;
												}
												HX_STACK_LINE(282)
												glBindBuffer((int)34962,tmp24);
											}
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												;;
												HX_STACK_LINE(282)
												glVertexAttribPointer((int)0, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
											}
										}
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												::opengl::GLObject buffer = geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(282)
												bool tmp23 = (buffer == null());		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(282)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(282)
												if ((tmp23)){
													HX_STACK_LINE(282)
													tmp24 = (int)0;
												}
												else{
													HX_STACK_LINE(282)
													tmp24 = buffer->id;
												}
												HX_STACK_LINE(282)
												glBindBuffer((int)34962,tmp24);
											}
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												;;
												HX_STACK_LINE(282)
												glVertexAttribPointer((int)1, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
											}
										}
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												::opengl::GLObject buffer = geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(282)
												bool tmp23 = (buffer == null());		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(282)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(282)
												if ((tmp23)){
													HX_STACK_LINE(282)
													tmp24 = (int)0;
												}
												else{
													HX_STACK_LINE(282)
													tmp24 = buffer->id;
												}
												HX_STACK_LINE(282)
												glBindBuffer((int)34962,tmp24);
											}
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												;;
												HX_STACK_LINE(282)
												glVertexAttribPointer((int)2, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
											}
										}
									}
									HX_STACK_LINE(282)
									{
										HX_STACK_LINE(282)
										int tmp23 = geom->buffer_pos->length;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(282)
										Float tmp24 = (Float(tmp23) / Float((int)4));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(282)
										int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(282)
										int count = tmp25;		HX_STACK_VAR(count,"count");
										HX_STACK_LINE(282)
										int tmp26 = geom->state->primitive_type;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(282)
										int tmp27 = count;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(282)
										glDrawArrays(tmp26,(int)0,tmp27);
									}
									HX_STACK_LINE(282)
									(this->static_batched_count)++;
									HX_STACK_LINE(282)
									(this->draw_calls)++;
									HX_STACK_LINE(282)
									geom->set_dirty(false);
									HX_STACK_LINE(282)
									true;
								}
							}
							HX_STACK_LINE(283)
							int tmp19 = geom->vertices->length;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(283)
							hx::AddEq(this->vert_count,tmp19);
						}
						else{
							HX_STACK_LINE(287)
							int tmp17 = geom->state->primitive_type;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(287)
							bool tmp18 = (tmp17 == (int)3);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(287)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(287)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(287)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(287)
							if ((tmp20)){
								HX_STACK_LINE(288)
								int tmp22 = geom->state->primitive_type;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(288)
								int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(288)
								int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(288)
								tmp21 = (tmp24 == (int)2);
							}
							else{
								HX_STACK_LINE(287)
								tmp21 = true;
							}
							HX_STACK_LINE(287)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(287)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(287)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(287)
							if ((tmp23)){
								HX_STACK_LINE(289)
								int tmp25 = geom->state->primitive_type;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(289)
								int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(289)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(289)
								tmp24 = (tmp27 == (int)5);
							}
							else{
								HX_STACK_LINE(287)
								tmp24 = true;
							}
							HX_STACK_LINE(287)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(287)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(287)
							if ((tmp25)){
								HX_STACK_LINE(290)
								int tmp27 = geom->state->primitive_type;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(290)
								int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(290)
								tmp26 = (tmp28 == (int)6);
							}
							else{
								HX_STACK_LINE(287)
								tmp26 = true;
							}
							HX_STACK_LINE(287)
							if ((tmp26)){
								HX_STACK_LINE(294)
								{
									HX_STACK_LINE(294)
									int tmp27 = geom->vertices->length;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(294)
									int tmp28 = this->max_verts;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(294)
									bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(294)
									if ((tmp29)){
										HX_STACK_LINE(294)
										geom->set_locked(true);
										HX_STACK_LINE(294)
										geom->dirty_based = false;
										HX_STACK_LINE(294)
										::String tmp30 = this->name;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(294)
										::String tmp31 = (HX_HCSTRING("WARNING batcher `","\xc3","\xc3","\x10","\xcf") + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(294)
										::String tmp32 = (tmp31 + HX_HCSTRING("` trying to batch a geometry `","\xe3","\xef","\x1f","\x81"));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(294)
										::String tmp33 = geom->id;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(294)
										::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(294)
										::String tmp35 = (tmp34 + HX_HCSTRING("` that has more verts than the batcher has preallocated, (","\x2d","\xaa","\x5e","\x9c"));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(294)
										int tmp36 = geom->vertices->length;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(294)
										::String tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(294)
										::String tmp38 = (tmp37 + HX_HCSTRING(" vs max of ","\xea","\xab","\xb3","\x51"));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(294)
										int tmp39 = this->max_verts;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(294)
										::String tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(294)
										::String tmp41 = (tmp40 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(294)
										::String tmp42 = (HX_HCSTRING("  i / batcher / ","\x52","\xb7","\x3e","\xd6") + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(294)
										Dynamic tmp43 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),572,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("geometry_batch","\x2d","\x43","\xe5","\x75"));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(294)
										::haxe::Log_obj::trace(tmp42,tmp43);
										HX_STACK_LINE(294)
										::String tmp44 = HX_HCSTRING("  i / batcher / WARNING geometry has been marked as direct submit, and will be submitted independently!","\x0a","\xd8","\x5d","\xb6");		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(294)
										Dynamic tmp45 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),573,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("geometry_batch","\x2d","\x43","\xe5","\x75"));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(294)
										::haxe::Log_obj::trace(tmp44,tmp45);
										HX_STACK_LINE(294)
										Dynamic();
									}
									else{
										HX_STACK_LINE(294)
										int tmp30 = geom->vertices->length;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(294)
										int tmp31 = this->pos_floats;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(294)
										Float tmp32 = (Float(tmp31) / Float((int)4));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(294)
										Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(294)
										Float _count_after = tmp33;		HX_STACK_VAR(_count_after,"_count_after");
										HX_STACK_LINE(294)
										Float tmp34 = _count_after;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(294)
										int tmp35 = this->max_verts;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(294)
										bool tmp36 = (tmp34 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(294)
										if ((tmp36)){
											HX_STACK_LINE(294)
											int tmp37 = this->pos_floats;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(294)
											bool tmp38 = (tmp37 == (int)0);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(294)
											if ((tmp38)){
												HX_STACK_LINE(294)
												false;
											}
											else{
												HX_STACK_LINE(294)
												int tmp39 = this->pos_floats;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(294)
												int tmp40 = this->max_floats;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(294)
												bool tmp41 = (tmp39 > tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(294)
												if ((tmp41)){
													HX_STACK_LINE(294)
													HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
												}
												HX_STACK_LINE(294)
												::snow::api::buffers::ArrayBufferView tmp42;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(294)
												{
													HX_STACK_LINE(294)
													::snow::api::buffers::ArrayBufferView tmp43 = this->pos_list;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(294)
													Array< unsigned char > _buffer = tmp43->buffer;		HX_STACK_VAR(_buffer,"_buffer");
													HX_STACK_LINE(294)
													int tmp44 = this->pos_floats;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(294)
													int tmp45 = (tmp44 * (int)4);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(294)
													int _byteLength = tmp45;		HX_STACK_VAR(_byteLength,"_byteLength");
													HX_STACK_LINE(294)
													{
														HX_STACK_LINE(294)
														::snow::api::buffers::ArrayBufferView tmp46 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(294)
														::snow::api::buffers::ArrayBufferView _view = tmp46;		HX_STACK_VAR(_view,"_view");
														HX_STACK_LINE(294)
														int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
														HX_STACK_LINE(294)
														bool tmp47 = false;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(294)
														if ((tmp47)){
															HX_STACK_LINE(294)
															::snow::api::buffers::TAError tmp48 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(294)
															HX_STACK_DO_THROW(tmp48);
														}
														HX_STACK_LINE(294)
														int tmp48 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(294)
														bool tmp49 = (tmp48 != (int)0);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(294)
														if ((tmp49)){
															HX_STACK_LINE(294)
															::snow::api::buffers::TAError tmp50 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(294)
															HX_STACK_DO_THROW(tmp50);
														}
														HX_STACK_LINE(294)
														int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
														HX_STACK_LINE(294)
														int tmp50 = _byteLength;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(294)
														int _new_range = tmp50;		HX_STACK_VAR(_new_range,"_new_range");
														HX_STACK_LINE(294)
														bool tmp51 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(294)
														if ((tmp51)){
															HX_STACK_LINE(294)
															::snow::api::buffers::TAError tmp52 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(294)
															HX_STACK_DO_THROW(tmp52);
														}
														HX_STACK_LINE(294)
														_view->buffer = _buffer;
														HX_STACK_LINE(294)
														_view->byteOffset = (int)0;
														HX_STACK_LINE(294)
														_view->byteLength = _byteLength;
														HX_STACK_LINE(294)
														Float tmp52 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(294)
														int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(294)
														_view->length = tmp53;
														HX_STACK_LINE(294)
														tmp42 = _view;
													}
												}
												HX_STACK_LINE(294)
												::snow::api::buffers::ArrayBufferView _pos = tmp42;		HX_STACK_VAR(_pos,"_pos");
												HX_STACK_LINE(294)
												::snow::api::buffers::ArrayBufferView tmp43;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(294)
												{
													HX_STACK_LINE(294)
													::snow::api::buffers::ArrayBufferView tmp44 = this->tcoord_list;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(294)
													Array< unsigned char > _buffer = tmp44->buffer;		HX_STACK_VAR(_buffer,"_buffer");
													HX_STACK_LINE(294)
													int tmp45 = this->tcoord_floats;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(294)
													int tmp46 = (tmp45 * (int)4);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(294)
													int _byteLength = tmp46;		HX_STACK_VAR(_byteLength,"_byteLength");
													HX_STACK_LINE(294)
													{
														HX_STACK_LINE(294)
														::snow::api::buffers::ArrayBufferView tmp47 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(294)
														::snow::api::buffers::ArrayBufferView _view = tmp47;		HX_STACK_VAR(_view,"_view");
														HX_STACK_LINE(294)
														int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
														HX_STACK_LINE(294)
														bool tmp48 = false;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(294)
														if ((tmp48)){
															HX_STACK_LINE(294)
															::snow::api::buffers::TAError tmp49 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(294)
															HX_STACK_DO_THROW(tmp49);
														}
														HX_STACK_LINE(294)
														int tmp49 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(294)
														bool tmp50 = (tmp49 != (int)0);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(294)
														if ((tmp50)){
															HX_STACK_LINE(294)
															::snow::api::buffers::TAError tmp51 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(294)
															HX_STACK_DO_THROW(tmp51);
														}
														HX_STACK_LINE(294)
														int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
														HX_STACK_LINE(294)
														int tmp51 = _byteLength;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(294)
														int _new_range = tmp51;		HX_STACK_VAR(_new_range,"_new_range");
														HX_STACK_LINE(294)
														bool tmp52 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(294)
														if ((tmp52)){
															HX_STACK_LINE(294)
															::snow::api::buffers::TAError tmp53 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(294)
															HX_STACK_DO_THROW(tmp53);
														}
														HX_STACK_LINE(294)
														_view->buffer = _buffer;
														HX_STACK_LINE(294)
														_view->byteOffset = (int)0;
														HX_STACK_LINE(294)
														_view->byteLength = _byteLength;
														HX_STACK_LINE(294)
														Float tmp53 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(294)
														int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(294)
														_view->length = tmp54;
														HX_STACK_LINE(294)
														tmp43 = _view;
													}
												}
												HX_STACK_LINE(294)
												::snow::api::buffers::ArrayBufferView _tcoords = tmp43;		HX_STACK_VAR(_tcoords,"_tcoords");
												HX_STACK_LINE(294)
												::snow::api::buffers::ArrayBufferView tmp44;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(294)
												{
													HX_STACK_LINE(294)
													::snow::api::buffers::ArrayBufferView tmp45 = this->color_list;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(294)
													Array< unsigned char > _buffer = tmp45->buffer;		HX_STACK_VAR(_buffer,"_buffer");
													HX_STACK_LINE(294)
													int tmp46 = this->color_floats;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(294)
													int tmp47 = (tmp46 * (int)4);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(294)
													int _byteLength = tmp47;		HX_STACK_VAR(_byteLength,"_byteLength");
													HX_STACK_LINE(294)
													{
														HX_STACK_LINE(294)
														::snow::api::buffers::ArrayBufferView tmp48 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(294)
														::snow::api::buffers::ArrayBufferView _view = tmp48;		HX_STACK_VAR(_view,"_view");
														HX_STACK_LINE(294)
														int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
														HX_STACK_LINE(294)
														bool tmp49 = false;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(294)
														if ((tmp49)){
															HX_STACK_LINE(294)
															::snow::api::buffers::TAError tmp50 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(294)
															HX_STACK_DO_THROW(tmp50);
														}
														HX_STACK_LINE(294)
														int tmp50 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(294)
														bool tmp51 = (tmp50 != (int)0);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(294)
														if ((tmp51)){
															HX_STACK_LINE(294)
															::snow::api::buffers::TAError tmp52 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(294)
															HX_STACK_DO_THROW(tmp52);
														}
														HX_STACK_LINE(294)
														int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
														HX_STACK_LINE(294)
														int tmp52 = _byteLength;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(294)
														int _new_range = tmp52;		HX_STACK_VAR(_new_range,"_new_range");
														HX_STACK_LINE(294)
														bool tmp53 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(294)
														if ((tmp53)){
															HX_STACK_LINE(294)
															::snow::api::buffers::TAError tmp54 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(294)
															HX_STACK_DO_THROW(tmp54);
														}
														HX_STACK_LINE(294)
														_view->buffer = _buffer;
														HX_STACK_LINE(294)
														_view->byteOffset = (int)0;
														HX_STACK_LINE(294)
														_view->byteLength = _byteLength;
														HX_STACK_LINE(294)
														Float tmp54 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(294)
														int tmp55 = ::Std_obj::_int(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(294)
														_view->length = tmp55;
														HX_STACK_LINE(294)
														tmp44 = _view;
													}
												}
												HX_STACK_LINE(294)
												::snow::api::buffers::ArrayBufferView _colors = tmp44;		HX_STACK_VAR(_colors,"_colors");
												HX_STACK_LINE(294)
												::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
												HX_STACK_LINE(294)
												int tmp45 = geom->state->primitive_type;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(294)
												::snow::api::buffers::ArrayBufferView tmp46 = _pos;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(294)
												::snow::api::buffers::ArrayBufferView tmp47 = _tcoords;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(294)
												::snow::api::buffers::ArrayBufferView tmp48 = _colors;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(294)
												::snow::api::buffers::ArrayBufferView tmp49 = _normals;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(294)
												this->submit_buffers(tmp45,tmp46,tmp47,tmp48,tmp49);
												HX_STACK_LINE(294)
												_pos = null();
												HX_STACK_LINE(294)
												_tcoords = null();
												HX_STACK_LINE(294)
												_colors = null();
												HX_STACK_LINE(294)
												_normals = null();
												HX_STACK_LINE(294)
												this->pos_floats = (int)0;
												HX_STACK_LINE(294)
												this->tcoord_floats = (int)0;
												HX_STACK_LINE(294)
												this->color_floats = (int)0;
												HX_STACK_LINE(294)
												this->normal_floats = (int)0;
												HX_STACK_LINE(294)
												true;
											}
										}
										HX_STACK_LINE(294)
										{
											HX_STACK_LINE(294)
											int tmp37 = this->pos_floats;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(294)
											int vert_index = tmp37;		HX_STACK_VAR(vert_index,"vert_index");
											HX_STACK_LINE(294)
											int tmp38 = this->tcoord_floats;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(294)
											int tcoord_index = tmp38;		HX_STACK_VAR(tcoord_index,"tcoord_index");
											HX_STACK_LINE(294)
											int tmp39 = this->color_floats;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(294)
											int color_index = tmp39;		HX_STACK_VAR(color_index,"color_index");
											HX_STACK_LINE(294)
											int tmp40 = this->normal_floats;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(294)
											int normal_index = tmp40;		HX_STACK_VAR(normal_index,"normal_index");
											HX_STACK_LINE(294)
											::snow::api::buffers::ArrayBufferView tmp41 = this->pos_list;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(294)
											::snow::api::buffers::ArrayBufferView vertlist = tmp41;		HX_STACK_VAR(vertlist,"vertlist");
											HX_STACK_LINE(294)
											::snow::api::buffers::ArrayBufferView tmp42 = this->tcoord_list;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(294)
											::snow::api::buffers::ArrayBufferView tcoordlist = tmp42;		HX_STACK_VAR(tcoordlist,"tcoordlist");
											HX_STACK_LINE(294)
											::snow::api::buffers::ArrayBufferView tmp43 = this->color_list;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(294)
											::snow::api::buffers::ArrayBufferView colorlist = tmp43;		HX_STACK_VAR(colorlist,"colorlist");
											HX_STACK_LINE(294)
											::phoenix::Matrix tmp44;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(294)
											{
												HX_STACK_LINE(294)
												::phoenix::Spatial tmp45;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(294)
												{
													HX_STACK_LINE(294)
													::phoenix::Transform _this = geom->transform;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(294)
													bool tmp46 = _this->_destroying;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(294)
													bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(294)
													if ((tmp47)){
														HX_STACK_LINE(294)
														bool tmp48 = (_this->parent != null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(294)
														if ((tmp48)){
															HX_STACK_LINE(294)
															bool tmp49 = _this->parent->dirty;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(294)
															if ((tmp49)){
																HX_STACK_LINE(294)
																_this->parent->clean();
															}
														}
														HX_STACK_LINE(294)
														bool tmp49 = _this->dirty;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(294)
														bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(294)
														if ((tmp49)){
															HX_STACK_LINE(294)
															bool tmp51 = _this->_cleaning;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(294)
															bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(294)
															tmp50 = !(tmp52);
														}
														else{
															HX_STACK_LINE(294)
															tmp50 = false;
														}
														HX_STACK_LINE(294)
														if ((tmp50)){
															HX_STACK_LINE(294)
															_this->clean();
														}
													}
													HX_STACK_LINE(294)
													tmp45 = _this->world;
												}
												HX_STACK_LINE(294)
												::phoenix::Spatial _this = tmp45;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(294)
												tmp44 = _this->matrix;
											}
											HX_STACK_LINE(294)
											::phoenix::Matrix _mat = tmp44;		HX_STACK_VAR(_mat,"_mat");
											HX_STACK_LINE(294)
											Array< Float > _el = _mat->elements;		HX_STACK_VAR(_el,"_el");
											HX_STACK_LINE(294)
											int tmp45 = geom->vertices->length;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(294)
											int _count = tmp45;		HX_STACK_VAR(_count,"_count");
											HX_STACK_LINE(294)
											int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
											HX_STACK_LINE(294)
											while((true)){
												HX_STACK_LINE(294)
												bool tmp46 = (_idx < _count);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(294)
												bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(294)
												if ((tmp47)){
													HX_STACK_LINE(294)
													break;
												}
												HX_STACK_LINE(294)
												::phoenix::geometry::Vertex tmp48 = geom->vertices->__get(_idx).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(294)
												::phoenix::geometry::Vertex v = tmp48;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(294)
												Float tmp49 = v->pos->x;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(294)
												Float _vx = tmp49;		HX_STACK_VAR(_vx,"_vx");
												HX_STACK_LINE(294)
												Float tmp50 = v->pos->y;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(294)
												Float _vy = tmp50;		HX_STACK_VAR(_vy,"_vy");
												HX_STACK_LINE(294)
												Float tmp51 = v->pos->z;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(294)
												Float _vz = tmp51;		HX_STACK_VAR(_vz,"_vz");
												HX_STACK_LINE(294)
												Float tmp52 = _el->__unsafe_get((int)0);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(294)
												Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(294)
												Float tmp54 = _vx;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(294)
												Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(294)
												Float tmp56 = _el->__unsafe_get((int)4);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(294)
												Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(294)
												Float tmp58 = _vy;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(294)
												Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(294)
												Float tmp60 = (tmp55 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(294)
												Float tmp61 = _el->__unsafe_get((int)8);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(294)
												Float tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(294)
												Float tmp63 = _vz;		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(294)
												Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(294)
												Float tmp65 = (tmp60 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(294)
												Float tmp66 = _el->__unsafe_get((int)12);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(294)
												Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(294)
												Float tmp68 = (tmp65 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(294)
												Float _tvx = tmp68;		HX_STACK_VAR(_tvx,"_tvx");
												HX_STACK_LINE(294)
												Float tmp69 = _el->__unsafe_get((int)1);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(294)
												Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(294)
												Float tmp71 = _vx;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(294)
												Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(294)
												Float tmp73 = _el->__unsafe_get((int)5);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(294)
												Float tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(294)
												Float tmp75 = _vy;		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(294)
												Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(294)
												Float tmp77 = (tmp72 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(294)
												Float tmp78 = _el->__unsafe_get((int)9);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(294)
												Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(294)
												Float tmp80 = _vz;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(294)
												Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(294)
												Float tmp82 = (tmp77 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(294)
												Float tmp83 = _el->__unsafe_get((int)13);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(294)
												Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(294)
												Float tmp85 = (tmp82 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(294)
												Float _tvy = tmp85;		HX_STACK_VAR(_tvy,"_tvy");
												HX_STACK_LINE(294)
												Float tmp86 = _el->__unsafe_get((int)2);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(294)
												Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(294)
												Float tmp88 = _vx;		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(294)
												Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(294)
												Float tmp90 = _el->__unsafe_get((int)6);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(294)
												Float tmp91 = tmp90;		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(294)
												Float tmp92 = _vy;		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(294)
												Float tmp93 = (tmp91 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(294)
												Float tmp94 = (tmp89 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(294)
												Float tmp95 = _el->__unsafe_get((int)10);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(294)
												Float tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(294)
												Float tmp97 = _vz;		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(294)
												Float tmp98 = (tmp96 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(294)
												Float tmp99 = (tmp94 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(294)
												Float tmp100 = _el->__unsafe_get((int)14);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(294)
												Float tmp101 = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(294)
												Float tmp102 = (tmp99 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(294)
												Float _tvz = tmp102;		HX_STACK_VAR(_tvz,"_tvz");
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (vert_index * (int)4)),_tvx);
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),_tvy);
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),_tvz);
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),v->pos->w);
												HX_STACK_LINE(294)
												hx::AddEq(vert_index,(int)4);
												HX_STACK_LINE(294)
												::phoenix::geometry::TextureCoord tmp103 = v->uv->uv0;		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(294)
												::phoenix::geometry::TextureCoord _vuv = tmp103;		HX_STACK_VAR(_vuv,"_vuv");
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
												HX_STACK_LINE(294)
												hx::AddEq(tcoord_index,(int)4);
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (color_index * (int)4)),v->color->r);
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),v->color->g);
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),v->color->b);
												HX_STACK_LINE(294)
												::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),v->color->a);
												HX_STACK_LINE(294)
												hx::AddEq(color_index,(int)4);
												HX_STACK_LINE(294)
												hx::AddEq(normal_index,(int)4);
												HX_STACK_LINE(294)
												(_idx)++;
											}
										}
										HX_STACK_LINE(294)
										int tmp37 = geom->vertices->length;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(294)
										int tmp38 = (tmp37 * (int)4);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(294)
										int _length = tmp38;		HX_STACK_VAR(_length,"_length");
										HX_STACK_LINE(294)
										hx::AddEq(this->pos_floats,_length);
										HX_STACK_LINE(294)
										hx::AddEq(this->tcoord_floats,_length);
										HX_STACK_LINE(294)
										hx::AddEq(this->color_floats,_length);
										HX_STACK_LINE(294)
										hx::AddEq(this->normal_floats,_length);
									}
								}
								HX_STACK_LINE(296)
								int tmp27 = this->pos_floats;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(296)
								bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(296)
								if ((tmp28)){
									HX_STACK_LINE(296)
									false;
								}
								else{
									HX_STACK_LINE(296)
									int tmp29 = this->pos_floats;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(296)
									int tmp30 = this->max_floats;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(296)
									bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(296)
									if ((tmp31)){
										HX_STACK_LINE(296)
										HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
									}
									HX_STACK_LINE(296)
									::snow::api::buffers::ArrayBufferView tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(296)
									{
										HX_STACK_LINE(296)
										::snow::api::buffers::ArrayBufferView tmp33 = this->pos_list;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(296)
										Array< unsigned char > _buffer = tmp33->buffer;		HX_STACK_VAR(_buffer,"_buffer");
										HX_STACK_LINE(296)
										int tmp34 = this->pos_floats;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(296)
										int tmp35 = (tmp34 * (int)4);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(296)
										int _byteLength = tmp35;		HX_STACK_VAR(_byteLength,"_byteLength");
										HX_STACK_LINE(296)
										{
											HX_STACK_LINE(296)
											::snow::api::buffers::ArrayBufferView tmp36 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(296)
											::snow::api::buffers::ArrayBufferView _view = tmp36;		HX_STACK_VAR(_view,"_view");
											HX_STACK_LINE(296)
											int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
											HX_STACK_LINE(296)
											bool tmp37 = false;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(296)
											if ((tmp37)){
												HX_STACK_LINE(296)
												::snow::api::buffers::TAError tmp38 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(296)
												HX_STACK_DO_THROW(tmp38);
											}
											HX_STACK_LINE(296)
											int tmp38 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(296)
											bool tmp39 = (tmp38 != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(296)
											if ((tmp39)){
												HX_STACK_LINE(296)
												::snow::api::buffers::TAError tmp40 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(296)
												HX_STACK_DO_THROW(tmp40);
											}
											HX_STACK_LINE(296)
											int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
											HX_STACK_LINE(296)
											int tmp40 = _byteLength;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(296)
											int _new_range = tmp40;		HX_STACK_VAR(_new_range,"_new_range");
											HX_STACK_LINE(296)
											bool tmp41 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(296)
											if ((tmp41)){
												HX_STACK_LINE(296)
												::snow::api::buffers::TAError tmp42 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(296)
												HX_STACK_DO_THROW(tmp42);
											}
											HX_STACK_LINE(296)
											_view->buffer = _buffer;
											HX_STACK_LINE(296)
											_view->byteOffset = (int)0;
											HX_STACK_LINE(296)
											_view->byteLength = _byteLength;
											HX_STACK_LINE(296)
											Float tmp42 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(296)
											int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(296)
											_view->length = tmp43;
											HX_STACK_LINE(296)
											tmp32 = _view;
										}
									}
									HX_STACK_LINE(296)
									::snow::api::buffers::ArrayBufferView _pos = tmp32;		HX_STACK_VAR(_pos,"_pos");
									HX_STACK_LINE(296)
									::snow::api::buffers::ArrayBufferView tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(296)
									{
										HX_STACK_LINE(296)
										::snow::api::buffers::ArrayBufferView tmp34 = this->tcoord_list;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(296)
										Array< unsigned char > _buffer = tmp34->buffer;		HX_STACK_VAR(_buffer,"_buffer");
										HX_STACK_LINE(296)
										int tmp35 = this->tcoord_floats;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(296)
										int tmp36 = (tmp35 * (int)4);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(296)
										int _byteLength = tmp36;		HX_STACK_VAR(_byteLength,"_byteLength");
										HX_STACK_LINE(296)
										{
											HX_STACK_LINE(296)
											::snow::api::buffers::ArrayBufferView tmp37 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(296)
											::snow::api::buffers::ArrayBufferView _view = tmp37;		HX_STACK_VAR(_view,"_view");
											HX_STACK_LINE(296)
											int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
											HX_STACK_LINE(296)
											bool tmp38 = false;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(296)
											if ((tmp38)){
												HX_STACK_LINE(296)
												::snow::api::buffers::TAError tmp39 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(296)
												HX_STACK_DO_THROW(tmp39);
											}
											HX_STACK_LINE(296)
											int tmp39 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(296)
											bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(296)
											if ((tmp40)){
												HX_STACK_LINE(296)
												::snow::api::buffers::TAError tmp41 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(296)
												HX_STACK_DO_THROW(tmp41);
											}
											HX_STACK_LINE(296)
											int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
											HX_STACK_LINE(296)
											int tmp41 = _byteLength;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(296)
											int _new_range = tmp41;		HX_STACK_VAR(_new_range,"_new_range");
											HX_STACK_LINE(296)
											bool tmp42 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(296)
											if ((tmp42)){
												HX_STACK_LINE(296)
												::snow::api::buffers::TAError tmp43 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(296)
												HX_STACK_DO_THROW(tmp43);
											}
											HX_STACK_LINE(296)
											_view->buffer = _buffer;
											HX_STACK_LINE(296)
											_view->byteOffset = (int)0;
											HX_STACK_LINE(296)
											_view->byteLength = _byteLength;
											HX_STACK_LINE(296)
											Float tmp43 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(296)
											int tmp44 = ::Std_obj::_int(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(296)
											_view->length = tmp44;
											HX_STACK_LINE(296)
											tmp33 = _view;
										}
									}
									HX_STACK_LINE(296)
									::snow::api::buffers::ArrayBufferView _tcoords = tmp33;		HX_STACK_VAR(_tcoords,"_tcoords");
									HX_STACK_LINE(296)
									::snow::api::buffers::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(296)
									{
										HX_STACK_LINE(296)
										::snow::api::buffers::ArrayBufferView tmp35 = this->color_list;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(296)
										Array< unsigned char > _buffer = tmp35->buffer;		HX_STACK_VAR(_buffer,"_buffer");
										HX_STACK_LINE(296)
										int tmp36 = this->color_floats;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(296)
										int tmp37 = (tmp36 * (int)4);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(296)
										int _byteLength = tmp37;		HX_STACK_VAR(_byteLength,"_byteLength");
										HX_STACK_LINE(296)
										{
											HX_STACK_LINE(296)
											::snow::api::buffers::ArrayBufferView tmp38 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(296)
											::snow::api::buffers::ArrayBufferView _view = tmp38;		HX_STACK_VAR(_view,"_view");
											HX_STACK_LINE(296)
											int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
											HX_STACK_LINE(296)
											bool tmp39 = false;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(296)
											if ((tmp39)){
												HX_STACK_LINE(296)
												::snow::api::buffers::TAError tmp40 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(296)
												HX_STACK_DO_THROW(tmp40);
											}
											HX_STACK_LINE(296)
											int tmp40 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(296)
											bool tmp41 = (tmp40 != (int)0);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(296)
											if ((tmp41)){
												HX_STACK_LINE(296)
												::snow::api::buffers::TAError tmp42 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(296)
												HX_STACK_DO_THROW(tmp42);
											}
											HX_STACK_LINE(296)
											int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
											HX_STACK_LINE(296)
											int tmp42 = _byteLength;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(296)
											int _new_range = tmp42;		HX_STACK_VAR(_new_range,"_new_range");
											HX_STACK_LINE(296)
											bool tmp43 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(296)
											if ((tmp43)){
												HX_STACK_LINE(296)
												::snow::api::buffers::TAError tmp44 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(296)
												HX_STACK_DO_THROW(tmp44);
											}
											HX_STACK_LINE(296)
											_view->buffer = _buffer;
											HX_STACK_LINE(296)
											_view->byteOffset = (int)0;
											HX_STACK_LINE(296)
											_view->byteLength = _byteLength;
											HX_STACK_LINE(296)
											Float tmp44 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(296)
											int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(296)
											_view->length = tmp45;
											HX_STACK_LINE(296)
											tmp34 = _view;
										}
									}
									HX_STACK_LINE(296)
									::snow::api::buffers::ArrayBufferView _colors = tmp34;		HX_STACK_VAR(_colors,"_colors");
									HX_STACK_LINE(296)
									::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
									HX_STACK_LINE(296)
									int tmp35 = geom->state->primitive_type;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(296)
									::snow::api::buffers::ArrayBufferView tmp36 = _pos;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(296)
									::snow::api::buffers::ArrayBufferView tmp37 = _tcoords;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(296)
									::snow::api::buffers::ArrayBufferView tmp38 = _colors;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(296)
									::snow::api::buffers::ArrayBufferView tmp39 = _normals;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(296)
									this->submit_buffers(tmp35,tmp36,tmp37,tmp38,tmp39);
									HX_STACK_LINE(296)
									_pos = null();
									HX_STACK_LINE(296)
									_tcoords = null();
									HX_STACK_LINE(296)
									_colors = null();
									HX_STACK_LINE(296)
									_normals = null();
									HX_STACK_LINE(296)
									this->pos_floats = (int)0;
									HX_STACK_LINE(296)
									this->tcoord_floats = (int)0;
									HX_STACK_LINE(296)
									this->color_floats = (int)0;
									HX_STACK_LINE(296)
									this->normal_floats = (int)0;
									HX_STACK_LINE(296)
									true;
								}
								HX_STACK_LINE(298)
								int tmp29 = geom->vertices->length;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(298)
								hx::AddEq(this->vert_count,tmp29);
							}
							else{
								HX_STACK_LINE(305)
								{
									HX_STACK_LINE(305)
									int tmp27 = geom->vertices->length;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(305)
									int tmp28 = this->max_verts;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(305)
									bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(305)
									if ((tmp29)){
										HX_STACK_LINE(305)
										geom->set_locked(true);
										HX_STACK_LINE(305)
										geom->dirty_based = false;
										HX_STACK_LINE(305)
										::String tmp30 = this->name;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(305)
										::String tmp31 = (HX_HCSTRING("WARNING batcher `","\xc3","\xc3","\x10","\xcf") + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(305)
										::String tmp32 = (tmp31 + HX_HCSTRING("` trying to batch a geometry `","\xe3","\xef","\x1f","\x81"));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(305)
										::String tmp33 = geom->id;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(305)
										::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(305)
										::String tmp35 = (tmp34 + HX_HCSTRING("` that has more verts than the batcher has preallocated, (","\x2d","\xaa","\x5e","\x9c"));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(305)
										int tmp36 = geom->vertices->length;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(305)
										::String tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(305)
										::String tmp38 = (tmp37 + HX_HCSTRING(" vs max of ","\xea","\xab","\xb3","\x51"));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(305)
										int tmp39 = this->max_verts;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(305)
										::String tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(305)
										::String tmp41 = (tmp40 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(305)
										::String tmp42 = (HX_HCSTRING("  i / batcher / ","\x52","\xb7","\x3e","\xd6") + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(305)
										Dynamic tmp43 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),572,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("geometry_batch","\x2d","\x43","\xe5","\x75"));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(305)
										::haxe::Log_obj::trace(tmp42,tmp43);
										HX_STACK_LINE(305)
										::String tmp44 = HX_HCSTRING("  i / batcher / WARNING geometry has been marked as direct submit, and will be submitted independently!","\x0a","\xd8","\x5d","\xb6");		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(305)
										Dynamic tmp45 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),573,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("geometry_batch","\x2d","\x43","\xe5","\x75"));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(305)
										::haxe::Log_obj::trace(tmp44,tmp45);
										HX_STACK_LINE(305)
										Dynamic();
									}
									else{
										HX_STACK_LINE(305)
										int tmp30 = geom->vertices->length;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(305)
										int tmp31 = this->pos_floats;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(305)
										Float tmp32 = (Float(tmp31) / Float((int)4));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(305)
										Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(305)
										Float _count_after = tmp33;		HX_STACK_VAR(_count_after,"_count_after");
										HX_STACK_LINE(305)
										Float tmp34 = _count_after;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(305)
										int tmp35 = this->max_verts;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(305)
										bool tmp36 = (tmp34 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(305)
										if ((tmp36)){
											HX_STACK_LINE(305)
											int tmp37 = this->pos_floats;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(305)
											bool tmp38 = (tmp37 == (int)0);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(305)
											if ((tmp38)){
												HX_STACK_LINE(305)
												false;
											}
											else{
												HX_STACK_LINE(305)
												int tmp39 = this->pos_floats;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(305)
												int tmp40 = this->max_floats;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(305)
												bool tmp41 = (tmp39 > tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(305)
												if ((tmp41)){
													HX_STACK_LINE(305)
													HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
												}
												HX_STACK_LINE(305)
												::snow::api::buffers::ArrayBufferView tmp42;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(305)
												{
													HX_STACK_LINE(305)
													::snow::api::buffers::ArrayBufferView tmp43 = this->pos_list;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(305)
													Array< unsigned char > _buffer = tmp43->buffer;		HX_STACK_VAR(_buffer,"_buffer");
													HX_STACK_LINE(305)
													int tmp44 = this->pos_floats;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(305)
													int tmp45 = (tmp44 * (int)4);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(305)
													int _byteLength = tmp45;		HX_STACK_VAR(_byteLength,"_byteLength");
													HX_STACK_LINE(305)
													{
														HX_STACK_LINE(305)
														::snow::api::buffers::ArrayBufferView tmp46 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(305)
														::snow::api::buffers::ArrayBufferView _view = tmp46;		HX_STACK_VAR(_view,"_view");
														HX_STACK_LINE(305)
														int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
														HX_STACK_LINE(305)
														bool tmp47 = false;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(305)
														if ((tmp47)){
															HX_STACK_LINE(305)
															::snow::api::buffers::TAError tmp48 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(305)
															HX_STACK_DO_THROW(tmp48);
														}
														HX_STACK_LINE(305)
														int tmp48 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(305)
														bool tmp49 = (tmp48 != (int)0);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(305)
														if ((tmp49)){
															HX_STACK_LINE(305)
															::snow::api::buffers::TAError tmp50 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(305)
															HX_STACK_DO_THROW(tmp50);
														}
														HX_STACK_LINE(305)
														int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
														HX_STACK_LINE(305)
														int tmp50 = _byteLength;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(305)
														int _new_range = tmp50;		HX_STACK_VAR(_new_range,"_new_range");
														HX_STACK_LINE(305)
														bool tmp51 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(305)
														if ((tmp51)){
															HX_STACK_LINE(305)
															::snow::api::buffers::TAError tmp52 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(305)
															HX_STACK_DO_THROW(tmp52);
														}
														HX_STACK_LINE(305)
														_view->buffer = _buffer;
														HX_STACK_LINE(305)
														_view->byteOffset = (int)0;
														HX_STACK_LINE(305)
														_view->byteLength = _byteLength;
														HX_STACK_LINE(305)
														Float tmp52 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(305)
														int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(305)
														_view->length = tmp53;
														HX_STACK_LINE(305)
														tmp42 = _view;
													}
												}
												HX_STACK_LINE(305)
												::snow::api::buffers::ArrayBufferView _pos = tmp42;		HX_STACK_VAR(_pos,"_pos");
												HX_STACK_LINE(305)
												::snow::api::buffers::ArrayBufferView tmp43;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(305)
												{
													HX_STACK_LINE(305)
													::snow::api::buffers::ArrayBufferView tmp44 = this->tcoord_list;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(305)
													Array< unsigned char > _buffer = tmp44->buffer;		HX_STACK_VAR(_buffer,"_buffer");
													HX_STACK_LINE(305)
													int tmp45 = this->tcoord_floats;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(305)
													int tmp46 = (tmp45 * (int)4);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(305)
													int _byteLength = tmp46;		HX_STACK_VAR(_byteLength,"_byteLength");
													HX_STACK_LINE(305)
													{
														HX_STACK_LINE(305)
														::snow::api::buffers::ArrayBufferView tmp47 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(305)
														::snow::api::buffers::ArrayBufferView _view = tmp47;		HX_STACK_VAR(_view,"_view");
														HX_STACK_LINE(305)
														int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
														HX_STACK_LINE(305)
														bool tmp48 = false;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(305)
														if ((tmp48)){
															HX_STACK_LINE(305)
															::snow::api::buffers::TAError tmp49 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(305)
															HX_STACK_DO_THROW(tmp49);
														}
														HX_STACK_LINE(305)
														int tmp49 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(305)
														bool tmp50 = (tmp49 != (int)0);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(305)
														if ((tmp50)){
															HX_STACK_LINE(305)
															::snow::api::buffers::TAError tmp51 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(305)
															HX_STACK_DO_THROW(tmp51);
														}
														HX_STACK_LINE(305)
														int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
														HX_STACK_LINE(305)
														int tmp51 = _byteLength;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(305)
														int _new_range = tmp51;		HX_STACK_VAR(_new_range,"_new_range");
														HX_STACK_LINE(305)
														bool tmp52 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(305)
														if ((tmp52)){
															HX_STACK_LINE(305)
															::snow::api::buffers::TAError tmp53 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(305)
															HX_STACK_DO_THROW(tmp53);
														}
														HX_STACK_LINE(305)
														_view->buffer = _buffer;
														HX_STACK_LINE(305)
														_view->byteOffset = (int)0;
														HX_STACK_LINE(305)
														_view->byteLength = _byteLength;
														HX_STACK_LINE(305)
														Float tmp53 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(305)
														int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(305)
														_view->length = tmp54;
														HX_STACK_LINE(305)
														tmp43 = _view;
													}
												}
												HX_STACK_LINE(305)
												::snow::api::buffers::ArrayBufferView _tcoords = tmp43;		HX_STACK_VAR(_tcoords,"_tcoords");
												HX_STACK_LINE(305)
												::snow::api::buffers::ArrayBufferView tmp44;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(305)
												{
													HX_STACK_LINE(305)
													::snow::api::buffers::ArrayBufferView tmp45 = this->color_list;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(305)
													Array< unsigned char > _buffer = tmp45->buffer;		HX_STACK_VAR(_buffer,"_buffer");
													HX_STACK_LINE(305)
													int tmp46 = this->color_floats;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(305)
													int tmp47 = (tmp46 * (int)4);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(305)
													int _byteLength = tmp47;		HX_STACK_VAR(_byteLength,"_byteLength");
													HX_STACK_LINE(305)
													{
														HX_STACK_LINE(305)
														::snow::api::buffers::ArrayBufferView tmp48 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(305)
														::snow::api::buffers::ArrayBufferView _view = tmp48;		HX_STACK_VAR(_view,"_view");
														HX_STACK_LINE(305)
														int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
														HX_STACK_LINE(305)
														bool tmp49 = false;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(305)
														if ((tmp49)){
															HX_STACK_LINE(305)
															::snow::api::buffers::TAError tmp50 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(305)
															HX_STACK_DO_THROW(tmp50);
														}
														HX_STACK_LINE(305)
														int tmp50 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(305)
														bool tmp51 = (tmp50 != (int)0);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(305)
														if ((tmp51)){
															HX_STACK_LINE(305)
															::snow::api::buffers::TAError tmp52 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(305)
															HX_STACK_DO_THROW(tmp52);
														}
														HX_STACK_LINE(305)
														int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
														HX_STACK_LINE(305)
														int tmp52 = _byteLength;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(305)
														int _new_range = tmp52;		HX_STACK_VAR(_new_range,"_new_range");
														HX_STACK_LINE(305)
														bool tmp53 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(305)
														if ((tmp53)){
															HX_STACK_LINE(305)
															::snow::api::buffers::TAError tmp54 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(305)
															HX_STACK_DO_THROW(tmp54);
														}
														HX_STACK_LINE(305)
														_view->buffer = _buffer;
														HX_STACK_LINE(305)
														_view->byteOffset = (int)0;
														HX_STACK_LINE(305)
														_view->byteLength = _byteLength;
														HX_STACK_LINE(305)
														Float tmp54 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(305)
														int tmp55 = ::Std_obj::_int(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(305)
														_view->length = tmp55;
														HX_STACK_LINE(305)
														tmp44 = _view;
													}
												}
												HX_STACK_LINE(305)
												::snow::api::buffers::ArrayBufferView _colors = tmp44;		HX_STACK_VAR(_colors,"_colors");
												HX_STACK_LINE(305)
												::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
												HX_STACK_LINE(305)
												int tmp45 = geom->state->primitive_type;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(305)
												::snow::api::buffers::ArrayBufferView tmp46 = _pos;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(305)
												::snow::api::buffers::ArrayBufferView tmp47 = _tcoords;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(305)
												::snow::api::buffers::ArrayBufferView tmp48 = _colors;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(305)
												::snow::api::buffers::ArrayBufferView tmp49 = _normals;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(305)
												this->submit_buffers(tmp45,tmp46,tmp47,tmp48,tmp49);
												HX_STACK_LINE(305)
												_pos = null();
												HX_STACK_LINE(305)
												_tcoords = null();
												HX_STACK_LINE(305)
												_colors = null();
												HX_STACK_LINE(305)
												_normals = null();
												HX_STACK_LINE(305)
												this->pos_floats = (int)0;
												HX_STACK_LINE(305)
												this->tcoord_floats = (int)0;
												HX_STACK_LINE(305)
												this->color_floats = (int)0;
												HX_STACK_LINE(305)
												this->normal_floats = (int)0;
												HX_STACK_LINE(305)
												true;
											}
										}
										HX_STACK_LINE(305)
										{
											HX_STACK_LINE(305)
											int tmp37 = this->pos_floats;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(305)
											int vert_index = tmp37;		HX_STACK_VAR(vert_index,"vert_index");
											HX_STACK_LINE(305)
											int tmp38 = this->tcoord_floats;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(305)
											int tcoord_index = tmp38;		HX_STACK_VAR(tcoord_index,"tcoord_index");
											HX_STACK_LINE(305)
											int tmp39 = this->color_floats;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(305)
											int color_index = tmp39;		HX_STACK_VAR(color_index,"color_index");
											HX_STACK_LINE(305)
											int tmp40 = this->normal_floats;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(305)
											int normal_index = tmp40;		HX_STACK_VAR(normal_index,"normal_index");
											HX_STACK_LINE(305)
											::snow::api::buffers::ArrayBufferView tmp41 = this->pos_list;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(305)
											::snow::api::buffers::ArrayBufferView vertlist = tmp41;		HX_STACK_VAR(vertlist,"vertlist");
											HX_STACK_LINE(305)
											::snow::api::buffers::ArrayBufferView tmp42 = this->tcoord_list;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(305)
											::snow::api::buffers::ArrayBufferView tcoordlist = tmp42;		HX_STACK_VAR(tcoordlist,"tcoordlist");
											HX_STACK_LINE(305)
											::snow::api::buffers::ArrayBufferView tmp43 = this->color_list;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(305)
											::snow::api::buffers::ArrayBufferView colorlist = tmp43;		HX_STACK_VAR(colorlist,"colorlist");
											HX_STACK_LINE(305)
											::phoenix::Matrix tmp44;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(305)
											{
												HX_STACK_LINE(305)
												::phoenix::Spatial tmp45;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(305)
												{
													HX_STACK_LINE(305)
													::phoenix::Transform _this = geom->transform;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(305)
													bool tmp46 = _this->_destroying;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(305)
													bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(305)
													if ((tmp47)){
														HX_STACK_LINE(305)
														bool tmp48 = (_this->parent != null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(305)
														if ((tmp48)){
															HX_STACK_LINE(305)
															bool tmp49 = _this->parent->dirty;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(305)
															if ((tmp49)){
																HX_STACK_LINE(305)
																_this->parent->clean();
															}
														}
														HX_STACK_LINE(305)
														bool tmp49 = _this->dirty;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(305)
														bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(305)
														if ((tmp49)){
															HX_STACK_LINE(305)
															bool tmp51 = _this->_cleaning;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(305)
															bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(305)
															tmp50 = !(tmp52);
														}
														else{
															HX_STACK_LINE(305)
															tmp50 = false;
														}
														HX_STACK_LINE(305)
														if ((tmp50)){
															HX_STACK_LINE(305)
															_this->clean();
														}
													}
													HX_STACK_LINE(305)
													tmp45 = _this->world;
												}
												HX_STACK_LINE(305)
												::phoenix::Spatial _this = tmp45;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(305)
												tmp44 = _this->matrix;
											}
											HX_STACK_LINE(305)
											::phoenix::Matrix _mat = tmp44;		HX_STACK_VAR(_mat,"_mat");
											HX_STACK_LINE(305)
											Array< Float > _el = _mat->elements;		HX_STACK_VAR(_el,"_el");
											HX_STACK_LINE(305)
											int tmp45 = geom->vertices->length;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(305)
											int _count = tmp45;		HX_STACK_VAR(_count,"_count");
											HX_STACK_LINE(305)
											int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
											HX_STACK_LINE(305)
											while((true)){
												HX_STACK_LINE(305)
												bool tmp46 = (_idx < _count);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(305)
												bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(305)
												if ((tmp47)){
													HX_STACK_LINE(305)
													break;
												}
												HX_STACK_LINE(305)
												::phoenix::geometry::Vertex tmp48 = geom->vertices->__get(_idx).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(305)
												::phoenix::geometry::Vertex v = tmp48;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(305)
												Float tmp49 = v->pos->x;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(305)
												Float _vx = tmp49;		HX_STACK_VAR(_vx,"_vx");
												HX_STACK_LINE(305)
												Float tmp50 = v->pos->y;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(305)
												Float _vy = tmp50;		HX_STACK_VAR(_vy,"_vy");
												HX_STACK_LINE(305)
												Float tmp51 = v->pos->z;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(305)
												Float _vz = tmp51;		HX_STACK_VAR(_vz,"_vz");
												HX_STACK_LINE(305)
												Float tmp52 = _el->__unsafe_get((int)0);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(305)
												Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(305)
												Float tmp54 = _vx;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(305)
												Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(305)
												Float tmp56 = _el->__unsafe_get((int)4);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(305)
												Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(305)
												Float tmp58 = _vy;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(305)
												Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(305)
												Float tmp60 = (tmp55 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(305)
												Float tmp61 = _el->__unsafe_get((int)8);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(305)
												Float tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(305)
												Float tmp63 = _vz;		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(305)
												Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(305)
												Float tmp65 = (tmp60 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(305)
												Float tmp66 = _el->__unsafe_get((int)12);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(305)
												Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(305)
												Float tmp68 = (tmp65 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(305)
												Float _tvx = tmp68;		HX_STACK_VAR(_tvx,"_tvx");
												HX_STACK_LINE(305)
												Float tmp69 = _el->__unsafe_get((int)1);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(305)
												Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(305)
												Float tmp71 = _vx;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(305)
												Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(305)
												Float tmp73 = _el->__unsafe_get((int)5);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(305)
												Float tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(305)
												Float tmp75 = _vy;		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(305)
												Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(305)
												Float tmp77 = (tmp72 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(305)
												Float tmp78 = _el->__unsafe_get((int)9);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(305)
												Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(305)
												Float tmp80 = _vz;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(305)
												Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(305)
												Float tmp82 = (tmp77 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(305)
												Float tmp83 = _el->__unsafe_get((int)13);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(305)
												Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(305)
												Float tmp85 = (tmp82 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(305)
												Float _tvy = tmp85;		HX_STACK_VAR(_tvy,"_tvy");
												HX_STACK_LINE(305)
												Float tmp86 = _el->__unsafe_get((int)2);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(305)
												Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(305)
												Float tmp88 = _vx;		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(305)
												Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(305)
												Float tmp90 = _el->__unsafe_get((int)6);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(305)
												Float tmp91 = tmp90;		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(305)
												Float tmp92 = _vy;		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(305)
												Float tmp93 = (tmp91 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(305)
												Float tmp94 = (tmp89 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(305)
												Float tmp95 = _el->__unsafe_get((int)10);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(305)
												Float tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(305)
												Float tmp97 = _vz;		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(305)
												Float tmp98 = (tmp96 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(305)
												Float tmp99 = (tmp94 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(305)
												Float tmp100 = _el->__unsafe_get((int)14);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(305)
												Float tmp101 = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(305)
												Float tmp102 = (tmp99 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(305)
												Float _tvz = tmp102;		HX_STACK_VAR(_tvz,"_tvz");
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (vert_index * (int)4)),_tvx);
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),_tvy);
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),_tvz);
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),v->pos->w);
												HX_STACK_LINE(305)
												hx::AddEq(vert_index,(int)4);
												HX_STACK_LINE(305)
												::phoenix::geometry::TextureCoord tmp103 = v->uv->uv0;		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(305)
												::phoenix::geometry::TextureCoord _vuv = tmp103;		HX_STACK_VAR(_vuv,"_vuv");
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
												HX_STACK_LINE(305)
												hx::AddEq(tcoord_index,(int)4);
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (color_index * (int)4)),v->color->r);
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),v->color->g);
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),v->color->b);
												HX_STACK_LINE(305)
												::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),v->color->a);
												HX_STACK_LINE(305)
												hx::AddEq(color_index,(int)4);
												HX_STACK_LINE(305)
												hx::AddEq(normal_index,(int)4);
												HX_STACK_LINE(305)
												(_idx)++;
											}
										}
										HX_STACK_LINE(305)
										int tmp37 = geom->vertices->length;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(305)
										int tmp38 = (tmp37 * (int)4);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(305)
										int _length = tmp38;		HX_STACK_VAR(_length,"_length");
										HX_STACK_LINE(305)
										hx::AddEq(this->pos_floats,_length);
										HX_STACK_LINE(305)
										hx::AddEq(this->tcoord_floats,_length);
										HX_STACK_LINE(305)
										hx::AddEq(this->color_floats,_length);
										HX_STACK_LINE(305)
										hx::AddEq(this->normal_floats,_length);
									}
								}
								HX_STACK_LINE(308)
								(this->dynamic_batched_count)++;
								HX_STACK_LINE(309)
								int tmp27 = geom->vertices->length;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(309)
								hx::AddEq(this->vert_count,tmp27);
							}
						}
						HX_STACK_LINE(316)
						bool tmp17 = persist_immediate;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(316)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(316)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(316)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(316)
						if ((tmp19)){
							HX_STACK_LINE(316)
							tmp20 = geom->immediate;
						}
						else{
							HX_STACK_LINE(316)
							tmp20 = false;
						}
						HX_STACK_LINE(316)
						if ((tmp20)){
							HX_STACK_LINE(318)
							geom->dropped = true;
							HX_STACK_LINE(320)
							::phoenix::geometry::Geometry tmp21 = geom;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(320)
							this->_dropped->push(tmp21);
						}
					}
				}
			}
		}
		HX_STACK_LINE(330)
		int tmp1 = this->pos_floats;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		if ((tmp2)){
			HX_STACK_LINE(330)
			tmp3 = (geom != null());
		}
		else{
			HX_STACK_LINE(330)
			tmp3 = false;
		}
		HX_STACK_LINE(330)
		if ((tmp3)){
			HX_STACK_LINE(333)
			::phoenix::BatchState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(333)
			::phoenix::geometry::Geometry tmp5 = geom;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			tmp4->update(tmp5);
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::phoenix::BatchState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(335)
				::phoenix::BatchState _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(335)
				bool tmp7 = _this->geom_state->dirty;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(335)
				if ((tmp7)){
					HX_STACK_LINE(335)
					::phoenix::Texture tmp8 = _this->geom_state->texture;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(335)
					bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(335)
					if ((tmp9)){
						HX_STACK_LINE(335)
						Dynamic tmp10 = _this->last_texture_id;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(335)
						::phoenix::Texture tmp11 = _this->geom_state->texture;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(335)
						::String tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(335)
						bool tmp13 = (tmp10 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(335)
						if ((tmp13)){
							HX_STACK_LINE(335)
							::phoenix::Texture tmp14 = _this->geom_state->texture;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(335)
							_this->last_texture_id = tmp14->id;
							HX_STACK_LINE(335)
							::phoenix::Texture tmp15 = _this->geom_state->texture;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(335)
							::opengl::GLObject tmp16 = tmp15->texture;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(335)
							bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(335)
							if ((tmp17)){
								HX_STACK_LINE(335)
								::phoenix::Texture tmp18 = _this->geom_state->texture;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(335)
								tmp18->bind();
							}
						}
					}
					else{
						HX_STACK_LINE(335)
						::phoenix::Renderer tmp10 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(335)
						tmp10->state->bindTexture2D(null());
						HX_STACK_LINE(335)
						_this->last_texture_id = null();
					}
					HX_STACK_LINE(335)
					::phoenix::Shader tmp10 = this->shader;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(335)
					bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(335)
					::phoenix::Shader tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(335)
					if ((tmp11)){
						HX_STACK_LINE(335)
						tmp12 = _this->geom_state->shader;
					}
					else{
						HX_STACK_LINE(335)
						tmp12 = this->shader;
					}
					HX_STACK_LINE(335)
					::phoenix::Shader _shader = tmp12;		HX_STACK_VAR(_shader,"_shader");
					HX_STACK_LINE(335)
					bool tmp13 = (_shader == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(335)
					if ((tmp13)){
						HX_STACK_LINE(335)
						::phoenix::Texture tmp14 = _this->geom_state->texture;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(335)
						bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(335)
						if ((tmp15)){
							HX_STACK_LINE(335)
							::phoenix::Renderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(335)
							Dynamic tmp17 = tmp16->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(335)
							_shader = tmp17->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
						}
						else{
							HX_STACK_LINE(335)
							::phoenix::Renderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(335)
							Dynamic tmp17 = tmp16->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(335)
							_shader = tmp17->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
						}
					}
					HX_STACK_LINE(335)
					::opengl::GLObject tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						int _id = _this->last_shader_id;		HX_STACK_VAR(_id,"_id");
						HX_STACK_LINE(335)
						::opengl::GLObject tmp15 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(335)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(335)
					::opengl::GLObject tmp15 = _shader->program;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(335)
					bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(335)
					if ((tmp16)){
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							bool tmp17 = _shader->no_default_uniforms;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(335)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(335)
							if ((tmp18)){
								HX_STACK_LINE(335)
								{
									HX_STACK_LINE(335)
									::phoenix::Camera tmp19 = this->view;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(335)
									::snow::api::buffers::ArrayBufferView _value = tmp19->proj_arr;		HX_STACK_VAR(_value,"_value");
									HX_STACK_LINE(335)
									{
										HX_STACK_LINE(335)
										::phoenix::Uniforms _this1 = _shader->uniforms;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(335)
										::opengl::GLObject tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(335)
										{
											HX_STACK_LINE(335)
											::opengl::GLObject program = _shader->program;		HX_STACK_VAR(program,"program");
											HX_STACK_LINE(335)
											{
												HX_STACK_LINE(335)
												bool tmp21 = (program == null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(335)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(335)
												if ((tmp21)){
													HX_STACK_LINE(335)
													tmp22 = (int)0;
												}
												else{
													HX_STACK_LINE(335)
													tmp22 = program->id;
												}
												HX_STACK_LINE(335)
												int tmp23 = glGetUniformLocation(tmp22,HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(335)
												int _id = tmp23;		HX_STACK_VAR(_id,"_id");
												HX_STACK_LINE(335)
												::opengl::GLObject tmp24 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(335)
												tmp20 = tmp24;
											}
										}
										HX_STACK_LINE(335)
										::opengl::GLObject _location = tmp20;		HX_STACK_VAR(_location,"_location");
										HX_STACK_LINE(335)
										::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp21 = _this1->matrix4arrs->get(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(335)
										::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp21;		HX_STACK_VAR(_matrix4,"_matrix4");
										HX_STACK_LINE(335)
										bool tmp22 = (_matrix4 != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(335)
										if ((tmp22)){
											HX_STACK_LINE(335)
											_matrix4->value = _value;
										}
										else{
											HX_STACK_LINE(335)
											::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp23 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),_value,_location);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(335)
											_matrix4 = tmp23;
											HX_STACK_LINE(335)
											::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp24 = _matrix4;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(335)
											_this1->matrix4arrs->set(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),tmp24);
										}
										HX_STACK_LINE(335)
										::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp23 = _matrix4;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(335)
										_this1->dirty_matrix4arrs->push(tmp23);
									}
								}
								HX_STACK_LINE(335)
								{
									HX_STACK_LINE(335)
									::phoenix::Camera tmp19 = this->view;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(335)
									::snow::api::buffers::ArrayBufferView _value = tmp19->view_inverse_arr;		HX_STACK_VAR(_value,"_value");
									HX_STACK_LINE(335)
									{
										HX_STACK_LINE(335)
										::phoenix::Uniforms _this1 = _shader->uniforms;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(335)
										::opengl::GLObject tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(335)
										{
											HX_STACK_LINE(335)
											::opengl::GLObject program = _shader->program;		HX_STACK_VAR(program,"program");
											HX_STACK_LINE(335)
											{
												HX_STACK_LINE(335)
												bool tmp21 = (program == null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(335)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(335)
												if ((tmp21)){
													HX_STACK_LINE(335)
													tmp22 = (int)0;
												}
												else{
													HX_STACK_LINE(335)
													tmp22 = program->id;
												}
												HX_STACK_LINE(335)
												int tmp23 = glGetUniformLocation(tmp22,HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(335)
												int _id = tmp23;		HX_STACK_VAR(_id,"_id");
												HX_STACK_LINE(335)
												::opengl::GLObject tmp24 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(335)
												tmp20 = tmp24;
											}
										}
										HX_STACK_LINE(335)
										::opengl::GLObject _location = tmp20;		HX_STACK_VAR(_location,"_location");
										HX_STACK_LINE(335)
										::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp21 = _this1->matrix4arrs->get(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(335)
										::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp21;		HX_STACK_VAR(_matrix4,"_matrix4");
										HX_STACK_LINE(335)
										bool tmp22 = (_matrix4 != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(335)
										if ((tmp22)){
											HX_STACK_LINE(335)
											_matrix4->value = _value;
										}
										else{
											HX_STACK_LINE(335)
											::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp23 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),_value,_location);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(335)
											_matrix4 = tmp23;
											HX_STACK_LINE(335)
											::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp24 = _matrix4;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(335)
											_this1->matrix4arrs->set(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),tmp24);
										}
										HX_STACK_LINE(335)
										::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp23 = _matrix4;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(335)
										_this1->dirty_matrix4arrs->push(tmp23);
									}
								}
							}
						}
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							_shader->use();
							HX_STACK_LINE(335)
							_shader->uniforms->apply();
							HX_STACK_LINE(335)
							::phoenix::Renderer tmp17 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(335)
							tmp17->state->activeTexture((int)33984);
						}
						HX_STACK_LINE(335)
						Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							::opengl::GLObject this1 = _shader->program;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(335)
							bool tmp18 = (this1 == null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(335)
							if ((tmp18)){
								HX_STACK_LINE(335)
								tmp17 = (int)0;
							}
							else{
								HX_STACK_LINE(335)
								tmp17 = this1->id;
							}
						}
						HX_STACK_LINE(335)
						_this->last_shader_id = tmp17;
					}
				}
				HX_STACK_LINE(335)
				bool tmp8 = _this->geom_state->clip;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(335)
				if ((tmp8)){
					HX_STACK_LINE(335)
					bool tmp9 = _this->is_clipping;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(335)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(335)
					if ((tmp10)){
						HX_STACK_LINE(335)
						glEnable((int)3089);
						HX_STACK_LINE(335)
						_this->is_clipping = true;
					}
					HX_STACK_LINE(335)
					bool tmp11 = (_this->clip_rect != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(335)
					if ((tmp11)){
						HX_STACK_LINE(335)
						::phoenix::Rectangle tmp12 = _this->last_clip_rect;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(335)
						bool tmp13 = _this->clip_rect->equal(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(335)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(335)
						if ((tmp14)){
							HX_STACK_LINE(335)
							::phoenix::Renderer tmp15 = this->renderer;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(335)
							Float tmp16 = _this->clip_rect->x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(335)
							Float tmp17 = _this->clip_rect->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(335)
							Float tmp18 = _this->clip_rect->w;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(335)
							Float tmp19 = _this->clip_rect->h;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(335)
							tmp15->state->scissor(tmp16,tmp17,tmp18,tmp19);
						}
					}
				}
				else{
					HX_STACK_LINE(335)
					bool tmp9 = _this->is_clipping;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(335)
					if ((tmp9)){
						HX_STACK_LINE(335)
						glDisable((int)3089);
						HX_STACK_LINE(335)
						_this->is_clipping = false;
					}
				}
				HX_STACK_LINE(335)
				_this->geom_state->dirty = false;
			}
			HX_STACK_LINE(337)
			int tmp6 = this->pos_floats;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(337)
			bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(337)
			if ((tmp7)){
				HX_STACK_LINE(337)
				false;
			}
			else{
				HX_STACK_LINE(337)
				int tmp8 = this->pos_floats;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(337)
				int tmp9 = this->max_floats;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(337)
				bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(337)
				if ((tmp10)){
					HX_STACK_LINE(337)
					HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
				}
				HX_STACK_LINE(337)
				::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					::snow::api::buffers::ArrayBufferView tmp12 = this->pos_list;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(337)
					Array< unsigned char > _buffer = tmp12->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(337)
					int tmp13 = this->pos_floats;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(337)
					int tmp14 = (tmp13 * (int)4);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(337)
					int _byteLength = tmp14;		HX_STACK_VAR(_byteLength,"_byteLength");
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(337)
						::snow::api::buffers::ArrayBufferView _view = tmp15;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(337)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(337)
						bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(337)
						if ((tmp16)){
							HX_STACK_LINE(337)
							::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(337)
							HX_STACK_DO_THROW(tmp17);
						}
						HX_STACK_LINE(337)
						int tmp17 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(337)
						bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(337)
						if ((tmp18)){
							HX_STACK_LINE(337)
							::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(337)
							HX_STACK_DO_THROW(tmp19);
						}
						HX_STACK_LINE(337)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(337)
						int tmp19 = _byteLength;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(337)
						int _new_range = tmp19;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(337)
						bool tmp20 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(337)
						if ((tmp20)){
							HX_STACK_LINE(337)
							::snow::api::buffers::TAError tmp21 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(337)
							HX_STACK_DO_THROW(tmp21);
						}
						HX_STACK_LINE(337)
						_view->buffer = _buffer;
						HX_STACK_LINE(337)
						_view->byteOffset = (int)0;
						HX_STACK_LINE(337)
						_view->byteLength = _byteLength;
						HX_STACK_LINE(337)
						Float tmp21 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(337)
						int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(337)
						_view->length = tmp22;
						HX_STACK_LINE(337)
						tmp11 = _view;
					}
				}
				HX_STACK_LINE(337)
				::snow::api::buffers::ArrayBufferView _pos = tmp11;		HX_STACK_VAR(_pos,"_pos");
				HX_STACK_LINE(337)
				::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					::snow::api::buffers::ArrayBufferView tmp13 = this->tcoord_list;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(337)
					Array< unsigned char > _buffer = tmp13->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(337)
					int tmp14 = this->tcoord_floats;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(337)
					int tmp15 = (tmp14 * (int)4);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(337)
					int _byteLength = tmp15;		HX_STACK_VAR(_byteLength,"_byteLength");
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(337)
						::snow::api::buffers::ArrayBufferView _view = tmp16;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(337)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(337)
						bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(337)
						if ((tmp17)){
							HX_STACK_LINE(337)
							::snow::api::buffers::TAError tmp18 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(337)
							HX_STACK_DO_THROW(tmp18);
						}
						HX_STACK_LINE(337)
						int tmp18 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(337)
						bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(337)
						if ((tmp19)){
							HX_STACK_LINE(337)
							::snow::api::buffers::TAError tmp20 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(337)
							HX_STACK_DO_THROW(tmp20);
						}
						HX_STACK_LINE(337)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(337)
						int tmp20 = _byteLength;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(337)
						int _new_range = tmp20;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(337)
						bool tmp21 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(337)
						if ((tmp21)){
							HX_STACK_LINE(337)
							::snow::api::buffers::TAError tmp22 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(337)
							HX_STACK_DO_THROW(tmp22);
						}
						HX_STACK_LINE(337)
						_view->buffer = _buffer;
						HX_STACK_LINE(337)
						_view->byteOffset = (int)0;
						HX_STACK_LINE(337)
						_view->byteLength = _byteLength;
						HX_STACK_LINE(337)
						Float tmp22 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(337)
						int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(337)
						_view->length = tmp23;
						HX_STACK_LINE(337)
						tmp12 = _view;
					}
				}
				HX_STACK_LINE(337)
				::snow::api::buffers::ArrayBufferView _tcoords = tmp12;		HX_STACK_VAR(_tcoords,"_tcoords");
				HX_STACK_LINE(337)
				::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					::snow::api::buffers::ArrayBufferView tmp14 = this->color_list;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(337)
					Array< unsigned char > _buffer = tmp14->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(337)
					int tmp15 = this->color_floats;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(337)
					int tmp16 = (tmp15 * (int)4);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(337)
					int _byteLength = tmp16;		HX_STACK_VAR(_byteLength,"_byteLength");
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(337)
						::snow::api::buffers::ArrayBufferView _view = tmp17;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(337)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(337)
						bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(337)
						if ((tmp18)){
							HX_STACK_LINE(337)
							::snow::api::buffers::TAError tmp19 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(337)
							HX_STACK_DO_THROW(tmp19);
						}
						HX_STACK_LINE(337)
						int tmp19 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(337)
						bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(337)
						if ((tmp20)){
							HX_STACK_LINE(337)
							::snow::api::buffers::TAError tmp21 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(337)
							HX_STACK_DO_THROW(tmp21);
						}
						HX_STACK_LINE(337)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(337)
						int tmp21 = _byteLength;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(337)
						int _new_range = tmp21;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(337)
						bool tmp22 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(337)
						if ((tmp22)){
							HX_STACK_LINE(337)
							::snow::api::buffers::TAError tmp23 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(337)
							HX_STACK_DO_THROW(tmp23);
						}
						HX_STACK_LINE(337)
						_view->buffer = _buffer;
						HX_STACK_LINE(337)
						_view->byteOffset = (int)0;
						HX_STACK_LINE(337)
						_view->byteLength = _byteLength;
						HX_STACK_LINE(337)
						Float tmp23 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(337)
						int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(337)
						_view->length = tmp24;
						HX_STACK_LINE(337)
						tmp13 = _view;
					}
				}
				HX_STACK_LINE(337)
				::snow::api::buffers::ArrayBufferView _colors = tmp13;		HX_STACK_VAR(_colors,"_colors");
				HX_STACK_LINE(337)
				::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
				HX_STACK_LINE(337)
				::phoenix::BatchState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(337)
				int tmp15 = tmp14->last_geom_state->primitive_type;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(337)
				::snow::api::buffers::ArrayBufferView tmp16 = _pos;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(337)
				::snow::api::buffers::ArrayBufferView tmp17 = _tcoords;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(337)
				::snow::api::buffers::ArrayBufferView tmp18 = _colors;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(337)
				::snow::api::buffers::ArrayBufferView tmp19 = _normals;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(337)
				this->submit_buffers(tmp15,tmp16,tmp17,tmp18,tmp19);
				HX_STACK_LINE(337)
				_pos = null();
				HX_STACK_LINE(337)
				_tcoords = null();
				HX_STACK_LINE(337)
				_colors = null();
				HX_STACK_LINE(337)
				_normals = null();
				HX_STACK_LINE(337)
				this->pos_floats = (int)0;
				HX_STACK_LINE(337)
				this->tcoord_floats = (int)0;
				HX_STACK_LINE(337)
				this->color_floats = (int)0;
				HX_STACK_LINE(337)
				this->normal_floats = (int)0;
				HX_STACK_LINE(337)
				true;
			}
		}
		HX_STACK_LINE(342)
		::phoenix::BatchState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(342)
		tmp4->deactivate(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(344)
		this->state = null();
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			int tmp5 = this->_dropped->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(346)
			bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(346)
			if ((tmp6)){
				HX_STACK_LINE(346)
				{
					HX_STACK_LINE(346)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(346)
					Array< ::Dynamic > _g1 = this->_dropped;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(346)
					while((true)){
						HX_STACK_LINE(346)
						bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(346)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(346)
						if ((tmp8)){
							HX_STACK_LINE(346)
							break;
						}
						HX_STACK_LINE(346)
						::phoenix::geometry::Geometry tmp9 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(346)
						::phoenix::geometry::Geometry geom1 = tmp9;		HX_STACK_VAR(geom1,"geom1");
						HX_STACK_LINE(346)
						++(_g);
						HX_STACK_LINE(346)
						geom1->drop(null());
						HX_STACK_LINE(346)
						geom1 = null();
					}
				}
				HX_STACK_LINE(346)
				this->_dropped = null();
				HX_STACK_LINE(346)
				this->_dropped = Array_obj< ::Dynamic >::__new();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,batch,(void))

Void Batcher_obj::prune( ){
{
		HX_STACK_FRAME("phoenix.Batcher","prune",0x29db2ce4,"phoenix.Batcher.prune","phoenix/Batcher.hx",350,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_LINE(353)
		int tmp = this->_dropped->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(353)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(353)
		if ((tmp1)){
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(354)
				Array< ::Dynamic > _g1 = this->_dropped;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(354)
				while((true)){
					HX_STACK_LINE(354)
					bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(354)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(354)
					if ((tmp3)){
						HX_STACK_LINE(354)
						break;
					}
					HX_STACK_LINE(354)
					::phoenix::geometry::Geometry tmp4 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(354)
					::phoenix::geometry::Geometry geom = tmp4;		HX_STACK_VAR(geom,"geom");
					HX_STACK_LINE(354)
					++(_g);
					HX_STACK_LINE(355)
					geom->drop(null());
					HX_STACK_LINE(356)
					geom = null();
				}
			}
			HX_STACK_LINE(358)
			this->_dropped = null();
			HX_STACK_LINE(359)
			this->_dropped = Array_obj< ::Dynamic >::__new();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,prune,(void))

Void Batcher_obj::draw( Dynamic __o_persist_immediate){
Dynamic persist_immediate = __o_persist_immediate.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","draw",0x6d59878a,"phoenix.Batcher.draw","phoenix/Batcher.hx",365,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(persist_immediate,"persist_immediate")
{
		HX_STACK_LINE(367)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		bool tmp1 = (tmp != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		if ((tmp1)){
			HX_STACK_LINE(367)
			::luxe::Debug tmp2 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(367)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(367)
			tmp2->start(tmp3,null());
		}
		HX_STACK_LINE(370)
		this->draw_calls = (int)0;
		HX_STACK_LINE(371)
		this->vert_count = (int)0;
		HX_STACK_LINE(373)
		::luxe::Emitter tmp2 = this->emitter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(373)
		tmp2->emit((int)1,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			::phoenix::Camera tmp3 = this->view;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(375)
			tmp3->process();
			HX_STACK_LINE(375)
			::phoenix::Renderer tmp4 = this->renderer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(375)
			::phoenix::Camera tmp5 = this->view;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(375)
			Float tmp6 = tmp5->viewport->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(375)
			::phoenix::Camera tmp7 = this->view;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(375)
			Float tmp8 = tmp7->viewport->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(375)
			::phoenix::Camera tmp9 = this->view;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(375)
			Float tmp10 = tmp9->viewport->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(375)
			::phoenix::Camera tmp11 = this->view;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(375)
			Float tmp12 = tmp11->viewport->h;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(375)
			tmp4->state->viewport(tmp6,tmp8,tmp10,tmp12);
		}
		HX_STACK_LINE(377)
		Dynamic tmp3 = persist_immediate;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(377)
		this->batch(tmp3);
		HX_STACK_LINE(379)
		::luxe::Emitter tmp4 = this->emitter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(379)
		tmp4->emit((int)2,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(381)
		::phoenix::Renderer tmp5 = this->renderer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(381)
		::phoenix::RendererStats _stats = tmp5->stats;		HX_STACK_VAR(_stats,"_stats");
		HX_STACK_LINE(382)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = this->geometry;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(382)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp7->root;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(382)
			bool tmp8 = (_node == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(382)
			if ((tmp8)){
				HX_STACK_LINE(382)
				tmp6 = (int)0;
			}
			else{
				HX_STACK_LINE(382)
				tmp6 = _node->nodecount;
			}
		}
		HX_STACK_LINE(382)
		int tmp7 = this->show_stats;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(382)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(382)
		hx::AddEq(_stats->geometry_count,tmp8);
		HX_STACK_LINE(383)
		int tmp9 = this->dynamic_batched_count;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(383)
		int tmp10 = this->show_stats;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(383)
		int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(383)
		hx::AddEq(_stats->dynamic_batched_count,tmp11);
		HX_STACK_LINE(384)
		int tmp12 = this->static_batched_count;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(384)
		int tmp13 = this->show_stats;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(384)
		int tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(384)
		hx::AddEq(_stats->static_batched_count,tmp14);
		HX_STACK_LINE(385)
		int tmp15 = this->visible_count;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(385)
		int tmp16 = this->show_stats;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(385)
		int tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(385)
		hx::AddEq(_stats->visible_count,tmp17);
		HX_STACK_LINE(386)
		int tmp18 = this->draw_calls;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(386)
		int tmp19 = this->show_stats;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(386)
		int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(386)
		hx::AddEq(_stats->draw_calls,tmp20);
		HX_STACK_LINE(387)
		int tmp21 = this->vert_count;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(387)
		int tmp22 = this->show_stats;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(387)
		int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(387)
		hx::AddEq(_stats->vert_count,tmp23);
		HX_STACK_LINE(389)
		::String tmp24 = this->name;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(389)
		bool tmp25 = (tmp24 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(389)
		if ((tmp25)){
			HX_STACK_LINE(389)
			::luxe::Debug tmp26 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(389)
			::String tmp27 = this->name;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(389)
			tmp26->end(tmp27);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,draw,(void))

Void Batcher_obj::update_view( ){
{
		HX_STACK_FRAME("phoenix.Batcher","update_view",0x26fb08d5,"phoenix.Batcher.update_view","phoenix/Batcher.hx",395,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_LINE(398)
		::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		tmp->process();
		HX_STACK_LINE(403)
		::phoenix::Renderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(403)
		::phoenix::Camera tmp2 = this->view;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(403)
		Float tmp3 = tmp2->viewport->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(403)
		::phoenix::Camera tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(403)
		Float tmp5 = tmp4->viewport->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(403)
		::phoenix::Camera tmp6 = this->view;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(403)
		Float tmp7 = tmp6->viewport->w;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(403)
		::phoenix::Camera tmp8 = this->view;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(403)
		Float tmp9 = tmp8->viewport->h;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(403)
		tmp1->state->viewport(tmp3,tmp5,tmp7,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,update_view,(void))

Void Batcher_obj::apply_default_uniforms( ::phoenix::Shader _shader){
{
		HX_STACK_FRAME("phoenix.Batcher","apply_default_uniforms",0xa32f6d74,"phoenix.Batcher.apply_default_uniforms","phoenix/Batcher.hx",409,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_shader,"_shader")
		HX_STACK_LINE(410)
		bool tmp = _shader->no_default_uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(410)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(410)
		if ((tmp1)){
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				::phoenix::Camera tmp2 = this->view;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(411)
				::snow::api::buffers::ArrayBufferView _value = tmp2->proj_arr;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(411)
				{
					HX_STACK_LINE(411)
					::phoenix::Uniforms _this = _shader->uniforms;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(411)
					::opengl::GLObject tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(411)
					{
						HX_STACK_LINE(411)
						::opengl::GLObject program = _shader->program;		HX_STACK_VAR(program,"program");
						HX_STACK_LINE(411)
						{
							HX_STACK_LINE(411)
							bool tmp4 = (program == null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(411)
							int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(411)
							if ((tmp4)){
								HX_STACK_LINE(411)
								tmp5 = (int)0;
							}
							else{
								HX_STACK_LINE(411)
								tmp5 = program->id;
							}
							HX_STACK_LINE(411)
							int tmp6 = glGetUniformLocation(tmp5,HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(411)
							int _id = tmp6;		HX_STACK_VAR(_id,"_id");
							HX_STACK_LINE(411)
							::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(411)
							tmp3 = tmp7;
						}
					}
					HX_STACK_LINE(411)
					::opengl::GLObject _location = tmp3;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(411)
					::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp4 = _this->matrix4arrs->get(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(411)
					::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp4;		HX_STACK_VAR(_matrix4,"_matrix4");
					HX_STACK_LINE(411)
					bool tmp5 = (_matrix4 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(411)
					if ((tmp5)){
						HX_STACK_LINE(411)
						_matrix4->value = _value;
					}
					else{
						HX_STACK_LINE(411)
						::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp6 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),_value,_location);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(411)
						_matrix4 = tmp6;
						HX_STACK_LINE(411)
						::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp7 = _matrix4;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(411)
						_this->matrix4arrs->set(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),tmp7);
					}
					HX_STACK_LINE(411)
					::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp6 = _matrix4;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(411)
					_this->dirty_matrix4arrs->push(tmp6);
				}
			}
			HX_STACK_LINE(412)
			{
				HX_STACK_LINE(412)
				::phoenix::Camera tmp2 = this->view;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(412)
				::snow::api::buffers::ArrayBufferView _value = tmp2->view_inverse_arr;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(412)
				{
					HX_STACK_LINE(412)
					::phoenix::Uniforms _this = _shader->uniforms;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(412)
					::opengl::GLObject tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(412)
					{
						HX_STACK_LINE(412)
						::opengl::GLObject program = _shader->program;		HX_STACK_VAR(program,"program");
						HX_STACK_LINE(412)
						{
							HX_STACK_LINE(412)
							bool tmp4 = (program == null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(412)
							int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(412)
							if ((tmp4)){
								HX_STACK_LINE(412)
								tmp5 = (int)0;
							}
							else{
								HX_STACK_LINE(412)
								tmp5 = program->id;
							}
							HX_STACK_LINE(412)
							int tmp6 = glGetUniformLocation(tmp5,HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(412)
							int _id = tmp6;		HX_STACK_VAR(_id,"_id");
							HX_STACK_LINE(412)
							::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(412)
							tmp3 = tmp7;
						}
					}
					HX_STACK_LINE(412)
					::opengl::GLObject _location = tmp3;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(412)
					::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp4 = _this->matrix4arrs->get(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(412)
					::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp4;		HX_STACK_VAR(_matrix4,"_matrix4");
					HX_STACK_LINE(412)
					bool tmp5 = (_matrix4 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(412)
					if ((tmp5)){
						HX_STACK_LINE(412)
						_matrix4->value = _value;
					}
					else{
						HX_STACK_LINE(412)
						::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp6 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),_value,_location);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(412)
						_matrix4 = tmp6;
						HX_STACK_LINE(412)
						::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp7 = _matrix4;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(412)
						_this->matrix4arrs->set(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),tmp7);
					}
					HX_STACK_LINE(412)
					::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp6 = _matrix4;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(412)
					_this->dirty_matrix4arrs->push(tmp6);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,apply_default_uniforms,(void))

Void Batcher_obj::submit_geometry( ::phoenix::geometry::Geometry _geom,::phoenix::Shader _shader){
{
		HX_STACK_FRAME("phoenix.Batcher","submit_geometry",0x018ac533,"phoenix.Batcher.submit_geometry","phoenix/Batcher.hx",420,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_geom,"_geom")
		HX_STACK_ARG(_shader,"_shader")
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			bool tmp = _geom->buffer_based;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(422)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(422)
			if ((tmp1)){
				HX_STACK_LINE(214)
				::String tmp2 = HX_HCSTRING(" ( Only buffer based geometry can be submitted directly","\xab","\x29","\x69","\x3a");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(214)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(422)
				::String tmp4 = (HX_HCSTRING("_geom.buffer_based","\x27","\x99","\x8e","\x98") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(422)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(422)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(424)
		bool tmp = _geom->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(424)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(424)
		if ((tmp1)){
			HX_STACK_LINE(424)
			return null();
		}
		HX_STACK_LINE(425)
		bool tmp2 = (_shader == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(425)
		if ((tmp2)){
			HX_STACK_LINE(425)
			::phoenix::Shader tmp3 = _geom->state->shader;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(425)
			_shader = tmp3;
		}
		HX_STACK_LINE(426)
		::phoenix::Shader tmp3 = this->shader;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(426)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(426)
		if ((tmp4)){
			HX_STACK_LINE(426)
			::phoenix::Shader tmp5 = this->shader;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(426)
			_shader = tmp5;
		}
		HX_STACK_LINE(428)
		{
			HX_STACK_LINE(428)
			_shader->use();
			HX_STACK_LINE(428)
			_shader->uniforms->apply();
			HX_STACK_LINE(428)
			::phoenix::Renderer tmp5 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(428)
			tmp5->state->activeTexture((int)33984);
		}
		HX_STACK_LINE(429)
		{
			HX_STACK_LINE(429)
			bool tmp5 = _shader->no_default_uniforms;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(429)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(429)
			if ((tmp6)){
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::phoenix::Camera tmp7 = this->view;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(429)
					::snow::api::buffers::ArrayBufferView _value = tmp7->proj_arr;		HX_STACK_VAR(_value,"_value");
					HX_STACK_LINE(429)
					{
						HX_STACK_LINE(429)
						::phoenix::Uniforms _this = _shader->uniforms;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(429)
						::opengl::GLObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(429)
						{
							HX_STACK_LINE(429)
							::opengl::GLObject program = _shader->program;		HX_STACK_VAR(program,"program");
							HX_STACK_LINE(429)
							{
								HX_STACK_LINE(429)
								bool tmp9 = (program == null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(429)
								int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(429)
								if ((tmp9)){
									HX_STACK_LINE(429)
									tmp10 = (int)0;
								}
								else{
									HX_STACK_LINE(429)
									tmp10 = program->id;
								}
								HX_STACK_LINE(429)
								int tmp11 = glGetUniformLocation(tmp10,HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(429)
								int _id = tmp11;		HX_STACK_VAR(_id,"_id");
								HX_STACK_LINE(429)
								::opengl::GLObject tmp12 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(429)
								tmp8 = tmp12;
							}
						}
						HX_STACK_LINE(429)
						::opengl::GLObject _location = tmp8;		HX_STACK_VAR(_location,"_location");
						HX_STACK_LINE(429)
						::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp9 = _this->matrix4arrs->get(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(429)
						::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp9;		HX_STACK_VAR(_matrix4,"_matrix4");
						HX_STACK_LINE(429)
						bool tmp10 = (_matrix4 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(429)
						if ((tmp10)){
							HX_STACK_LINE(429)
							_matrix4->value = _value;
						}
						else{
							HX_STACK_LINE(429)
							::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp11 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),_value,_location);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(429)
							_matrix4 = tmp11;
							HX_STACK_LINE(429)
							::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp12 = _matrix4;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(429)
							_this->matrix4arrs->set(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),tmp12);
						}
						HX_STACK_LINE(429)
						::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp11 = _matrix4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(429)
						_this->dirty_matrix4arrs->push(tmp11);
					}
				}
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::phoenix::Camera tmp7 = this->view;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(429)
					::snow::api::buffers::ArrayBufferView _value = tmp7->view_inverse_arr;		HX_STACK_VAR(_value,"_value");
					HX_STACK_LINE(429)
					{
						HX_STACK_LINE(429)
						::phoenix::Uniforms _this = _shader->uniforms;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(429)
						::opengl::GLObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(429)
						{
							HX_STACK_LINE(429)
							::opengl::GLObject program = _shader->program;		HX_STACK_VAR(program,"program");
							HX_STACK_LINE(429)
							{
								HX_STACK_LINE(429)
								bool tmp9 = (program == null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(429)
								int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(429)
								if ((tmp9)){
									HX_STACK_LINE(429)
									tmp10 = (int)0;
								}
								else{
									HX_STACK_LINE(429)
									tmp10 = program->id;
								}
								HX_STACK_LINE(429)
								int tmp11 = glGetUniformLocation(tmp10,HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(429)
								int _id = tmp11;		HX_STACK_VAR(_id,"_id");
								HX_STACK_LINE(429)
								::opengl::GLObject tmp12 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(429)
								tmp8 = tmp12;
							}
						}
						HX_STACK_LINE(429)
						::opengl::GLObject _location = tmp8;		HX_STACK_VAR(_location,"_location");
						HX_STACK_LINE(429)
						::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp9 = _this->matrix4arrs->get(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(429)
						::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp9;		HX_STACK_VAR(_matrix4,"_matrix4");
						HX_STACK_LINE(429)
						bool tmp10 = (_matrix4 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(429)
						if ((tmp10)){
							HX_STACK_LINE(429)
							_matrix4->value = _value;
						}
						else{
							HX_STACK_LINE(429)
							::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp11 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),_value,_location);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(429)
							_matrix4 = tmp11;
							HX_STACK_LINE(429)
							::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp12 = _matrix4;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(429)
							_this->matrix4arrs->set(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),tmp12);
						}
						HX_STACK_LINE(429)
						::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp11 = _matrix4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(429)
						_this->dirty_matrix4arrs->push(tmp11);
					}
				}
			}
		}
		HX_STACK_LINE(430)
		_geom->uniforms->apply();
		HX_STACK_LINE(432)
		int tmp5 = _geom->vertices->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(432)
		int _length = tmp5;		HX_STACK_VAR(_length,"_length");
		HX_STACK_LINE(433)
		int tmp6 = (_length * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(433)
		int _length4 = tmp6;		HX_STACK_VAR(_length4,"_length4");
		HX_STACK_LINE(434)
		bool tmp7 = _geom->update_buffers();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(434)
		bool _updated = tmp7;		HX_STACK_VAR(_updated,"_updated");
		HX_STACK_LINE(436)
		bool tmp8 = _updated;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(436)
		if ((tmp8)){
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					::opengl::GLObject buffer = _geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(437)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(437)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(437)
					if ((tmp9)){
						HX_STACK_LINE(437)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(437)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(437)
					glBindBuffer((int)34962,tmp10);
				}
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					;;
					HX_STACK_LINE(437)
					glVertexAttribPointer((int)0, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
				}
			}
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(437)
				;;
				HX_STACK_LINE(437)
				glBufferData((int)34962, _geom->buffer_pos->byteLength, (GLvoid*)(&_geom->buffer_pos->buffer[0] + _geom->buffer_pos->byteOffset), _geom->buffer_type);
			}
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					::opengl::GLObject buffer = _geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(437)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(437)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(437)
					if ((tmp9)){
						HX_STACK_LINE(437)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(437)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(437)
					glBindBuffer((int)34962,tmp10);
				}
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					;;
					HX_STACK_LINE(437)
					glVertexAttribPointer((int)1, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
				}
			}
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(437)
				;;
				HX_STACK_LINE(437)
				glBufferData((int)34962, _geom->buffer_tcoords->byteLength, (GLvoid*)(&_geom->buffer_tcoords->buffer[0] + _geom->buffer_tcoords->byteOffset), _geom->buffer_type);
			}
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					::opengl::GLObject buffer = _geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(437)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(437)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(437)
					if ((tmp9)){
						HX_STACK_LINE(437)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(437)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(437)
					glBindBuffer((int)34962,tmp10);
				}
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					;;
					HX_STACK_LINE(437)
					glVertexAttribPointer((int)2, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
				}
			}
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(437)
				;;
				HX_STACK_LINE(437)
				glBufferData((int)34962, _geom->buffer_colors->byteLength, (GLvoid*)(&_geom->buffer_colors->buffer[0] + _geom->buffer_colors->byteOffset), _geom->buffer_type);
			}
		}
		else{
			HX_STACK_LINE(439)
			{
				HX_STACK_LINE(439)
				{
					HX_STACK_LINE(439)
					::opengl::GLObject buffer = _geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(439)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(439)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(439)
					if ((tmp9)){
						HX_STACK_LINE(439)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(439)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(439)
					glBindBuffer((int)34962,tmp10);
				}
				HX_STACK_LINE(439)
				{
					HX_STACK_LINE(439)
					;;
					HX_STACK_LINE(439)
					glVertexAttribPointer((int)0, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
				}
			}
			HX_STACK_LINE(439)
			{
				HX_STACK_LINE(439)
				{
					HX_STACK_LINE(439)
					::opengl::GLObject buffer = _geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(439)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(439)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(439)
					if ((tmp9)){
						HX_STACK_LINE(439)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(439)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(439)
					glBindBuffer((int)34962,tmp10);
				}
				HX_STACK_LINE(439)
				{
					HX_STACK_LINE(439)
					;;
					HX_STACK_LINE(439)
					glVertexAttribPointer((int)1, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
				}
			}
			HX_STACK_LINE(439)
			{
				HX_STACK_LINE(439)
				{
					HX_STACK_LINE(439)
					::opengl::GLObject buffer = _geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(439)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(439)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(439)
					if ((tmp9)){
						HX_STACK_LINE(439)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(439)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(439)
					glBindBuffer((int)34962,tmp10);
				}
				HX_STACK_LINE(439)
				{
					HX_STACK_LINE(439)
					;;
					HX_STACK_LINE(439)
					glVertexAttribPointer((int)2, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
				}
			}
		}
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			int tmp9 = _geom->buffer_pos->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(442)
			Float tmp10 = (Float(tmp9) / Float((int)4));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(442)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(442)
			int count = tmp11;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(442)
			int tmp12 = _geom->state->primitive_type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(442)
			int tmp13 = count;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(442)
			glDrawArrays(tmp12,(int)0,tmp13);
		}
		HX_STACK_LINE(444)
		::phoenix::Renderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(444)
		::phoenix::RendererStats _stats = tmp9->stats;		HX_STACK_VAR(_stats,"_stats");
		HX_STACK_LINE(445)
		(_stats->geometry_count)++;
		HX_STACK_LINE(446)
		(_stats->visible_count)++;
		HX_STACK_LINE(447)
		(_stats->draw_calls)++;
		HX_STACK_LINE(448)
		hx::AddEq(_stats->vert_count,_length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,submit_geometry,(void))

Void Batcher_obj::submit_buffers( int type,::snow::api::buffers::ArrayBufferView _pos,::snow::api::buffers::ArrayBufferView _tcoords,::snow::api::buffers::ArrayBufferView _colors,::snow::api::buffers::ArrayBufferView _normals){
{
		HX_STACK_FRAME("phoenix.Batcher","submit_buffers",0x8abe6c12,"phoenix.Batcher.submit_buffers","phoenix/Batcher.hx",454,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_ARG(_tcoords,"_tcoords")
		HX_STACK_ARG(_colors,"_colors")
		HX_STACK_ARG(_normals,"_normals")
		HX_STACK_LINE(456)
		::opengl::GLObject tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(456)
		{
			HX_STACK_LINE(456)
			int tmp1 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(456)
			int _id = tmp1;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(456)
			::opengl::GLObject tmp2 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(456)
			tmp = tmp2;
		}
		HX_STACK_LINE(456)
		::opengl::GLObject pb = tmp;		HX_STACK_VAR(pb,"pb");
		HX_STACK_LINE(457)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(457)
		{
			HX_STACK_LINE(457)
			int tmp2 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(457)
			int _id = tmp2;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(457)
			::opengl::GLObject tmp3 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(457)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(457)
		::opengl::GLObject cb = tmp1;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(458)
		::opengl::GLObject tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(458)
		{
			HX_STACK_LINE(458)
			int tmp3 = linc::opengl::webgl::createBuffer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(458)
			int _id = tmp3;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(458)
			::opengl::GLObject tmp4 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(458)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(458)
		::opengl::GLObject tb = tmp2;		HX_STACK_VAR(tb,"tb");
		HX_STACK_LINE(463)
		bool tmp3 = (pb == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(463)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(463)
		if ((tmp3)){
			HX_STACK_LINE(463)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(463)
			tmp4 = pb->id;
		}
		HX_STACK_LINE(463)
		glBindBuffer((int)34962,tmp4);
		HX_STACK_LINE(464)
		{
			HX_STACK_LINE(464)
			;;
			HX_STACK_LINE(464)
			glVertexAttribPointer((int)0, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
		}
		HX_STACK_LINE(465)
		{
			HX_STACK_LINE(465)
			;;
			HX_STACK_LINE(465)
			glBufferData((int)34962, _pos->byteLength, (GLvoid*)(&_pos->buffer[0] + _pos->byteOffset), (int)35040);
		}
		HX_STACK_LINE(467)
		bool tmp5 = (tb == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(467)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(467)
		if ((tmp5)){
			HX_STACK_LINE(467)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(467)
			tmp6 = tb->id;
		}
		HX_STACK_LINE(467)
		glBindBuffer((int)34962,tmp6);
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			;;
			HX_STACK_LINE(468)
			glVertexAttribPointer((int)1, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
		}
		HX_STACK_LINE(469)
		{
			HX_STACK_LINE(469)
			;;
			HX_STACK_LINE(469)
			glBufferData((int)34962, _tcoords->byteLength, (GLvoid*)(&_tcoords->buffer[0] + _tcoords->byteOffset), (int)35040);
		}
		HX_STACK_LINE(471)
		bool tmp7 = (cb == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(471)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(471)
		if ((tmp7)){
			HX_STACK_LINE(471)
			tmp8 = (int)0;
		}
		else{
			HX_STACK_LINE(471)
			tmp8 = cb->id;
		}
		HX_STACK_LINE(471)
		glBindBuffer((int)34962,tmp8);
		HX_STACK_LINE(472)
		{
			HX_STACK_LINE(472)
			;;
			HX_STACK_LINE(472)
			glVertexAttribPointer((int)2, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
		}
		HX_STACK_LINE(473)
		{
			HX_STACK_LINE(473)
			;;
			HX_STACK_LINE(473)
			glBufferData((int)34962, _colors->byteLength, (GLvoid*)(&_colors->buffer[0] + _colors->byteOffset), (int)35040);
		}
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(482)
			int tmp9 = _pos->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(482)
			Float tmp10 = (Float(tmp9) / Float((int)4));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(482)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(482)
			int count = tmp11;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(482)
			int tmp12 = type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(482)
			int tmp13 = count;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(482)
			glDrawArrays(tmp12,(int)0,tmp13);
		}
		HX_STACK_LINE(484)
		bool tmp9 = (pb == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(484)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(484)
		if ((tmp9)){
			HX_STACK_LINE(484)
			tmp10 = (int)0;
		}
		else{
			HX_STACK_LINE(484)
			tmp10 = pb->id;
		}
		HX_STACK_LINE(484)
		linc::opengl::webgl::deleteBuffer(tmp10);
		HX_STACK_LINE(485)
		bool tmp11 = (cb == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(485)
		int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(485)
		if ((tmp11)){
			HX_STACK_LINE(485)
			tmp12 = (int)0;
		}
		else{
			HX_STACK_LINE(485)
			tmp12 = cb->id;
		}
		HX_STACK_LINE(485)
		linc::opengl::webgl::deleteBuffer(tmp12);
		HX_STACK_LINE(486)
		bool tmp13 = (tb == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(486)
		int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(486)
		if ((tmp13)){
			HX_STACK_LINE(486)
			tmp14 = (int)0;
		}
		else{
			HX_STACK_LINE(486)
			tmp14 = tb->id;
		}
		HX_STACK_LINE(486)
		linc::opengl::webgl::deleteBuffer(tmp14);
		HX_STACK_LINE(491)
		(this->draw_calls)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Batcher_obj,submit_buffers,(void))

bool Batcher_obj::submit_static_geometry( ::phoenix::geometry::Geometry geom){
	HX_STACK_FRAME("phoenix.Batcher","submit_static_geometry",0x9aab1742,"phoenix.Batcher.submit_static_geometry","phoenix/Batcher.hx",497,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(geom,"geom")
	HX_STACK_LINE(499)
	int tmp = geom->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(499)
	int _length = tmp;		HX_STACK_VAR(_length,"_length");
	HX_STACK_LINE(501)
	bool tmp1 = (_length == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(501)
	if ((tmp1)){
		HX_STACK_LINE(502)
		return false;
	}
	HX_STACK_LINE(505)
	bool tmp2 = geom->update_buffers();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(505)
	bool _updated = tmp2;		HX_STACK_VAR(_updated,"_updated");
	HX_STACK_LINE(507)
	bool tmp3 = _updated;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(507)
	if ((tmp3)){
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				::opengl::GLObject buffer = geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(508)
				bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(508)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(508)
				if ((tmp4)){
					HX_STACK_LINE(508)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(508)
					tmp5 = buffer->id;
				}
				HX_STACK_LINE(508)
				glBindBuffer((int)34962,tmp5);
			}
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				;;
				HX_STACK_LINE(508)
				glVertexAttribPointer((int)0, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
			}
		}
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			;;
			HX_STACK_LINE(508)
			glBufferData((int)34962, geom->buffer_pos->byteLength, (GLvoid*)(&geom->buffer_pos->buffer[0] + geom->buffer_pos->byteOffset), geom->buffer_type);
		}
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				::opengl::GLObject buffer = geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(508)
				bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(508)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(508)
				if ((tmp4)){
					HX_STACK_LINE(508)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(508)
					tmp5 = buffer->id;
				}
				HX_STACK_LINE(508)
				glBindBuffer((int)34962,tmp5);
			}
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				;;
				HX_STACK_LINE(508)
				glVertexAttribPointer((int)1, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
			}
		}
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			;;
			HX_STACK_LINE(508)
			glBufferData((int)34962, geom->buffer_tcoords->byteLength, (GLvoid*)(&geom->buffer_tcoords->buffer[0] + geom->buffer_tcoords->byteOffset), geom->buffer_type);
		}
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				::opengl::GLObject buffer = geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(508)
				bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(508)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(508)
				if ((tmp4)){
					HX_STACK_LINE(508)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(508)
					tmp5 = buffer->id;
				}
				HX_STACK_LINE(508)
				glBindBuffer((int)34962,tmp5);
			}
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				;;
				HX_STACK_LINE(508)
				glVertexAttribPointer((int)2, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
			}
		}
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			;;
			HX_STACK_LINE(508)
			glBufferData((int)34962, geom->buffer_colors->byteLength, (GLvoid*)(&geom->buffer_colors->buffer[0] + geom->buffer_colors->byteOffset), geom->buffer_type);
		}
	}
	else{
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				::opengl::GLObject buffer = geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(510)
				bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(510)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(510)
				if ((tmp4)){
					HX_STACK_LINE(510)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(510)
					tmp5 = buffer->id;
				}
				HX_STACK_LINE(510)
				glBindBuffer((int)34962,tmp5);
			}
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				;;
				HX_STACK_LINE(510)
				glVertexAttribPointer((int)0, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
			}
		}
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				::opengl::GLObject buffer = geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(510)
				bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(510)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(510)
				if ((tmp4)){
					HX_STACK_LINE(510)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(510)
					tmp5 = buffer->id;
				}
				HX_STACK_LINE(510)
				glBindBuffer((int)34962,tmp5);
			}
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				;;
				HX_STACK_LINE(510)
				glVertexAttribPointer((int)1, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
			}
		}
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				::opengl::GLObject buffer = geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(510)
				bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(510)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(510)
				if ((tmp4)){
					HX_STACK_LINE(510)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(510)
					tmp5 = buffer->id;
				}
				HX_STACK_LINE(510)
				glBindBuffer((int)34962,tmp5);
			}
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				;;
				HX_STACK_LINE(510)
				glVertexAttribPointer((int)2, (int)4, (int)5126, false, (int)0, (void *)(intptr_t)(int)0);
			}
		}
	}
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		int tmp4 = geom->buffer_pos->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(513)
		Float tmp5 = (Float(tmp4) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(513)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(513)
		int count = tmp6;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(513)
		int tmp7 = geom->state->primitive_type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(513)
		int tmp8 = count;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(513)
		glDrawArrays(tmp7,(int)0,tmp8);
	}
	HX_STACK_LINE(516)
	(this->static_batched_count)++;
	HX_STACK_LINE(517)
	(this->draw_calls)++;
	HX_STACK_LINE(520)
	geom->set_dirty(false);
	HX_STACK_LINE(522)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,submit_static_geometry,return )

bool Batcher_obj::submit_current_vertex_list( int type){
	HX_STACK_FRAME("phoenix.Batcher","submit_current_vertex_list",0x67dd8932,"phoenix.Batcher.submit_current_vertex_list","phoenix/Batcher.hx",528,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(530)
	int tmp = this->pos_floats;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(530)
	if ((tmp1)){
		HX_STACK_LINE(531)
		return false;
	}
	HX_STACK_LINE(534)
	int tmp2 = this->pos_floats;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(534)
	int tmp3 = this->max_floats;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(534)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(534)
	if ((tmp4)){
		HX_STACK_LINE(535)
		HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
	}
	HX_STACK_LINE(539)
	::snow::api::buffers::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(539)
	{
		HX_STACK_LINE(539)
		::snow::api::buffers::ArrayBufferView tmp6 = this->pos_list;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(539)
		Array< unsigned char > _buffer = tmp6->buffer;		HX_STACK_VAR(_buffer,"_buffer");
		HX_STACK_LINE(539)
		int tmp7 = this->pos_floats;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(539)
		int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(539)
		int _byteLength = tmp8;		HX_STACK_VAR(_byteLength,"_byteLength");
		HX_STACK_LINE(539)
		{
			HX_STACK_LINE(539)
			::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(539)
			::snow::api::buffers::ArrayBufferView _view = tmp9;		HX_STACK_VAR(_view,"_view");
			HX_STACK_LINE(539)
			int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
			HX_STACK_LINE(539)
			bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(539)
			if ((tmp10)){
				HX_STACK_LINE(539)
				::snow::api::buffers::TAError tmp11 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(539)
				HX_STACK_DO_THROW(tmp11);
			}
			HX_STACK_LINE(539)
			int tmp11 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(539)
			bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(539)
			if ((tmp12)){
				HX_STACK_LINE(539)
				::snow::api::buffers::TAError tmp13 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(539)
				HX_STACK_DO_THROW(tmp13);
			}
			HX_STACK_LINE(539)
			int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
			HX_STACK_LINE(539)
			int tmp13 = _byteLength;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(539)
			int _new_range = tmp13;		HX_STACK_VAR(_new_range,"_new_range");
			HX_STACK_LINE(539)
			bool tmp14 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(539)
			if ((tmp14)){
				HX_STACK_LINE(539)
				::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(539)
				HX_STACK_DO_THROW(tmp15);
			}
			HX_STACK_LINE(539)
			_view->buffer = _buffer;
			HX_STACK_LINE(539)
			_view->byteOffset = (int)0;
			HX_STACK_LINE(539)
			_view->byteLength = _byteLength;
			HX_STACK_LINE(539)
			Float tmp15 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(539)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(539)
			_view->length = tmp16;
			HX_STACK_LINE(539)
			tmp5 = _view;
		}
	}
	HX_STACK_LINE(539)
	::snow::api::buffers::ArrayBufferView _pos = tmp5;		HX_STACK_VAR(_pos,"_pos");
	HX_STACK_LINE(540)
	::snow::api::buffers::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		::snow::api::buffers::ArrayBufferView tmp7 = this->tcoord_list;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(540)
		Array< unsigned char > _buffer = tmp7->buffer;		HX_STACK_VAR(_buffer,"_buffer");
		HX_STACK_LINE(540)
		int tmp8 = this->tcoord_floats;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(540)
		int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(540)
		int _byteLength = tmp9;		HX_STACK_VAR(_byteLength,"_byteLength");
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(540)
			::snow::api::buffers::ArrayBufferView _view = tmp10;		HX_STACK_VAR(_view,"_view");
			HX_STACK_LINE(540)
			int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
			HX_STACK_LINE(540)
			bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(540)
			if ((tmp11)){
				HX_STACK_LINE(540)
				::snow::api::buffers::TAError tmp12 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(540)
				HX_STACK_DO_THROW(tmp12);
			}
			HX_STACK_LINE(540)
			int tmp12 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(540)
			bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(540)
			if ((tmp13)){
				HX_STACK_LINE(540)
				::snow::api::buffers::TAError tmp14 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(540)
				HX_STACK_DO_THROW(tmp14);
			}
			HX_STACK_LINE(540)
			int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
			HX_STACK_LINE(540)
			int tmp14 = _byteLength;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(540)
			int _new_range = tmp14;		HX_STACK_VAR(_new_range,"_new_range");
			HX_STACK_LINE(540)
			bool tmp15 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(540)
			if ((tmp15)){
				HX_STACK_LINE(540)
				::snow::api::buffers::TAError tmp16 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(540)
				HX_STACK_DO_THROW(tmp16);
			}
			HX_STACK_LINE(540)
			_view->buffer = _buffer;
			HX_STACK_LINE(540)
			_view->byteOffset = (int)0;
			HX_STACK_LINE(540)
			_view->byteLength = _byteLength;
			HX_STACK_LINE(540)
			Float tmp16 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(540)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(540)
			_view->length = tmp17;
			HX_STACK_LINE(540)
			tmp6 = _view;
		}
	}
	HX_STACK_LINE(540)
	::snow::api::buffers::ArrayBufferView _tcoords = tmp6;		HX_STACK_VAR(_tcoords,"_tcoords");
	HX_STACK_LINE(541)
	::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(541)
	{
		HX_STACK_LINE(541)
		::snow::api::buffers::ArrayBufferView tmp8 = this->color_list;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(541)
		Array< unsigned char > _buffer = tmp8->buffer;		HX_STACK_VAR(_buffer,"_buffer");
		HX_STACK_LINE(541)
		int tmp9 = this->color_floats;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(541)
		int tmp10 = (tmp9 * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(541)
		int _byteLength = tmp10;		HX_STACK_VAR(_byteLength,"_byteLength");
		HX_STACK_LINE(541)
		{
			HX_STACK_LINE(541)
			::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(541)
			::snow::api::buffers::ArrayBufferView _view = tmp11;		HX_STACK_VAR(_view,"_view");
			HX_STACK_LINE(541)
			int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
			HX_STACK_LINE(541)
			bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(541)
			if ((tmp12)){
				HX_STACK_LINE(541)
				::snow::api::buffers::TAError tmp13 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(541)
				HX_STACK_DO_THROW(tmp13);
			}
			HX_STACK_LINE(541)
			int tmp13 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(541)
			bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(541)
			if ((tmp14)){
				HX_STACK_LINE(541)
				::snow::api::buffers::TAError tmp15 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(541)
				HX_STACK_DO_THROW(tmp15);
			}
			HX_STACK_LINE(541)
			int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
			HX_STACK_LINE(541)
			int tmp15 = _byteLength;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(541)
			int _new_range = tmp15;		HX_STACK_VAR(_new_range,"_new_range");
			HX_STACK_LINE(541)
			bool tmp16 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(541)
			if ((tmp16)){
				HX_STACK_LINE(541)
				::snow::api::buffers::TAError tmp17 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(541)
				HX_STACK_DO_THROW(tmp17);
			}
			HX_STACK_LINE(541)
			_view->buffer = _buffer;
			HX_STACK_LINE(541)
			_view->byteOffset = (int)0;
			HX_STACK_LINE(541)
			_view->byteLength = _byteLength;
			HX_STACK_LINE(541)
			Float tmp17 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(541)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(541)
			_view->length = tmp18;
			HX_STACK_LINE(541)
			tmp7 = _view;
		}
	}
	HX_STACK_LINE(541)
	::snow::api::buffers::ArrayBufferView _colors = tmp7;		HX_STACK_VAR(_colors,"_colors");
	HX_STACK_LINE(542)
	::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
	HX_STACK_LINE(548)
	int tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(548)
	::snow::api::buffers::ArrayBufferView tmp9 = _pos;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(548)
	::snow::api::buffers::ArrayBufferView tmp10 = _tcoords;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(548)
	::snow::api::buffers::ArrayBufferView tmp11 = _colors;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(548)
	::snow::api::buffers::ArrayBufferView tmp12 = _normals;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(548)
	this->submit_buffers(tmp8,tmp9,tmp10,tmp11,tmp12);
	HX_STACK_LINE(550)
	_pos = null();
	HX_STACK_LINE(551)
	_tcoords = null();
	HX_STACK_LINE(552)
	_colors = null();
	HX_STACK_LINE(553)
	_normals = null();
	HX_STACK_LINE(555)
	this->pos_floats = (int)0;
	HX_STACK_LINE(556)
	this->tcoord_floats = (int)0;
	HX_STACK_LINE(557)
	this->color_floats = (int)0;
	HX_STACK_LINE(558)
	this->normal_floats = (int)0;
	HX_STACK_LINE(560)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,submit_current_vertex_list,return )

Void Batcher_obj::geometry_batch( ::phoenix::geometry::Geometry geom){
{
		HX_STACK_FRAME("phoenix.Batcher","geometry_batch",0x429a8233,"phoenix.Batcher.geometry_batch","phoenix/Batcher.hx",567,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geom,"geom")
		HX_STACK_LINE(569)
		int tmp = geom->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(569)
		int tmp1 = this->max_verts;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(569)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(569)
		if ((tmp2)){
			HX_STACK_LINE(570)
			geom->set_locked(true);
			HX_STACK_LINE(571)
			geom->dirty_based = false;
			HX_STACK_LINE(572)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(572)
			::String tmp4 = (HX_HCSTRING("WARNING batcher `","\xc3","\xc3","\x10","\xcf") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(572)
			::String tmp5 = (tmp4 + HX_HCSTRING("` trying to batch a geometry `","\xe3","\xef","\x1f","\x81"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(572)
			::String tmp6 = geom->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(572)
			::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(572)
			::String tmp8 = (tmp7 + HX_HCSTRING("` that has more verts than the batcher has preallocated, (","\x2d","\xaa","\x5e","\x9c"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(572)
			int tmp9 = geom->vertices->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(572)
			::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(572)
			::String tmp11 = (tmp10 + HX_HCSTRING(" vs max of ","\xea","\xab","\xb3","\x51"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(572)
			int tmp12 = this->max_verts;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(572)
			::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(572)
			::String tmp14 = (tmp13 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(572)
			::String tmp15 = (HX_HCSTRING("  i / batcher / ","\x52","\xb7","\x3e","\xd6") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(572)
			Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),572,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("geometry_batch","\x2d","\x43","\xe5","\x75"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(572)
			::haxe::Log_obj::trace(tmp15,tmp16);
			HX_STACK_LINE(573)
			::String tmp17 = HX_HCSTRING("  i / batcher / WARNING geometry has been marked as direct submit, and will be submitted independently!","\x0a","\xd8","\x5d","\xb6");		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(573)
			Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),573,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("geometry_batch","\x2d","\x43","\xe5","\x75"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(573)
			::haxe::Log_obj::trace(tmp17,tmp18);
			HX_STACK_LINE(574)
			return null();
		}
		HX_STACK_LINE(578)
		int tmp3 = geom->vertices->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(578)
		int tmp4 = this->pos_floats;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(578)
		Float tmp5 = (Float(tmp4) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(578)
		Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(578)
		Float _count_after = tmp6;		HX_STACK_VAR(_count_after,"_count_after");
		HX_STACK_LINE(581)
		Float tmp7 = _count_after;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(581)
		int tmp8 = this->max_verts;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(581)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(581)
		if ((tmp9)){
			HX_STACK_LINE(582)
			int tmp10 = this->pos_floats;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(582)
			bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(582)
			if ((tmp11)){
				HX_STACK_LINE(582)
				false;
			}
			else{
				HX_STACK_LINE(582)
				int tmp12 = this->pos_floats;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(582)
				int tmp13 = this->max_floats;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(582)
				bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(582)
				if ((tmp14)){
					HX_STACK_LINE(582)
					HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
				}
				HX_STACK_LINE(582)
				::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					::snow::api::buffers::ArrayBufferView tmp16 = this->pos_list;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(582)
					Array< unsigned char > _buffer = tmp16->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(582)
					int tmp17 = this->pos_floats;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(582)
					int tmp18 = (tmp17 * (int)4);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(582)
					int _byteLength = tmp18;		HX_STACK_VAR(_byteLength,"_byteLength");
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(582)
						::snow::api::buffers::ArrayBufferView _view = tmp19;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(582)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(582)
						bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(582)
						if ((tmp20)){
							HX_STACK_LINE(582)
							::snow::api::buffers::TAError tmp21 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp21);
						}
						HX_STACK_LINE(582)
						int tmp21 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(582)
						bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(582)
						if ((tmp22)){
							HX_STACK_LINE(582)
							::snow::api::buffers::TAError tmp23 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp23);
						}
						HX_STACK_LINE(582)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(582)
						int tmp23 = _byteLength;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(582)
						int _new_range = tmp23;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(582)
						bool tmp24 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(582)
						if ((tmp24)){
							HX_STACK_LINE(582)
							::snow::api::buffers::TAError tmp25 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp25);
						}
						HX_STACK_LINE(582)
						_view->buffer = _buffer;
						HX_STACK_LINE(582)
						_view->byteOffset = (int)0;
						HX_STACK_LINE(582)
						_view->byteLength = _byteLength;
						HX_STACK_LINE(582)
						Float tmp25 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(582)
						int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(582)
						_view->length = tmp26;
						HX_STACK_LINE(582)
						tmp15 = _view;
					}
				}
				HX_STACK_LINE(582)
				::snow::api::buffers::ArrayBufferView _pos = tmp15;		HX_STACK_VAR(_pos,"_pos");
				HX_STACK_LINE(582)
				::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					::snow::api::buffers::ArrayBufferView tmp17 = this->tcoord_list;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(582)
					Array< unsigned char > _buffer = tmp17->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(582)
					int tmp18 = this->tcoord_floats;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(582)
					int tmp19 = (tmp18 * (int)4);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(582)
					int _byteLength = tmp19;		HX_STACK_VAR(_byteLength,"_byteLength");
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(582)
						::snow::api::buffers::ArrayBufferView _view = tmp20;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(582)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(582)
						bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(582)
						if ((tmp21)){
							HX_STACK_LINE(582)
							::snow::api::buffers::TAError tmp22 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp22);
						}
						HX_STACK_LINE(582)
						int tmp22 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(582)
						bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(582)
						if ((tmp23)){
							HX_STACK_LINE(582)
							::snow::api::buffers::TAError tmp24 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp24);
						}
						HX_STACK_LINE(582)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(582)
						int tmp24 = _byteLength;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(582)
						int _new_range = tmp24;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(582)
						bool tmp25 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(582)
						if ((tmp25)){
							HX_STACK_LINE(582)
							::snow::api::buffers::TAError tmp26 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp26);
						}
						HX_STACK_LINE(582)
						_view->buffer = _buffer;
						HX_STACK_LINE(582)
						_view->byteOffset = (int)0;
						HX_STACK_LINE(582)
						_view->byteLength = _byteLength;
						HX_STACK_LINE(582)
						Float tmp26 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(582)
						int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(582)
						_view->length = tmp27;
						HX_STACK_LINE(582)
						tmp16 = _view;
					}
				}
				HX_STACK_LINE(582)
				::snow::api::buffers::ArrayBufferView _tcoords = tmp16;		HX_STACK_VAR(_tcoords,"_tcoords");
				HX_STACK_LINE(582)
				::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					::snow::api::buffers::ArrayBufferView tmp18 = this->color_list;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(582)
					Array< unsigned char > _buffer = tmp18->buffer;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(582)
					int tmp19 = this->color_floats;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(582)
					int tmp20 = (tmp19 * (int)4);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(582)
					int _byteLength = tmp20;		HX_STACK_VAR(_byteLength,"_byteLength");
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)8);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(582)
						::snow::api::buffers::ArrayBufferView _view = tmp21;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(582)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(582)
						bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(582)
						if ((tmp22)){
							HX_STACK_LINE(582)
							::snow::api::buffers::TAError tmp23 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp23);
						}
						HX_STACK_LINE(582)
						int tmp23 = hx::Mod((int)0,_bytes_per_elem);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(582)
						bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(582)
						if ((tmp24)){
							HX_STACK_LINE(582)
							::snow::api::buffers::TAError tmp25 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp25);
						}
						HX_STACK_LINE(582)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(582)
						int tmp25 = _byteLength;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(582)
						int _new_range = tmp25;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(582)
						bool tmp26 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(582)
						if ((tmp26)){
							HX_STACK_LINE(582)
							::snow::api::buffers::TAError tmp27 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp27);
						}
						HX_STACK_LINE(582)
						_view->buffer = _buffer;
						HX_STACK_LINE(582)
						_view->byteOffset = (int)0;
						HX_STACK_LINE(582)
						_view->byteLength = _byteLength;
						HX_STACK_LINE(582)
						Float tmp27 = (Float(_byteLength) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(582)
						int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(582)
						_view->length = tmp28;
						HX_STACK_LINE(582)
						tmp17 = _view;
					}
				}
				HX_STACK_LINE(582)
				::snow::api::buffers::ArrayBufferView _colors = tmp17;		HX_STACK_VAR(_colors,"_colors");
				HX_STACK_LINE(582)
				::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
				HX_STACK_LINE(582)
				int tmp18 = geom->state->primitive_type;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(582)
				::snow::api::buffers::ArrayBufferView tmp19 = _pos;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(582)
				::snow::api::buffers::ArrayBufferView tmp20 = _tcoords;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(582)
				::snow::api::buffers::ArrayBufferView tmp21 = _colors;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(582)
				::snow::api::buffers::ArrayBufferView tmp22 = _normals;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(582)
				this->submit_buffers(tmp18,tmp19,tmp20,tmp21,tmp22);
				HX_STACK_LINE(582)
				_pos = null();
				HX_STACK_LINE(582)
				_tcoords = null();
				HX_STACK_LINE(582)
				_colors = null();
				HX_STACK_LINE(582)
				_normals = null();
				HX_STACK_LINE(582)
				this->pos_floats = (int)0;
				HX_STACK_LINE(582)
				this->tcoord_floats = (int)0;
				HX_STACK_LINE(582)
				this->color_floats = (int)0;
				HX_STACK_LINE(582)
				this->normal_floats = (int)0;
				HX_STACK_LINE(582)
				true;
			}
		}
		HX_STACK_LINE(585)
		{
			HX_STACK_LINE(586)
			int tmp10 = this->pos_floats;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(586)
			int vert_index = tmp10;		HX_STACK_VAR(vert_index,"vert_index");
			HX_STACK_LINE(586)
			int tmp11 = this->tcoord_floats;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(586)
			int tcoord_index = tmp11;		HX_STACK_VAR(tcoord_index,"tcoord_index");
			HX_STACK_LINE(586)
			int tmp12 = this->color_floats;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(586)
			int color_index = tmp12;		HX_STACK_VAR(color_index,"color_index");
			HX_STACK_LINE(586)
			int tmp13 = this->normal_floats;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(586)
			int normal_index = tmp13;		HX_STACK_VAR(normal_index,"normal_index");
			HX_STACK_LINE(587)
			::snow::api::buffers::ArrayBufferView tmp14 = this->pos_list;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(587)
			::snow::api::buffers::ArrayBufferView vertlist = tmp14;		HX_STACK_VAR(vertlist,"vertlist");
			HX_STACK_LINE(587)
			::snow::api::buffers::ArrayBufferView tmp15 = this->tcoord_list;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(587)
			::snow::api::buffers::ArrayBufferView tcoordlist = tmp15;		HX_STACK_VAR(tcoordlist,"tcoordlist");
			HX_STACK_LINE(587)
			::snow::api::buffers::ArrayBufferView tmp16 = this->color_list;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(587)
			::snow::api::buffers::ArrayBufferView colorlist = tmp16;		HX_STACK_VAR(colorlist,"colorlist");
			HX_STACK_LINE(585)
			::phoenix::Matrix tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(585)
			{
				HX_STACK_LINE(585)
				::phoenix::Spatial tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(585)
				{
					HX_STACK_LINE(585)
					::phoenix::Transform _this = geom->transform;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(585)
					bool tmp19 = _this->_destroying;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(585)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(585)
					if ((tmp20)){
						HX_STACK_LINE(585)
						bool tmp21 = (_this->parent != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(585)
						if ((tmp21)){
							HX_STACK_LINE(585)
							bool tmp22 = _this->parent->dirty;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(585)
							if ((tmp22)){
								HX_STACK_LINE(585)
								_this->parent->clean();
							}
						}
						HX_STACK_LINE(585)
						bool tmp22 = _this->dirty;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(585)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(585)
						if ((tmp22)){
							HX_STACK_LINE(585)
							bool tmp24 = _this->_cleaning;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(585)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(585)
							tmp23 = !(tmp25);
						}
						else{
							HX_STACK_LINE(585)
							tmp23 = false;
						}
						HX_STACK_LINE(585)
						if ((tmp23)){
							HX_STACK_LINE(585)
							_this->clean();
						}
					}
					HX_STACK_LINE(585)
					tmp18 = _this->world;
				}
				HX_STACK_LINE(585)
				::phoenix::Spatial _this = tmp18;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(585)
				tmp17 = _this->matrix;
			}
			HX_STACK_LINE(585)
			::phoenix::Matrix _mat = tmp17;		HX_STACK_VAR(_mat,"_mat");
			HX_STACK_LINE(585)
			Array< Float > _el = _mat->elements;		HX_STACK_VAR(_el,"_el");
			HX_STACK_LINE(585)
			int tmp18 = geom->vertices->length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(585)
			int _count = tmp18;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(585)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(585)
			while((true)){
				HX_STACK_LINE(585)
				bool tmp19 = (_idx < _count);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(585)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(585)
				if ((tmp20)){
					HX_STACK_LINE(585)
					break;
				}
				HX_STACK_LINE(585)
				::phoenix::geometry::Vertex tmp21 = geom->vertices->__get(_idx).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(585)
				::phoenix::geometry::Vertex v = tmp21;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(585)
				Float tmp22 = v->pos->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(585)
				Float _vx = tmp22;		HX_STACK_VAR(_vx,"_vx");
				HX_STACK_LINE(585)
				Float tmp23 = v->pos->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(585)
				Float _vy = tmp23;		HX_STACK_VAR(_vy,"_vy");
				HX_STACK_LINE(585)
				Float tmp24 = v->pos->z;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(585)
				Float _vz = tmp24;		HX_STACK_VAR(_vz,"_vz");
				HX_STACK_LINE(585)
				Float tmp25 = _el->__unsafe_get((int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(585)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(585)
				Float tmp27 = _vx;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(585)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(585)
				Float tmp29 = _el->__unsafe_get((int)4);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(585)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(585)
				Float tmp31 = _vy;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(585)
				Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(585)
				Float tmp33 = (tmp28 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(585)
				Float tmp34 = _el->__unsafe_get((int)8);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(585)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(585)
				Float tmp36 = _vz;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(585)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(585)
				Float tmp38 = (tmp33 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(585)
				Float tmp39 = _el->__unsafe_get((int)12);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(585)
				Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(585)
				Float tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(585)
				Float _tvx = tmp41;		HX_STACK_VAR(_tvx,"_tvx");
				HX_STACK_LINE(585)
				Float tmp42 = _el->__unsafe_get((int)1);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(585)
				Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(585)
				Float tmp44 = _vx;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(585)
				Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(585)
				Float tmp46 = _el->__unsafe_get((int)5);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(585)
				Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(585)
				Float tmp48 = _vy;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(585)
				Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(585)
				Float tmp50 = (tmp45 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(585)
				Float tmp51 = _el->__unsafe_get((int)9);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(585)
				Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(585)
				Float tmp53 = _vz;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(585)
				Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(585)
				Float tmp55 = (tmp50 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(585)
				Float tmp56 = _el->__unsafe_get((int)13);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(585)
				Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(585)
				Float tmp58 = (tmp55 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(585)
				Float _tvy = tmp58;		HX_STACK_VAR(_tvy,"_tvy");
				HX_STACK_LINE(585)
				Float tmp59 = _el->__unsafe_get((int)2);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(585)
				Float tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(585)
				Float tmp61 = _vx;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(585)
				Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(585)
				Float tmp63 = _el->__unsafe_get((int)6);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(585)
				Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(585)
				Float tmp65 = _vy;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(585)
				Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(585)
				Float tmp67 = (tmp62 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(585)
				Float tmp68 = _el->__unsafe_get((int)10);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(585)
				Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(585)
				Float tmp70 = _vz;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(585)
				Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(585)
				Float tmp72 = (tmp67 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(585)
				Float tmp73 = _el->__unsafe_get((int)14);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(585)
				Float tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(585)
				Float tmp75 = (tmp72 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(585)
				Float _tvz = tmp75;		HX_STACK_VAR(_tvz,"_tvz");
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (vert_index * (int)4)),_tvx);
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),_tvy);
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),_tvz);
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(vertlist->buffer,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),v->pos->w);
				HX_STACK_LINE(585)
				hx::AddEq(vert_index,(int)4);
				HX_STACK_LINE(585)
				::phoenix::geometry::TextureCoord tmp76 = v->uv->uv0;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(585)
				::phoenix::geometry::TextureCoord _vuv = tmp76;		HX_STACK_VAR(_vuv,"_vuv");
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(tcoordlist->buffer,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
				HX_STACK_LINE(585)
				hx::AddEq(tcoord_index,(int)4);
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (color_index * (int)4)),v->color->r);
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),v->color->g);
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),v->color->b);
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(colorlist->buffer,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),v->color->a);
				HX_STACK_LINE(585)
				hx::AddEq(color_index,(int)4);
				HX_STACK_LINE(585)
				hx::AddEq(normal_index,(int)4);
				HX_STACK_LINE(585)
				(_idx)++;
			}
		}
		HX_STACK_LINE(590)
		int tmp10 = geom->vertices->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(590)
		int tmp11 = (tmp10 * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(590)
		int _length = tmp11;		HX_STACK_VAR(_length,"_length");
		HX_STACK_LINE(592)
		hx::AddEq(this->pos_floats,_length);
		HX_STACK_LINE(593)
		hx::AddEq(this->tcoord_floats,_length);
		HX_STACK_LINE(594)
		hx::AddEq(this->color_floats,_length);
		HX_STACK_LINE(595)
		hx::AddEq(this->normal_floats,_length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,geometry_batch,(void))

int Batcher_obj::set_layer( int _layer){
	HX_STACK_FRAME("phoenix.Batcher","set_layer",0x4cd9e8ee,"phoenix.Batcher.set_layer","phoenix/Batcher.hx",602,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_layer,"_layer")
	HX_STACK_LINE(605)
	this->layer = _layer;
	HX_STACK_LINE(607)
	::phoenix::Renderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(607)
	::phoenix::Renderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(607)
	Dynamic tmp2 = tmp1->sort_batchers_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(607)
	tmp->batchers->sort(tmp2);
	HX_STACK_LINE(610)
	int tmp3 = this->layer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(610)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,set_layer,return )

::String Batcher_obj::toString( ){
	HX_STACK_FRAME("phoenix.Batcher","toString",0x2a536732,"phoenix.Batcher.toString","phoenix/Batcher.hx",615,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_LINE(616)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(616)
	::String tmp1 = (HX_HCSTRING("Batcher(","\xc1","\xeb","\xbf","\x27") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(616)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(616)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,toString,return )

int Batcher_obj::compare( ::phoenix::Batcher other){
	HX_STACK_FRAME("phoenix.Batcher","compare",0xcf1d34df,"phoenix.Batcher.compare","phoenix/Batcher.hx",621,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(623)
	int tmp = this->layer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(623)
	int tmp1 = other->layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(623)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(623)
	if ((tmp2)){
		HX_STACK_LINE(623)
		return (int)0;
	}
	HX_STACK_LINE(624)
	int tmp3 = this->layer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(624)
	int tmp4 = other->layer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(624)
	bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(624)
	if ((tmp5)){
		HX_STACK_LINE(624)
		return (int)-1;
	}
	HX_STACK_LINE(626)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,compare,return )

::String Batcher_obj::compare_rule_to_string( int r){
	HX_STACK_FRAME("phoenix.Batcher","compare_rule_to_string",0xb26938b2,"phoenix.Batcher.compare_rule_to_string","phoenix/Batcher.hx",630,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(631)
	int tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(631)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(631)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(633)
			tmp1 = HX_HCSTRING("same","\x66","\x83","\x4d","\x4c");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(634)
			tmp1 = HX_HCSTRING("depth <","\xdf","\x93","\x4a","\x6a");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(635)
			tmp1 = HX_HCSTRING("depth >","\xe1","\x93","\x4a","\x6a");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(637)
			tmp1 = HX_HCSTRING("shader <","\x81","\xae","\x2a","\x36");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(638)
			tmp1 = HX_HCSTRING("shader >","\x83","\xae","\x2a","\x36");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(639)
			tmp1 = HX_HCSTRING("shader s._ >","\x87","\x6d","\x84","\x5c");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(640)
			tmp1 = HX_HCSTRING("shader _.s <","\x85","\x00","\x90","\xd8");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(642)
			tmp1 = HX_HCSTRING("texture <","\xb7","\x11","\x49","\xaf");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(643)
			tmp1 = HX_HCSTRING("texture >","\xb9","\x11","\x49","\xaf");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(644)
			tmp1 = HX_HCSTRING("texture t._ >","\x3e","\x38","\x1a","\x13");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(645)
			tmp1 = HX_HCSTRING("texture _.t <","\xfc","\xf8","\xbf","\xfb");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(647)
			tmp1 = HX_HCSTRING("primitive <","\x83","\x5c","\x09","\x15");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(648)
			tmp1 = HX_HCSTRING("primitive >","\x85","\x5c","\x09","\x15");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(649)
			tmp1 = HX_HCSTRING("unclipped","\xc6","\x0e","\xca","\xfe");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(650)
			tmp1 = HX_HCSTRING("clipped","\xff","\x07","\xc8","\x02");
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(651)
			tmp1 = HX_HCSTRING("timestamp <","\x72","\x52","\xce","\xd6");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(652)
			tmp1 = HX_HCSTRING("timestamp >","\x74","\x52","\xce","\xd6");
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(653)
			tmp1 = HX_HCSTRING("timestamp ==","\x6a","\xd2","\xb9","\x1d");
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(654)
			tmp1 = HX_HCSTRING("sequence <","\x9d","\x0c","\x22","\xd5");
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(655)
			tmp1 = HX_HCSTRING("sequence >","\x9f","\x0c","\x22","\xd5");
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(656)
			tmp1 = HX_HCSTRING("fallback","\x22","\xf0","\x9d","\x2a");
		}
		;break;
		default: {
			HX_STACK_LINE(657)
			tmp1 = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
	}
	HX_STACK_LINE(631)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,compare_rule_to_string,return )

int Batcher_obj::compare_rule( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b){
	HX_STACK_FRAME("phoenix.Batcher","compare_rule",0xfee0579c,"phoenix.Batcher.compare_rule","phoenix/Batcher.hx",663,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(665)
	bool tmp = (a->uuid == b->uuid);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(665)
	if ((tmp)){
		HX_STACK_LINE(666)
		return (int)0;
	}
	HX_STACK_LINE(669)
	bool tmp1 = (a->depth < b->depth);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(669)
	if ((tmp1)){
		HX_STACK_LINE(670)
		return (int)1;
	}
	HX_STACK_LINE(671)
	bool tmp2 = (a->depth > b->depth);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(671)
	if ((tmp2)){
		HX_STACK_LINE(672)
		return (int)2;
	}
	HX_STACK_LINE(677)
	bool tmp3 = (a->shader != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(677)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(677)
	if ((tmp3)){
		HX_STACK_LINE(677)
		tmp4 = (b->shader != null());
	}
	else{
		HX_STACK_LINE(677)
		tmp4 = false;
	}
	HX_STACK_LINE(677)
	if ((tmp4)){
		HX_STACK_LINE(680)
		::String tmp5 = a->shader->id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(680)
		::String tmp6 = b->shader->id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(680)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(680)
		if ((tmp7)){
			HX_STACK_LINE(681)
			return (int)3;
		}
		HX_STACK_LINE(682)
		::String tmp8 = a->shader->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(682)
		::String tmp9 = b->shader->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(682)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(682)
		if ((tmp10)){
			HX_STACK_LINE(683)
			return (int)4;
		}
	}
	else{
		HX_STACK_LINE(686)
		bool tmp5 = (a->shader != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(686)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(686)
		if ((tmp5)){
			HX_STACK_LINE(686)
			tmp6 = (b->shader == null());
		}
		else{
			HX_STACK_LINE(686)
			tmp6 = false;
		}
		HX_STACK_LINE(686)
		if ((tmp6)){
			HX_STACK_LINE(687)
			return (int)5;
		}
		else{
			HX_STACK_LINE(689)
			bool tmp7 = (a->shader == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(689)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(689)
			if ((tmp7)){
				HX_STACK_LINE(689)
				tmp8 = (b->shader != null());
			}
			else{
				HX_STACK_LINE(689)
				tmp8 = false;
			}
			HX_STACK_LINE(689)
			if ((tmp8)){
				HX_STACK_LINE(690)
				return (int)6;
			}
		}
	}
	HX_STACK_LINE(694)
	bool tmp5 = (a->texture != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(694)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(694)
	if ((tmp5)){
		HX_STACK_LINE(694)
		tmp6 = (b->texture != null());
	}
	else{
		HX_STACK_LINE(694)
		tmp6 = false;
	}
	HX_STACK_LINE(694)
	if ((tmp6)){
		HX_STACK_LINE(697)
		::String tmp7 = a->texture->id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(697)
		::String tmp8 = b->texture->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(697)
		bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(697)
		if ((tmp9)){
			HX_STACK_LINE(698)
			return (int)7;
		}
		HX_STACK_LINE(699)
		::String tmp10 = a->texture->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(699)
		::String tmp11 = b->texture->id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(699)
		bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(699)
		if ((tmp12)){
			HX_STACK_LINE(700)
			return (int)8;
		}
	}
	else{
		HX_STACK_LINE(703)
		bool tmp7 = (a->texture != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(703)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(703)
		if ((tmp7)){
			HX_STACK_LINE(703)
			tmp8 = (b->texture == null());
		}
		else{
			HX_STACK_LINE(703)
			tmp8 = false;
		}
		HX_STACK_LINE(703)
		if ((tmp8)){
			HX_STACK_LINE(704)
			return (int)9;
		}
		else{
			HX_STACK_LINE(706)
			bool tmp9 = (a->texture == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(706)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(706)
			if ((tmp9)){
				HX_STACK_LINE(706)
				tmp10 = (b->texture != null());
			}
			else{
				HX_STACK_LINE(706)
				tmp10 = false;
			}
			HX_STACK_LINE(706)
			if ((tmp10)){
				HX_STACK_LINE(707)
				return (int)10;
			}
		}
	}
	HX_STACK_LINE(713)
	int a_primitive_index = a->primitive_type;		HX_STACK_VAR(a_primitive_index,"a_primitive_index");
	HX_STACK_LINE(714)
	int b_primitive_index = b->primitive_type;		HX_STACK_VAR(b_primitive_index,"b_primitive_index");
	HX_STACK_LINE(716)
	bool tmp7 = (a_primitive_index < b_primitive_index);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(716)
	if ((tmp7)){
		HX_STACK_LINE(717)
		return (int)11;
	}
	HX_STACK_LINE(718)
	bool tmp8 = (a_primitive_index > b_primitive_index);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(718)
	if ((tmp8)){
		HX_STACK_LINE(719)
		return (int)12;
	}
	HX_STACK_LINE(722)
	bool tmp9 = (a->clip != b->clip);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(722)
	if ((tmp9)){
		HX_STACK_LINE(724)
		bool tmp10 = (a->clip == false);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(724)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(724)
		if ((tmp10)){
			HX_STACK_LINE(724)
			tmp11 = (b->clip == true);
		}
		else{
			HX_STACK_LINE(724)
			tmp11 = false;
		}
		HX_STACK_LINE(724)
		if ((tmp11)){
			HX_STACK_LINE(725)
			return (int)13;
		}
		else{
			HX_STACK_LINE(728)
			bool tmp12 = (a->clip == true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(728)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(728)
			if ((tmp12)){
				HX_STACK_LINE(728)
				tmp13 = (b->clip == false);
			}
			else{
				HX_STACK_LINE(728)
				tmp13 = false;
			}
			HX_STACK_LINE(728)
			if ((tmp13)){
				HX_STACK_LINE(729)
				return (int)14;
			}
		}
	}
	HX_STACK_LINE(737)
	bool tmp10 = (a->timestamp < b->timestamp);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(737)
	if ((tmp10)){
		HX_STACK_LINE(738)
		return (int)15;
	}
	HX_STACK_LINE(739)
	bool tmp11 = (a->timestamp > b->timestamp);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(739)
	if ((tmp11)){
		HX_STACK_LINE(740)
		return (int)16;
	}
	HX_STACK_LINE(741)
	bool tmp12 = (a->timestamp == b->timestamp);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(741)
	if ((tmp12)){
		HX_STACK_LINE(742)
		return (int)17;
	}
	HX_STACK_LINE(744)
	bool tmp13 = (a->sequence < b->sequence);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(744)
	if ((tmp13)){
		HX_STACK_LINE(745)
		return (int)18;
	}
	HX_STACK_LINE(746)
	bool tmp14 = (a->sequence > b->sequence);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(746)
	if ((tmp14)){
		HX_STACK_LINE(747)
		return (int)19;
	}
	HX_STACK_LINE(750)
	return (int)20;
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,compare_rule,return )

int Batcher_obj::geometry_compare( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b){
	HX_STACK_FRAME("phoenix.Batcher","geometry_compare",0xc33f035e,"phoenix.Batcher.geometry_compare","phoenix/Batcher.hx",754,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(766)
	bool tmp = (a->uuid == b->uuid);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(766)
	if ((tmp)){
		HX_STACK_LINE(767)
		return (int)0;
	}
	HX_STACK_LINE(770)
	bool tmp1 = (a->depth < b->depth);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(770)
	if ((tmp1)){
		HX_STACK_LINE(771)
		return (int)-1;
	}
	HX_STACK_LINE(772)
	bool tmp2 = (a->depth > b->depth);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(772)
	if ((tmp2)){
		HX_STACK_LINE(773)
		return (int)1;
	}
	HX_STACK_LINE(777)
	bool tmp3 = (a->shader != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(777)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(777)
	if ((tmp3)){
		HX_STACK_LINE(777)
		tmp4 = (b->shader != null());
	}
	else{
		HX_STACK_LINE(777)
		tmp4 = false;
	}
	HX_STACK_LINE(777)
	if ((tmp4)){
		HX_STACK_LINE(780)
		::String tmp5 = a->shader->id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(780)
		::String tmp6 = b->shader->id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(780)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(780)
		if ((tmp7)){
			HX_STACK_LINE(781)
			return (int)-1;
		}
		HX_STACK_LINE(782)
		::String tmp8 = a->shader->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(782)
		::String tmp9 = b->shader->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(782)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(782)
		if ((tmp10)){
			HX_STACK_LINE(783)
			return (int)1;
		}
	}
	else{
		HX_STACK_LINE(786)
		bool tmp5 = (a->shader != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(786)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(786)
		if ((tmp5)){
			HX_STACK_LINE(786)
			tmp6 = (b->shader == null());
		}
		else{
			HX_STACK_LINE(786)
			tmp6 = false;
		}
		HX_STACK_LINE(786)
		if ((tmp6)){
			HX_STACK_LINE(787)
			return (int)1;
		}
		else{
			HX_STACK_LINE(789)
			bool tmp7 = (a->shader == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(789)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(789)
			if ((tmp7)){
				HX_STACK_LINE(789)
				tmp8 = (b->shader != null());
			}
			else{
				HX_STACK_LINE(789)
				tmp8 = false;
			}
			HX_STACK_LINE(789)
			if ((tmp8)){
				HX_STACK_LINE(790)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(794)
	bool tmp5 = (a->texture != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(794)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(794)
	if ((tmp5)){
		HX_STACK_LINE(794)
		tmp6 = (b->texture != null());
	}
	else{
		HX_STACK_LINE(794)
		tmp6 = false;
	}
	HX_STACK_LINE(794)
	if ((tmp6)){
		HX_STACK_LINE(797)
		::String tmp7 = a->texture->id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(797)
		::String tmp8 = b->texture->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(797)
		bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(797)
		if ((tmp9)){
			HX_STACK_LINE(798)
			return (int)-1;
		}
		HX_STACK_LINE(799)
		::String tmp10 = a->texture->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(799)
		::String tmp11 = b->texture->id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(799)
		bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(799)
		if ((tmp12)){
			HX_STACK_LINE(800)
			return (int)1;
		}
	}
	else{
		HX_STACK_LINE(803)
		bool tmp7 = (a->texture != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(803)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(803)
		if ((tmp7)){
			HX_STACK_LINE(803)
			tmp8 = (b->texture == null());
		}
		else{
			HX_STACK_LINE(803)
			tmp8 = false;
		}
		HX_STACK_LINE(803)
		if ((tmp8)){
			HX_STACK_LINE(804)
			return (int)1;
		}
		else{
			HX_STACK_LINE(806)
			bool tmp9 = (a->texture == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(806)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(806)
			if ((tmp9)){
				HX_STACK_LINE(806)
				tmp10 = (b->texture != null());
			}
			else{
				HX_STACK_LINE(806)
				tmp10 = false;
			}
			HX_STACK_LINE(806)
			if ((tmp10)){
				HX_STACK_LINE(807)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(812)
	int a_primitive_index = a->primitive_type;		HX_STACK_VAR(a_primitive_index,"a_primitive_index");
	HX_STACK_LINE(813)
	int b_primitive_index = b->primitive_type;		HX_STACK_VAR(b_primitive_index,"b_primitive_index");
	HX_STACK_LINE(815)
	bool tmp7 = (a_primitive_index < b_primitive_index);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(815)
	if ((tmp7)){
		HX_STACK_LINE(816)
		return (int)-1;
	}
	HX_STACK_LINE(817)
	bool tmp8 = (a_primitive_index > b_primitive_index);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(817)
	if ((tmp8)){
		HX_STACK_LINE(818)
		return (int)1;
	}
	HX_STACK_LINE(821)
	bool tmp9 = (a->clip != b->clip);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(821)
	if ((tmp9)){
		HX_STACK_LINE(823)
		bool tmp10 = (a->clip == false);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(823)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(823)
		if ((tmp10)){
			HX_STACK_LINE(823)
			tmp11 = (b->clip == true);
		}
		else{
			HX_STACK_LINE(823)
			tmp11 = false;
		}
		HX_STACK_LINE(823)
		if ((tmp11)){
			HX_STACK_LINE(824)
			return (int)1;
		}
		else{
			HX_STACK_LINE(827)
			bool tmp12 = (a->clip == true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(827)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(827)
			if ((tmp12)){
				HX_STACK_LINE(827)
				tmp13 = (b->clip == false);
			}
			else{
				HX_STACK_LINE(827)
				tmp13 = false;
			}
			HX_STACK_LINE(827)
			if ((tmp13)){
				HX_STACK_LINE(828)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(836)
	bool tmp10 = (a->timestamp < b->timestamp);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(836)
	if ((tmp10)){
		HX_STACK_LINE(837)
		return (int)-1;
	}
	HX_STACK_LINE(838)
	bool tmp11 = (a->timestamp > b->timestamp);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(838)
	if ((tmp11)){
		HX_STACK_LINE(839)
		return (int)1;
	}
	HX_STACK_LINE(840)
	bool tmp12 = (a->sequence < b->sequence);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(840)
	if ((tmp12)){
		HX_STACK_LINE(841)
		return (int)-1;
	}
	HX_STACK_LINE(842)
	bool tmp13 = (a->sequence > b->sequence);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(842)
	if ((tmp13)){
		HX_STACK_LINE(843)
		return (int)1;
	}
	HX_STACK_LINE(846)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,geometry_compare,return )

Void Batcher_obj::list_geometry( ){
{
		HX_STACK_FRAME("phoenix.Batcher","list_geometry",0x542e65ad,"phoenix.Batcher.list_geometry","phoenix/Batcher.hx",851,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_LINE(851)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(851)
		::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(851)
		::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(851)
		while((true)){
			HX_STACK_LINE(851)
			bool tmp2 = (_g->current == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(851)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(851)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(851)
			if ((tmp3)){
				HX_STACK_LINE(851)
				tmp4 = (_g->rightest == null());
			}
			else{
				HX_STACK_LINE(851)
				tmp4 = true;
			}
			HX_STACK_LINE(851)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(851)
			if ((tmp4)){
				HX_STACK_LINE(851)
				tmp5 = false;
			}
			else{
				HX_STACK_LINE(851)
				::phoenix::geometry::GeometryKey tmp6 = _g->current->key;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(851)
				::phoenix::geometry::GeometryKey tmp7 = _g->rightest->key;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(851)
				int tmp8 = _g->tree->compare(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(851)
				tmp5 = (tmp8 <= (int)0);
			}
			HX_STACK_LINE(851)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(851)
			if ((tmp6)){
				HX_STACK_LINE(851)
				break;
			}
			HX_STACK_LINE(851)
			::phoenix::geometry::Geometry tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(851)
			{
				HX_STACK_LINE(851)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp = _g->current;		HX_STACK_VAR(_temp,"_temp");
				HX_STACK_LINE(851)
				bool tmp8 = (_g->current == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(851)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(851)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(851)
				if ((tmp9)){
					HX_STACK_LINE(851)
					tmp10 = (_g->rightest == null());
				}
				else{
					HX_STACK_LINE(851)
					tmp10 = true;
				}
				HX_STACK_LINE(851)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(851)
				if ((tmp10)){
					HX_STACK_LINE(851)
					tmp11 = false;
				}
				else{
					HX_STACK_LINE(851)
					::phoenix::geometry::GeometryKey tmp12 = _g->current->key;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(851)
					::phoenix::geometry::GeometryKey tmp13 = _g->rightest->key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(851)
					int tmp14 = _g->tree->compare(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(851)
					tmp11 = (tmp14 <= (int)0);
				}
				HX_STACK_LINE(851)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(851)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(851)
				if ((tmp12)){
					HX_STACK_LINE(851)
					tmp13 = null();
				}
				else{
					HX_STACK_LINE(851)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp14 = _g->current->right;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(851)
					bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(851)
					if ((tmp15)){
						HX_STACK_LINE(851)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp16 = _g->current->right;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(851)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp16;		HX_STACK_VAR(_node,"_node");
						HX_STACK_LINE(851)
						while((true)){
							HX_STACK_LINE(851)
							bool tmp17 = (_node->left != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(851)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(851)
							if ((tmp18)){
								HX_STACK_LINE(851)
								break;
							}
							HX_STACK_LINE(851)
							_node = _node->left;
						}
						HX_STACK_LINE(851)
						tmp13 = _node;
					}
					else{
						HX_STACK_LINE(851)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _next = null();		HX_STACK_VAR(_next,"_next");
						HX_STACK_LINE(851)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp16 = _g->tree->root;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(851)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp1 = tmp16;		HX_STACK_VAR(_temp1,"_temp1");
						HX_STACK_LINE(851)
						while((true)){
							HX_STACK_LINE(851)
							bool tmp17 = (_temp1 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(851)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(851)
							if ((tmp18)){
								HX_STACK_LINE(851)
								break;
							}
							HX_STACK_LINE(851)
							::phoenix::geometry::GeometryKey tmp19 = _g->current->key;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(851)
							::phoenix::geometry::GeometryKey tmp20 = _temp1->key;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(851)
							int tmp21 = _g->tree->compare(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(851)
							int _comp = tmp21;		HX_STACK_VAR(_comp,"_comp");
							HX_STACK_LINE(851)
							bool tmp22 = (_comp < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(851)
							if ((tmp22)){
								HX_STACK_LINE(851)
								_next = _temp1;
								HX_STACK_LINE(851)
								_temp1 = _temp1->left;
							}
							else{
								HX_STACK_LINE(851)
								bool tmp23 = (_comp > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(851)
								if ((tmp23)){
									HX_STACK_LINE(851)
									_temp1 = _temp1->right;
								}
								else{
									HX_STACK_LINE(851)
									_g->current = _next;
									HX_STACK_LINE(851)
									break;
								}
							}
						}
						HX_STACK_LINE(851)
						tmp13 = _next;
					}
				}
				HX_STACK_LINE(851)
				_g->current = tmp13;
				HX_STACK_LINE(851)
				tmp7 = _temp->value;
			}
			HX_STACK_LINE(851)
			::phoenix::geometry::Geometry geom = tmp7;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,list_geometry,(void))

int Batcher_obj::set_show_stats( int _value){
	HX_STACK_FRAME("phoenix.Batcher","set_show_stats",0x179d9de0,"phoenix.Batcher.set_show_stats","phoenix/Batcher.hx",857,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(858)
	bool tmp = (_value == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(858)
	if ((tmp)){
		HX_STACK_LINE(859)
		::phoenix::Renderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(859)
		(tmp1->stats->batchers)--;
	}
	else{
		HX_STACK_LINE(861)
		::phoenix::Renderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(861)
		(tmp1->stats->batchers)++;
	}
	HX_STACK_LINE(863)
	int tmp1 = this->show_stats = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(863)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,set_show_stats,return )

int Batcher_obj::_sequence_key;

Array< ::Dynamic > Batcher_obj::all;

int Batcher_obj::vert_attribute;

int Batcher_obj::tcoord_attribute;

int Batcher_obj::color_attribute;

int Batcher_obj::normal_attribute;


Batcher_obj::Batcher_obj()
{
}

void Batcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Batcher);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(tree_changed,"tree_changed");
	HX_MARK_MEMBER_NAME(pos_list,"pos_list");
	HX_MARK_MEMBER_NAME(tcoord_list,"tcoord_list");
	HX_MARK_MEMBER_NAME(color_list,"color_list");
	HX_MARK_MEMBER_NAME(normal_list,"normal_list");
	HX_MARK_MEMBER_NAME(max_verts,"max_verts");
	HX_MARK_MEMBER_NAME(max_floats,"max_floats");
	HX_MARK_MEMBER_NAME(vert_count,"vert_count");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(draw_calls,"draw_calls");
	HX_MARK_MEMBER_NAME(dynamic_batched_count,"dynamic_batched_count");
	HX_MARK_MEMBER_NAME(static_batched_count,"static_batched_count");
	HX_MARK_MEMBER_NAME(visible_count,"visible_count");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(show_stats,"show_stats");
	HX_MARK_MEMBER_NAME(sequence,"sequence");
	HX_MARK_MEMBER_NAME(pos_floats,"pos_floats");
	HX_MARK_MEMBER_NAME(tcoord_floats,"tcoord_floats");
	HX_MARK_MEMBER_NAME(color_floats,"color_floats");
	HX_MARK_MEMBER_NAME(normal_floats,"normal_floats");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(_dropped,"_dropped");
	HX_MARK_END_CLASS();
}

void Batcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(tree_changed,"tree_changed");
	HX_VISIT_MEMBER_NAME(pos_list,"pos_list");
	HX_VISIT_MEMBER_NAME(tcoord_list,"tcoord_list");
	HX_VISIT_MEMBER_NAME(color_list,"color_list");
	HX_VISIT_MEMBER_NAME(normal_list,"normal_list");
	HX_VISIT_MEMBER_NAME(max_verts,"max_verts");
	HX_VISIT_MEMBER_NAME(max_floats,"max_floats");
	HX_VISIT_MEMBER_NAME(vert_count,"vert_count");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(draw_calls,"draw_calls");
	HX_VISIT_MEMBER_NAME(dynamic_batched_count,"dynamic_batched_count");
	HX_VISIT_MEMBER_NAME(static_batched_count,"static_batched_count");
	HX_VISIT_MEMBER_NAME(visible_count,"visible_count");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(show_stats,"show_stats");
	HX_VISIT_MEMBER_NAME(sequence,"sequence");
	HX_VISIT_MEMBER_NAME(pos_floats,"pos_floats");
	HX_VISIT_MEMBER_NAME(tcoord_floats,"tcoord_floats");
	HX_VISIT_MEMBER_NAME(color_floats,"color_floats");
	HX_VISIT_MEMBER_NAME(normal_floats,"normal_floats");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(_dropped,"_dropped");
}

Dynamic Batcher_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"batch") ) { return batch_dyn(); }
		if (HX_FIELD_EQ(inName,"prune") ) { return prune_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		if (HX_FIELD_EQ(inName,"pos_list") ) { return pos_list; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"sequence") ) { return sequence; }
		if (HX_FIELD_EQ(inName,"_dropped") ) { return _dropped; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_verts") ) { return max_verts; }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"color_list") ) { return color_list; }
		if (HX_FIELD_EQ(inName,"max_floats") ) { return max_floats; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { return vert_count; }
		if (HX_FIELD_EQ(inName,"draw_calls") ) { return draw_calls; }
		if (HX_FIELD_EQ(inName,"show_stats") ) { return show_stats; }
		if (HX_FIELD_EQ(inName,"pos_floats") ) { return pos_floats; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tcoord_list") ) { return tcoord_list; }
		if (HX_FIELD_EQ(inName,"normal_list") ) { return normal_list; }
		if (HX_FIELD_EQ(inName,"update_view") ) { return update_view_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tree_changed") ) { return tree_changed; }
		if (HX_FIELD_EQ(inName,"color_floats") ) { return color_floats; }
		if (HX_FIELD_EQ(inName,"compare_rule") ) { return compare_rule_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"visible_count") ) { return visible_count; }
		if (HX_FIELD_EQ(inName,"tcoord_floats") ) { return tcoord_floats; }
		if (HX_FIELD_EQ(inName,"normal_floats") ) { return normal_floats; }
		if (HX_FIELD_EQ(inName,"list_geometry") ) { return list_geometry_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"submit_buffers") ) { return submit_buffers_dyn(); }
		if (HX_FIELD_EQ(inName,"geometry_batch") ) { return geometry_batch_dyn(); }
		if (HX_FIELD_EQ(inName,"set_show_stats") ) { return set_show_stats_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"submit_geometry") ) { return submit_geometry_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"geometry_compare") ) { return geometry_compare_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { return static_batched_count; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { return dynamic_batched_count; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"apply_default_uniforms") ) { return apply_default_uniforms_dyn(); }
		if (HX_FIELD_EQ(inName,"submit_static_geometry") ) { return submit_static_geometry_dyn(); }
		if (HX_FIELD_EQ(inName,"compare_rule_to_string") ) { return compare_rule_to_string_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"submit_current_vertex_list") ) { return submit_current_vertex_list_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Batcher_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { outValue = all; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { outValue = _sequence_key; return true;  }
	}
	return false;
}

Dynamic Batcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp == hx::paccAlways) return set_layer(inValue);layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::BatchState >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::luxe::Emitter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { geometry=inValue.Cast< ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos_list") ) { pos_list=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sequence") ) { sequence=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dropped") ) { _dropped=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_verts") ) { max_verts=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"color_list") ) { color_list=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_floats") ) { max_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { vert_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draw_calls") ) { draw_calls=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"show_stats") ) { if (inCallProp == hx::paccAlways) return set_show_stats(inValue);show_stats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos_floats") ) { pos_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tcoord_list") ) { tcoord_list=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal_list") ) { normal_list=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tree_changed") ) { tree_changed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color_floats") ) { color_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"visible_count") ) { visible_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tcoord_floats") ) { tcoord_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal_floats") ) { normal_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { static_batched_count=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { dynamic_batched_count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Batcher_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { all=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { _sequence_key=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Batcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));
	outFields->push(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"));
	outFields->push(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"));
	outFields->push(HX_HCSTRING("tree_changed","\xd3","\x31","\xee","\x4a"));
	outFields->push(HX_HCSTRING("pos_list","\x29","\x22","\xaf","\x03"));
	outFields->push(HX_HCSTRING("tcoord_list","\xdc","\x26","\x24","\x80"));
	outFields->push(HX_HCSTRING("color_list","\xfa","\xdf","\x02","\x8c"));
	outFields->push(HX_HCSTRING("normal_list","\xb6","\x98","\xc8","\xf4"));
	outFields->push(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"));
	outFields->push(HX_HCSTRING("max_floats","\xd2","\x86","\xa0","\x4c"));
	outFields->push(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"));
	outFields->push(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"));
	outFields->push(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"));
	outFields->push(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"));
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("show_stats","\x1d","\xee","\xd2","\xb4"));
	outFields->push(HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8"));
	outFields->push(HX_HCSTRING("pos_floats","\xe2","\x71","\xb7","\xf8"));
	outFields->push(HX_HCSTRING("tcoord_floats","\x55","\x49","\xfd","\x3f"));
	outFields->push(HX_HCSTRING("color_floats","\xf3","\x05","\xd3","\x0b"));
	outFields->push(HX_HCSTRING("normal_floats","\xaf","\x65","\x05","\x7c"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("_dropped","\x81","\x7d","\xa1","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Batcher_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Batcher_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsInt,(int)offsetof(Batcher_obj,layer),HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f")},
	{hx::fsObject /*::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(Batcher_obj,geometry),HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2")},
	{hx::fsObject /*::luxe::Emitter*/ ,(int)offsetof(Batcher_obj,emitter),HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe")},
	{hx::fsBool,(int)offsetof(Batcher_obj,tree_changed),HX_HCSTRING("tree_changed","\xd3","\x31","\xee","\x4a")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,pos_list),HX_HCSTRING("pos_list","\x29","\x22","\xaf","\x03")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,tcoord_list),HX_HCSTRING("tcoord_list","\xdc","\x26","\x24","\x80")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,color_list),HX_HCSTRING("color_list","\xfa","\xdf","\x02","\x8c")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,normal_list),HX_HCSTRING("normal_list","\xb6","\x98","\xc8","\xf4")},
	{hx::fsInt,(int)offsetof(Batcher_obj,max_verts),HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b")},
	{hx::fsInt,(int)offsetof(Batcher_obj,max_floats),HX_HCSTRING("max_floats","\xd2","\x86","\xa0","\x4c")},
	{hx::fsInt,(int)offsetof(Batcher_obj,vert_count),HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(Batcher_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Batcher_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Batcher_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsInt,(int)offsetof(Batcher_obj,draw_calls),HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a")},
	{hx::fsInt,(int)offsetof(Batcher_obj,dynamic_batched_count),HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_batched_count),HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c")},
	{hx::fsInt,(int)offsetof(Batcher_obj,visible_count),HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70")},
	{hx::fsBool,(int)offsetof(Batcher_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsString,(int)offsetof(Batcher_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Batcher_obj,show_stats),HX_HCSTRING("show_stats","\x1d","\xee","\xd2","\xb4")},
	{hx::fsInt,(int)offsetof(Batcher_obj,sequence),HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8")},
	{hx::fsInt,(int)offsetof(Batcher_obj,pos_floats),HX_HCSTRING("pos_floats","\xe2","\x71","\xb7","\xf8")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tcoord_floats),HX_HCSTRING("tcoord_floats","\x55","\x49","\xfd","\x3f")},
	{hx::fsInt,(int)offsetof(Batcher_obj,color_floats),HX_HCSTRING("color_floats","\xf3","\x05","\xd3","\x0b")},
	{hx::fsInt,(int)offsetof(Batcher_obj,normal_floats),HX_HCSTRING("normal_floats","\xaf","\x65","\x05","\x7c")},
	{hx::fsObject /*::phoenix::BatchState*/ ,(int)offsetof(Batcher_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Batcher_obj,_dropped),HX_HCSTRING("_dropped","\x81","\x7d","\xa1","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Batcher_obj::_sequence_key,HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Batcher_obj::all,HX_HCSTRING("all","\x21","\xf9","\x49","\x00")},
	{hx::fsInt,(void *) &Batcher_obj::vert_attribute,HX_HCSTRING("vert_attribute","\xce","\x47","\x70","\x43")},
	{hx::fsInt,(void *) &Batcher_obj::tcoord_attribute,HX_HCSTRING("tcoord_attribute","\xde","\x9c","\x72","\x7b")},
	{hx::fsInt,(void *) &Batcher_obj::color_attribute,HX_HCSTRING("color_attribute","\x00","\x17","\x4a","\xaf")},
	{hx::fsInt,(void *) &Batcher_obj::normal_attribute,HX_HCSTRING("normal_attribute","\xc4","\x34","\xe1","\x31")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"),
	HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"),
	HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"),
	HX_HCSTRING("tree_changed","\xd3","\x31","\xee","\x4a"),
	HX_HCSTRING("pos_list","\x29","\x22","\xaf","\x03"),
	HX_HCSTRING("tcoord_list","\xdc","\x26","\x24","\x80"),
	HX_HCSTRING("color_list","\xfa","\xdf","\x02","\x8c"),
	HX_HCSTRING("normal_list","\xb6","\x98","\xc8","\xf4"),
	HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"),
	HX_HCSTRING("max_floats","\xd2","\x86","\xa0","\x4c"),
	HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"),
	HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"),
	HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"),
	HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("show_stats","\x1d","\xee","\xd2","\xb4"),
	HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8"),
	HX_HCSTRING("pos_floats","\xe2","\x71","\xb7","\xf8"),
	HX_HCSTRING("tcoord_floats","\x55","\x49","\xfd","\x3f"),
	HX_HCSTRING("color_floats","\xf3","\x05","\xd3","\x0b"),
	HX_HCSTRING("normal_floats","\xaf","\x65","\x05","\x7c"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("_dropped","\x81","\x7d","\xa1","\x40"),
	HX_HCSTRING("batch","\xba","\xe7","\xba","\xad"),
	HX_HCSTRING("prune","\x2a","\x73","\x94","\xc8"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("update_view","\x9b","\x47","\xcb","\x53"),
	HX_HCSTRING("apply_default_uniforms","\x6e","\xb8","\xfa","\x3e"),
	HX_HCSTRING("submit_geometry","\xf9","\xde","\xa8","\xaf"),
	HX_HCSTRING("submit_buffers","\x0c","\x2d","\x09","\xbe"),
	HX_HCSTRING("submit_static_geometry","\x3c","\x62","\x76","\x36"),
	HX_HCSTRING("submit_current_vertex_list","\x2c","\xd9","\x42","\xde"),
	HX_HCSTRING("geometry_batch","\x2d","\x43","\xe5","\x75"),
	HX_HCSTRING("set_layer","\x34","\xca","\xba","\x96"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("compare_rule_to_string","\xac","\x83","\x34","\x4e"),
	HX_HCSTRING("compare_rule","\x16","\x06","\x47","\x08"),
	HX_HCSTRING("geometry_compare","\xd8","\x76","\x77","\x6f"),
	HX_HCSTRING("list_geometry","\xf3","\x61","\xa0","\x84"),
	HX_HCSTRING("set_show_stats","\xda","\x5e","\xe8","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Batcher_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Batcher_obj::_sequence_key,"_sequence_key");
	HX_MARK_MEMBER_NAME(Batcher_obj::all,"all");
	HX_MARK_MEMBER_NAME(Batcher_obj::vert_attribute,"vert_attribute");
	HX_MARK_MEMBER_NAME(Batcher_obj::tcoord_attribute,"tcoord_attribute");
	HX_MARK_MEMBER_NAME(Batcher_obj::color_attribute,"color_attribute");
	HX_MARK_MEMBER_NAME(Batcher_obj::normal_attribute,"normal_attribute");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Batcher_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Batcher_obj::_sequence_key,"_sequence_key");
	HX_VISIT_MEMBER_NAME(Batcher_obj::all,"all");
	HX_VISIT_MEMBER_NAME(Batcher_obj::vert_attribute,"vert_attribute");
	HX_VISIT_MEMBER_NAME(Batcher_obj::tcoord_attribute,"tcoord_attribute");
	HX_VISIT_MEMBER_NAME(Batcher_obj::color_attribute,"color_attribute");
	HX_VISIT_MEMBER_NAME(Batcher_obj::normal_attribute,"normal_attribute");
};

#endif

hx::Class Batcher_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7"),
	HX_HCSTRING("all","\x21","\xf9","\x49","\x00"),
	HX_HCSTRING("vert_attribute","\xce","\x47","\x70","\x43"),
	HX_HCSTRING("tcoord_attribute","\xde","\x9c","\x72","\x7b"),
	HX_HCSTRING("color_attribute","\x00","\x17","\x4a","\xaf"),
	HX_HCSTRING("normal_attribute","\xc4","\x34","\xe1","\x31"),
	::String(null()) };

void Batcher_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Batcher_obj::__GetStatic;
	__mClass->mSetStaticField = &Batcher_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Batcher_obj >;
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

void Batcher_obj::__boot()
{
	_sequence_key= (int)-1;
	all= Array_obj< ::Dynamic >::__new();
	vert_attribute= (int)0;
	tcoord_attribute= (int)1;
	color_attribute= (int)2;
	normal_attribute= (int)3;
}

} // end namespace phoenix
