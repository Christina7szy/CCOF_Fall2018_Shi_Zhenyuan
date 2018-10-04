//
//  Circle.cpp
//  4_ClassTest
//
//  Created by Christina7szy on 10/3/18.
//

#include "Circle.hpp"

Circle::Circle(){
    
}

void Circle::setup(){
    radius = 10;
   // ofSetBackgroundAuto(false);
    center.x = 0;
    center.y = 0;

}

void Circle::update(){
  //  float t = ofGetElapsedTimef(); //in seconds
  //  float noiseOutput = ofNoise(t);
    
  //  radius = ofMap(t, 1, 100, 1, 360);

    object.x = center.x + radius * cos(angle);
    object.y = center.y + radius * sin(angle);
    angle += ofDegToRad(1);
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
}

void Circle::draw(){
    ofFill();
    ofSetColor(red,0,blue);
    ofDrawEllipse(object,300,150);
//    ofNoFill();
//    ofSetColor(0);
//    ofDrawEllipse(object,300,150);
    
}
