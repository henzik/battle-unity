#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#define INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_util_FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxPool_flixel_util_FlxRect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPool_flixel_util_FlxRect_obj OBJ_;
		FlxPool_flixel_util_FlxRect_obj();
		Void __construct(::hx::Class classObj);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxPool_flixel_util_FlxRect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxPool_flixel_util_FlxRect_obj > __new(::hx::Class classObj);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPool_flixel_util_FlxRect_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxPool_flixel_util_FlxRect","\x6b","\x1d","\xe8","\x9e"); }

		Array< ::Dynamic > _pool;
		::hx::Class _class;
		virtual ::flixel::util::FlxRect get( );
		Dynamic get_dyn();

		virtual Void put( ::flixel::util::FlxRect obj);
		Dynamic put_dyn();

		virtual Void putUnsafe( ::flixel::util::FlxRect obj);
		Dynamic putUnsafe_dyn();

		virtual Void preAllocate( int numObjects);
		Dynamic preAllocate_dyn();

		virtual Array< ::Dynamic > clear( );
		Dynamic clear_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect */ 
