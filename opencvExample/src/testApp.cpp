#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    colorImg.allocate(320, 240);
    grayImg.allocate(320, 240);
    vidGrabber.initGrabber(320, 240);
    learnBg = false;
    grayBgImg.allocate(320, 240);
    grayDiffImg.allocate(320, 240);
    threshold = 120;
}

//--------------------------------------------------------------
void testApp::update(){
    vidGrabber.update();
    
    if(vidGrabber.isFrameNew()){
        colorImg.setFromPixels(vidGrabber.getPixels(), 320, 240);
        grayImg = colorImg;
        
        if(learnBg){
            grayBgImg = grayImg;
            learnBg = false;
        }
        
        grayDiffImg.absDiff(grayBgImg, grayImg);
        grayDiffImg.threshold(threshold);
        
        contourFinder.findContours(grayDiffImg, 20, 320*240/4, 5, true);
        
        float x, y;
        
        for(int k=0; k<contourFinder.nBlobs; k++){
            x = contourFinder.blobs[k].centroid.x / 320.f;
            y = contourFinder.blobs[k].centroid.y / 240.f;
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255, 255, 255);
    
    colorImg.draw(20, 20, 320, 240);
    grayImg.draw(360, 20, 320, 240);
    grayBgImg.draw(700, 20, 320, 240);
    grayDiffImg.draw(1040, 20, 320, 240);
    
    for(int k=0; k<contourFinder.nBlobs; k++){
        contourFinder.blobs[k].draw(1040, 20);
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    learnBg = true;
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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
