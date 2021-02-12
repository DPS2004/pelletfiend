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

#include "bn_affine_bg_items_bg_blank.h"
#include "bn_affine_bg_items_bg_titlescreen.h"

#include "bg.h"

Bg::Bg(): 
	cbg(bn::affine_bg_items::bg_blank.create_bg(0, 0))
    {
    }
Bg::Bg(const bn::affine_bg_item& affine_bg_item, int x,int y):
	cbg(affine_bg_item.create_bg(x, y))
	{
	}

void Bg::update() {
	
}
void Bg::draw() {
	
}