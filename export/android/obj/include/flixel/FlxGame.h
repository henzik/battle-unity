#ifndef INCLUDED_flixel_FlxGame
#define INCLUDED_flixel_FlxGame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxGame)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,_system,ui,FlxSoundTray)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxGame_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef FlxGame_obj OBJ_;
		FlxGame_obj();
		Void __construct(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::hx::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.FlxGame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGame_obj > __new(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::hx::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGame_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxGame","\x64","\x2d","\xb7","\xd4"); }

		int focusLostFramerate;
		::flixel::_system::ui::FlxSoundTray soundTray;
		int ticks;
		bool _gameJustStarted;
		::hx::Class _initialState;
		::flixel::FlxState _state;
		int _total;
		int _accumulator;
		int _elapsedMS;
		int _stepMS;
		Float _stepSeconds;
		int _maxAccumulation;
		bool _lostFocus;
		bool _onFocusFiredOnce;
		::openfl::_legacy::display::Sprite _inputContainer;
		::hx::Class _customSoundTray;
		bool _skipSplash;
		::flixel::FlxState _requestedState;
		bool _resetGame;
		virtual Void create( Dynamic _);
		Dynamic create_dyn();

		virtual Void onFocus( Dynamic _);
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( Dynamic _);
		Dynamic onFocusLost_dyn();

		virtual Void onResize( Dynamic _);
		Dynamic onResize_dyn();

		virtual Void resizeGame( int width,int height);
		Dynamic resizeGame_dyn();

		virtual Void onEnterFrame( Dynamic _);
		Dynamic onEnterFrame_dyn();

		virtual Void resetGame( );
		Dynamic resetGame_dyn();

		virtual Void switchState( );
		Dynamic switchState_dyn();

		virtual Void gameStart( );
		Dynamic gameStart_dyn();

		virtual Void step( );
		Dynamic step_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void updateInput( );
		Dynamic updateInput_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxGame */ 
