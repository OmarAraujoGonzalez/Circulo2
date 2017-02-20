#pragma once
#include "ofImage.h"
#include "ofColor.h"
#include "ofAppRunner.h"
#include "ofGraphics.h"

class PutPixel {
	ofImage _img;
public:
	float xc = ofGetWidth() / 2;
	float yc = ofGetHeight() / 2;

	void draw();
	PutPixel();
	void putpixel(const int& x, const int& y, const ofColor& color);
	void FASTputpixel(const int& x, const int& y, const ofColor& color);
	void clear(const ofColor& color);
	void midPoint(float x0, float y0, float x1, float y2, const ofColor& color);
	void angles();
};