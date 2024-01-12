#ifndef UCM_UTILS_H
#define UCM_UTILS_H
    #include <iostream>
#include <type_traits>
    using namespace std;

    void alignedHeader(string text, char letter){
        string equals = "";
        for(int i = 0; i < text.length(); i++){
            equals += "=";
        }
        if(letter == 'm'){
            equals += "========";
        }else{
            equals+= "====";
        }
        if(letter == 'm'){
            cout << equals << endl;
            cout << "    " << text << "    " << endl;
            cout << equals << endl;
        }else if(letter == 'r'){
            cout << equals << endl;
            cout << "    " << text << endl;
            cout << equals << endl;
        }else{
            cout << equals << endl;
            cout << text << "    " << endl;
            cout << equals << endl;
        }
    }



#endif