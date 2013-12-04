#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(40, 100, 40);
	sender.setup(HOST, PORT);
}

//--------------------------------------------------------------
void testApp::update(){
    float mouseX = (float)ofGetMouseX();
    float mouseY = (float)ofGetMouseY();
    
    ofxOscMessage message;
    
    message.setAddress("/fromof");
    message.addFloatArg(mouseX);
    message.addFloatArg(mouseY);
    
    sender.sendMessage(message);
}

//--------------------------------------------------------------
void testApp::draw(){

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

