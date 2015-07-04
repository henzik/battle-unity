#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_states_MenuState
#include <states/MenuState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace states{

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("states.MenuState","new",0xfb0d7598,"states.MenuState.new","states/MenuState.hx",11,0x6393c259)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(20)
	this->gameHeight = ::flixel::FlxG_obj::height;
	HX_STACK_LINE(19)
	this->gameWidth = ::flixel::FlxG_obj::width;
	HX_STACK_LINE(11)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	super::__construct(tmp);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("states.MenuState","create",0x702ed4c4,"states.MenuState.create","states/MenuState.hx",22,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		tmp->__Field(HX_HCSTRING("playMusic","\x11","\xfe","\x3e","\x31"), hx::paccDynamic )(HX_HCSTRING("assets/music/maintheme.wav","\xf8","\xab","\xe0","\x87"),((Float)0.5),null());
		HX_STACK_LINE(26)
		::flixel::FlxSprite tmp1 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/menu_background.jpg","\x76","\x01","\x17","\xa1"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		this->_background = tmp1;
		HX_STACK_LINE(27)
		::flixel::FlxSprite tmp2 = this->_background;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		tmp2->set_alpha((int)0);
		HX_STACK_LINE(29)
		::flixel::FlxSprite tmp3 = this->_background;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		this->add(tmp3);
		HX_STACK_LINE(31)
		::flixel::FlxSprite tmp4 = this->_background;		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/MenuState.hx",31,0x6393c259)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(31)
		Dynamic tmp5 = _Function_1_1::Block();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		Dynamic tmp6 = this->Show_button_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/MenuState.hx",31,0x6393c259)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f") , tmp6,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(31)
		Dynamic tmp7 = _Function_1_2::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		::flixel::tweens::FlxTween_obj::tween(tmp4,tmp5,((Float)2.0),tmp7);
		HX_STACK_LINE(32)
		this->super::create();
	}
return null();
}


Void MenuState_obj::Show_button( ::flixel::tweens::FlxTween tween){
{
		HX_STACK_FRAME("states.MenuState","Show_button",0xd50a1d4c,"states.MenuState.Show_button","states/MenuState.hx",35,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tween,"tween")
		HX_STACK_LINE(36)
		Dynamic tmp = this->clickPlay_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton tmp1 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,null(),tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		this->_btnPlay = tmp1;
		HX_STACK_LINE(37)
		::flixel::ui::FlxButton tmp2 = this->_btnPlay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		tmp2->loadGraphic(HX_HCSTRING("assets/images/press_start.png","\x56","\xfc","\xc0","\x5e"),false,(int)127,(int)10,null(),null());
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton tmp3 = this->_btnPlay;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		int tmp4 = this->gameWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton tmp5 = this->_btnPlay;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		Float tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		int tmp9 = this->gameHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton tmp10 = this->_btnPlay;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		Float tmp11 = tmp10->get_height();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(38)
		Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(38)
		Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(38)
		Float tmp14 = (tmp13 - (int)40);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(38)
		tmp3->setPosition(tmp8,tmp14);
		HX_STACK_LINE(40)
		::flixel::_system::frontEnds::SoundFrontEnd tmp15 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(40)
		::flixel::_system::FlxSound tmp16 = tmp15->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/Teleport.wav","\xa8","\xbe","\x60","\x5d"),(int)1,false,true,false,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp17 = this->_btnPlay;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(40)
		tmp17->onDown->sound = tmp16;
		HX_STACK_LINE(41)
		::flixel::ui::FlxButton tmp18 = this->_btnPlay;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(41)
		this->add(tmp18);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuState_obj,Show_button,(void))

Void MenuState_obj::clickPlay( ){
{
		HX_STACK_FRAME("states.MenuState","clickPlay",0xe30ef994,"states.MenuState.clickPlay","states/MenuState.hx",46,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		::states::PlayState tmp = ::states::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::flixel::FlxState State = tmp;		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(46)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		tmp1->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("states.MenuState","destroy",0xcbe6ce32,"states.MenuState.destroy","states/MenuState.hx",53,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("states.MenuState","update",0x7b24f3d1,"states.MenuState.update","states/MenuState.hx",61,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		this->super::update();
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(gameWidth,"gameWidth");
	HX_MARK_MEMBER_NAME(gameHeight,"gameHeight");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(gameWidth,"gameWidth");
	HX_VISIT_MEMBER_NAME(gameHeight,"gameHeight");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { return _btnPlay; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { return gameWidth; }
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return clickPlay_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { return gameHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
		if (HX_FIELD_EQ(inName,"Show_button") ) { return Show_button_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { _btnPlay=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { gameWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { gameHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"));
	outFields->push(HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8"));
	outFields->push(HX_HCSTRING("gameWidth","\xb4","\xa4","\x7d","\xff"));
	outFields->push(HX_HCSTRING("gameHeight","\x79","\xf1","\xc1","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnPlay),HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MenuState_obj,_background),HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8")},
	{hx::fsInt,(int)offsetof(MenuState_obj,gameWidth),HX_HCSTRING("gameWidth","\xb4","\xa4","\x7d","\xff")},
	{hx::fsInt,(int)offsetof(MenuState_obj,gameHeight),HX_HCSTRING("gameHeight","\x79","\xf1","\xc1","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_btnPlay","\xf1","\xd3","\x9c","\x11"),
	HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8"),
	HX_HCSTRING("gameWidth","\xb4","\xa4","\x7d","\xff"),
	HX_HCSTRING("gameHeight","\x79","\xf1","\xc1","\x44"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("Show_button","\x14","\x80","\xd4","\x3b"),
	HX_HCSTRING("clickPlay","\x5c","\x9a","\x59","\x29"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("states.MenuState","\xa6","\x09","\x15","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MenuState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
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

} // end namespace states
