#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_entity_Background
#include <entity/Background.h>
#endif
#ifndef INCLUDED_entity_Player
#include <entity/Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace states{

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("states.PlayState","new",0x0e695aa3,"states.PlayState.new","states/PlayState.hx",17,0x36e487ae)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(27)
	this->megaman2 = null();
	HX_STACK_LINE(26)
	this->megaman = null();
	HX_STACK_LINE(25)
	this->background = null();
	struct _Function_1_1{
		inline static int Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/PlayState.hx",23,0x36e487ae)
			{
				HX_STACK_LINE(23)
				int tmp = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(23)
				Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(23)
				return ::Std_obj::_int(tmp1);
			}
			return null();
		}
	};
	HX_STACK_LINE(23)
	this->centerY = _Function_1_1::Block();
	struct _Function_1_2{
		inline static int Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/PlayState.hx",22,0x36e487ae)
			{
				HX_STACK_LINE(22)
				int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(22)
				Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(22)
				return ::Std_obj::_int(tmp1);
			}
			return null();
		}
	};
	HX_STACK_LINE(22)
	this->centerX = _Function_1_2::Block();
	HX_STACK_LINE(17)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("states.PlayState","create",0x0cd56899,"states.PlayState.create","states/PlayState.hx",30,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		this->set_bgColor((int)-4130616);
		HX_STACK_LINE(32)
		::entity::Background tmp = ::entity::Background_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		this->background = tmp;
		HX_STACK_LINE(33)
		::entity::Player tmp1 = ::entity::Player_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		this->megaman = tmp1;
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(36)
			::entity::Background tmp2 = this->background;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			::flixel::group::FlxTypedGroup tmp3 = tmp2->getGroup();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			int _g = tmp3->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			while((true)){
				HX_STACK_LINE(36)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(36)
				if ((tmp5)){
					HX_STACK_LINE(36)
					break;
				}
				HX_STACK_LINE(36)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(36)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(37)
				::entity::Background tmp7 = this->background;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				::flixel::group::FlxTypedGroup tmp8 = tmp7->getGroup();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(37)
				::flixel::FlxSprite tmp9 = tmp8->members->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(37)
				this->add(tmp9);
			}
		}
		HX_STACK_LINE(39)
		this->generatePlatforms();
		HX_STACK_LINE(41)
		::entity::Player tmp2 = this->megaman;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		this->add(tmp2);
		HX_STACK_LINE(42)
		::flixel::FlxBasic tmp3 = this->megaman2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		this->add(tmp3);
		HX_STACK_LINE(46)
		this->super::create();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("states.PlayState","update",0x17cb87a6,"states.PlayState.update","states/PlayState.hx",54,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		::entity::Background tmp = this->background;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		tmp->move();
		HX_STACK_LINE(56)
		this->super::update();
	}
return null();
}


Void PlayState_obj::generatePlatforms( ){
{
		HX_STACK_FRAME("states.PlayState","generatePlatforms",0xd327f5ee,"states.PlayState.generatePlatforms","states/PlayState.hx",59,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		int width = (int)6;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(61)
		int height = (int)3;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(62)
		int xLocation = (int)0;		HX_STACK_VAR(xLocation,"xLocation");
		HX_STACK_LINE(63)
		int tmp = this->centerY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		int tmp1 = (tmp - (int)15);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		int yLocation = tmp1;		HX_STACK_VAR(yLocation,"yLocation");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(65)
			while((true)){
				HX_STACK_LINE(65)
				bool tmp2 = (_g < width);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(65)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(65)
				if ((tmp3)){
					HX_STACK_LINE(65)
					break;
				}
				HX_STACK_LINE(65)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(65)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(66)
					while((true)){
						HX_STACK_LINE(66)
						bool tmp5 = (_g1 < height);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(66)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(66)
						if ((tmp6)){
							HX_STACK_LINE(66)
							break;
						}
						HX_STACK_LINE(66)
						int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(66)
						int j = tmp7;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(67)
						::flixel::FlxSprite tmp8 = ::flixel::FlxSprite_obj::__new(xLocation,yLocation,HX_HCSTRING("assets/images/platform_red_normal.png","\x51","\x67","\x0c","\x7f"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(67)
						::flixel::FlxSprite red_platform = tmp8;		HX_STACK_VAR(red_platform,"red_platform");
						HX_STACK_LINE(68)
						::flixel::FlxSprite tmp9 = ::flixel::FlxSprite_obj::__new(xLocation,yLocation,HX_HCSTRING("assets/images/platform_blue_normal.png","\x86","\x77","\x39","\x47"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(68)
						::flixel::FlxSprite blue_platform = tmp9;		HX_STACK_VAR(blue_platform,"blue_platform");
						HX_STACK_LINE(70)
						bool tmp10 = (i < (int)3);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(70)
						if ((tmp10)){
							HX_STACK_LINE(71)
							::flixel::FlxSprite tmp11 = red_platform;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(71)
							this->add(tmp11);
						}
						else{
							HX_STACK_LINE(73)
							::flixel::FlxSprite tmp11 = blue_platform;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(73)
							this->add(tmp11);
						}
						HX_STACK_LINE(75)
						hx::AddEq(yLocation,(int)26);
					}
				}
				HX_STACK_LINE(79)
				int tmp5 = this->centerY;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				int tmp6 = (tmp5 - (int)15);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				yLocation = tmp6;
				HX_STACK_LINE(80)
				hx::AddEq(xLocation,(int)40);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,generatePlatforms,(void))

Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("states.PlayState","destroy",0x410194bd,"states.PlayState.destroy","states/PlayState.hx",92,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		this->super::destroy();
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(red_platform,"red_platform");
	HX_MARK_MEMBER_NAME(centerX,"centerX");
	HX_MARK_MEMBER_NAME(centerY,"centerY");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(megaman,"megaman");
	HX_MARK_MEMBER_NAME(megaman2,"megaman2");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(red_platform,"red_platform");
	HX_VISIT_MEMBER_NAME(centerX,"centerX");
	HX_VISIT_MEMBER_NAME(centerY,"centerY");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(megaman,"megaman");
	HX_VISIT_MEMBER_NAME(megaman2,"megaman2");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerX") ) { return centerX; }
		if (HX_FIELD_EQ(inName,"centerY") ) { return centerY; }
		if (HX_FIELD_EQ(inName,"megaman") ) { return megaman; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"megaman2") ) { return megaman2; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"red_platform") ) { return red_platform; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"generatePlatforms") ) { return generatePlatforms_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"centerX") ) { centerX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerY") ) { centerY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"megaman") ) { megaman=inValue.Cast< ::entity::Player >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"megaman2") ) { megaman2=inValue.Cast< ::flixel::FlxBasic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::entity::Background >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"red_platform") ) { red_platform=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("red_platform","\xa1","\x9e","\xa5","\xeb"));
	outFields->push(HX_HCSTRING("centerX","\xe3","\xf4","\xe5","\x19"));
	outFields->push(HX_HCSTRING("centerY","\xe4","\xf4","\xe5","\x19"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("megaman","\x68","\x7e","\x65","\xa5"));
	outFields->push(HX_HCSTRING("megaman2","\xca","\x1c","\x69","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,red_platform),HX_HCSTRING("red_platform","\xa1","\x9e","\xa5","\xeb")},
	{hx::fsInt,(int)offsetof(PlayState_obj,centerX),HX_HCSTRING("centerX","\xe3","\xf4","\xe5","\x19")},
	{hx::fsInt,(int)offsetof(PlayState_obj,centerY),HX_HCSTRING("centerY","\xe4","\xf4","\xe5","\x19")},
	{hx::fsObject /*::entity::Background*/ ,(int)offsetof(PlayState_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsObject /*::entity::Player*/ ,(int)offsetof(PlayState_obj,megaman),HX_HCSTRING("megaman","\x68","\x7e","\x65","\xa5")},
	{hx::fsObject /*::flixel::FlxBasic*/ ,(int)offsetof(PlayState_obj,megaman2),HX_HCSTRING("megaman2","\xca","\x1c","\x69","\x13")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("red_platform","\xa1","\x9e","\xa5","\xeb"),
	HX_HCSTRING("centerX","\xe3","\xf4","\xe5","\x19"),
	HX_HCSTRING("centerY","\xe4","\xf4","\xe5","\x19"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("megaman","\x68","\x7e","\x65","\xa5"),
	HX_HCSTRING("megaman2","\xca","\x1c","\x69","\x13"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("generatePlatforms","\x6b","\x1c","\x5a","\x88"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("states.PlayState","\x31","\xcd","\x20","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PlayState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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
