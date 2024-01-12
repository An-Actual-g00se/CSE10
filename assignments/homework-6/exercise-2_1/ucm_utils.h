#ifndef UCM_UTILS_H
#define UCM_UTILS_H
    #include <iostream>
    using namespace std;

    void widthControlledHeader(string text, int length){
        string equals = "";
        string ret = "";
        for(int i = 0; i < length; i++){
            equals += "=";
        }
        if(text.length() > length - 4){
            for(int j = 0; j < length - 7; j++){
                ret += text.at(j);
            }
            cout << equals << endl;
            cout << "| " << ret << "... |" << endl;
            cout << equals << endl;
        }else{
            ret += text;
            for(int k = 0; k < length - text.length() - 3; k++){
                ret += " ";
            }
            cout << equals << endl;
            cout << "| " << ret << "|" << endl;
            cout << equals << endl;
        }
    }

#endif