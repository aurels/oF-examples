#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofEnableAntiAliasing();
    ofEnableAlphaBlending();
    ofBackground(255, 255, 255);
    flocks.resize(1000);
    
    for(int i=0; i<flocks.size(); i ++){
        flocks[i].initPosition(ofGetWidth() / 2, ofGetHeight() / 2);
    }
}

//--------------------------------------------------------------
void testApp::update(){
    for(int i=0; i<flocks.size(); i ++){
        flocks[i].updatePosition(5);
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    for(int i=0; i<flocks.size(); i ++){
        flocks[i].draw();
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}