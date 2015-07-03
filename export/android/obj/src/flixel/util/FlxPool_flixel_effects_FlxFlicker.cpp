#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_effects_FlxFlicker
#include <flixel/util/FlxPool_flixel_effects_FlxFlicker.h>
#endif
namespace flixel{
namespace util{

Void FlxPool_flixel_effects_FlxFlicker_obj::__construct(::hx::Class classObj)
{
HX_STACK_FRAME("flixel.util.FlxPool_flixel_effects_FlxFlicker","new",0xff1f2c0d,"flixel.util.FlxPool_flixel_effects_FlxFlicker.new","flixel/util/FlxPool.hx",18,0xdd4de86a)
HX_STACK_THIS(this)
HX_STACK_ARG(classObj,"classObj")
{
	HX_STACK_LINE(19)
	this->_pool = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(20)
	this->_class = classObj;
}
;
	return null();
}

//FlxPool_flixel_effects_FlxFlicker_obj::~FlxPool_flixel_effects_FlxFlicker_obj() { }

Dynamic FlxPool_flixel_effects_FlxFlicker_obj::__CreateEmpty() { return  new FlxPool_flixel_effects_FlxFlicker_obj; }
hx::ObjectPtr< FlxPool_flixel_effects_FlxFlicker_obj > FlxPool_flixel_effects_FlxFlicker_obj::__new(::hx::Class classObj)
{  hx::ObjectPtr< FlxPool_flixel_effects_FlxFlicker_obj > _result_ = new FlxPool_flixel_effects_FlxFlicker_obj();
	_result_->__construct(classObj);
	return _result_;}

Dynamic FlxPool_flixel_effects_FlxFlicker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPool_flixel_effects_FlxFlicker_obj > _result_ = new FlxPool_flixel_effects_FlxFlicker_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::flixel::effects::FlxFlicker FlxPool_flixel_effects_FlxFlicker_obj::get( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_effects_FlxFlicker","get",0xff19dc43,"flixel.util.FlxPool_flixel_effects_FlxFlicker.get","flixel/util/FlxPool.hx",24,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	::flixel::effects::FlxFlicker tmp = this->_pool->pop().StaticCast< ::flixel::effects::FlxFlicker >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::flixel::effects::FlxFlicker obj = tmp;		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(26)
	bool tmp1 = (obj == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	if ((tmp1)){
		HX_STACK_LINE(28)
		::hx::Class tmp2 = this->_class;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		::flixel::effects::FlxFlicker tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		obj = tmp3;
	}
	HX_STACK_LINE(30)
	::flixel::effects::FlxFlicker tmp2 = obj;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_effects_FlxFlicker_obj,get,return )

Void FlxPool_flixel_effects_FlxFlicker_obj::put( ::flixel::effects::FlxFlicker obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_effects_FlxFlicker","put",0xff20be7c,"flixel.util.FlxPool_flixel_effects_FlxFlicker.put","flixel/util/FlxPool.hx",34,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(36)
		bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		if ((tmp)){
			HX_STACK_LINE(36)
			::flixel::effects::FlxFlicker tmp2 = obj;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			::flixel::effects::FlxFlicker tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			int tmp4 = this->_pool->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			tmp1 = (tmp5 < (int)0);
		}
		else{
			HX_STACK_LINE(36)
			tmp1 = false;
		}
		HX_STACK_LINE(36)
		if ((tmp1)){
			HX_STACK_LINE(38)
			obj->destroy();
			HX_STACK_LINE(39)
			::flixel::effects::FlxFlicker tmp2 = obj;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			this->_pool->push(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_effects_FlxFlicker_obj,put,(void))

Void FlxPool_flixel_effects_FlxFlicker_obj::putUnsafe( ::flixel::effects::FlxFlicker obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_effects_FlxFlicker","putUnsafe",0xc85fbbc2,"flixel.util.FlxPool_flixel_effects_FlxFlicker.putUnsafe","flixel/util/FlxPool.hx",44,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(45)
		bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		if ((tmp)){
			HX_STACK_LINE(47)
			obj->destroy();
			HX_STACK_LINE(48)
			::flixel::effects::FlxFlicker tmp1 = obj;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(48)
			this->_pool->push(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_effects_FlxFlicker_obj,putUnsafe,(void))

Void FlxPool_flixel_effects_FlxFlicker_obj::preAllocate( int numObjects){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_effects_FlxFlicker","preAllocate",0x45959aad,"flixel.util.FlxPool_flixel_effects_FlxFlicker.preAllocate","flixel/util/FlxPool.hx",54,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(numObjects,"numObjects")
		HX_STACK_LINE(54)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		while((true)){
			HX_STACK_LINE(54)
			bool tmp = (_g < numObjects);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			if ((tmp1)){
				HX_STACK_LINE(54)
				break;
			}
			HX_STACK_LINE(54)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(56)
			::hx::Class tmp3 = this->_class;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			::flixel::effects::FlxFlicker tmp4 = ::Type_obj::createInstance(tmp3,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			this->_pool->push(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_effects_FlxFlicker_obj,preAllocate,(void))

Array< ::Dynamic > FlxPool_flixel_effects_FlxFlicker_obj::clear( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_effects_FlxFlicker","clear",0x1576d27a,"flixel.util.FlxPool_flixel_effects_FlxFlicker.clear","flixel/util/FlxPool.hx",61,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	Array< ::Dynamic > oldPool = this->_pool;		HX_STACK_VAR(oldPool,"oldPool");
	HX_STACK_LINE(63)
	this->_pool = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(64)
	return oldPool;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_effects_FlxFlicker_obj,clear,return )

int FlxPool_flixel_effects_FlxFlicker_obj::get_length( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_effects_FlxFlicker","get_length",0x65cc28a2,"flixel.util.FlxPool_flixel_effects_FlxFlicker.get_length","flixel/util/FlxPool.hx",68,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	int tmp = this->_pool->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_effects_FlxFlicker_obj,get_length,return )


FlxPool_flixel_effects_FlxFlicker_obj::FlxPool_flixel_effects_FlxFlicker_obj()
{
}

void FlxPool_flixel_effects_FlxFlicker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPool_flixel_effects_FlxFlicker);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_END_CLASS();
}

void FlxPool_flixel_effects_FlxFlicker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_class,"_class");
}

Dynamic FlxPool_flixel_effects_FlxFlicker_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"putUnsafe") ) { return putUnsafe_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preAllocate") ) { return preAllocate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPool_flixel_effects_FlxFlicker_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPool_flixel_effects_FlxFlicker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxPool_flixel_effects_FlxFlicker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"));
	outFields->push(HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxPool_flixel_effects_FlxFlicker_obj,_pool),HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxPool_flixel_effects_FlxFlicker_obj,_class),HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("putUnsafe","\x55","\xe0","\x1c","\xe4"),
	HX_HCSTRING("preAllocate","\x00","\x4a","\x53","\xa6"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPool_flixel_effects_FlxFlicker_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPool_flixel_effects_FlxFlicker_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxPool_flixel_effects_FlxFlicker_obj::__mClass;

void FlxPool_flixel_effects_FlxFlicker_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxPool_flixel_effects_FlxFlicker","\x9b","\x21","\xa3","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxPool_flixel_effects_FlxFlicker_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPool_flixel_effects_FlxFlicker_obj >;
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

} // end namespace flixel
} // end namespace util
