#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::MenuBG__jpg;

::String AssetPaths_obj::pressStart__png;

::String AssetPaths_obj::maintheme__mp3;

::String AssetPaths_obj::maintheme__wav;

::String AssetPaths_obj::Teleport__wav;


AssetPaths_obj::AssetPaths_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::MenuBG__jpg,HX_HCSTRING("MenuBG__jpg","\xfd","\x41","\x1d","\x76")},
	{hx::fsString,(void *) &AssetPaths_obj::pressStart__png,HX_HCSTRING("pressStart__png","\x4a","\x1f","\xeb","\x42")},
	{hx::fsString,(void *) &AssetPaths_obj::maintheme__mp3,HX_HCSTRING("maintheme__mp3","\x20","\x93","\x68","\x16")},
	{hx::fsString,(void *) &AssetPaths_obj::maintheme__wav,HX_HCSTRING("maintheme__wav","\xdc","\x1c","\x70","\x16")},
	{hx::fsString,(void *) &AssetPaths_obj::Teleport__wav,HX_HCSTRING("Teleport__wav","\x61","\x23","\x8f","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::MenuBG__jpg,"MenuBG__jpg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pressStart__png,"pressStart__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::maintheme__mp3,"maintheme__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::maintheme__wav,"maintheme__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Teleport__wav,"Teleport__wav");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::MenuBG__jpg,"MenuBG__jpg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pressStart__png,"pressStart__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::maintheme__mp3,"maintheme__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::maintheme__wav,"maintheme__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Teleport__wav,"Teleport__wav");
};

#endif

hx::Class AssetPaths_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8"),
	HX_HCSTRING("MenuBG__jpg","\xfd","\x41","\x1d","\x76"),
	HX_HCSTRING("pressStart__png","\x4a","\x1f","\xeb","\x42"),
	HX_HCSTRING("maintheme__mp3","\x20","\x93","\x68","\x16"),
	HX_HCSTRING("maintheme__wav","\xdc","\x1c","\x70","\x16"),
	HX_HCSTRING("Teleport__wav","\x61","\x23","\x8f","\xfd"),
	::String(null()) };

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetPaths_obj >;
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

void AssetPaths_obj::__boot()
{
	data_goes_here__txt= HX_HCSTRING("assets/data/data-goes-here.txt","\x5f","\x4b","\xb2","\x8e");
	MenuBG__jpg= HX_HCSTRING("assets/images/MenuBG.jpg","\x22","\x18","\x36","\x38");
	pressStart__png= HX_HCSTRING("assets/images/pressStart.png","\x85","\x3b","\x88","\xda");
	maintheme__mp3= HX_HCSTRING("assets/music/maintheme.mp3","\x3c","\x22","\xd9","\x87");
	maintheme__wav= HX_HCSTRING("assets/music/maintheme.wav","\xf8","\xab","\xe0","\x87");
	Teleport__wav= HX_HCSTRING("assets/sounds/Teleport.wav","\xa8","\xbe","\x60","\x5d");
}

