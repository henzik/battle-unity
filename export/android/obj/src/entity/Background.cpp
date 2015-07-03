#include <hxcpp.h>

#ifndef INCLUDED_entity_Background
#include <entity/Background.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
namespace entity{

Void Background_obj::__construct()
{
HX_STACK_FRAME("entity.Background","new",0x608ff8eb,"entity.Background.new","Background.hx",12,0xd9c4a770)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(14)
	this->loadGraphic(HX_HCSTRING("assets/images/game_background_sprites.png","\x1a","\x5a","\x90","\x8c"),true,(int)32,(int)32,null(),null());
	HX_STACK_LINE(15)
	::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	tmp->add(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3),(int)6,true);
	HX_STACK_LINE(16)
	::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	tmp1->play(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),null(),null());
}
;
	return null();
}

//Background_obj::~Background_obj() { }

Dynamic Background_obj::__CreateEmpty() { return  new Background_obj; }
hx::ObjectPtr< Background_obj > Background_obj::__new()
{  hx::ObjectPtr< Background_obj > _result_ = new Background_obj();
	_result_->__construct();
	return _result_;}

Dynamic Background_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Background_obj > _result_ = new Background_obj();
	_result_->__construct();
	return _result_;}


Background_obj::Background_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Background_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Background_obj::__mClass,"__mClass");
};

#endif

hx::Class Background_obj::__mClass;

void Background_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("entity.Background","\x79","\xa7","\x78","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Background_obj >;
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

} // end namespace entity
