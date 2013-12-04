#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    stream.setDeviceID(0);
    stream.initGrabber(320, 240, GL_RGB);
}

//--------------------------------------------------------------
void testApp::update(){
    stream.update();
    
    if(stream.isFrameNew()){
        
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    stream.draw(000, 100);
    stream.draw(400, 100);
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