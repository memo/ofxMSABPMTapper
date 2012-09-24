#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
}

//--------------------------------------------------------------
void testApp::update(){
    bpmTapper.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(0);
    ofDrawBitmapString("Hit any key to tap BPM", 50, 20);
    ofDrawBitmapString("BPM: " + ofToString(bpmTapper.bpm()), 50, 100);
    bpmTapper.draw(50, 200, 10);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    bpmTapper.tap();
}
