#ifndef UCM_ARRAYS_H
#define UCM_ARRAYS_H

#include <stdexcept>

int countConsecutiveHotDays(float arr[], int size, float high){
    if(size < 1){
        throw std::logic_error("Array must be of size 1 or larger");
    }else{
        int count = 0;
        int streak = 0, pStreak = 0;
        for(int i = 0; i < size; i++){
            if(arr[i] >= high){
                streak++;
                if(streak > pStreak){
                    pStreak++;
                    count++;
                }
            }else{
                
                streak = 0;
            }
        }
        return count;
    }
}

#endif