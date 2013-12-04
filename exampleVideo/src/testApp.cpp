#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    video.loadMovie("fingers.mov");
}

//--------------------------------------------------------------
void testApp::update(){
    video.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    video.draw(100, 100);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if(key == 'p'){
        video.play();
    }
    
    if(key == 'n'){
        video.nextFrame();
    }
    
    if(key == 'b'){
        video.previousFrame();
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