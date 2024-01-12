#ifndef UCM_ARRAYS_H
#define UCM_ARRAYS_H

float average(float nums[], int size){
    float hold = 0.0;
    for(int i = 0; i < size; i++){
        hold += nums[i];
    }
    hold = hold / size;
    return hold;
}

#endif