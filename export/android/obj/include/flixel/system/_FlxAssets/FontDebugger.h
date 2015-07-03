#ifndef INCLUDED_flixel_system__FlxAssets_FontDebugger
#define INCLUDED_flixel_system__FlxAssets_FontDebugger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,_FlxAssets,FontDebugger)
HX_DECLARE_CLASS3(openfl,_legacy,text,Font)
HX_DECLARE_CLASS3(openfl,_legacy,text,FontStyle)
HX_DECLARE_CLASS3(openfl,_legacy,text,FontType)
namespace flixel{
namespace _system{
namespace _FlxAssets{


class HXCPP_CLASS_ATTRIBUTES  FontDebugger_obj : public ::openfl::_legacy::text::Font_obj{
	public:
		typedef ::openfl::_legacy::text::Font_obj super;
		typedef FontDebugger_obj OBJ_;
		FontDebugger_obj();
		Void __construct(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system._FlxAssets.FontDebugger")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FontDebugger_obj > __new(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontDebugger_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FontDebugger","\x30","\x71","\xc8","\x7a"); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace _FlxAssets

#endif /* INCLUDED_flixel_system__FlxAssets_FontDebugger */ 
