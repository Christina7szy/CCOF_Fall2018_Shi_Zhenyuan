#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(k.setup("Radius", 90, 1, 90));
    ofSetBackgroundAuto(false);
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
   // k = 45;
    times = 180/k;
    for (x = 1; x< times; x++){
        
        ofPushMatrix();
        ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
        ofRotateDeg(k*counter*x);
        counter = counter * (-1);
        for (i = 200;i<400; i=i+100){
            pos.x = 0;
            pos.y = 0;
            for (j = 1; j<i/10; j++){
                
                angle = ofGetElapsedTimef();
                
                //  ofVec2f center = ofGetWindowSize()/2;
                
                float lissajousSin = sin(angle * 10.0);
                float lissajousCos = cos(angle * 5);
                
                prevPos = pos;
                
                pos.x = lissajousCos * i;
                pos.y = lissajousSin * i;
                if (blue <= 0) {
                    blueSpeed = -1;
                }
                if (blue >=255){
                    blueSpeed = 1;
                }
                if (red <= 0) {
                    redSpeed = -2;
                }
                if (red >=255){
                    redSpeed = 2;
                }
                
                blue -= blueSpeed;
                red -= redSpeed;
                ofSetColor(red, 100, blue, 30);
                ofDrawLine(prevPos, pos);
                
            }
            
            
        }
        ofPopMatrix();

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
