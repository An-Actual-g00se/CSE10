#include <iostream>
using namespace std;

int main() {
    
    string pass;
    getline(cin, pass);
    string hold = "";
    for(int i = 0; i < pass.length(); i++){
        if(pass.at(i) == 'a'){
            hold += "@";
        }else if(pass.at(i) == 'c'){
            hold += "(";
        }else if(pass.at(i) == 'g'){
            hold += "9";
        }else if(pass.at(i) == 'o'){
            hold += "0";
        }else if(pass.at(i) == 's'){
            hold += "$";
        }else{
            hold += pass.at(i);
        }
    }
    cout << hold << endl;


    return 0;
}