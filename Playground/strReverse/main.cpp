#include <iostream>
#include <string>

using namespace std;

int main(){

    string line;
    string hold = "";
    getline(cin, line);
    for(int i = line.length()-1; i >= 0; i--){
        hold += line.at(i);
    }
    cout << hold << endl;

    return 0;
}