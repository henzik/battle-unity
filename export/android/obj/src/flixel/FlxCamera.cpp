#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
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
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Transform
#include <openfl/_legacy/geom/Transform.h>
#endif
namespace flixel{

Void FlxCamera_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_FRAME("flixel.FlxCamera","new",0x0e8a9f77,"flixel.FlxCamera.new","flixel/FlxCamera.hx",28,0xe7aeb95a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_Zoom,"Zoom")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(270)
	this->_fxShakeDirection = (int)0;
	HX_STACK_LINE(262)
	this->_fxShakeComplete = null();
	HX_STACK_LINE(258)
	this->_fxShakeDuration = ((Float)0);
	HX_STACK_LINE(254)
	this->_fxShakeIntensity = ((Float)0);
	HX_STACK_LINE(250)
	this->_fxFadeAlpha = ((Float)0);
	HX_STACK_LINE(246)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(242)
	this->_fxFadeIn = false;
	HX_STACK_LINE(238)
	this->_fxFadeDuration = ((Float)0);
	HX_STACK_LINE(226)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(222)
	this->_fxFlashAlpha = ((Float)0);
	HX_STACK_LINE(218)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(214)
	this->_fxFlashDuration = ((Float)0);
	HX_STACK_LINE(210)
	this->_fxFlashColor = (int)0;
	HX_STACK_LINE(188)
	this->antialiasing = false;
	HX_STACK_LINE(183)
	this->color = (int)-1;
	HX_STACK_LINE(178)
	this->angle = ((Float)0);
	HX_STACK_LINE(173)
	this->alpha = ((Float)1);
	HX_STACK_LINE(149)
	this->useBgAlphaBlending = false;
	HX_STACK_LINE(114)
	this->bounds = null();
	HX_STACK_LINE(109)
	this->deadzone = null();
	HX_STACK_LINE(104)
	this->followLerp = ((Float)0);
	HX_STACK_LINE(100)
	this->target = null();
	HX_STACK_LINE(426)
	super::__construct();
	HX_STACK_LINE(428)
	::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	{
		HX_STACK_LINE(428)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(428)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(428)
		::flixel::util::FlxPool_flixel_util_FlxPoint tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(428)
		Float tmp3 = X1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(428)
		Float tmp4 = Y1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(428)
		::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(428)
		::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(428)
		point->_inPool = false;
		HX_STACK_LINE(428)
		tmp = point;
	}
	HX_STACK_LINE(428)
	this->_scrollTarget = tmp;
	HX_STACK_LINE(430)
	this->x = X;
	HX_STACK_LINE(431)
	this->y = Y;
	HX_STACK_LINE(433)
	bool tmp1 = (Width <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(433)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(433)
	if ((tmp1)){
		HX_STACK_LINE(433)
		tmp2 = ::flixel::FlxG_obj::width;
	}
	else{
		HX_STACK_LINE(433)
		tmp2 = Width;
	}
	HX_STACK_LINE(433)
	this->set_width(tmp2);
	HX_STACK_LINE(434)
	bool tmp3 = (Height <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(434)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(434)
	if ((tmp3)){
		HX_STACK_LINE(434)
		tmp4 = ::flixel::FlxG_obj::height;
	}
	else{
		HX_STACK_LINE(434)
		tmp4 = Height;
	}
	HX_STACK_LINE(434)
	this->set_height(tmp4);
	HX_STACK_LINE(436)
	::flixel::util::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(436)
	{
		HX_STACK_LINE(436)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(436)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(436)
		::flixel::util::FlxPool_flixel_util_FlxPoint tmp6 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(436)
		::flixel::util::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(436)
		Float tmp8 = X1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(436)
		Float tmp9 = Y1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(436)
		::flixel::util::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(436)
		::flixel::util::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(436)
		point->_inPool = false;
		HX_STACK_LINE(436)
		tmp5 = point;
	}
	HX_STACK_LINE(436)
	this->scroll = tmp5;
	HX_STACK_LINE(437)
	::flixel::util::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(437)
	{
		HX_STACK_LINE(437)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(437)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(437)
		::flixel::util::FlxPool_flixel_util_FlxPoint tmp7 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(437)
		::flixel::util::FlxPoint tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(437)
		Float tmp9 = X1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(437)
		Float tmp10 = Y1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(437)
		::flixel::util::FlxPoint tmp11 = tmp8->set(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(437)
		::flixel::util::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(437)
		point->_inPool = false;
		HX_STACK_LINE(437)
		tmp6 = point;
	}
	HX_STACK_LINE(437)
	this->followLead = tmp6;
	HX_STACK_LINE(438)
	::flixel::util::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(438)
	{
		HX_STACK_LINE(438)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(438)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(438)
		::flixel::util::FlxPool_flixel_util_FlxPoint tmp8 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(438)
		::flixel::util::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(438)
		Float tmp10 = X1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(438)
		Float tmp11 = Y1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(438)
		::flixel::util::FlxPoint tmp12 = tmp9->set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(438)
		::flixel::util::FlxPoint point = tmp12;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(438)
		point->_inPool = false;
		HX_STACK_LINE(438)
		tmp7 = point;
	}
	HX_STACK_LINE(438)
	this->_point = tmp7;
	HX_STACK_LINE(439)
	::flixel::util::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(439)
	{
		HX_STACK_LINE(439)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(439)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(439)
		::flixel::util::FlxPool_flixel_util_FlxPoint tmp9 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(439)
		::flixel::util::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(439)
		Float tmp11 = X1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(439)
		Float tmp12 = Y1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(439)
		::flixel::util::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(439)
		::flixel::util::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(439)
		point->_inPool = false;
		HX_STACK_LINE(439)
		tmp8 = point;
	}
	HX_STACK_LINE(439)
	this->_flashOffset = tmp8;
	HX_STACK_LINE(453)
	::openfl::_legacy::display::Sprite tmp9 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(453)
	this->canvas = tmp9;
	HX_STACK_LINE(454)
	::openfl::_legacy::display::Sprite tmp10 = this->canvas;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(454)
	int tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(454)
	int tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(454)
	Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(454)
	tmp10->set_x(tmp13);
	HX_STACK_LINE(455)
	::openfl::_legacy::display::Sprite tmp14 = this->canvas;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(455)
	int tmp15 = this->height;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(455)
	int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(455)
	Float tmp17 = (tmp16 * ((Float)0.5));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(455)
	tmp14->set_y(tmp17);
	HX_STACK_LINE(462)
	::openfl::_legacy::display::Sprite tmp18 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(462)
	this->flashSprite = tmp18;
	HX_STACK_LINE(463)
	Float tmp19 = Zoom;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(463)
	this->set_zoom(tmp19);
	HX_STACK_LINE(465)
	::flixel::util::FlxPoint tmp20 = this->_flashOffset;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(465)
	int tmp21 = this->width;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(465)
	Float tmp22 = (tmp21 * ((Float)0.5));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(465)
	Float tmp23 = this->zoom;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(465)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(465)
	int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(465)
	Float tmp26 = (tmp25 * ((Float)0.5));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(465)
	Float tmp27 = this->zoom;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(465)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(465)
	tmp20->set(tmp24,tmp28);
	HX_STACK_LINE(467)
	::openfl::_legacy::display::Sprite tmp29 = this->flashSprite;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(467)
	Float tmp30 = this->x;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(467)
	::flixel::util::FlxPoint tmp31 = this->_flashOffset;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(467)
	Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(467)
	Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(467)
	tmp29->set_x(tmp33);
	HX_STACK_LINE(468)
	::openfl::_legacy::display::Sprite tmp34 = this->flashSprite;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(468)
	Float tmp35 = this->y;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(468)
	::flixel::util::FlxPoint tmp36 = this->_flashOffset;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(468)
	Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(468)
	Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(468)
	tmp34->set_y(tmp38);
	HX_STACK_LINE(473)
	::openfl::_legacy::display::Sprite tmp39 = this->flashSprite;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(473)
	::openfl::_legacy::display::Sprite tmp40 = this->canvas;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(473)
	tmp39->addChild(tmp40);
	HX_STACK_LINE(475)
	int tmp41 = this->width;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(475)
	int tmp42 = this->height;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(475)
	::openfl::_legacy::geom::Rectangle tmp43 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(475)
	this->_flashRect = tmp43;
	HX_STACK_LINE(476)
	::openfl::_legacy::geom::Point tmp44 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(476)
	this->_flashPoint = tmp44;
	HX_STACK_LINE(478)
	::flixel::util::FlxPoint tmp45;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(478)
	{
		HX_STACK_LINE(478)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(478)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(478)
		::flixel::util::FlxPool_flixel_util_FlxPoint tmp46 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(478)
		::flixel::util::FlxPoint tmp47 = tmp46->get();		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(478)
		Float tmp48 = X1;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(478)
		Float tmp49 = Y1;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(478)
		::flixel::util::FlxPoint tmp50 = tmp47->set(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(478)
		::flixel::util::FlxPoint point = tmp50;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(478)
		point->_inPool = false;
		HX_STACK_LINE(478)
		tmp45 = point;
	}
	HX_STACK_LINE(478)
	this->_fxShakeOffset = tmp45;
	HX_STACK_LINE(484)
	::openfl::_legacy::display::Sprite tmp46 = this->canvas;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(484)
	int tmp47 = this->width;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(484)
	int tmp48 = this->height;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(484)
	::openfl::_legacy::geom::Rectangle tmp49 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp47,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(484)
	tmp46->set_scrollRect(tmp49);
	HX_STACK_LINE(487)
	::openfl::_legacy::display::Sprite tmp50 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(487)
	this->debugLayer = tmp50;
	HX_STACK_LINE(488)
	::openfl::_legacy::display::Sprite tmp51 = this->debugLayer;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(488)
	int tmp52 = this->width;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(488)
	int tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(488)
	Float tmp54 = (tmp53 * ((Float)0.5));		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(488)
	tmp51->set_x(tmp54);
	HX_STACK_LINE(489)
	::openfl::_legacy::display::Sprite tmp55 = this->debugLayer;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(489)
	int tmp56 = this->height;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(489)
	int tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(489)
	Float tmp58 = (tmp57 * ((Float)0.5));		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(489)
	tmp55->set_y(tmp58);
	HX_STACK_LINE(490)
	::openfl::_legacy::display::Sprite tmp59 = this->debugLayer;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(490)
	tmp59->set_scaleX((int)1);
	HX_STACK_LINE(491)
	::openfl::_legacy::display::Sprite tmp60 = this->flashSprite;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(491)
	::openfl::_legacy::display::Sprite tmp61 = this->debugLayer;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(491)
	tmp60->addChild(tmp61);
	HX_STACK_LINE(494)
	::flixel::_system::layer::DrawStackItem tmp62 = ::flixel::_system::layer::DrawStackItem_obj::__new();		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(494)
	this->_currentStackItem = tmp62;
	HX_STACK_LINE(495)
	::flixel::_system::layer::DrawStackItem tmp63 = this->_currentStackItem;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(495)
	this->_headOfDrawStack = tmp63;
	HX_STACK_LINE(498)
	::flixel::_system::frontEnds::CameraFrontEnd tmp64 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(498)
	int tmp65 = tmp64->__Field(HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"), hx::paccDynamic )();		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(498)
	this->bgColor = tmp65;
}
;
	return null();
}

//FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > _result_ = new FlxCamera_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_Zoom);
	return _result_;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > _result_ = new FlxCamera_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::flixel::_system::layer::DrawStackItem FlxCamera_obj::getDrawStackItem( ::flixel::util::loaders::CachedGraphics ObjGraphics,bool ObjColored,int ObjBlending,hx::Null< bool >  __o_ObjAntialiasing){
bool ObjAntialiasing = __o_ObjAntialiasing.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","getDrawStackItem",0x060ba7ea,"flixel.FlxCamera.getDrawStackItem","flixel/FlxCamera.hx",316,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjGraphics,"ObjGraphics")
	HX_STACK_ARG(ObjColored,"ObjColored")
	HX_STACK_ARG(ObjBlending,"ObjBlending")
	HX_STACK_ARG(ObjAntialiasing,"ObjAntialiasing")
{
		HX_STACK_LINE(317)
		::flixel::_system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(318)
		::flixel::_system::layer::DrawStackItem tmp = this->_currentStackItem;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(318)
		bool tmp1 = tmp->__Field(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(318)
		bool tmp2 = (tmp1 == false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(318)
		if ((tmp2)){
			HX_STACK_LINE(320)
			::flixel::_system::layer::DrawStackItem tmp3 = this->_currentStackItem;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(320)
			this->_headOfDrawStack = tmp3;
			HX_STACK_LINE(321)
			::flixel::_system::layer::DrawStackItem tmp4 = this->_currentStackItem;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			tmp4->__FieldRef(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")) = ObjGraphics;
			HX_STACK_LINE(322)
			::flixel::_system::layer::DrawStackItem tmp5 = this->_currentStackItem;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(322)
			tmp5->__FieldRef(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")) = ObjAntialiasing;
			HX_STACK_LINE(323)
			::flixel::_system::layer::DrawStackItem tmp6 = this->_currentStackItem;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(323)
			tmp6->__FieldRef(HX_HCSTRING("colored","\x82","\x28","\x66","\xef")) = ObjColored;
			HX_STACK_LINE(324)
			::flixel::_system::layer::DrawStackItem tmp7 = this->_currentStackItem;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(324)
			tmp7->__FieldRef(HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a")) = ObjBlending;
			HX_STACK_LINE(325)
			::flixel::_system::layer::DrawStackItem tmp8 = this->_currentStackItem;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(325)
			itemToReturn = tmp8;
		}
		else{
			HX_STACK_LINE(327)
			::flixel::_system::layer::DrawStackItem tmp3 = this->_currentStackItem;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(327)
			::flixel::util::loaders::CachedGraphics tmp4 = tmp3->__Field(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(327)
			::flixel::util::loaders::CachedGraphics tmp5 = ObjGraphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(327)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(327)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(327)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(327)
			if ((tmp7)){
				HX_STACK_LINE(328)
				::flixel::_system::layer::DrawStackItem tmp9 = this->_currentStackItem;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(328)
				::flixel::_system::layer::DrawStackItem tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(328)
				::flixel::_system::layer::DrawStackItem tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(328)
				bool tmp12 = tmp11->__Field(HX_HCSTRING("colored","\x82","\x28","\x66","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(328)
				bool tmp13 = ObjColored;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(328)
				tmp8 = (tmp12 == tmp13);
			}
			else{
				HX_STACK_LINE(327)
				tmp8 = false;
			}
			HX_STACK_LINE(327)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(327)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(327)
			if ((tmp9)){
				HX_STACK_LINE(329)
				::flixel::_system::layer::DrawStackItem tmp11 = this->_currentStackItem;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(329)
				::flixel::_system::layer::DrawStackItem tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(329)
				::flixel::_system::layer::DrawStackItem tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(329)
				int tmp14 = tmp13->__Field(HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(329)
				int tmp15 = ObjBlending;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(329)
				tmp10 = (tmp14 == tmp15);
			}
			else{
				HX_STACK_LINE(327)
				tmp10 = false;
			}
			HX_STACK_LINE(327)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(327)
			if ((tmp10)){
				HX_STACK_LINE(330)
				::flixel::_system::layer::DrawStackItem tmp12 = this->_currentStackItem;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(330)
				::flixel::_system::layer::DrawStackItem tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(330)
				bool tmp14 = tmp13->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(330)
				bool tmp15 = ObjAntialiasing;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(330)
				tmp11 = (tmp14 == tmp15);
			}
			else{
				HX_STACK_LINE(327)
				tmp11 = false;
			}
			HX_STACK_LINE(327)
			if ((tmp11)){
				HX_STACK_LINE(332)
				::flixel::_system::layer::DrawStackItem tmp12 = this->_currentStackItem;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(332)
				itemToReturn = tmp12;
			}
		}
		HX_STACK_LINE(335)
		bool tmp3 = (itemToReturn == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(335)
		if ((tmp3)){
			HX_STACK_LINE(337)
			::flixel::_system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
			HX_STACK_LINE(338)
			::flixel::_system::layer::DrawStackItem tmp4 = ::flixel::FlxCamera_obj::_storageHead;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(338)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(338)
			if ((tmp5)){
				HX_STACK_LINE(340)
				::flixel::_system::layer::DrawStackItem tmp6 = ::flixel::FlxCamera_obj::_storageHead;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(340)
				newItem = tmp6;
				HX_STACK_LINE(341)
				::flixel::_system::layer::DrawStackItem tmp7 = ::flixel::FlxCamera_obj::_storageHead;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(341)
				::flixel::_system::layer::DrawStackItem newHead = tmp7->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );		HX_STACK_VAR(newHead,"newHead");
				HX_STACK_LINE(342)
				newItem->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
				HX_STACK_LINE(343)
				::flixel::FlxCamera_obj::_storageHead = newHead;
			}
			else{
				HX_STACK_LINE(347)
				::flixel::_system::layer::DrawStackItem tmp6 = ::flixel::_system::layer::DrawStackItem_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(347)
				newItem = tmp6;
			}
			HX_STACK_LINE(350)
			newItem->__FieldRef(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")) = ObjGraphics;
			HX_STACK_LINE(351)
			newItem->__FieldRef(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")) = ObjAntialiasing;
			HX_STACK_LINE(352)
			newItem->__FieldRef(HX_HCSTRING("colored","\x82","\x28","\x66","\xef")) = ObjColored;
			HX_STACK_LINE(353)
			newItem->__FieldRef(HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a")) = ObjBlending;
			HX_STACK_LINE(354)
			::flixel::_system::layer::DrawStackItem tmp6 = this->_currentStackItem;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(354)
			tmp6->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = newItem;
			HX_STACK_LINE(355)
			this->_currentStackItem = newItem;
			HX_STACK_LINE(356)
			::flixel::_system::layer::DrawStackItem tmp7 = this->_currentStackItem;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(356)
			itemToReturn = tmp7;
		}
		HX_STACK_LINE(359)
		itemToReturn->__FieldRef(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")) = true;
		HX_STACK_LINE(360)
		::flixel::_system::layer::DrawStackItem tmp4 = itemToReturn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(360)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,getDrawStackItem,return )

Void FlxCamera_obj::clearDrawStack( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","clearDrawStack",0x8d7c5ba0,"flixel.FlxCamera.clearDrawStack","flixel/FlxCamera.hx",365,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(366)
		::flixel::_system::layer::DrawStackItem tmp = this->_headOfDrawStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		::flixel::_system::layer::DrawStackItem currItem = tmp->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(367)
		while((true)){
			HX_STACK_LINE(367)
			bool tmp1 = (currItem != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(367)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(367)
			if ((tmp2)){
				HX_STACK_LINE(367)
				break;
			}
			HX_STACK_LINE(369)
			{
				HX_STACK_LINE(369)
				currItem->__FieldRef(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")) = null();
				HX_STACK_LINE(369)
				currItem->__FieldRef(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")) = false;
				HX_STACK_LINE(369)
				currItem->__FieldRef(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")) = false;
				HX_STACK_LINE(369)
				currItem->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = (int)0;
			}
			HX_STACK_LINE(370)
			::flixel::_system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
			HX_STACK_LINE(371)
			currItem = currItem->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
			HX_STACK_LINE(372)
			::flixel::_system::layer::DrawStackItem tmp3 = ::flixel::FlxCamera_obj::_storageHead;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(372)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(372)
			if ((tmp4)){
				HX_STACK_LINE(374)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
				HX_STACK_LINE(375)
				newStorageHead->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
			}
			else{
				HX_STACK_LINE(379)
				::flixel::_system::layer::DrawStackItem tmp5 = ::flixel::FlxCamera_obj::_storageHead;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(379)
				newStorageHead->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = tmp5;
				HX_STACK_LINE(380)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
			}
		}
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			::flixel::_system::layer::DrawStackItem tmp1 = this->_headOfDrawStack;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(384)
			::flixel::_system::layer::DrawStackItem _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(384)
			_this->__FieldRef(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")) = null();
			HX_STACK_LINE(384)
			_this->__FieldRef(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")) = false;
			HX_STACK_LINE(384)
			_this->__FieldRef(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")) = false;
			HX_STACK_LINE(384)
			_this->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = (int)0;
		}
		HX_STACK_LINE(385)
		::flixel::_system::layer::DrawStackItem tmp1 = this->_headOfDrawStack;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		tmp1->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		HX_STACK_LINE(386)
		::flixel::_system::layer::DrawStackItem tmp2 = this->_headOfDrawStack;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(386)
		this->_currentStackItem = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

Void FlxCamera_obj::render( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","render",0x1f11e49f,"flixel.FlxCamera.render","flixel/FlxCamera.hx",391,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(392)
		::flixel::_system::layer::DrawStackItem tmp = this->_headOfDrawStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(392)
		::flixel::_system::layer::DrawStackItem currItem = tmp;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(393)
		while((true)){
			HX_STACK_LINE(393)
			bool tmp1 = (currItem != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(393)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(393)
			if ((tmp2)){
				HX_STACK_LINE(393)
				break;
			}
			HX_STACK_LINE(395)
			Array< Float > data = currItem->__Field(HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56"), hx::paccDynamic );		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(396)
			int dataLen = data->length;		HX_STACK_VAR(dataLen,"dataLen");
			HX_STACK_LINE(397)
			int position = currItem->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic );		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(398)
			bool tmp3 = (position > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(398)
			if ((tmp3)){
				HX_STACK_LINE(400)
				int tempFlags = (int)16;		HX_STACK_VAR(tempFlags,"tempFlags");
				HX_STACK_LINE(401)
				hx::OrEq(tempFlags,(int)8);
				HX_STACK_LINE(402)
				bool tmp4 = currItem->__Field(HX_HCSTRING("colored","\x82","\x28","\x66","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(402)
				if ((tmp4)){
					HX_STACK_LINE(404)
					hx::OrEq(tempFlags,(int)4);
				}
				HX_STACK_LINE(406)
				hx::OrEq(tempFlags,currItem->__Field(HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a"), hx::paccDynamic ));
				HX_STACK_LINE(407)
				::flixel::_system::layer::TileSheetData tmp5 = currItem->__Field(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"), hx::paccDynamic )->__Field(HX_HCSTRING("get_tilesheet","\x88","\xa4","\xb1","\x35"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(407)
				::openfl::_legacy::display::Sprite tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(407)
				::openfl::_legacy::display::Graphics tmp7 = tmp6->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(407)
				bool tmp8 = this->antialiasing;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(407)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(407)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(407)
				if ((tmp9)){
					HX_STACK_LINE(407)
					tmp10 = currItem->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(407)
					tmp10 = true;
				}
				HX_STACK_LINE(407)
				int tmp11 = tempFlags;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(407)
				int tmp12 = position;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(407)
				tmp5->__Field(HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07"), hx::paccDynamic )->__Field(HX_HCSTRING("drawTiles","\xe1","\x32","\x40","\xd8"), hx::paccDynamic )(tmp7,data,tmp10,tmp11,tmp12);
				HX_STACK_LINE(408)
				(::flixel::_system::layer::TileSheetExt_obj::_DRAWCALLS)++;
			}
			HX_STACK_LINE(410)
			currItem = currItem->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

Void FlxCamera_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","destroy",0xb607d391,"flixel.FlxCamera.destroy","flixel/FlxCamera.hx",505,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(513)
		::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(513)
		::openfl::_legacy::display::Sprite tmp1 = this->debugLayer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(513)
		tmp->removeChild(tmp1);
		HX_STACK_LINE(514)
		this->debugLayer = null();
		HX_STACK_LINE(517)
		::openfl::_legacy::display::Sprite tmp2 = this->flashSprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(517)
		::openfl::_legacy::display::Sprite tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(517)
		tmp2->removeChild(tmp3);
		HX_STACK_LINE(518)
		::openfl::_legacy::display::Sprite tmp4 = this->canvas;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(518)
		int tmp5 = tmp4->get_numChildren();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(518)
		int canvasNumChildren = tmp5;		HX_STACK_VAR(canvasNumChildren,"canvasNumChildren");
		HX_STACK_LINE(519)
		{
			HX_STACK_LINE(519)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(519)
			int _g = canvasNumChildren;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(519)
			while((true)){
				HX_STACK_LINE(519)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(519)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(519)
				if ((tmp7)){
					HX_STACK_LINE(519)
					break;
				}
				HX_STACK_LINE(519)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(519)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(521)
				::openfl::_legacy::display::Sprite tmp9 = this->canvas;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(521)
				tmp9->removeChildAt((int)0);
			}
		}
		HX_STACK_LINE(523)
		this->canvas = null();
		HX_STACK_LINE(525)
		this->clearDrawStack();
		HX_STACK_LINE(527)
		{
			HX_STACK_LINE(527)
			::flixel::_system::layer::DrawStackItem tmp6 = this->_headOfDrawStack;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(527)
			::flixel::_system::layer::DrawStackItem _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(527)
			_this->__FieldRef(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")) = null();
			HX_STACK_LINE(527)
			_this->__FieldRef(HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56")) = null();
			HX_STACK_LINE(527)
			_this->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		}
		HX_STACK_LINE(528)
		this->_headOfDrawStack = null();
		HX_STACK_LINE(529)
		this->_currentStackItem = null();
		HX_STACK_LINE(532)
		::flixel::util::FlxPoint tmp6 = this->scroll;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(532)
		::flixel::util::FlxPoint tmp7 = ::flixel::util::FlxDestroyUtil_obj::put(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(532)
		this->scroll = tmp7;
		HX_STACK_LINE(533)
		::flixel::util::FlxRect tmp8 = this->deadzone;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(533)
		::flixel::util::FlxRect tmp9 = ::flixel::util::FlxDestroyUtil_obj::put(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(533)
		this->deadzone = tmp9;
		HX_STACK_LINE(534)
		::flixel::util::FlxRect tmp10 = this->bounds;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(534)
		::flixel::util::FlxRect tmp11 = ::flixel::util::FlxDestroyUtil_obj::put(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(534)
		this->bounds = tmp11;
		HX_STACK_LINE(536)
		this->target = null();
		HX_STACK_LINE(537)
		this->flashSprite = null();
		HX_STACK_LINE(538)
		this->_flashRect = null();
		HX_STACK_LINE(539)
		this->_flashPoint = null();
		HX_STACK_LINE(540)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(541)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(542)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(543)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(545)
		this->super::destroy();
	}
return null();
}


Void FlxCamera_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","update",0xa0edff52,"flixel.FlxCamera.update","flixel/FlxCamera.hx",552,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(554)
		::flixel::FlxObject tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(554)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(554)
		if ((tmp1)){
			HX_STACK_LINE(556)
			this->updateFollow();
		}
		HX_STACK_LINE(560)
		::flixel::util::FlxRect tmp2 = this->bounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(560)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(560)
		if ((tmp3)){
			HX_STACK_LINE(562)
			::flixel::util::FlxPoint tmp4 = this->scroll;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(562)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(562)
			{
				HX_STACK_LINE(562)
				::flixel::util::FlxPoint tmp6 = this->scroll;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(562)
				Float Value = tmp6->x;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(562)
				::flixel::util::FlxRect tmp7 = this->bounds;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(562)
				Float Min = tmp7->x;		HX_STACK_VAR(Min,"Min");
				HX_STACK_LINE(562)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(562)
				{
					HX_STACK_LINE(562)
					::flixel::util::FlxRect tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(562)
					::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(562)
					tmp8 = (_this->x + _this->width);
				}
				HX_STACK_LINE(562)
				int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(562)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(562)
				Float Max = tmp10;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(562)
				bool tmp11 = (Value < Min);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(562)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(562)
				if ((tmp11)){
					HX_STACK_LINE(562)
					tmp12 = Min;
				}
				else{
					HX_STACK_LINE(562)
					tmp12 = Value;
				}
				HX_STACK_LINE(562)
				Float lowerBound = tmp12;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(562)
				bool tmp13 = (lowerBound > Max);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(562)
				if ((tmp13)){
					HX_STACK_LINE(562)
					tmp5 = Max;
				}
				else{
					HX_STACK_LINE(562)
					tmp5 = lowerBound;
				}
			}
			HX_STACK_LINE(562)
			tmp4->set_x(tmp5);
			HX_STACK_LINE(563)
			::flixel::util::FlxPoint tmp6 = this->scroll;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(563)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(563)
			{
				HX_STACK_LINE(563)
				::flixel::util::FlxPoint tmp8 = this->scroll;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(563)
				Float Value = tmp8->y;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(563)
				::flixel::util::FlxRect tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(563)
				Float Min = tmp9->y;		HX_STACK_VAR(Min,"Min");
				HX_STACK_LINE(563)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					::flixel::util::FlxRect tmp11 = this->bounds;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(563)
					::flixel::util::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(563)
					tmp10 = (_this->y + _this->height);
				}
				HX_STACK_LINE(563)
				int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(563)
				Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(563)
				Float Max = tmp12;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(563)
				bool tmp13 = (Value < Min);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(563)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(563)
				if ((tmp13)){
					HX_STACK_LINE(563)
					tmp14 = Min;
				}
				else{
					HX_STACK_LINE(563)
					tmp14 = Value;
				}
				HX_STACK_LINE(563)
				Float lowerBound = tmp14;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(563)
				bool tmp15 = (lowerBound > Max);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(563)
				if ((tmp15)){
					HX_STACK_LINE(563)
					tmp7 = Max;
				}
				else{
					HX_STACK_LINE(563)
					tmp7 = lowerBound;
				}
			}
			HX_STACK_LINE(563)
			tmp6->set_y(tmp7);
		}
		HX_STACK_LINE(566)
		this->updateFlash();
		HX_STACK_LINE(567)
		this->updateFade();
		HX_STACK_LINE(568)
		this->updateShake();
	}
return null();
}


Void FlxCamera_obj::updateFollow( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFollow",0xf2024e63,"flixel.FlxCamera.updateFollow","flixel/FlxCamera.hx",572,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(575)
		::flixel::util::FlxRect tmp = this->deadzone;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(575)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(575)
		if ((tmp1)){
			HX_STACK_LINE(577)
			::flixel::FlxObject tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(577)
			::flixel::util::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(577)
			::flixel::util::FlxPoint tmp4 = tmp2->getMidpoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(577)
			::flixel::util::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(577)
			::flixel::util::FlxPoint tmp5 = this->scroll;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(577)
			Float tmp6 = point->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(577)
			int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(577)
			Float tmp8 = (tmp7 * ((Float)0.5));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(577)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(577)
			Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(577)
			int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(577)
			Float tmp12 = (tmp11 * ((Float)0.5));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(577)
			Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(577)
			tmp5->set(tmp9,tmp13);
		}
		else{
			HX_STACK_LINE(581)
			Float edge;		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(582)
			::flixel::FlxObject tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(582)
			Float targetX = tmp2->x;		HX_STACK_VAR(targetX,"targetX");
			HX_STACK_LINE(583)
			::flixel::FlxObject tmp3 = this->target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(583)
			Float targetY = tmp3->y;		HX_STACK_VAR(targetY,"targetY");
			HX_STACK_LINE(585)
			int tmp4 = this->style;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(585)
			bool tmp5 = (tmp4 == (int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(585)
			if ((tmp5)){
				HX_STACK_LINE(587)
				Float tmp6 = targetX;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(587)
				::flixel::util::FlxPoint tmp7 = this->scroll;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(587)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(587)
				int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(587)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(587)
				bool tmp11 = (tmp6 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(587)
				if ((tmp11)){
					HX_STACK_LINE(589)
					::flixel::util::FlxPoint tmp12 = this->_scrollTarget;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(589)
					::flixel::util::FlxPoint _g = tmp12;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(589)
					Float tmp13 = _g->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(589)
					int tmp14 = this->width;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(589)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(589)
					_g->set_x(tmp15);
				}
				else{
					HX_STACK_LINE(591)
					Float tmp12 = targetX;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(591)
					::flixel::util::FlxPoint tmp13 = this->scroll;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(591)
					Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(591)
					bool tmp15 = (tmp12 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(591)
					if ((tmp15)){
						HX_STACK_LINE(593)
						::flixel::util::FlxPoint tmp16 = this->_scrollTarget;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(593)
						::flixel::util::FlxPoint _g = tmp16;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(593)
						Float tmp17 = _g->x;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(593)
						int tmp18 = this->width;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(593)
						Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(593)
						_g->set_x(tmp19);
					}
				}
				HX_STACK_LINE(596)
				Float tmp12 = targetY;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(596)
				::flixel::util::FlxPoint tmp13 = this->scroll;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(596)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(596)
				int tmp15 = this->height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(596)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(596)
				bool tmp17 = (tmp12 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(596)
				if ((tmp17)){
					HX_STACK_LINE(598)
					::flixel::util::FlxPoint tmp18 = this->_scrollTarget;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(598)
					::flixel::util::FlxPoint _g = tmp18;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(598)
					Float tmp19 = _g->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(598)
					int tmp20 = this->height;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(598)
					Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(598)
					_g->set_y(tmp21);
				}
				else{
					HX_STACK_LINE(600)
					Float tmp18 = targetY;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(600)
					::flixel::util::FlxPoint tmp19 = this->scroll;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(600)
					Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(600)
					bool tmp21 = (tmp18 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(600)
					if ((tmp21)){
						HX_STACK_LINE(602)
						::flixel::util::FlxPoint tmp22 = this->_scrollTarget;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(602)
						::flixel::util::FlxPoint _g = tmp22;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(602)
						Float tmp23 = _g->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(602)
						int tmp24 = this->height;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(602)
						Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(602)
						_g->set_y(tmp25);
					}
				}
			}
			else{
				HX_STACK_LINE(607)
				Float tmp6 = targetX;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(607)
				::flixel::util::FlxRect tmp7 = this->deadzone;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(607)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(607)
				Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(607)
				edge = tmp9;
				HX_STACK_LINE(608)
				::flixel::util::FlxPoint tmp10 = this->_scrollTarget;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(608)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(608)
				Float tmp12 = edge;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(608)
				bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(608)
				if ((tmp13)){
					HX_STACK_LINE(610)
					::flixel::util::FlxPoint tmp14 = this->_scrollTarget;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(610)
					Float tmp15 = edge;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(610)
					tmp14->set_x(tmp15);
				}
				HX_STACK_LINE(612)
				Float tmp14 = targetX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(612)
				::flixel::FlxObject tmp15 = this->target;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(612)
				Float tmp16 = tmp15->get_width();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(612)
				Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(612)
				::flixel::util::FlxRect tmp18 = this->deadzone;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(612)
				Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(612)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(612)
				::flixel::util::FlxRect tmp21 = this->deadzone;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(612)
				Float tmp22 = tmp21->width;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(612)
				Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(612)
				edge = tmp23;
				HX_STACK_LINE(613)
				::flixel::util::FlxPoint tmp24 = this->_scrollTarget;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(613)
				Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(613)
				Float tmp26 = edge;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(613)
				bool tmp27 = (tmp25 < tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(613)
				if ((tmp27)){
					HX_STACK_LINE(615)
					::flixel::util::FlxPoint tmp28 = this->_scrollTarget;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(615)
					Float tmp29 = edge;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(615)
					tmp28->set_x(tmp29);
				}
				HX_STACK_LINE(618)
				Float tmp28 = targetY;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(618)
				::flixel::util::FlxRect tmp29 = this->deadzone;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(618)
				Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(618)
				Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(618)
				edge = tmp31;
				HX_STACK_LINE(619)
				::flixel::util::FlxPoint tmp32 = this->_scrollTarget;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(619)
				Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(619)
				Float tmp34 = edge;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(619)
				bool tmp35 = (tmp33 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(619)
				if ((tmp35)){
					HX_STACK_LINE(621)
					::flixel::util::FlxPoint tmp36 = this->_scrollTarget;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(621)
					Float tmp37 = edge;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(621)
					tmp36->set_y(tmp37);
				}
				HX_STACK_LINE(623)
				Float tmp36 = targetY;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(623)
				::flixel::FlxObject tmp37 = this->target;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(623)
				Float tmp38 = tmp37->get_height();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(623)
				Float tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(623)
				::flixel::util::FlxRect tmp40 = this->deadzone;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(623)
				Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(623)
				Float tmp42 = (tmp39 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(623)
				::flixel::util::FlxRect tmp43 = this->deadzone;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(623)
				Float tmp44 = tmp43->height;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(623)
				Float tmp45 = (tmp42 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(623)
				edge = tmp45;
				HX_STACK_LINE(624)
				::flixel::util::FlxPoint tmp46 = this->_scrollTarget;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(624)
				Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(624)
				Float tmp48 = edge;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(624)
				bool tmp49 = (tmp47 < tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(624)
				if ((tmp49)){
					HX_STACK_LINE(626)
					::flixel::util::FlxPoint tmp50 = this->_scrollTarget;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(626)
					Float tmp51 = edge;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(626)
					tmp50->set_y(tmp51);
				}
			}
			HX_STACK_LINE(630)
			::flixel::FlxObject tmp6 = this->target;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(630)
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::flixel::FlxSprite >());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(630)
			if ((tmp7)){
				HX_STACK_LINE(632)
				::flixel::util::FlxPoint tmp8 = this->_lastTargetPosition;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(632)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(632)
				if ((tmp9)){
					HX_STACK_LINE(634)
					::flixel::util::FlxPoint tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						::flixel::util::FlxPool_flixel_util_FlxPoint tmp11 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(634)
						::flixel::util::FlxPoint tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(634)
						::flixel::FlxObject tmp13 = this->target;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(634)
						Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(634)
						::flixel::FlxObject tmp15 = this->target;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(634)
						Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(634)
						::flixel::util::FlxPoint tmp17 = tmp12->set(tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(634)
						::flixel::util::FlxPoint point = tmp17;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(634)
						point->_inPool = false;
						HX_STACK_LINE(634)
						tmp10 = point;
					}
					HX_STACK_LINE(634)
					this->_lastTargetPosition = tmp10;
				}
				HX_STACK_LINE(636)
				{
					HX_STACK_LINE(636)
					::flixel::util::FlxPoint tmp10 = this->_scrollTarget;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(636)
					::flixel::util::FlxPoint _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(636)
					Float tmp11 = _g->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(636)
					::flixel::FlxObject tmp12 = this->target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(636)
					Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(636)
					::flixel::util::FlxPoint tmp14 = this->_lastTargetPosition;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(636)
					Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(636)
					Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(636)
					::flixel::util::FlxPoint tmp17 = this->followLead;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(636)
					Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(636)
					Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(636)
					Float tmp20 = (tmp11 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(636)
					_g->set_x(tmp20);
				}
				HX_STACK_LINE(637)
				{
					HX_STACK_LINE(637)
					::flixel::util::FlxPoint tmp10 = this->_scrollTarget;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(637)
					::flixel::util::FlxPoint _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(637)
					Float tmp11 = _g->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(637)
					::flixel::FlxObject tmp12 = this->target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(637)
					Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(637)
					::flixel::util::FlxPoint tmp14 = this->_lastTargetPosition;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(637)
					Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(637)
					Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(637)
					::flixel::util::FlxPoint tmp17 = this->followLead;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(637)
					Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(637)
					Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(637)
					Float tmp20 = (tmp11 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(637)
					_g->set_y(tmp20);
				}
				HX_STACK_LINE(639)
				::flixel::util::FlxPoint tmp10 = this->_lastTargetPosition;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(639)
				::flixel::FlxObject tmp11 = this->target;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(639)
				Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(639)
				tmp10->set_x(tmp12);
				HX_STACK_LINE(640)
				::flixel::util::FlxPoint tmp13 = this->_lastTargetPosition;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(640)
				::flixel::FlxObject tmp14 = this->target;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(640)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(640)
				tmp13->set_y(tmp15);
			}
			HX_STACK_LINE(643)
			Float tmp8 = this->followLerp;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(643)
			bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(643)
			if ((tmp9)){
				HX_STACK_LINE(645)
				::flixel::util::FlxPoint tmp10 = this->scroll;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(645)
				::flixel::util::FlxPoint _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(645)
				::flixel::util::FlxPoint tmp11 = this->_scrollTarget;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(645)
				::flixel::util::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(645)
				Float tmp12 = point->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(645)
				_this->set_x(tmp12);
				HX_STACK_LINE(645)
				Float tmp13 = point->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(645)
				_this->set_y(tmp13);
				HX_STACK_LINE(645)
				_this;
			}
			else{
				HX_STACK_LINE(649)
				{
					HX_STACK_LINE(649)
					::flixel::util::FlxPoint tmp10 = this->scroll;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(649)
					::flixel::util::FlxPoint _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(649)
					Float tmp11 = _g->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(649)
					::flixel::util::FlxPoint tmp12 = this->_scrollTarget;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(649)
					Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(649)
					::flixel::util::FlxPoint tmp14 = this->scroll;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(649)
					Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(649)
					Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(649)
					Float tmp17 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(649)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(649)
					Float tmp19 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(649)
					Float tmp20 = this->followLerp;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(649)
					Float tmp21 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(649)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(649)
					Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(649)
					Float tmp24 = (Float(tmp18) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(649)
					Float tmp25 = (tmp11 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(649)
					_g->set_x(tmp25);
				}
				HX_STACK_LINE(650)
				{
					HX_STACK_LINE(650)
					::flixel::util::FlxPoint tmp10 = this->scroll;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(650)
					::flixel::util::FlxPoint _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(650)
					Float tmp11 = _g->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(650)
					::flixel::util::FlxPoint tmp12 = this->_scrollTarget;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(650)
					Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(650)
					::flixel::util::FlxPoint tmp14 = this->scroll;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(650)
					Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(650)
					Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(650)
					Float tmp17 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(650)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(650)
					Float tmp19 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(650)
					Float tmp20 = this->followLerp;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(650)
					Float tmp21 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(650)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(650)
					Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(650)
					Float tmp24 = (Float(tmp18) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(650)
					Float tmp25 = (tmp11 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(650)
					_g->set_y(tmp25);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFollow,(void))

Void FlxCamera_obj::updateFlash( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlash",0x43f2dcfe,"flixel.FlxCamera.updateFlash","flixel/FlxCamera.hx",656,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(658)
		Float tmp = this->_fxFlashAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(658)
		bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(658)
		if ((tmp1)){
			HX_STACK_LINE(660)
			Float tmp2 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(660)
			Float tmp3 = this->_fxFlashDuration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(660)
			Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(660)
			hx::SubEq(this->_fxFlashAlpha,tmp4);
			HX_STACK_LINE(661)
			Float tmp5 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(661)
			bool tmp6 = (tmp5 <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(661)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(661)
			if ((tmp6)){
				HX_STACK_LINE(661)
				Dynamic tmp8 = this->_fxFlashComplete_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(661)
				Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(661)
				tmp7 = (tmp9 != null());
			}
			else{
				HX_STACK_LINE(661)
				tmp7 = false;
			}
			HX_STACK_LINE(661)
			if ((tmp7)){
				HX_STACK_LINE(663)
				this->_fxFlashComplete();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlash,(void))

Void FlxCamera_obj::updateFade( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFade",0xaec3f1ee,"flixel.FlxCamera.updateFade","flixel/FlxCamera.hx",669,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(670)
		Float tmp = this->_fxFadeAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(670)
		bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(670)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(670)
		if ((tmp1)){
			HX_STACK_LINE(670)
			Float tmp3 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(670)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(670)
			tmp2 = (tmp4 < ((Float)1.0));
		}
		else{
			HX_STACK_LINE(670)
			tmp2 = false;
		}
		HX_STACK_LINE(670)
		if ((tmp2)){
			HX_STACK_LINE(672)
			bool tmp3 = this->_fxFadeIn;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(672)
			if ((tmp3)){
				HX_STACK_LINE(674)
				Float tmp4 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(674)
				Float tmp5 = this->_fxFadeDuration;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(674)
				Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(674)
				hx::SubEq(this->_fxFadeAlpha,tmp6);
				HX_STACK_LINE(675)
				Float tmp7 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(675)
				bool tmp8 = (tmp7 <= ((Float)0.0));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(675)
				if ((tmp8)){
					HX_STACK_LINE(677)
					this->_fxFadeAlpha = ((Float)0.0);
					HX_STACK_LINE(678)
					Dynamic tmp9 = this->_fxFadeComplete_dyn();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(678)
					bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(678)
					if ((tmp10)){
						HX_STACK_LINE(680)
						this->_fxFadeComplete();
					}
				}
			}
			else{
				HX_STACK_LINE(686)
				Float tmp4 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(686)
				Float tmp5 = this->_fxFadeDuration;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(686)
				Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(686)
				hx::AddEq(this->_fxFadeAlpha,tmp6);
				HX_STACK_LINE(687)
				Float tmp7 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(687)
				bool tmp8 = (tmp7 >= ((Float)1.0));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(687)
				if ((tmp8)){
					HX_STACK_LINE(689)
					this->_fxFadeAlpha = ((Float)1.0);
					HX_STACK_LINE(690)
					Dynamic tmp9 = this->_fxFadeComplete_dyn();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(690)
					bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(690)
					if ((tmp10)){
						HX_STACK_LINE(692)
						this->_fxFadeComplete();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFade,(void))

Void FlxCamera_obj::updateShake( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateShake",0xbd838614,"flixel.FlxCamera.updateShake","flixel/FlxCamera.hx",700,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(701)
		Float tmp = this->_fxShakeDuration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(701)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(701)
		if ((tmp1)){
			HX_STACK_LINE(703)
			Float tmp2 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(703)
			hx::SubEq(this->_fxShakeDuration,tmp2);
			HX_STACK_LINE(704)
			Float tmp3 = this->_fxShakeDuration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(704)
			bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(704)
			if ((tmp4)){
				HX_STACK_LINE(706)
				::flixel::util::FlxPoint tmp5 = this->_fxShakeOffset;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(706)
				tmp5->set(null(),null());
				HX_STACK_LINE(707)
				Dynamic tmp6 = this->_fxShakeComplete_dyn();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(707)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(707)
				if ((tmp7)){
					HX_STACK_LINE(710)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(715)
				int tmp5 = this->_fxShakeDirection;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(715)
				bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(715)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(715)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(715)
				if ((tmp7)){
					HX_STACK_LINE(715)
					int tmp9 = this->_fxShakeDirection;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(715)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(715)
					tmp8 = (tmp10 == (int)1);
				}
				else{
					HX_STACK_LINE(715)
					tmp8 = true;
				}
				HX_STACK_LINE(715)
				if ((tmp8)){
					HX_STACK_LINE(717)
					::flixel::util::FlxPoint tmp9 = this->_fxShakeOffset;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(717)
					int tmp10 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(717)
					int tmp11 = (tmp10 * (int)48271);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(717)
					int tmp12 = hx::Mod(tmp11,(int)2147483647);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(717)
					int tmp13 = (int(tmp12) & int((int)2147483647));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(717)
					int tmp14 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(717)
					Float tmp15 = (Float(tmp14) / Float((int)2147483647));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(717)
					Float tmp16 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(717)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(717)
					int tmp18 = this->width;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(717)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(717)
					Float tmp20 = (tmp19 * (int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(717)
					Float tmp21 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(717)
					int tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(717)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(717)
					Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(717)
					Float tmp25 = this->zoom;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(717)
					Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(717)
					tmp9->set_x(tmp26);
				}
				HX_STACK_LINE(719)
				int tmp9 = this->_fxShakeDirection;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(719)
				bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(719)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(719)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(719)
				if ((tmp11)){
					HX_STACK_LINE(719)
					int tmp13 = this->_fxShakeDirection;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(719)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(719)
					tmp12 = (tmp14 == (int)2);
				}
				else{
					HX_STACK_LINE(719)
					tmp12 = true;
				}
				HX_STACK_LINE(719)
				if ((tmp12)){
					HX_STACK_LINE(721)
					::flixel::util::FlxPoint tmp13 = this->_fxShakeOffset;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(721)
					int tmp14 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(721)
					int tmp15 = (tmp14 * (int)48271);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(721)
					int tmp16 = hx::Mod(tmp15,(int)2147483647);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(721)
					int tmp17 = (int(tmp16) & int((int)2147483647));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(721)
					int tmp18 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(721)
					Float tmp19 = (Float(tmp18) / Float((int)2147483647));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(721)
					Float tmp20 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(721)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(721)
					int tmp22 = this->height;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(721)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(721)
					Float tmp24 = (tmp23 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(721)
					Float tmp25 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(721)
					int tmp26 = this->height;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(721)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(721)
					Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(721)
					Float tmp29 = this->zoom;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(721)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(721)
					tmp13->set_y(tmp30);
				}
			}
			HX_STACK_LINE(726)
			::flixel::FlxObject tmp5 = this->target;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(726)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(726)
			if ((tmp6)){
				HX_STACK_LINE(728)
				::openfl::_legacy::display::Sprite tmp7 = this->flashSprite;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(728)
				Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(728)
				::flixel::util::FlxPoint tmp9 = this->_flashOffset;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(728)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(728)
				Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(728)
				tmp7->set_x(tmp11);
				HX_STACK_LINE(729)
				::openfl::_legacy::display::Sprite tmp12 = this->flashSprite;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(729)
				Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(729)
				::flixel::util::FlxPoint tmp14 = this->_flashOffset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(729)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(729)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(729)
				tmp12->set_y(tmp16);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateShake,(void))

Void FlxCamera_obj::follow( ::flixel::FlxObject Target,hx::Null< int >  __o_Style,::flixel::util::FlxPoint Offset,hx::Null< Float >  __o_Lerp){
int Style = __o_Style.Default(0);
Float Lerp = __o_Lerp.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","follow",0x137f0aba,"flixel.FlxCamera.follow","flixel/FlxCamera.hx",743,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Offset,"Offset")
	HX_STACK_ARG(Lerp,"Lerp")
{
		HX_STACK_LINE(744)
		this->style = Style;
		HX_STACK_LINE(745)
		this->target = Target;
		HX_STACK_LINE(746)
		this->followLerp = Lerp;
		HX_STACK_LINE(747)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(748)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(749)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(750)
		this->_lastTargetPosition = null();
		HX_STACK_LINE(752)
		int tmp = Style;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(752)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(755)
				int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(755)
				Float tmp2 = (Float(tmp1) / Float((int)8));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(755)
				bool tmp3 = (Offset != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(755)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(755)
				if ((tmp3)){
					HX_STACK_LINE(755)
					tmp4 = Offset->x;
				}
				else{
					HX_STACK_LINE(755)
					tmp4 = (int)0;
				}
				HX_STACK_LINE(755)
				Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(755)
				Float w1 = tmp5;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(756)
				int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(756)
				Float tmp7 = (Float(tmp6) / Float((int)3));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(756)
				bool tmp8 = (Offset != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(756)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(756)
				if ((tmp8)){
					HX_STACK_LINE(756)
					tmp9 = Offset->y;
				}
				else{
					HX_STACK_LINE(756)
					tmp9 = (int)0;
				}
				HX_STACK_LINE(756)
				Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(756)
				Float h1 = tmp10;		HX_STACK_VAR(h1,"h1");
				HX_STACK_LINE(757)
				::flixel::util::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					::flixel::util::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						::flixel::util::FlxPool_flixel_util_FlxRect tmp13 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(757)
						::flixel::util::FlxRect tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(757)
						::flixel::util::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(757)
						int tmp15 = this->width;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(757)
						Float tmp16 = w1;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(757)
						Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(757)
						Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(757)
						_this->x = tmp18;
						HX_STACK_LINE(757)
						int tmp19 = this->height;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(757)
						Float tmp20 = h1;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(757)
						Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(757)
						Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(757)
						Float tmp23 = (h1 * ((Float)0.25));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(757)
						Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(757)
						_this->y = tmp24;
						HX_STACK_LINE(757)
						_this->width = w1;
						HX_STACK_LINE(757)
						_this->height = h1;
						HX_STACK_LINE(757)
						tmp12 = _this;
					}
					HX_STACK_LINE(757)
					::flixel::util::FlxRect rect = tmp12;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(757)
					rect->_inPool = false;
					HX_STACK_LINE(757)
					tmp11 = rect;
				}
				HX_STACK_LINE(757)
				this->deadzone = tmp11;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(760)
				int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(760)
				int tmp2 = this->height;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(760)
				Float tmp3 = ::Math_obj::max(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(760)
				Float tmp4 = (Float(tmp3) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(760)
				helper = tmp4;
				HX_STACK_LINE(761)
				::flixel::util::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(761)
				{
					HX_STACK_LINE(761)
					::flixel::util::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						::flixel::util::FlxPool_flixel_util_FlxRect tmp7 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(761)
						::flixel::util::FlxRect tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(761)
						::flixel::util::FlxRect _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(761)
						int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(761)
						Float tmp10 = helper;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(761)
						Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(761)
						Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(761)
						_this->x = tmp12;
						HX_STACK_LINE(761)
						int tmp13 = this->height;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(761)
						Float tmp14 = helper;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(761)
						Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(761)
						Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(761)
						_this->y = tmp16;
						HX_STACK_LINE(761)
						_this->width = helper;
						HX_STACK_LINE(761)
						_this->height = helper;
						HX_STACK_LINE(761)
						tmp6 = _this;
					}
					HX_STACK_LINE(761)
					::flixel::util::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(761)
					rect->_inPool = false;
					HX_STACK_LINE(761)
					tmp5 = rect;
				}
				HX_STACK_LINE(761)
				this->deadzone = tmp5;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(764)
				int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(764)
				int tmp2 = this->height;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(764)
				Float tmp3 = ::Math_obj::max(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(764)
				Float tmp4 = (Float(tmp3) / Float((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(764)
				helper = tmp4;
				HX_STACK_LINE(765)
				::flixel::util::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(765)
				{
					HX_STACK_LINE(765)
					::flixel::util::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(765)
					{
						HX_STACK_LINE(765)
						::flixel::util::FlxPool_flixel_util_FlxRect tmp7 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(765)
						::flixel::util::FlxRect tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(765)
						::flixel::util::FlxRect _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(765)
						int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(765)
						Float tmp10 = helper;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(765)
						Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(765)
						Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(765)
						_this->x = tmp12;
						HX_STACK_LINE(765)
						int tmp13 = this->height;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(765)
						Float tmp14 = helper;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(765)
						Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(765)
						Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(765)
						_this->y = tmp16;
						HX_STACK_LINE(765)
						_this->width = helper;
						HX_STACK_LINE(765)
						_this->height = helper;
						HX_STACK_LINE(765)
						tmp6 = _this;
					}
					HX_STACK_LINE(765)
					::flixel::util::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(765)
					rect->_inPool = false;
					HX_STACK_LINE(765)
					tmp5 = rect;
				}
				HX_STACK_LINE(765)
				this->deadzone = tmp5;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(768)
				::flixel::FlxObject tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(768)
				bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(768)
				if ((tmp2)){
					HX_STACK_LINE(770)
					::flixel::FlxObject tmp3 = this->target;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(770)
					Float tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(770)
					bool tmp5 = (Offset != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(770)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(770)
					if ((tmp5)){
						HX_STACK_LINE(770)
						tmp6 = Offset->x;
					}
					else{
						HX_STACK_LINE(770)
						tmp6 = (int)0;
					}
					HX_STACK_LINE(770)
					Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(770)
					w = tmp7;
					HX_STACK_LINE(771)
					::flixel::FlxObject tmp8 = this->target;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(771)
					Float tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(771)
					bool tmp10 = (Offset != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(771)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(771)
					if ((tmp10)){
						HX_STACK_LINE(771)
						tmp11 = Offset->y;
					}
					else{
						HX_STACK_LINE(771)
						tmp11 = (int)0;
					}
					HX_STACK_LINE(771)
					Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(771)
					h = tmp12;
				}
				HX_STACK_LINE(773)
				::flixel::util::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(773)
				{
					HX_STACK_LINE(773)
					::flixel::util::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(773)
					{
						HX_STACK_LINE(773)
						::flixel::util::FlxPool_flixel_util_FlxRect tmp5 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(773)
						::flixel::util::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(773)
						::flixel::util::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(773)
						int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(773)
						Float tmp8 = w;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(773)
						Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(773)
						Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(773)
						_this->x = tmp10;
						HX_STACK_LINE(773)
						int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(773)
						Float tmp12 = h;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(773)
						Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(773)
						Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(773)
						Float tmp15 = (h * ((Float)0.25));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(773)
						Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(773)
						_this->y = tmp16;
						HX_STACK_LINE(773)
						_this->width = w;
						HX_STACK_LINE(773)
						_this->height = h;
						HX_STACK_LINE(773)
						tmp4 = _this;
					}
					HX_STACK_LINE(773)
					::flixel::util::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(773)
					rect->_inPool = false;
					HX_STACK_LINE(773)
					tmp3 = rect;
				}
				HX_STACK_LINE(773)
				this->deadzone = tmp3;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(776)
				::flixel::util::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(776)
				{
					HX_STACK_LINE(776)
					::flixel::util::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(776)
					{
						HX_STACK_LINE(776)
						::flixel::util::FlxPool_flixel_util_FlxRect tmp3 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(776)
						::flixel::util::FlxRect tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(776)
						::flixel::util::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(776)
						_this->x = (int)0;
						HX_STACK_LINE(776)
						_this->y = (int)0;
						HX_STACK_LINE(776)
						int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(776)
						_this->width = tmp5;
						HX_STACK_LINE(776)
						int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(776)
						_this->height = tmp6;
						HX_STACK_LINE(776)
						tmp2 = _this;
					}
					HX_STACK_LINE(776)
					::flixel::util::FlxRect rect = tmp2;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(776)
					rect->_inPool = false;
					HX_STACK_LINE(776)
					tmp1 = rect;
				}
				HX_STACK_LINE(776)
				this->deadzone = tmp1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(779)
				int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(779)
				int tmp2 = this->height;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(779)
				Float tmp3 = ::Math_obj::max(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(779)
				Float tmp4 = (Float(tmp3) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(779)
				helper = tmp4;
				HX_STACK_LINE(780)
				::flixel::util::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(780)
				{
					HX_STACK_LINE(780)
					::flixel::util::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(780)
					{
						HX_STACK_LINE(780)
						::flixel::util::FlxPool_flixel_util_FlxRect tmp7 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(780)
						::flixel::util::FlxRect tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(780)
						::flixel::util::FlxRect _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(780)
						_this->x = (int)0;
						HX_STACK_LINE(780)
						int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(780)
						Float tmp10 = helper;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(780)
						Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(780)
						Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(780)
						_this->y = tmp12;
						HX_STACK_LINE(780)
						_this->width = helper;
						HX_STACK_LINE(780)
						_this->height = helper;
						HX_STACK_LINE(780)
						tmp6 = _this;
					}
					HX_STACK_LINE(780)
					::flixel::util::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(780)
					rect->_inPool = false;
					HX_STACK_LINE(780)
					tmp5 = rect;
				}
				HX_STACK_LINE(780)
				this->deadzone = tmp5;
			}
			;break;
			default: {
				HX_STACK_LINE(782)
				this->deadzone = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::focusOn( ::flixel::util::FlxPoint point){
{
		HX_STACK_FRAME("flixel.FlxCamera","focusOn",0xd304f1ae,"flixel.FlxCamera.focusOn","flixel/FlxCamera.hx",793,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(794)
		::flixel::util::FlxPoint tmp = this->scroll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(794)
		Float tmp1 = point->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(794)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(794)
		Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(794)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(794)
		Float tmp5 = point->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(794)
		int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(794)
		Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(794)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(794)
		tmp->set(tmp4,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","flash",0x27663887,"flixel.FlxCamera.flash","flixel/FlxCamera.hx",806,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(807)
		bool tmp = Force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(807)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(807)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(807)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(807)
		if ((tmp2)){
			HX_STACK_LINE(807)
			Float tmp4 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(807)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(807)
			tmp3 = (tmp5 > ((Float)0.0));
		}
		else{
			HX_STACK_LINE(807)
			tmp3 = false;
		}
		HX_STACK_LINE(807)
		if ((tmp3)){
			HX_STACK_LINE(809)
			return null();
		}
		HX_STACK_LINE(811)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(812)
		bool tmp4 = (Duration <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(812)
		if ((tmp4)){
			HX_STACK_LINE(814)
			Duration = ((Float)5e-324);
		}
		HX_STACK_LINE(816)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(817)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(818)
		this->_fxFlashAlpha = ((Float)1.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","fade",0xa5741a85,"flixel.FlxCamera.fade","flixel/FlxCamera.hx",831,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeIn,"FadeIn")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(832)
		bool tmp = Force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(832)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(832)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(832)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(832)
		if ((tmp2)){
			HX_STACK_LINE(832)
			Float tmp4 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(832)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(832)
			tmp3 = (tmp5 > ((Float)0.0));
		}
		else{
			HX_STACK_LINE(832)
			tmp3 = false;
		}
		HX_STACK_LINE(832)
		if ((tmp3)){
			HX_STACK_LINE(834)
			return null();
		}
		HX_STACK_LINE(836)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(837)
		bool tmp4 = (Duration <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(837)
		if ((tmp4)){
			HX_STACK_LINE(839)
			Duration = ((Float)5e-324);
		}
		HX_STACK_LINE(842)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(843)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(844)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(846)
		bool tmp5 = this->_fxFadeIn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(846)
		if ((tmp5)){
			HX_STACK_LINE(848)
			this->_fxFadeAlpha = ((Float)0.999999);
		}
		else{
			HX_STACK_LINE(852)
			this->_fxFadeAlpha = ((Float)5e-324);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(((Float)0.05));
Float Duration = __o_Duration.Default(((Float)0.5));
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","shake",0xa0f6e19d,"flixel.FlxCamera.shake","flixel/FlxCamera.hx",866,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Intensity,"Intensity")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Direction,"Direction")
{
		HX_STACK_LINE(867)
		bool tmp = Force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(867)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(867)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(867)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(867)
		if ((tmp2)){
			HX_STACK_LINE(867)
			::flixel::util::FlxPoint tmp4 = this->_fxShakeOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(867)
			::flixel::util::FlxPoint tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(867)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(867)
			bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(867)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(867)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(867)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(867)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(867)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(867)
			if ((tmp12)){
				HX_STACK_LINE(867)
				::flixel::util::FlxPoint tmp13 = this->_fxShakeOffset;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(867)
				::flixel::util::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(867)
				::flixel::util::FlxPoint tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(867)
				Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(867)
				tmp3 = (tmp16 != (int)0);
			}
			else{
				HX_STACK_LINE(867)
				tmp3 = true;
			}
		}
		else{
			HX_STACK_LINE(867)
			tmp3 = false;
		}
		HX_STACK_LINE(867)
		if ((tmp3)){
			HX_STACK_LINE(869)
			return null();
		}
		HX_STACK_LINE(871)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(872)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(873)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(874)
		this->_fxShakeDirection = Direction;
		HX_STACK_LINE(875)
		::flixel::util::FlxPoint tmp4 = this->_fxShakeOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(875)
		tmp4->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","stopFX",0x29222b1d,"flixel.FlxCamera.stopFX","flixel/FlxCamera.hx",882,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(883)
		this->_fxFlashAlpha = ((Float)0.0);
		HX_STACK_LINE(884)
		this->_fxFadeAlpha = ((Float)0.0);
		HX_STACK_LINE(885)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(886)
		::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(886)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(886)
		::flixel::util::FlxPoint tmp2 = this->_flashOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(886)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(886)
		Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(886)
		tmp->set_x(tmp4);
		HX_STACK_LINE(887)
		::openfl::_legacy::display::Sprite tmp5 = this->flashSprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(887)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(887)
		::flixel::util::FlxPoint tmp7 = this->_flashOffset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(887)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(887)
		Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(887)
		tmp5->set_y(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

::flixel::FlxCamera FlxCamera_obj::copyFrom( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxCamera","copyFrom",0x88512948,"flixel.FlxCamera.copyFrom","flixel/FlxCamera.hx",897,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(898)
	bool tmp = (Camera->bounds == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(898)
	if ((tmp)){
		HX_STACK_LINE(900)
		this->bounds = null();
	}
	else{
		HX_STACK_LINE(904)
		::flixel::util::FlxRect tmp1 = this->bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(904)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(904)
		if ((tmp2)){
			HX_STACK_LINE(906)
			::flixel::util::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(906)
			{
				HX_STACK_LINE(906)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(906)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(906)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(906)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(906)
				::flixel::util::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(906)
				{
					HX_STACK_LINE(906)
					::flixel::util::FlxPool_flixel_util_FlxRect tmp5 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(906)
					::flixel::util::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(906)
					::flixel::util::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(906)
					_this->x = X;
					HX_STACK_LINE(906)
					_this->y = Y;
					HX_STACK_LINE(906)
					_this->width = Width;
					HX_STACK_LINE(906)
					_this->height = Height;
					HX_STACK_LINE(906)
					tmp4 = _this;
				}
				HX_STACK_LINE(906)
				::flixel::util::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(906)
				rect->_inPool = false;
				HX_STACK_LINE(906)
				tmp3 = rect;
			}
			HX_STACK_LINE(906)
			this->bounds = tmp3;
		}
		HX_STACK_LINE(908)
		{
			HX_STACK_LINE(908)
			::flixel::util::FlxRect tmp3 = this->bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(908)
			::flixel::util::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(908)
			::flixel::util::FlxRect Rect = Camera->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(908)
			_this->x = Rect->x;
			HX_STACK_LINE(908)
			_this->y = Rect->y;
			HX_STACK_LINE(908)
			_this->width = Rect->width;
			HX_STACK_LINE(908)
			_this->height = Rect->height;
			HX_STACK_LINE(908)
			_this;
		}
	}
	HX_STACK_LINE(910)
	this->target = Camera->target;
	HX_STACK_LINE(912)
	::flixel::FlxObject tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(912)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(912)
	if ((tmp2)){
		HX_STACK_LINE(914)
		bool tmp3 = (Camera->deadzone == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(914)
		if ((tmp3)){
			HX_STACK_LINE(916)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(920)
			::flixel::util::FlxRect tmp4 = this->deadzone;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(920)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(920)
			if ((tmp5)){
				HX_STACK_LINE(922)
				::flixel::util::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(922)
				{
					HX_STACK_LINE(922)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(922)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(922)
					Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(922)
					Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(922)
					::flixel::util::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(922)
					{
						HX_STACK_LINE(922)
						::flixel::util::FlxPool_flixel_util_FlxRect tmp8 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(922)
						::flixel::util::FlxRect tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(922)
						::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(922)
						_this->x = X;
						HX_STACK_LINE(922)
						_this->y = Y;
						HX_STACK_LINE(922)
						_this->width = Width;
						HX_STACK_LINE(922)
						_this->height = Height;
						HX_STACK_LINE(922)
						tmp7 = _this;
					}
					HX_STACK_LINE(922)
					::flixel::util::FlxRect rect = tmp7;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(922)
					rect->_inPool = false;
					HX_STACK_LINE(922)
					tmp6 = rect;
				}
				HX_STACK_LINE(922)
				this->deadzone = tmp6;
			}
			HX_STACK_LINE(924)
			{
				HX_STACK_LINE(924)
				::flixel::util::FlxRect tmp6 = this->deadzone;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(924)
				::flixel::util::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(924)
				::flixel::util::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(924)
				_this->x = Rect->x;
				HX_STACK_LINE(924)
				_this->y = Rect->y;
				HX_STACK_LINE(924)
				_this->width = Rect->width;
				HX_STACK_LINE(924)
				_this->height = Rect->height;
				HX_STACK_LINE(924)
				_this;
			}
		}
	}
	HX_STACK_LINE(927)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::openfl::_legacy::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.FlxCamera","fill",0xa57a338c,"flixel.FlxCamera.fill","flixel/FlxCamera.hx",937,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(BlendAlpha,"BlendAlpha")
	HX_STACK_ARG(FxAlpha,"FxAlpha")
	HX_STACK_ARG(graphics,"graphics")
{
		HX_STACK_LINE(950)
		bool tmp = (FxAlpha == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(950)
		if ((tmp)){
			HX_STACK_LINE(952)
			return null();
		}
		HX_STACK_LINE(955)
		bool tmp1 = (graphics == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(955)
		::openfl::_legacy::display::Graphics tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(955)
		if ((tmp1)){
			HX_STACK_LINE(955)
			::openfl::_legacy::display::Sprite tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(955)
			tmp2 = tmp3->get_graphics();
		}
		else{
			HX_STACK_LINE(955)
			tmp2 = graphics;
		}
		HX_STACK_LINE(955)
		::openfl::_legacy::display::Graphics targetGraphics = tmp2;		HX_STACK_VAR(targetGraphics,"targetGraphics");
		HX_STACK_LINE(956)
		int tmp3 = (int(Color) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(956)
		Color = tmp3;
		HX_STACK_LINE(959)
		int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(959)
		Float tmp5 = FxAlpha;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(959)
		targetGraphics->beginFill(tmp4,tmp5);
		HX_STACK_LINE(960)
		int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(960)
		int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(960)
		targetGraphics->drawRect((int)0,(int)0,tmp6,tmp7);
		HX_STACK_LINE(961)
		targetGraphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","drawFX",0xf9beeb9f,"flixel.FlxCamera.drawFX","flixel/FlxCamera.hx",970,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(971)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(974)
		Float tmp = this->_fxFlashAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(974)
		bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(974)
		if ((tmp1)){
			HX_STACK_LINE(976)
			int tmp2 = this->_fxFlashColor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(976)
			int tmp3 = (int(tmp2) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(976)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(976)
			alphaComponent = tmp4;
			HX_STACK_LINE(981)
			int tmp5 = this->_fxFlashColor;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(981)
			int tmp6 = (int(tmp5) & int((int)16777215));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(981)
			bool tmp7 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(981)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(981)
			if ((tmp7)){
				HX_STACK_LINE(981)
				tmp8 = (int)255;
			}
			else{
				HX_STACK_LINE(981)
				tmp8 = alphaComponent;
			}
			HX_STACK_LINE(981)
			Float tmp9 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(981)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(981)
			Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(981)
			::openfl::_legacy::display::Sprite tmp12 = this->canvas;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(981)
			::openfl::_legacy::display::Graphics tmp13 = tmp12->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(981)
			this->fill(tmp6,true,tmp11,tmp13);
		}
		HX_STACK_LINE(986)
		Float tmp2 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(986)
		bool tmp3 = (tmp2 > ((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(986)
		if ((tmp3)){
			HX_STACK_LINE(988)
			int tmp4 = this->_fxFadeColor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(988)
			int tmp5 = (int(tmp4) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(988)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(988)
			alphaComponent = tmp6;
			HX_STACK_LINE(993)
			int tmp7 = this->_fxFadeColor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(993)
			int tmp8 = (int(tmp7) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(993)
			bool tmp9 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(993)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(993)
			if ((tmp9)){
				HX_STACK_LINE(993)
				tmp10 = (int)255;
			}
			else{
				HX_STACK_LINE(993)
				tmp10 = alphaComponent;
			}
			HX_STACK_LINE(993)
			Float tmp11 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(993)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(993)
			Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(993)
			::openfl::_legacy::display::Sprite tmp14 = this->canvas;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(993)
			::openfl::_legacy::display::Graphics tmp15 = tmp14->get_graphics();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(993)
			this->fill(tmp8,true,tmp13,tmp15);
		}
		HX_STACK_LINE(997)
		::flixel::util::FlxPoint tmp4 = this->_fxShakeOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(997)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(997)
		bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(997)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(997)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(997)
		if ((tmp7)){
			HX_STACK_LINE(997)
			::flixel::util::FlxPoint tmp9 = this->_fxShakeOffset;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(997)
			::flixel::util::FlxPoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(997)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(997)
			tmp8 = (tmp11 != (int)0);
		}
		else{
			HX_STACK_LINE(997)
			tmp8 = true;
		}
		HX_STACK_LINE(997)
		if ((tmp8)){
			HX_STACK_LINE(999)
			{
				HX_STACK_LINE(999)
				::openfl::_legacy::display::Sprite tmp9 = this->flashSprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(999)
				::openfl::_legacy::display::Sprite _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(999)
				Float tmp10 = _g->get_x();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(999)
				::flixel::util::FlxPoint tmp11 = this->_fxShakeOffset;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(999)
				Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(999)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(999)
				_g->set_x(tmp13);
			}
			HX_STACK_LINE(1000)
			{
				HX_STACK_LINE(1000)
				::openfl::_legacy::display::Sprite tmp9 = this->flashSprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1000)
				::openfl::_legacy::display::Sprite _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1000)
				Float tmp10 = _g->get_y();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1000)
				::flixel::util::FlxPoint tmp11 = this->_fxShakeOffset;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1000)
				Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1000)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1000)
				_g->set_y(tmp13);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::setSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxCamera","setSize",0xa359881a,"flixel.FlxCamera.setSize","flixel/FlxCamera.hx",1034,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(1035)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1035)
		this->set_width(tmp);
		HX_STACK_LINE(1036)
		int tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1036)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setSize,(void))

Void FlxCamera_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","setPosition",0x5729a882,"flixel.FlxCamera.setPosition","flixel/FlxCamera.hx",1047,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(1048)
		this->x = X;
		HX_STACK_LINE(1049)
		this->y = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setPosition,(void))

Void FlxCamera_obj::setBounds( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","setBounds",0xf7eeb60e,"flixel.FlxCamera.setBounds","flixel/FlxCamera.hx",1062,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(1063)
		::flixel::util::FlxRect tmp = this->bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1063)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1063)
		if ((tmp1)){
			HX_STACK_LINE(1065)
			::flixel::util::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1065)
			{
				HX_STACK_LINE(1065)
				Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
				HX_STACK_LINE(1065)
				Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
				HX_STACK_LINE(1065)
				Float Width1 = (int)0;		HX_STACK_VAR(Width1,"Width1");
				HX_STACK_LINE(1065)
				Float Height1 = (int)0;		HX_STACK_VAR(Height1,"Height1");
				HX_STACK_LINE(1065)
				::flixel::util::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1065)
				{
					HX_STACK_LINE(1065)
					::flixel::util::FlxPool_flixel_util_FlxRect tmp4 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1065)
					::flixel::util::FlxRect tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1065)
					::flixel::util::FlxRect _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1065)
					_this->x = X1;
					HX_STACK_LINE(1065)
					_this->y = Y1;
					HX_STACK_LINE(1065)
					_this->width = Width1;
					HX_STACK_LINE(1065)
					_this->height = Height1;
					HX_STACK_LINE(1065)
					tmp3 = _this;
				}
				HX_STACK_LINE(1065)
				::flixel::util::FlxRect rect = tmp3;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(1065)
				rect->_inPool = false;
				HX_STACK_LINE(1065)
				tmp2 = rect;
			}
			HX_STACK_LINE(1065)
			this->bounds = tmp2;
		}
		HX_STACK_LINE(1067)
		{
			HX_STACK_LINE(1067)
			::flixel::util::FlxRect tmp2 = this->bounds;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1067)
			::flixel::util::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1067)
			_this->x = X;
			HX_STACK_LINE(1067)
			_this->y = Y;
			HX_STACK_LINE(1067)
			_this->width = Width;
			HX_STACK_LINE(1067)
			_this->height = Height;
			HX_STACK_LINE(1067)
			_this;
		}
		HX_STACK_LINE(1068)
		bool tmp2 = UpdateWorld;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1068)
		if ((tmp2)){
			HX_STACK_LINE(1070)
			::flixel::util::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1070)
			::flixel::util::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1070)
			::flixel::util::FlxRect tmp4 = this->bounds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1070)
			::flixel::util::FlxRect Rect = tmp4;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(1070)
			_this->x = Rect->x;
			HX_STACK_LINE(1070)
			_this->y = Rect->y;
			HX_STACK_LINE(1070)
			_this->width = Rect->width;
			HX_STACK_LINE(1070)
			_this->height = Rect->height;
			HX_STACK_LINE(1070)
			_this;
		}
		HX_STACK_LINE(1072)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setBounds,(void))

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxCamera","setScale",0x46f35511,"flixel.FlxCamera.setScale","flixel/FlxCamera.hx",1076,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(1077)
		::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1077)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1077)
		tmp->set_scaleX(tmp1);
		HX_STACK_LINE(1078)
		::openfl::_legacy::display::Sprite tmp2 = this->flashSprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1078)
		Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1078)
		tmp2->set_scaleY(tmp3);
		HX_STACK_LINE(1081)
		::flixel::util::FlxPoint tmp4 = this->_flashOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1081)
		int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1081)
		Float tmp6 = (tmp5 * ((Float)0.5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1081)
		Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1081)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1081)
		tmp4->set_x(tmp8);
		HX_STACK_LINE(1082)
		::flixel::util::FlxPoint tmp9 = this->_flashOffset;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1082)
		int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1082)
		Float tmp11 = (tmp10 * ((Float)0.5));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1082)
		Float tmp12 = Y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1082)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1082)
		tmp9->set_y(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

::flixel::util::FlxPoint FlxCamera_obj::getScale( ){
	HX_STACK_FRAME("flixel.FlxCamera","getScale",0x9895fb9d,"flixel.FlxCamera.getScale","flixel/FlxCamera.hx",1090,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1091)
	::flixel::util::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1091)
	::openfl::_legacy::display::Sprite tmp1 = this->flashSprite;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1091)
	Float tmp2 = tmp1->get_scaleX();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1091)
	::openfl::_legacy::display::Sprite tmp3 = this->flashSprite;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1091)
	Float tmp4 = tmp3->get_scaleY();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1091)
	::flixel::util::FlxPoint tmp5 = tmp->set(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1091)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getScale,return )

int FlxCamera_obj::set_width( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_width",0x2386b8c0,"flixel.FlxCamera.set_width","flixel/FlxCamera.hx",1095,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1096)
	bool tmp = (Value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1096)
	if ((tmp)){
		HX_STACK_LINE(1098)
		this->width = Value;
		HX_STACK_LINE(1107)
		::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1107)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1107)
		if ((tmp2)){
			HX_STACK_LINE(1109)
			::openfl::_legacy::display::Sprite tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1109)
			::openfl::_legacy::geom::Rectangle tmp4 = tmp3->get_scrollRect();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1109)
			::openfl::_legacy::geom::Rectangle rect = tmp4;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1110)
			rect->width = Value;
			HX_STACK_LINE(1111)
			::openfl::_legacy::display::Sprite tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1111)
			::openfl::_legacy::geom::Rectangle tmp6 = rect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1111)
			tmp5->set_scrollRect(tmp6);
			HX_STACK_LINE(1113)
			::flixel::util::FlxPoint tmp7 = this->_flashOffset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1113)
			int tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1113)
			Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1113)
			Float tmp10 = this->zoom;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1113)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1113)
			tmp7->set_x(tmp11);
			HX_STACK_LINE(1114)
			::openfl::_legacy::display::Sprite tmp12 = this->canvas;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1114)
			int tmp13 = this->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1114)
			int tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1114)
			Float tmp15 = (tmp14 * ((Float)0.5));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1114)
			tmp12->set_x(tmp15);
			HX_STACK_LINE(1116)
			::openfl::_legacy::display::Sprite tmp16 = this->debugLayer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1116)
			::openfl::_legacy::display::Sprite tmp17 = this->canvas;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1116)
			Float tmp18 = tmp17->get_x();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1116)
			tmp16->set_x(tmp18);
		}
	}
	HX_STACK_LINE(1121)
	int tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1121)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_width,return )

int FlxCamera_obj::set_height( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_height",0xa8aa67ed,"flixel.FlxCamera.set_height","flixel/FlxCamera.hx",1125,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1126)
	bool tmp = (Value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1126)
	if ((tmp)){
		HX_STACK_LINE(1128)
		this->height = Value;
		HX_STACK_LINE(1137)
		::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1137)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1137)
		if ((tmp2)){
			HX_STACK_LINE(1139)
			::openfl::_legacy::display::Sprite tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1139)
			::openfl::_legacy::geom::Rectangle tmp4 = tmp3->get_scrollRect();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1139)
			::openfl::_legacy::geom::Rectangle rect = tmp4;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1140)
			rect->height = Value;
			HX_STACK_LINE(1141)
			::openfl::_legacy::display::Sprite tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1141)
			::openfl::_legacy::geom::Rectangle tmp6 = rect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1141)
			tmp5->set_scrollRect(tmp6);
			HX_STACK_LINE(1143)
			::flixel::util::FlxPoint tmp7 = this->_flashOffset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1143)
			int tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1143)
			Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1143)
			Float tmp10 = this->zoom;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1143)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1143)
			tmp7->set_y(tmp11);
			HX_STACK_LINE(1144)
			::openfl::_legacy::display::Sprite tmp12 = this->canvas;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1144)
			int tmp13 = this->height;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1144)
			int tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1144)
			Float tmp15 = (tmp14 * ((Float)0.5));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1144)
			tmp12->set_y(tmp15);
			HX_STACK_LINE(1146)
			::openfl::_legacy::display::Sprite tmp16 = this->debugLayer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1146)
			::openfl::_legacy::display::Sprite tmp17 = this->canvas;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1146)
			Float tmp18 = tmp17->get_y();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1146)
			tmp16->set_y(tmp18);
		}
	}
	HX_STACK_LINE(1151)
	int tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1151)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_height,return )

Float FlxCamera_obj::set_zoom( Float Zoom){
	HX_STACK_FRAME("flixel.FlxCamera","set_zoom",0x3f00d599,"flixel.FlxCamera.set_zoom","flixel/FlxCamera.hx",1155,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Zoom,"Zoom")
	HX_STACK_LINE(1156)
	bool tmp = (Zoom == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1156)
	if ((tmp)){
		HX_STACK_LINE(1158)
		Float tmp1 = ::flixel::FlxCamera_obj::defaultZoom;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1158)
		this->zoom = tmp1;
	}
	else{
		HX_STACK_LINE(1162)
		this->zoom = Zoom;
	}
	HX_STACK_LINE(1164)
	Float tmp1 = this->zoom;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1164)
	Float tmp2 = this->zoom;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1164)
	this->setScale(tmp1,tmp2);
	HX_STACK_LINE(1165)
	Float tmp3 = this->zoom;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1165)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_zoom,return )

Float FlxCamera_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxCamera","set_alpha",0x7abaaa18,"flixel.FlxCamera.set_alpha","flixel/FlxCamera.hx",1169,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1170)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1170)
	{
		HX_STACK_LINE(1170)
		bool tmp1 = (Alpha < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1170)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1170)
		if ((tmp1)){
			HX_STACK_LINE(1170)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(1170)
			tmp2 = Alpha;
		}
		HX_STACK_LINE(1170)
		Float lowerBound = tmp2;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1170)
		bool tmp3 = (lowerBound > (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1170)
		if ((tmp3)){
			HX_STACK_LINE(1170)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(1170)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(1170)
	this->alpha = tmp;
	HX_STACK_LINE(1174)
	::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1174)
	Float tmp2 = Alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1174)
	tmp1->set_alpha(tmp2);
	HX_STACK_LINE(1176)
	Float tmp3 = Alpha;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1176)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_alpha,return )

Float FlxCamera_obj::set_angle( Float Angle){
	HX_STACK_FRAME("flixel.FlxCamera","set_angle",0x7c06468d,"flixel.FlxCamera.set_angle","flixel/FlxCamera.hx",1180,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(1181)
	this->angle = Angle;
	HX_STACK_LINE(1182)
	::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1182)
	Float tmp1 = Angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1182)
	tmp->set_rotation(tmp1);
	HX_STACK_LINE(1183)
	Float tmp2 = Angle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1183)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_angle,return )

int FlxCamera_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxCamera","set_color",0xa380741d,"flixel.FlxCamera.set_color","flixel/FlxCamera.hx",1187,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1188)
	int tmp = (int(Color) & int((int)16777215));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1188)
	this->color = tmp;
	HX_STACK_LINE(1199)
	::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1199)
	::openfl::_legacy::geom::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1199)
	::openfl::_legacy::geom::ColorTransform tmp3 = tmp2->get_colorTransform();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1199)
	::openfl::_legacy::geom::ColorTransform colorTransform = tmp3;		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(1200)
	int tmp4 = this->color;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1200)
	int tmp5 = (int(tmp4) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1200)
	Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1200)
	colorTransform->redMultiplier = tmp6;
	HX_STACK_LINE(1201)
	int tmp7 = this->color;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1201)
	int tmp8 = (int(tmp7) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1201)
	int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1201)
	Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1201)
	colorTransform->greenMultiplier = tmp10;
	HX_STACK_LINE(1202)
	int tmp11 = this->color;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1202)
	int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1202)
	Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1202)
	colorTransform->blueMultiplier = tmp13;
	HX_STACK_LINE(1203)
	::openfl::_legacy::display::Sprite tmp14 = this->canvas;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1203)
	::openfl::_legacy::geom::Transform tmp15 = tmp14->get_transform();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1203)
	::openfl::_legacy::geom::ColorTransform tmp16 = colorTransform;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1203)
	tmp15->set_colorTransform(tmp16);
	HX_STACK_LINE(1206)
	int tmp17 = Color;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1206)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_color,return )

bool FlxCamera_obj::set_antialiasing( bool Antialiasing){
	HX_STACK_FRAME("flixel.FlxCamera","set_antialiasing",0x0f9a3f7a,"flixel.FlxCamera.set_antialiasing","flixel/FlxCamera.hx",1210,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Antialiasing,"Antialiasing")
	HX_STACK_LINE(1211)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(1215)
	bool tmp = Antialiasing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1215)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_antialiasing,return )

int FlxCamera_obj::STYLE_LOCKON;

int FlxCamera_obj::STYLE_PLATFORMER;

int FlxCamera_obj::STYLE_TOPDOWN;

int FlxCamera_obj::STYLE_TOPDOWN_TIGHT;

int FlxCamera_obj::STYLE_SCREEN_BY_SCREEN;

int FlxCamera_obj::STYLE_NO_DEAD_ZONE;

int FlxCamera_obj::Y_AXIS_ONLY;

int FlxCamera_obj::SHAKE_BOTH_AXES;

int FlxCamera_obj::SHAKE_HORIZONTAL_ONLY;

int FlxCamera_obj::SHAKE_VERTICAL_ONLY;

Float FlxCamera_obj::defaultZoom;

Array< ::Dynamic > FlxCamera_obj::defaultCameras;

::flixel::_system::layer::DrawStackItem FlxCamera_obj::_storageHead;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(followLerp,"followLerp");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_MARK_MEMBER_NAME(flashSprite,"flashSprite");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(followLead,"followLead");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_MARK_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(debugLayer,"debugLayer");
	HX_MARK_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(followLerp,"followLerp");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_VISIT_MEMBER_NAME(flashSprite,"flashSprite");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(followLead,"followLead");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_VISIT_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(debugLayer,"debugLayer");
	HX_VISIT_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { return followLerp; }
		if (HX_FIELD_EQ(inName,"followLead") ) { return followLead; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { return debugLayer; }
		if (HX_FIELD_EQ(inName,"updateFade") ) { return updateFade_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashSprite") ) { return flashSprite; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"updateFlash") ) { return updateFlash_dyn(); }
		if (HX_FIELD_EQ(inName,"updateShake") ) { return updateShake_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { return _flashOffset; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"updateFollow") ) { return updateFollow_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { return _scrollTarget; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return clearDrawStack_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return _headOfDrawStack; }
		if (HX_FIELD_EQ(inName,"getDrawStackItem") ) { return getDrawStackItem_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { return _fxShakeDirection; }
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { return _currentStackItem; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { return useBgAlphaBlending; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { return _lastTargetPosition; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxCamera_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { outValue = defaultZoom; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { outValue = _storageHead; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { outValue = defaultCameras; return true;  }
	}
	return false;
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == hx::paccAlways) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { followLerp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLead") ) { followLead=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { debugLayer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashSprite") ) { flashSprite=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == hx::paccAlways) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { _flashOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { _scrollTarget=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast< ::flixel::_system::layer::DrawStackItem >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { _fxShakeDirection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { _currentStackItem=inValue.Cast< ::flixel::_system::layer::DrawStackItem >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { useBgAlphaBlending=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { _lastTargetPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxCamera_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { _storageHead=ioValue.Cast< ::flixel::_system::layer::DrawStackItem >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { defaultCameras=ioValue.Cast< Array< ::Dynamic > >(); return true; }
	}
	return false;
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9"));
	outFields->push(HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2"));
	outFields->push(HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	outFields->push(HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"));
	outFields->push(HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6"));
	outFields->push(HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc"));
	outFields->push(HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d"));
	outFields->push(HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3"));
	outFields->push(HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9"));
	outFields->push(HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4"));
	outFields->push(HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1"));
	outFields->push(HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f"));
	outFields->push(HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8"));
	outFields->push(HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90"));
	outFields->push(HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a"));
	outFields->push(HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36"));
	outFields->push(HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93"));
	outFields->push(HX_HCSTRING("_fxShakeDirection","\xea","\x21","\xf7","\x95"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("debugLayer","\x7e","\x52","\xa4","\x6e"));
	outFields->push(HX_HCSTRING("_currentStackItem","\x61","\xff","\x68","\x5c"));
	outFields->push(HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,style),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxCamera_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,followLerp),HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(FlxCamera_obj,deadzone),HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(FlxCamera_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,scroll),HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,bgColor),HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,useBgAlphaBlending),HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,flashSprite),HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,zoom),HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,followLead),HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxCamera_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxCamera_obj,_flashPoint),HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_flashOffset),HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFlashColor),HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashDuration),HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFlashComplete),HX_HCSTRING("_fxFlashComplete","\x58","\x70","\x0b","\x99")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashAlpha),HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFadeColor),HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_lastTargetPosition),HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_scrollTarget),HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeDuration),HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,_fxFadeIn),HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFadeComplete),HX_HCSTRING("_fxFadeComplete","\x66","\xef","\x17","\x0b")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeAlpha),HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeIntensity),HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeDuration),HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxShakeComplete),HX_HCSTRING("_fxShakeComplete","\x6e","\x1f","\xac","\xa1")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_fxShakeOffset),HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxShakeDirection),HX_HCSTRING("_fxShakeDirection","\xea","\x21","\xf7","\x95")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,debugLayer),HX_HCSTRING("debugLayer","\x7e","\x52","\xa4","\x6e")},
	{hx::fsObject /*::flixel::_system::layer::DrawStackItem*/ ,(int)offsetof(FlxCamera_obj,_currentStackItem),HX_HCSTRING("_currentStackItem","\x61","\xff","\x68","\x5c")},
	{hx::fsObject /*::flixel::_system::layer::DrawStackItem*/ ,(int)offsetof(FlxCamera_obj,_headOfDrawStack),HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_LOCKON,HX_HCSTRING("STYLE_LOCKON","\x78","\x22","\xf4","\xf8")},
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_PLATFORMER,HX_HCSTRING("STYLE_PLATFORMER","\x8e","\x29","\x93","\xf7")},
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_TOPDOWN,HX_HCSTRING("STYLE_TOPDOWN","\xe9","\xd0","\xea","\xa0")},
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_TOPDOWN_TIGHT,HX_HCSTRING("STYLE_TOPDOWN_TIGHT","\xa8","\x99","\xf6","\xff")},
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,HX_HCSTRING("STYLE_SCREEN_BY_SCREEN","\x6f","\x68","\xe5","\xd7")},
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_NO_DEAD_ZONE,HX_HCSTRING("STYLE_NO_DEAD_ZONE","\x57","\xf7","\x52","\x0d")},
	{hx::fsInt,(void *) &FlxCamera_obj::Y_AXIS_ONLY,HX_HCSTRING("Y_AXIS_ONLY","\x64","\xe2","\x5a","\x54")},
	{hx::fsInt,(void *) &FlxCamera_obj::SHAKE_BOTH_AXES,HX_HCSTRING("SHAKE_BOTH_AXES","\xca","\xd6","\xb4","\x74")},
	{hx::fsInt,(void *) &FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,HX_HCSTRING("SHAKE_HORIZONTAL_ONLY","\x0e","\xc3","\x6f","\x63")},
	{hx::fsInt,(void *) &FlxCamera_obj::SHAKE_VERTICAL_ONLY,HX_HCSTRING("SHAKE_VERTICAL_ONLY","\x7c","\x4e","\x13","\x50")},
	{hx::fsFloat,(void *) &FlxCamera_obj::defaultZoom,HX_HCSTRING("defaultZoom","\x74","\x9c","\xb7","\x22")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &FlxCamera_obj::defaultCameras,HX_HCSTRING("defaultCameras","\x6d","\xe3","\x71","\x12")},
	{hx::fsObject /*::flixel::_system::layer::DrawStackItem*/ ,(void *) &FlxCamera_obj::_storageHead,HX_HCSTRING("_storageHead","\xfc","\x9b","\x96","\xa2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9"),
	HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"),
	HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2"),
	HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"),
	HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6"),
	HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc"),
	HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d"),
	HX_HCSTRING("_fxFlashComplete","\x58","\x70","\x0b","\x99"),
	HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3"),
	HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9"),
	HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4"),
	HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1"),
	HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f"),
	HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8"),
	HX_HCSTRING("_fxFadeComplete","\x66","\xef","\x17","\x0b"),
	HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90"),
	HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a"),
	HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36"),
	HX_HCSTRING("_fxShakeComplete","\x6e","\x1f","\xac","\xa1"),
	HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93"),
	HX_HCSTRING("_fxShakeDirection","\xea","\x21","\xf7","\x95"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("debugLayer","\x7e","\x52","\xa4","\x6e"),
	HX_HCSTRING("_currentStackItem","\x61","\xff","\x68","\x5c"),
	HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac"),
	HX_HCSTRING("getDrawStackItem","\x61","\x59","\x05","\x9a"),
	HX_HCSTRING("clearDrawStack","\x57","\xf1","\x1b","\x0a"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateFollow","\x5a","\x38","\x5a","\xf9"),
	HX_HCSTRING("updateFlash","\xe7","\x9e","\x24","\xe8"),
	HX_HCSTRING("updateFade","\x25","\xa0","\x6a","\xfc"),
	HX_HCSTRING("updateShake","\xfd","\x47","\xb5","\x61"),
	HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"),
	HX_HCSTRING("focusOn","\x17","\x4b","\x83","\x41"),
	HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"),
	HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("stopFX","\xd4","\xb1","\x39","\x0f"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("drawFX","\x56","\x72","\xd6","\xdf"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("setBounds","\xb7","\xfb","\xc4","\xc5"),
	HX_HCSTRING("setScale","\x88","\x37","\x03","\x87"),
	HX_HCSTRING("getScale","\x14","\xde","\xa5","\xd8"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_antialiasing","\xf1","\xf0","\x93","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::Y_AXIS_ONLY,"Y_AXIS_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::Y_AXIS_ONLY,"Y_AXIS_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

#endif

hx::Class FlxCamera_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STYLE_LOCKON","\x78","\x22","\xf4","\xf8"),
	HX_HCSTRING("STYLE_PLATFORMER","\x8e","\x29","\x93","\xf7"),
	HX_HCSTRING("STYLE_TOPDOWN","\xe9","\xd0","\xea","\xa0"),
	HX_HCSTRING("STYLE_TOPDOWN_TIGHT","\xa8","\x99","\xf6","\xff"),
	HX_HCSTRING("STYLE_SCREEN_BY_SCREEN","\x6f","\x68","\xe5","\xd7"),
	HX_HCSTRING("STYLE_NO_DEAD_ZONE","\x57","\xf7","\x52","\x0d"),
	HX_HCSTRING("Y_AXIS_ONLY","\x64","\xe2","\x5a","\x54"),
	HX_HCSTRING("SHAKE_BOTH_AXES","\xca","\xd6","\xb4","\x74"),
	HX_HCSTRING("SHAKE_HORIZONTAL_ONLY","\x0e","\xc3","\x6f","\x63"),
	HX_HCSTRING("SHAKE_VERTICAL_ONLY","\x7c","\x4e","\x13","\x50"),
	HX_HCSTRING("defaultZoom","\x74","\x9c","\xb7","\x22"),
	HX_HCSTRING("defaultCameras","\x6d","\xe3","\x71","\x12"),
	HX_HCSTRING("_storageHead","\xfc","\x9b","\x96","\xa2"),
	::String(null()) };

void FlxCamera_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxCamera","\x05","\x18","\xe2","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxCamera_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxCamera_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxCamera_obj >;
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

void FlxCamera_obj::__boot()
{
	STYLE_LOCKON= (int)0;
	STYLE_PLATFORMER= (int)1;
	STYLE_TOPDOWN= (int)2;
	STYLE_TOPDOWN_TIGHT= (int)3;
	STYLE_SCREEN_BY_SCREEN= (int)4;
	STYLE_NO_DEAD_ZONE= (int)5;
	Y_AXIS_ONLY= (int)6;
	SHAKE_BOTH_AXES= (int)0;
	SHAKE_HORIZONTAL_ONLY= (int)1;
	SHAKE_VERTICAL_ONLY= (int)2;
}

} // end namespace flixel
