#include "PutPixel.h"
PutPixel::PutPixel() {
	_img.allocate(1024, 768, ofImageType::OF_IMAGE_COLOR_ALPHA);
	//clear(ofColor::black);
}
void PutPixel::draw()
{
	for (int x = 0; x < 1024; ++x) {
		putpixel(x, 384, ofColor::green);
	}
}

void PutPixel::putpixel(const int & x, const int & y, const ofColor & color)
{
	_img.setColor(x, y, color);

	_img.update();
	_img.draw(ofPoint(0, 0, 0));
}

void PutPixel::FASTputpixel(const int & x, const int & y, const ofColor & color)
{
	_img.setColor(x, y, color);
}

void PutPixel::clear(const ofColor & color)
{
	for (int y = 0; y < 768; ++y) {
		for (int x = 0; x < 1024; ++x) {
			FASTputpixel(x, y, color);
		}
	}
	_img.update();
	_img.draw(ofPoint(0, 0, 0));
}

void PutPixel::midPoint(float x0, float y0, float x1, float y1, const ofColor & color)
{
	/*x = xc;
	y = yc;
	x1 = (ofGetWidth() / 2) + 100;
	y1 = ofGetHeight() / 2;*/

	//ofDrawLine(x, y, x1, y1);
	/*putpixel(y + centerY, -x + centerX, ofColor::green);
	ofCircle(y + centerY, -x + centerX, 1);*/

	//Dibujar línea.
	int dy = y1 - y0;
	int dx = x1 - x0;
	int NE = dy;
	int E = (dy - dx);
	int d = 0;
	//int E = (2 * dy) - (2 * dx);
	//int NE = 2 * dy;
	//int d = (2 * dy) - dx;
	int x = x0, y = y0;
	/*putpixel(x0, y0, ofColor::green);
	while (x <= x1) {
		x = ++x;
		if (d <= 0) {
			d = d + E;
		}
		else {
			d = d + NE;
			y = y + 1;
		}
		putpixel(x, y, ofColor::green);

	}*/

	//Dibujar Circulo


	//Cuadrante uno
	if (y1 <y0 && x1 >= x0) {

		// octante 2
		if (dx*-1 > dy) {

			for (int y = y0; y >= y1; y--) {
				putpixel(x, y, ofColor::green);
				if (d > 0) {
					d = d + dx - dy*-1;
					x++;
				}
				else d = d + dx;
			}
		}
		// octante 1
		else if (dx*-1 <= dy) {
			for (int x = x0; x <= x1; x++) {
				putpixel(x, y, ofColor::green);
				if (d > 0) {
					d = d - dy - dx;
					y--;
				}
				else d = d - dy;
			}
		}
	}

	//cuadrante 2
	else if (y1 < y0 && x1 <= x0) {

		// octante 4
		if (dx < dy) {

			for (int x = x0; x >= x1; x--) {
				putpixel(x, y, ofColor::green);
				if (d < 0) {
					d = d + dy - dx;
					y--;
				}
				else d = d + NE;
			}
		}
		// octante 3
		else if (dx >= dy) {
			for (int y = y0; y >= y1; y--) {
				putpixel(x, y, ofColor::green);
				if (d < 0) {
					d = d + dx - dy;
					x--;
				}
				else d = d + dx;
			}
		}
	}
		
	//cuadrante 3
	else if (y1 >= y0 && x1 < x0) {

		// octante 6
		if (dx > dy*-1) {

			for (int y = y0; y <= y1; y++) {
				putpixel(x, y, ofColor::green);
				if (d < 0) {
					d = d + dx - dy*-1;
					x--;
				}
				else d = d + dx;
			}
		}
		// octante 5
		else if (dx <= dy*-1) {
			for (int x = x0; x >= x1; x--) {
				putpixel(x, y, ofColor::green);
				if (d < 0) {
					d = d - dx - dy;
					y++;
				}
				else d = d - dy;
			}
		}
	}
	//Cuadrante cuatro.
	else if (dx > dy) {

		for (int x = x0; x <= x1; x++) {
			putpixel(x, y, ofColor::green);
			if (d > 0) {
				d = d + E;
				y++;
			}
			else d = d + NE;
		}
	}


	// octante 7
	else if (dx <= dy) {
		for (int y = y0; y <= y1; y++) {
			putpixel(x, y, ofColor::green);
			if (d > 0) {
				d = d + dx - dy;
				x++;
			}
			else d = d + dx;
		}
	}

	/*for (int ang = 0; ang < 360; ++ang) {
		putpixel(x1, y1, ofColor::green);
		x1 = 100 * cos(ang * x0 / 180.0);
		y1 = 100 * sin(ang * y0 / 180.0);
	}*/
}

void PutPixel::angles()
{
	int x0 = 0;
	int y0 = 0;

	for (int ang = 0; ang < 360; ++ang) {
		int x1 = 100 * cos(ang * PI / 180.0);
		int y1 = 100 * sin(ang * PI / 180.0);

		midPoint(x0 + xc, y0 + yc, x1 + xc, y1 + yc, ofColor::green);
	}

}
