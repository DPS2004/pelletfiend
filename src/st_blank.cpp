#include "bn_core.h"
#include "bn_display.h"


#include "object.h"
#include "state.h"
#include "bg.h"

#include "bn_sprite_items_spr_blank.h"
#include "bn_sprite_items_spr_logo0.h"
#include "bn_sprite_items_spr_logo1.h"
#include "bn_sprite_items_spr_logo2.h"
#include "bn_sprite_items_spr_logo3.h"
#include "bn_affine_bg_ptr.h"

#include "bn_affine_bg_items_bg_titlescreen.h"

#include "st_blank.h"

St_blank::St_blank() {}

void St_blank::init() {
	//State::init();
	//Object objects[10];
	
	nextstate = 0; // blank
	
	//gridbg = Bg(bn::affine_bg_items::bg_titlescreen,0,0); TODO: fix bg objects
	
	
	

}

int St_blank::update() {
	//State::update();

	return nextstate;
}
void St_blank::draw() {
	//State::draw();
}