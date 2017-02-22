#ifndef INCLUDED_snow_api_buffers__Uint8ClampedArray_Uint8ClampedArray_Impl_
#define INCLUDED_snow_api_buffers__Uint8ClampedArray_Uint8ClampedArray_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,api,buffers,_Uint8ClampedArray,Uint8ClampedArray_Impl_)
namespace snow{
namespace api{
namespace buffers{
namespace _Uint8ClampedArray{


class HXCPP_CLASS_ATTRIBUTES  Uint8ClampedArray_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Uint8ClampedArray_Impl__obj OBJ_;
		Uint8ClampedArray_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Uint8ClampedArray_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uint8ClampedArray_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Uint8ClampedArray_Impl_","\xdd","\xbb","\x78","\xad"); }

		static void __boot();
		static int BYTES_PER_ELEMENT;
		static ::snow::api::buffers::ArrayBufferView _new( int _elements);
		static Dynamic _new_dyn();

		static ::snow::api::buffers::ArrayBufferView fromArray( cpp::ArrayBase _array);
		static Dynamic fromArray_dyn();

		static ::snow::api::buffers::ArrayBufferView fromView( ::snow::api::buffers::ArrayBufferView _view);
		static Dynamic fromView_dyn();

		static ::snow::api::buffers::ArrayBufferView fromBuffer( Array< unsigned char > _buffer,int _byteOffset,int _byteLength);
		static Dynamic fromBuffer_dyn();

		static ::snow::api::buffers::ArrayBufferView subarray( ::snow::api::buffers::ArrayBufferView this1,int begin,Dynamic end);
		static Dynamic subarray_dyn();

		static ::snow::api::buffers::ArrayBufferView fromBytes( ::haxe::io::Bytes _bytes,Dynamic _byteOffset,Dynamic _byteLength);
		static Dynamic fromBytes_dyn();

		static ::haxe::io::Bytes toBytes( ::snow::api::buffers::ArrayBufferView this1);
		static Dynamic toBytes_dyn();

		static int get_length( ::snow::api::buffers::ArrayBufferView this1);
		static Dynamic get_length_dyn();

		static ::String toString( ::snow::api::buffers::ArrayBufferView this1);
		static Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace api
} // end namespace buffers
} // end namespace _Uint8ClampedArray

#endif /* INCLUDED_snow_api_buffers__Uint8ClampedArray_Uint8ClampedArray_Impl_ */ 
