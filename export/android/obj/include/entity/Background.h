#ifndef INCLUDED_entity_Background
#define INCLUDED_entity_Background

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(entity,Background)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
namespace entity{


class HXCPP_CLASS_ATTRIBUTES  Background_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Background_obj OBJ_;
		Background_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="entity.Background")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Background_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Background_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Background","\x0e","\x98","\xce","\x1c"); }

};

} // end namespace entity

#endif /* INCLUDED_entity_Background */ 
