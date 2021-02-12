#include "bn_core.h"
#include "bn_display.h"
#include "bn_blending.h"
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

#include "bn_sprite_items_spr_blank.h"

#include "object.h"

Object::Object(): 
	spr(bn::sprite_items::spr_blank.create_sprite(0, 0)),
    action(bn::create_sprite_animate_action_forever(spr, 16, bn::sprite_items::spr_blank.tiles_item(), 0,0,0,0))
    {
    }
Object::Object(const bn::sprite_item& sprite_item, int x,int y):
	spr(sprite_item.create_sprite(x, y)),
    action(bn::create_sprite_animate_action_forever(spr, 16, sprite_item.tiles_item(), 0,0,0,0))
	{
	}

void Object::update() {
	action.update();
}
void Object::draw() {
	
}