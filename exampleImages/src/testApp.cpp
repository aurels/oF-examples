#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(30, 30, 30);
    image.loadImage("chalet.jpg");
    image.resize(400, 300);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    float x = cos(ofGetElapsedTimef() * 0.2f) * 100;
    float y = cos(ofGetElapsedTimef() * 0.3f) * 100;
    
    ofSetColor(255, 0, 0, 128);
    image.draw(y, x);
    
    ofSetColor(0, 255, 0, 128);
    image.draw(x, y);
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