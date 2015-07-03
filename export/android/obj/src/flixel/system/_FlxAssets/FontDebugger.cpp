#include <hxcpp.h>

#ifndef INCLUDED_flixel_system__FlxAssets_FontDebugger
#include <flixel/system/_FlxAssets/FontDebugger.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif
namespace flixel{
namespace _system{
namespace _FlxAssets{

Void FontDebugger_obj::__construct(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type)
{
HX_STACK_FRAME("flixel.system._FlxAssets.FontDebugger","new",0xc644602d,"flixel.system._FlxAssets.FontDebugger.new","flixel/system/FlxAssets.hx",21,0xd3ac1356)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_filename,"filename")
HX_STACK_ARG(style,"style")
HX_STACK_ARG(type,"type")
::String filename = __o_filename.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(21)
	::String tmp = filename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::openfl::_legacy::text::FontStyle tmp1 = style;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	::openfl::_legacy::text::FontType tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//FontDebugger_obj::~FontDebugger_obj() { }

Dynamic FontDebugger_obj::__CreateEmpty() { return  new FontDebugger_obj; }
hx::ObjectPtr< FontDebugger_obj > FontDebugger_obj::__new(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type)
{  hx::ObjectPtr< FontDebugger_obj > _result_ = new FontDebugger_obj();
	_result_->__construct(__o_filename,style,type);
	return _result_;}

Dynamic FontDebugger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FontDebugger_obj > _result_ = new FontDebugger_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String FontDebugger_obj::resourceName;


FontDebugger_obj::FontDebugger_obj()
{
}

bool FontDebugger_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = resourceName; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FontDebugger_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontDebugger_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FontDebugger_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontDebugger_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontDebugger_obj::resourceName,"resourceName");
};

#endif

hx::Class FontDebugger_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null()) };

void FontDebugger_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system._FlxAssets.FontDebugger","\xbb","\xc5","\xd3","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontDebugger_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FontDebugger_obj >;
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

void FontDebugger_obj::__boot()
{
	resourceName= HX_HCSTRING("NME_font_flixel_system__FlxAssets_FontDebugger","\x55","\xa5","\x89","\x80");
}

} // end namespace flixel
} // end namespace system
} // end namespace _FlxAssets
