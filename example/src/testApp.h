#pragma once

#include "ofMain.h"
#include "MSABPMTapper.h"

class testApp : public ofBaseApp {
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    
    msa::BPMTapper  bpmTapper;
    
};
