#ifndef ST_TITLE_H
#define ST_TITLE_H
#include "bn_core.h"
#include "bn_affine_bg_ptr.h"
#include "state.h"

#include "bg.h"

class St_title
{
public:
	double logoy;
	Object objects[10];
	double nmscroll;
	Bg gridbg;
	int degrees_angle;
	St_title();
	void update();
	
	void draw();
	void init();

};

#endif