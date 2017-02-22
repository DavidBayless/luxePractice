
import luxe.GameConfig;
import luxe.Input;
import luxe.Sprite;
import luxe.Color;
import luxe.Vector;
import phoenix.Texture;
import luxe.Parcel;
import luxe.ParcelProgress;
import luxe.components.sprite.SpriteAnimation;


class Main extends luxe.Game {
    // var block : Sprite;
    var anim : SpriteAnimation;
    var image : Texture;
    var player : Sprite;
    var max_left : Float = 0;
    var max_right : Float = 0;
    var move_speed : Float = 0;

    override function config(config:GameConfig) {

        config.window.title = 'luxe game';
        config.window.width = 960;
        config.window.height = 640;
        config.window.fullscreen = false;

        config.preload.textures.push({ id: 'assets/stand.png' });

        return config;

    } //config

    override function ready() {
      // block = new Sprite({
      //   name: 'block sprite',
      //   pos: Luxe.screen.mid,
      //   color: new Color().rgb(0xf94b04),
      //   size: new Vector(128, 128)
      // });

      // var image = Luxe.resources.texture('assets/stand.png');
      //
      // image.filter_min = image.filter_mag = FilterType.nearest;
      //
      // var ratio = 1.75;
      // var height = Luxe.screen.h/ratio;
      // var width = (height/image.height) * image.width;
      //
      // player = new Sprite({
      //   name: 'player',
      //   texture: image,
      //   pos: new Vector(Luxe.screen.mid.x, Luxe.screen.h - (height/ratio)),
      //   size: new Vector(width, height)
      // });
      //
      // move_speed = width * 3;
      //
      // connect_input();

      var parcel = new Parcel({
        jsons: [{ id: 'assets/anim.json'}],
        textures: [
          { id: 'assets/apartment.png' },
          { id: 'assets/player.png'}
        ],
      });

      new ParcelProgress({
        parcel      : parcel,
        background  : new Color(1,1,1,0.85),
        oncomplete  : assets_loaded
      });

      parcel.load();

    } //ready

    function assets_loaded(_) {

      create_apartment();
      create_player();
      create_player_animation();
      connect_input();

    } //assets_loaded

    function create_apartment() {
      var apartment = Luxe.resources.texture('assets/apartment.png');
      apartment.filter_min = apartment.filter_mag = FilterType.nearest;
      var height = Luxe.screen.h;
      var width = (height/apartment.height) * apartment.width;

      new Sprite({
        name: 'apartment',
        texture: apartment,
        size: new Vector(width, height),
        centered: false
      });
    }

    function create_player() {
      image = Luxe.resources.texture('assets/player.png');

      image.filter_min = image.filter_mag = FilterType.nearest;

      var frame_width = 32;
      var height = Luxe.screen.h/1.75;
      var ratio = (height/image.height);
      var width = ratio * frame_width;

      move_speed= width * 1.5;

      max_right = Luxe.screen.w - (width/2);
      max_left = (width/2);

      player = new Sprite({
        name: 'player',
        texture: image,
        pos: new Vector(Luxe.screen.mid.x, Luxe.screen.h - (height/1.75)),
        size: new Vector(width, height)
      });
    }

    function create_player_animation() {
      var anim_object = Luxe.resources.json('assets/anim.json');
      anim = player.add( new SpriteAnimation({ name: 'anim' }));
      anim.add_from_json_object( anim_object.asset.json );
      anim.animation = 'idle';
      anim.play();
    }

    function connect_input() {
      Luxe.input.bind_key('left', Key.left);
      Luxe.input.bind_key('left', Key.key_a);

      Luxe.input.bind_key('right', Key.right);
      Luxe.input.bind_key('right', Key.key_d);
    }

    // override function onmousemove(event:MouseEvent) {
    //   block.pos = event.pos;
    // } //onmousemove

    override function onkeyup(event:KeyEvent) {

        if(event.keycode == Key.escape) {
            Luxe.shutdown();
        }

    } //onkeyup

    override function update(delta:Float) {
      // block.rotation_z += 40 * delta;
      if(player == null) {
        return;
      }

      var moving = false;
      if (Luxe.input.inputdown('right')) {
        player.pos.x += move_speed * delta;
        player.flipx = false;
        moving = true;
      } else if (Luxe.input.inputdown('left')) {
        player.pos.x -= move_speed * delta;
        player.flipx = true;
        moving = true;
      }

      if(player.pos.x >= max_right) {
        player.pos.x = max_right;
        moving = false;
      }
      if(player.pos.x <= max_left) {
          player.pos.x = max_left;
          moving = false;
      }

      if(moving) {
        if(anim.animation != 'walk') {
          anim.animation = 'walk';
        }
      } else {
        if(anim.animation != 'idle') {
            anim.animation = 'idle';
        }
      }
    } //update

} //Main
