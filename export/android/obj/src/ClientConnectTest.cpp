#include <hxcpp.h>

#ifndef INCLUDED_ClientConnectTest
#include <ClientConnectTest.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif

Void ClientConnectTest_obj::__construct()
{
HX_STACK_FRAME("ClientConnectTest","new",0x8762a623,"ClientConnectTest.new","ClientConnectTest.hx",10,0xf3faaead)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	::sys::net::Socket tmp = ::sys::net::Socket_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	::sys::net::Socket s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(13)
	::sys::net::Host tmp1 = ::sys::net::Host_obj::__new(HX_HCSTRING("192.168.1.26","\x20","\x75","\x36","\x76"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	s->connect(tmp1,(int)5000);
	HX_STACK_LINE(14)
	while((true)){
		HX_STACK_LINE(15)
		::String tmp2 = s->input->readLine();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		::String l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(16)
		::String tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("ClientConnectTest.hx","\xad","\xae","\xfa","\xf3"),16,HX_HCSTRING("ClientConnectTest","\xb1","\x58","\xae","\x4c"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		::haxe::Log_obj::trace(tmp3,tmp4);
		HX_STACK_LINE(17)
		bool tmp5 = (l == HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(17)
		if ((tmp5)){
			HX_STACK_LINE(18)
			s->close();
			HX_STACK_LINE(19)
			break;
		}
	}
}
;
	return null();
}

//ClientConnectTest_obj::~ClientConnectTest_obj() { }

Dynamic ClientConnectTest_obj::__CreateEmpty() { return  new ClientConnectTest_obj; }
hx::ObjectPtr< ClientConnectTest_obj > ClientConnectTest_obj::__new()
{  hx::ObjectPtr< ClientConnectTest_obj > _result_ = new ClientConnectTest_obj();
	_result_->__construct();
	return _result_;}

Dynamic ClientConnectTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClientConnectTest_obj > _result_ = new ClientConnectTest_obj();
	_result_->__construct();
	return _result_;}


ClientConnectTest_obj::ClientConnectTest_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClientConnectTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClientConnectTest_obj::__mClass,"__mClass");
};

#endif

hx::Class ClientConnectTest_obj::__mClass;

void ClientConnectTest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ClientConnectTest","\xb1","\x58","\xae","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ClientConnectTest_obj >;
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

