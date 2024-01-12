#ifndef UCM_ARRAYS_H
#define UCM_ARRAYS_H

int coldestMonthIndex(float w[], int size){
   int ret = 0;
   float low = w[0];
   for(int i = 1; i < size; i++){
       float curr = w[i];
       if(curr < low){
           ret = i;
           low = curr;
       }
   }
   return ret;
}

int hottestMonthIndex(float w[], int size){
    int ret = 0;
    float high = w[0];
    for(int i = 1; i < size; i++){
        float curr = w[i];
        if(curr > high){
            ret = i;
            high = curr;
        }
    }
    return ret;
}

#endif