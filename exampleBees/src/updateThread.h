# pragma once

#include "ofMain.h"
#include "flock.h"

class UpdateThread : public ofThread {
  
public:
    
    void setFlocks(vector<Flock> *);
    
protected:
    
    void threadedFunction(void);
    vector<Flock> * flocks;
    
};