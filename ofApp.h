#pragma once

#include "ofMain.h"
#include "PutPixel.h"

class ofApp : public ofBaseApp{

	//Crear una clase FrameBuffer.

	public:
		float xc = ofGetWidth() / 2;
		float yc = ofGetHeight() / 2;
		
		float x1 = xc + 100;
		float y1 = yc;
		float r = 1;
		float x0 = 0;
		float y0 = 0;

		PutPixel pixel;
		void setup();
		void update();
		void draw();
		//void putpixel(const int& x, const int& y, const ofColor& color);
		//void FASTputpixel(const int& x, const int& y, const ofColor& color);

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

private:
	
	//void clear(const ofColor& color);
		
};
