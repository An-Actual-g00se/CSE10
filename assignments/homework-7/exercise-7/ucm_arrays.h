#ifndef UCM_ARRAYS_H
#define UCM_ARRAYS_H

#include <stdexcept>

float largestDailyRange(float min[], float max[], int size){
    if(size < 1){
        throw std::logic_error("Array must be of size 1 or larger");
    }else{
        float ret = max[0]-min[0];
        for(int i = 1; i < size; i++){
            float curr = max[i] - min[i];
            if(curr > ret){
                ret = max[i] - min[i];
            }
        }
        return ret;
    }
}

#endif