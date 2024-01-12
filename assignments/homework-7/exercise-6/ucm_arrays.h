#ifndef UCM_ARRAYS_H
#define UCM_ARRAYS_H

#include <stdexcept>

void convertToCelsius(float arr[], int size){
    if(size < 1){
        throw std::logic_error("Array must be of size 1 or larger");
    }else{
        for(int i = 0; i < size; i++){
            float convert = arr[i];
            convert = (convert-32.0)*(5.0/9.0);
            arr[i] = convert;
        }
    }
}


#endif