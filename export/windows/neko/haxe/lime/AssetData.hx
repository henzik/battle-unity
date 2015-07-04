package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/images/game_background_sprites.png", "assets/images/game_background_sprites.png");
			type.set ("assets/images/game_background_sprites.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/menu_background.jpg", "assets/images/menu_background.jpg");
			type.set ("assets/images/menu_background.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/platform_blue_normal.png", "assets/images/platform_blue_normal.png");
			type.set ("assets/images/platform_blue_normal.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/platform_red_normal.png", "assets/images/platform_red_normal.png");
			type.set ("assets/images/platform_red_normal.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/press_start.png", "assets/images/press_start.png");
			type.set ("assets/images/press_start.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/maintheme.wav", "assets/music/maintheme.wav");
			type.set ("assets/music/maintheme.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Teleport.wav", "assets/sounds/Teleport.wav");
			type.set ("assets/sounds/Teleport.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/fonts/nokiafc22.ttf", "assets/fonts/nokiafc22.ttf");
			type.set ("assets/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/arial.ttf", "assets/fonts/arial.ttf");
			type.set ("assets/fonts/arial.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
