#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

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
    
    float angle;
    int i;
    int j;
//    int k;
    int x;
    int times;
    int counter = 1;
    int blue = 0;
    int blueSpeed = 1;
    int red = 255;
    int redSpeed = 1;
    ofPoint pos;
    ofPoint prevPos;
    
    ofxPanel gui;
    ofxIntSlider k;
		
};
