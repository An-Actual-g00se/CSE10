#ifndef UCM_ARRAYS_H
#define UCM_ARRAYS_H

#include <stdexcept>

float getMaxDecrease(float arr[], int size){
    if(size < 2){
        throw std::logic_error("Array must be of size 2 or larger");
    }else{
        float prev = arr[0];
        float maxDrop = 0.0; 
        for(int i = 1; i < size; i++){
            float curr = arr[i];
            float cDrop = 0.0;
            if(curr < prev){
                cDrop = prev - curr;
                if(cDrop > maxDrop){
                maxDrop = prev - curr;
                }
            }
            prev = arr[i];
        }
        return maxDrop;
    }
}

float getMaxIncrease(float arr[], int size){
    if(size < 2){
        throw std::logic_error("Array must be of size 2 or larger");
    }else{
        float prev = arr[0];
        float maxInc = 0.0;
        for(int i = 1; i < size; i++){
            float curr = arr[i];
            float cInc = 0.0;
            if(curr > prev){
                cInc = curr - prev;
                if(cInc > maxInc){
                    maxInc = cInc;
                }
            }
            prev  = arr[i];
        }
        return maxInc;
    }
}

#endif