#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(30);
    ofEnableAntiAliasing();
    ofEnableAlphaBlending();
    ofBackground(255, 255, 255);
    
    flocks = new vector<Flock>;
    updateThread.setFlocks(flocks);
    
    flocks->resize(200);
    
    for(int i=0; i<flocks->size(); i ++){
        (*flocks)[i].initPosition(ofGetWidth() / 2, ofGetHeight() / 2);
        (*flocks)[i].setBoundingBox(
          ofGetWidth()  / 2 - 200, ofGetWidth()  / 2 + 200,
          ofGetHeight() / 2 - 200, ofGetHeight() / 2 + 200
        );
        (*flocks)[i].setBoxExit(ofGetWidth() / 2 - 20, ofGetWidth() / 2 + 20);
    }
}

//--------------------------------------------------------------
void testApp::exit(void){
    delete flocks;
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(0, 0, 0);
    ofRect(ofGetWidth() / 2 - 200, ofGetHeight() / 2 - 200, 400, 400);
    
    for(int i=0; i<flocks->size(); i ++){
        (*flocks)[i].draw();
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if(key == 'p'){
        sleep(5);
    }
    
    if(key == 't'){
        updateThread.startThread();
    }
    
    if(key == 'y'){
        updateThread.stopThread();
    }
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