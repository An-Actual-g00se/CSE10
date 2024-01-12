#ifndef UCM_UTILS_H
#define UCM_UTILS_H
    #include <iostream>

    using namespace std;

    bool wordExists(string text, string targ){
        bool ret = false;
        for(int j = 0; j < targ.length(); j++){
            targ.at(j) = tolower(targ.at(j)); 
        }
        for(int k = 0; k < text.length(); k++){
            text.at(k) = tolower(text.at(k));
        }
        if(text.length() > 1){
        string temp = "";
        
        for(int i = 0; i < text.length(); i++){
            if(text.at(i) == ' ' || text.at(i) == ',' || text.at(i) == '.'|| i == text.length()-1){
                if(temp == targ){
                    
                    ret = true;
                    break;
                }else{
                    temp = "";
                }
            }else{
                temp += text.at(i);
            }

        }
        }

        if(text == targ){
            ret = true;
        }

        return ret;
    }

#endif