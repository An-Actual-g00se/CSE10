#ifndef UCM_ARRAYS_H
#define UCM_ARRAYS_H

#include <stdexcept>

int countHotDays(float arr[], int size, float hot){
    if(size < 1){
        throw std::logic_error("Array must be of size 1 or larger");
    }else{
        int count = 0;
        for(int i = 0; i < size; i++){
            if(arr[i] >= hot){
                count++;
            }
        }
        return count;
    }

}

#endif