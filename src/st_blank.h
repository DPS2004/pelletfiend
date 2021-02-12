#ifndef ST_BLANK_H
#define ST_BLANK_H
#include "bn_core.h"
#include "bn_affine_bg_ptr.h"
#include "state.h"

#include "bg.h"

class St_blank
{
public:
	
	Object objects[10];

	St_blank();
	int update();
	
	void draw();
	void init();
private:
	int nextstate;
};

#endif