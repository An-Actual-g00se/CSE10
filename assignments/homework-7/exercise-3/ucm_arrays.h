#ifndef UCM_ARRAYS_H
#define UCM_ARRAYS_H

#include <stdexcept>

float getMaxChange(float arr[], int size){
    if(size < 2){
        throw std::logic_error("Array must be of size 2 or larger");
    }else{
        float mChange = 0.0;
        float prev = arr[0];
        for(int i = 1; i < size; i++){
            float curr = arr[i];
            float cChange = 0.0;
            if(curr > prev){
                cChange = curr - prev;
            }else if(prev > curr){
                cChange = prev - curr;
            }
            if(cChange > mChange){
                mChange = cChange;
            }
            prev = arr[i];
        }
        return mChange;
    }
}

#endif