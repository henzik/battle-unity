#ifndef INCLUDED_ClientConnectTest
#define INCLUDED_ClientConnectTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ClientConnectTest)


class HXCPP_CLASS_ATTRIBUTES  ClientConnectTest_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ClientConnectTest_obj OBJ_;
		ClientConnectTest_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ClientConnectTest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ClientConnectTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClientConnectTest_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ClientConnectTest","\xb1","\x58","\xae","\x4c"); }

};


#endif /* INCLUDED_ClientConnectTest */ 
