#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketOutput
#include <sys/net/_Socket/SocketOutput.h>
#endif
namespace sys{
namespace net{
namespace _Socket{

Void SocketOutput_obj::__construct(Dynamic s)
{
HX_STACK_FRAME("sys.net._Socket.SocketOutput","new",0x717472d4,"sys.net._Socket.SocketOutput.new","E:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",80,0xd53586af)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(80)
	this->__s = s;
}
;
	return null();
}

//SocketOutput_obj::~SocketOutput_obj() { }

Dynamic SocketOutput_obj::__CreateEmpty() { return  new SocketOutput_obj; }
hx::ObjectPtr< SocketOutput_obj > SocketOutput_obj::__new(Dynamic s)
{  hx::ObjectPtr< SocketOutput_obj > _result_ = new SocketOutput_obj();
	_result_->__construct(s);
	return _result_;}

Dynamic SocketOutput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SocketOutput_obj > _result_ = new SocketOutput_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void SocketOutput_obj::close( ){
{
		HX_STACK_FRAME("sys.net._Socket.SocketOutput","close",0xbcc83f2c,"sys.net._Socket.SocketOutput.close","E:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",107,0xd53586af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		this->super::close();
		HX_STACK_LINE(109)
		Dynamic tmp = this->__s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		if ((tmp1)){
			HX_STACK_LINE(109)
			Dynamic tmp2 = this->__s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			::sys::net::_Socket::SocketOutput_obj::socket_close(tmp2);
		}
	}
return null();
}


Dynamic SocketOutput_obj::socket_close;


SocketOutput_obj::SocketOutput_obj()
{
}

void SocketOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SocketOutput);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_END_CLASS();
}

void SocketOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
}

Dynamic SocketOutput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return __s; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SocketOutput_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"socket_close") ) { outValue = socket_close; return true;  }
	}
	return false;
}

Dynamic SocketOutput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SocketOutput_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"socket_close") ) { socket_close=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void SocketOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__s","\x53","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SocketOutput_obj,__s),HX_HCSTRING("__s","\x53","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &SocketOutput_obj::socket_close,HX_HCSTRING("socket_close","\xec","\x32","\x0d","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__s","\x53","\x69","\x48","\x00"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SocketOutput_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SocketOutput_obj::socket_close,"socket_close");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SocketOutput_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SocketOutput_obj::socket_close,"socket_close");
};

#endif

hx::Class SocketOutput_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("socket_close","\xec","\x32","\x0d","\x9e"),
	::String(null()) };

void SocketOutput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.net._Socket.SocketOutput","\xe2","\xb8","\xed","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SocketOutput_obj::__GetStatic;
	__mClass->mSetStaticField = &SocketOutput_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SocketOutput_obj >;
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

void SocketOutput_obj::__boot()
{
	socket_close= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("socket_close","\xec","\x32","\x0d","\x9e"),(int)1);
}

} // end namespace sys
} // end namespace net
} // end namespace _Socket
