#ifndef UCM_UTILS_H
#define UCM_UTILS_H
#include <iostream>

using namespace std;

void alignedHeader(std::string title, char letter){
    string s = "";
if(letter == 'm'){
    s += "=================\n    " + title + "\n=================";
}else if(letter == 'r'){
  s += "=============\n    " + title + "\n=============";  
}else{
  s += "=============\n" + title + "    \n=============";
}

cout << s;
}

#endif