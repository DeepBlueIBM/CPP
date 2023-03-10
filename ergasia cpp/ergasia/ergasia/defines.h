#pragma once
#include <random>
#include <stdlib.h>

#define CANVAS_WIDTH 28.0f
#define CANVAS_HEIGHT 16.0f

#define ASSET_PATH ".\\assets\\"

#define POSTER_SIZE 3.5f

#define SETCOLOR(c, r, g, b) {c[0] = r; c[1] =g; c[2] =b;}
#define RAND0TO1() (rand()/(float)RAND_MAX)

inline float distance(float x1, float y1, float x2, float y2)
{
	float dx = x1 - x2;
	float dy = y1 - y2;
	return sqrtf(dx * dx + dy * dy);
}