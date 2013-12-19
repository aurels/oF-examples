#include "updateThread.h"

void UpdateThread::threadedFunction(void) {
    while(isThreadRunning()) {
        for(int i=0; i<flocks->size(); i ++){
            (*flocks)[i].updatePosition(5);
        }
    }
}

void UpdateThread::setFlocks(vector<Flock> * someFlocks) {
    flocks = someFlocks;
}