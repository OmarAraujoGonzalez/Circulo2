#include "ofApp.h"
#include "PutPixel.h"

//--------------------------------------------------------------
void ofApp::setup() {


}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	//pixel.draw();
	//pixel.midPoint(xc, yc, x1, y1, ofColor::green);
	pixel.angles();
	//pixel.drawCircle(x0 + xc, y0 + yc, x1 + xc, y1 + yc, ofColor::green);
	/*for (int x = 0; x < 1024; ++x) {
		pixel.putpixel(x, 384, ofColor::green);
	}*/
}

/*void ofApp::putpixel(const int & x, const int & y, const ofColor & color)
{
	//pixel.putpixel(x, y, color);
	/*_img.setColor(x, y, color);

	_img.update();
	_img.draw(ofPoint(0,0,0));
}

/*void ofApp::FASTputpixel(const int & x, const int & y, const ofColor & color)
{
	_img.setColor(x, y, color);
}

void ofApp::clear(const ofColor & color)
{ 
	for (int y = 0; y < 768; ++y) {
		for (int x = 0; x < 1024; ++x) {
		}
	}
	_img.update();
	_img.draw(ofPoint(0, 0, 0));
}*/

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
