#include "flock.h"

void Flock::initPosition(int x, int y) {
    mPosition.x = x;
    mPosition.y = y;
    mMoveAngle  = ofRandom(0.0, 2*PI);
}

void Flock::updatePosition(int stepRange) {
    // mPosition.x += ofRandom(-stepRange, stepRange);
    // mPosition.y += ofRandom(-stepRange, stepRange);

    // mPosition.x += getGaussian((double)stepRange, 0.5);
    // mPosition.y += getGaussian((double)stepRange, 0.5);
    
    double radius = ofRandom(1, stepRange);
    double angle  = getGaussian(mMoveAngle, 0.7);
    
    int xInc = (int)(radius * cos(angle));
    int yInc = (int)(radius * sin(angle));
    
    mPosition.x += xInc;
    mPosition.y += yInc;
}

void Flock::draw(void){
    ofSetColor(255, 30, 30);
    ofCircle(mPosition, 2);
}

double Flock::getGaussian(double mean, double variance) {
    double n   = 10000;
    double gau = 0.0;
    
    for(int k=0; k<n; k++) {
        double uni = ofRandom(0.0, 1.0);
        gau += uni;
    }
    
    gau -= (double)n / 2.0;
    gau *= sqrt(12.0 / (double)n);
    
    return mean + sqrt(variance) * gau;
}