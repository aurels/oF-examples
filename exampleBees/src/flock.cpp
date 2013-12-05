#include "flock.h"

void Flock::initPosition(int x, int y) {
    mPosition.x = x;
    mPosition.y = y;
    mMoveAngle  = ofRandom(0.0, 2*PI);
    mFoundExit  = false;
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
    
    if((mPosition.y < mYMin && mPosition.x > mOMin && mPosition.x < mOMax) || mFoundExit) {
        mFoundExit = true;
    } else {
        if(mPosition.x < mXMin) mPosition.x = mXMin;
        if(mPosition.x > mXMax) mPosition.x = mXMax;
        if(mPosition.y < mYMin) mPosition.y = mYMin;
        if(mPosition.y > mYMax) mPosition.y = mYMax;
    }
}

void Flock::setBoundingBox(int xMin, int xMax, int yMin, int yMax) {
    mXMin = xMin;
    mXMax = xMax;
    mYMin = yMin;
    mYMax = yMax;
}

void Flock::setBoxExit(int oMin, int oMax) {
    mOMin = oMin;
    mOMax = oMax;
}

void Flock::draw(void){
    ofSetColor(255, 30, 30);
    ofCircle(mPosition, 1);
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