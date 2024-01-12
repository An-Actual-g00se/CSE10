#ifndef UCM_ARRAYS_H
#define UCM_ARRAYS_H

#include <stdexcept>
float getColdestTemperature(float arr[], int size){
    if(size < 1){
        throw std::logic_error("Array must be of size 1 or larger");
        return 1;
    }else{
    float ret = arr[0];
    int low = 0;
    for(int i = 1; i < size; i++){
        float curr = arr[i];
        if(curr < ret){
            ret = curr;
            low = i;
        }
    }
    return ret;
    }
}

float getHottestTemperature(float arr[], int size){
    if(size < 1){
        throw std::logic_error("Array must be of size 1 or larger");
    }else{
    float hot = arr[0];
    for(int i = 1; i < size; i++){
        float curr = arr[i];
        if(curr > hot){
            hot = curr;
        }
    }
    return hot;
    }
}

#endif