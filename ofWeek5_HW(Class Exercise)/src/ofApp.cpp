#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for (int i=0; i < 50; i++){
        groupofCircles[i].setup();
        groupofCircles[i].angle = i*5;
        groupofCircles[i].red = 0 + i*5;
        groupofCircles[i].blue = 255 - i*5;
    }
    ofBackground(255);
    ofEnableSmoothing();
    ofSetCircleResolution(50);
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i<50; i++){
        groupofCircles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i=0; i<50; i++){
        ofPushMatrix();
        ofTranslate(ofGetWindowWidth()/2,ofGetWindowHeight()/2-250 + i*10);
        groupofCircles[i].draw();
        ofPopMatrix();
    }
    
}

//--------------------------------------------------------------

