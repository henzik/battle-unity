#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io__Process_Stdin
#include <sys/io/_Process/Stdin.h>
#endif
namespace sys{
namespace io{
namespace _Process{

Void Stdin_obj::__construct(Dynamic p)
{
HX_STACK_FRAME("sys.io._Process.Stdin","new",0xd3131563,"sys.io._Process.Stdin.new","E:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/Process.hx",29,0x4b9e5bee)
HX_STACK_THIS(this)
HX_STACK_ARG(p,"p")
{
	HX_STACK_LINE(30)
	this->p = p;
	HX_STACK_LINE(31)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::alloc((int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	this->buf = tmp;
}
;
	return null();
}

//Stdin_obj::~Stdin_obj() { }

Dynamic Stdin_obj::__CreateEmpty() { return  new Stdin_obj; }
hx::ObjectPtr< Stdin_obj > Stdin_obj::__new(Dynamic p)
{  hx::ObjectPtr< Stdin_obj > _result_ = new Stdin_obj();
	_result_->__construct(p);
	return _result_;}

Dynamic Stdin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stdin_obj > _result_ = new Stdin_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Stdin_obj::close( ){
{
		HX_STACK_FRAME("sys.io._Process.Stdin","close",0xbd3fe37b,"sys.io._Process.Stdin.close","E:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/Process.hx",34,0x4b9e5bee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::close();
		HX_STACK_LINE(36)
		Dynamic tmp = this->p;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::sys::io::_Process::Stdin_obj::_stdin_close(tmp);
	}
return null();
}


Dynamic Stdin_obj::_stdin_close;


Stdin_obj::Stdin_obj()
{
}

void Stdin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stdin);
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_END_CLASS();
}

void Stdin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(buf,"buf");
}

Dynamic Stdin_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return buf; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stdin_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_stdin_close") ) { outValue = _stdin_close; return true;  }
	}
	return false;
}

Dynamic Stdin_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stdin_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_stdin_close") ) { _stdin_close=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Stdin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stdin_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Stdin_obj,buf),HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Stdin_obj::_stdin_close,HX_HCSTRING("_stdin_close","\x42","\x66","\x33","\x6a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("p","\x70","\x00","\x00","\x00"),
	HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stdin_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stdin_obj::_stdin_close,"_stdin_close");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stdin_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stdin_obj::_stdin_close,"_stdin_close");
};

#endif

hx::Class Stdin_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_stdin_close","\x42","\x66","\x33","\x6a"),
	::String(null()) };

void Stdin_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io._Process.Stdin","\xf1","\x27","\x26","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stdin_obj::__GetStatic;
	__mClass->mSetStaticField = &Stdin_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stdin_obj >;
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

void Stdin_obj::__boot()
{
	_stdin_close= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("process_stdin_close","\x31","\x73","\x5f","\x30"),(int)1);
}

} // end namespace sys
} // end namespace io
} // end namespace _Process
