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

::String AssetPaths_obj::__DS_Store;

::String AssetPaths_obj::game_background_sprites__png;

::String AssetPaths_obj::megaman__png;

::String AssetPaths_obj::megaman_move__png;

::String AssetPaths_obj::menu_background__jpg;

::String AssetPaths_obj::platform_blue_normal__png;

::String AssetPaths_obj::platform_red_normal__png;

::String AssetPaths_obj::press_start__png;

::String AssetPaths_obj::maintheme__wav;

::String AssetPaths_obj::Teleport__wav;


AssetPaths_obj::AssetPaths_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AssetPaths_obj::__DS_Store,HX_HCSTRING("__DS_Store","\xf1","\x0e","\x3f","\x63")},
	{hx::fsString,(void *) &AssetPaths_obj::game_background_sprites__png,HX_HCSTRING("game_background_sprites__png","\x9f","\xf1","\x8b","\x81")},
	{hx::fsString,(void *) &AssetPaths_obj::megaman__png,HX_HCSTRING("megaman__png","\x21","\x06","\x41","\x2b")},
	{hx::fsString,(void *) &AssetPaths_obj::megaman_move__png,HX_HCSTRING("megaman_move__png","\x01","\x29","\x38","\x81")},
	{hx::fsString,(void *) &AssetPaths_obj::menu_background__jpg,HX_HCSTRING("menu_background__jpg","\x33","\x95","\x2c","\x64")},
	{hx::fsString,(void *) &AssetPaths_obj::platform_blue_normal__png,HX_HCSTRING("platform_blue_normal__png","\xe9","\x8f","\x58","\xeb")},
	{hx::fsString,(void *) &AssetPaths_obj::platform_red_normal__png,HX_HCSTRING("platform_red_normal__png","\x08","\xa6","\x38","\x65")},
	{hx::fsString,(void *) &AssetPaths_obj::press_start__png,HX_HCSTRING("press_start__png","\x63","\x98","\x9c","\x77")},
	{hx::fsString,(void *) &AssetPaths_obj::maintheme__wav,HX_HCSTRING("maintheme__wav","\xdc","\x1c","\x70","\x16")},
	{hx::fsString,(void *) &AssetPaths_obj::Teleport__wav,HX_HCSTRING("Teleport__wav","\x61","\x23","\x8f","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__DS_Store,"__DS_Store");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::game_background_sprites__png,"game_background_sprites__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::megaman__png,"megaman__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::megaman_move__png,"megaman_move__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::menu_background__jpg,"menu_background__jpg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::platform_blue_normal__png,"platform_blue_normal__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::platform_red_normal__png,"platform_red_normal__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::press_start__png,"press_start__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::maintheme__wav,"maintheme__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Teleport__wav,"Teleport__wav");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__DS_Store,"__DS_Store");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::game_background_sprites__png,"game_background_sprites__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::megaman__png,"megaman__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::megaman_move__png,"megaman_move__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::menu_background__jpg,"menu_background__jpg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::platform_blue_normal__png,"platform_blue_normal__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::platform_red_normal__png,"platform_red_normal__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::press_start__png,"press_start__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::maintheme__wav,"maintheme__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Teleport__wav,"Teleport__wav");
};

#endif

hx::Class AssetPaths_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__DS_Store","\xf1","\x0e","\x3f","\x63"),
	HX_HCSTRING("game_background_sprites__png","\x9f","\xf1","\x8b","\x81"),
	HX_HCSTRING("megaman__png","\x21","\x06","\x41","\x2b"),
	HX_HCSTRING("megaman_move__png","\x01","\x29","\x38","\x81"),
	HX_HCSTRING("menu_background__jpg","\x33","\x95","\x2c","\x64"),
	HX_HCSTRING("platform_blue_normal__png","\xe9","\x8f","\x58","\xeb"),
	HX_HCSTRING("platform_red_normal__png","\x08","\xa6","\x38","\x65"),
	HX_HCSTRING("press_start__png","\x63","\x98","\x9c","\x77"),
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
	__DS_Store= HX_HCSTRING("assets/.DS_Store","\x33","\xa6","\xd1","\x02");
	game_background_sprites__png= HX_HCSTRING("assets/images/game_background_sprites.png","\x1a","\x5a","\x90","\x8c");
	megaman__png= HX_HCSTRING("assets/images/megaman.png","\xd8","\x51","\xc0","\xe9");
	megaman_move__png= HX_HCSTRING("assets/images/megaman_move.png","\x6e","\x66","\x53","\x27");
	menu_background__jpg= HX_HCSTRING("assets/images/menu_background.jpg","\x76","\x01","\x17","\xa1");
	platform_blue_normal__png= HX_HCSTRING("assets/images/platform_blue_normal.png","\x86","\x77","\x39","\x47");
	platform_red_normal__png= HX_HCSTRING("assets/images/platform_red_normal.png","\x51","\x67","\x0c","\x7f");
	press_start__png= HX_HCSTRING("assets/images/press_start.png","\x56","\xfc","\xc0","\x5e");
	maintheme__wav= HX_HCSTRING("assets/music/maintheme.wav","\xf8","\xab","\xe0","\x87");
	Teleport__wav= HX_HCSTRING("assets/sounds/Teleport.wav","\xa8","\xbe","\x60","\x5d");
}

