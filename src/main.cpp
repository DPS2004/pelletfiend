// import butano
#include "bn_core.h"
#include "bn_math.h"
#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_blending.h"
#include "bn_bg_palettes.h"
#include "bn_regular_bg_ptr.h"
#include "bn_sprites_mosaic.h"
#include "bn_sprite_actions.h"
#include "bn_sprite_builder.h"
#include "bn_sprite_text_generator.h"
#include "bn_sprite_animate_actions.h"
#include "bn_sprite_first_attributes.h"
#include "bn_sprite_third_attributes.h"
#include "bn_sprite_position_hbe_ptr.h"
#include "bn_sprite_first_attributes_hbe_ptr.h"
#include "bn_sprite_third_attributes_hbe_ptr.h"
#include "bn_sprite_affine_second_attributes.h"
#include "bn_sprite_regular_second_attributes.h"
#include "bn_sprite_affine_second_attributes_hbe_ptr.h"
#include "bn_sprite_regular_second_attributes_hbe_ptr.h"
#include "bn_affine_bg_ptr.h"
#include "bn_log.h"
// import assets
#include "bn_sprite_items_spr_samurai.h"

// import objects
#include "object.h"
#include "state.h"
#include "bg.h"

// import states

#include "st_title.h"


int main()
{
    bn::core::init(); //initialize butano
	//bn::affine_bg_ptr bg = bn::affine_bg_items::bg_titlescreen.create_bg(0, 0);
	BN_LOG("hello world!");
	
    St_title st_title;
	
	st_title.init();
	
	// Object objects[10]; //make array for objects
    // objects[0] = Object(bn::sprite_items::spr_samurai,0,0);
    // objects[1] = Object(bn::sprite_items::spr_samurai,30,10);
	// objects[0].action = bn::create_sprite_animate_action_forever(objects[0].spr, 16, bn::sprite_items::spr_samurai.tiles_item(), 0, 1, 1, 1);
	// objects[1].action = bn::create_sprite_animate_action_forever(objects[1].spr, 16, bn::sprite_items::spr_samurai.tiles_item(), 0, 1, 0, 1);
	
	
	
	
    while(true) //main loop
    {	
		st_title.update();
        
        // if(bn::keypad::left_held())
        // {
            // objects[0].spr.set_x(objects[0].spr.x() - 1);
            // objects[0].spr.set_horizontal_flip(true);
        // }
        // else if(bn::keypad::right_held())
        // {
            // objects[0].spr.set_x(objects[0].spr.x() + 1);
            // objects[0].spr.set_horizontal_flip(false);
        // }

        // if(bn::keypad::up_held())
        // {
            // objects[0].spr.set_y(objects[0].spr.y() - 1);
        // }
        // else if(bn::keypad::down_held())
        // {
            // objects[0].spr.set_y(objects[0].spr.y() + 1);
        // }
		
		// z order, update


		
		
        bn::core::update();

    }
}
