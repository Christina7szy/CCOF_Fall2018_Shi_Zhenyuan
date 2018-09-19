#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
     ofBackground(255);
     gui.setup();
     gui.add(radius.setup("radius", 200, 0, 300));

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
        float cosOfTime2 = cos(ofGetElapsedTimef())*radius;
        ofSetColor(255, 0, 102);
        ofNoFill();
        ofSetCircleResolution(100);
        ofDrawCircle(ofGetWindowWidth()/2, ofGetWindowHeight()/2, cosOfTime2);
        
        for(float i=1; i<(cosOfTime2 *2);i++){
            float cosOfTime = cos(ofGetElapsedTimef()*i);
            float offset = cosOfTime*cosOfTime2;
            float x = ofGetWindowWidth()/2-cosOfTime2 + i;
            float y = ofGetWindowHeight()/2 + offset;
            if (ofDist(x, y, ofGetWindowWidth()/2, ofGetWindowHeight()/2) < cosOfTime2 ){
                ofSetColor(0,204,255);
                ofDrawCircle(x, y, 1);
            }
        }
}

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
