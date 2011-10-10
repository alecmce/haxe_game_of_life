import nme.Assets;


class ApplicationMain
{
   public static function main()
   {
      nme.Lib.create(
           function(){ Main.main(); },
           0, 0,
           30,
           0xffffff,
             ( true   ? nme.Lib.HARDWARE  : 0) |
             ( true ? nme.Lib.RESIZABLE : 0),
          "NME01", 
          "com.joshuagranick.haxe.nmetemplate"
          
          );
   }

   public static function getAsset(inName:String):Dynamic
   {
      
      return null;
   }
}

