#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        int maxWidth, maxHeight;


        int step, stepOff;
		int circleX[50], circleY[50], circleWidth[50], circleColor[50];
		int circleXspeed, circleYspeed, circleWidthspeed, circleColorspeed, stepOffspeed;

};
