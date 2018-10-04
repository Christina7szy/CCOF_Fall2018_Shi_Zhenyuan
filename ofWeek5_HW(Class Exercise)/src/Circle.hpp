//
//  Circle.hpp
//  4_ClassTest
//
//  Created by Christina7szy on 10/3/18.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h"

#include <stdio.h>

class Circle{
public:
    
    void setup();
    void update();
    void draw();
    
    ofPoint center;
    ofPoint object;
    ofPoint vel;
    ofColor color;
    float radius;
    float angle;
    float bornTime;
    float red;
    float blue;
    float blueSpeed = 1;
    float redSpeed = 1;
    
    Circle();
    
};

#endif /* Circle_hpp */
