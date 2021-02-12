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

#include "st_title.h"

St_title::St_title() {}

void St_title::init() {
	//State::init();
	//Object objects[10];
	logoy = -20.0;
	degrees_angle = 0;
	nmscroll = 0.0;
	nextstate = 1; // title
	
	//gridbg = Bg(bn::affine_bg_items::bg_titlescreen,0,0); TODO: fix bg objects
	
	objects[0] = Object(bn::sprite_items::spr_logo0,-108+(64*0.5),-10);
    objects[1] = Object(bn::sprite_items::spr_logo1,-108+(64*1.5),-10);
    objects[2] = Object(bn::sprite_items::spr_logo2,-108+(64*2.5),-10);
    objects[3] = Object(bn::sprite_items::spr_logo3,-108+(64*3.5),-10);
	

}

int St_title::update() {
	//State::update();
	
	nmscroll += 2;
	
	if(nmscroll >= 128.0) {
		nmscroll -= 128.0;
	}
	
	for(int i=0; i < 10; i++) {
		//objects[i].spr.set_z_order(objects[i].spr.y().integer() * -1);
		objects[i].update();
	}
	degrees_angle += 2;

	if(degrees_angle >= 360)
	{
		degrees_angle -= 360;
	}
	
	gridbg.cbg.set_y(0-nmscroll);
	gridbg.cbg.set_x(bn::degrees_lut_sin(degrees_angle) * 39);
	
	if(bn::keypad::a_pressed() or bn::keypad::start_pressed()) {
		nextstate = 0; //blank
	}
	return nextstate;
}
void St_title::draw() {
	//State::draw();
}