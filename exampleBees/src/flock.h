#pragma once

#include "ofMain.h"

class Flock {

  public:
    
    void initPosition(int x, int y);
    void updatePosition(int stepRange);
    void draw(void);
    void setBoundingBox(int xMin, int xMax, int yMin, int yMax);
    void setBoxExit(int oMin, int oMax);
    
  protected:
    
    ofPoint mPosition;
    double mMoveAngle;
    
    double getGaussian(double mean, double variance);

    int mXMin, mXMax;
    int mYMin, mYMax;
    
    int mOMin, mOMax;
    
    bool mFoundExit;
};

