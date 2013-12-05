#pragma once

#include "ofMain.h"

class Flock {

  public:
    
    void initPosition(int x, int y);
    void updatePosition(int stepRange);
    void draw(void);
    
  protected:
    
    ofPoint mPosition;
    double mMoveAngle;
    
    double getGaussian(double mean, double variance);

};

