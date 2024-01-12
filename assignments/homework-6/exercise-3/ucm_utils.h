#ifndef UCM_UTILS_H
#define UCM_UTILS_H
    #include <iostream>

    using namespace std;

    string funkyString(string str){
        string hold = "";
        bool check = false;
        int cntdwn = 0;
        if(str.length() > 1){
        hold += toupper(str.at(0));
        for(int i = 1; i < str.length()-1; i++){
           if(str.at(i+1) == ' ' || str.at(i+1) == ',' || str.at(i+1) == '.'){
               if(str.at(i) == ' ' || str.at(i) == ',' || str.at(i) == '.'){

               }else{
                   // creates a check and a countdown to allow for future values to be capatilized
                  check = true;
               cntdwn = 2; 
               }
               
           }
           if(check && !(str.at(i) == ' ' || str.at(i) == ',' || str.at(i) == '.') && cntdwn > 0){
               hold += toupper(str.at(i));
               cntdwn--;
           }else{
               hold += tolower(str.at(i));
           }
            
        }
        hold += toupper(str.at(str.length()-1));
       
        }else{
            hold = toupper(str.at(0));
        }
        return hold;
    }
    

#endif