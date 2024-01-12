#include <iostream>
#include <ucm_random>
#include <string>
#include <vector>

using namespace std;

int main(){

    RNG gen;

    string str, hold = "";

    vector<string> array;

    getline(cin, str);

    for(int i = 0; i < str.length(); i++){
       string temp = "";
       temp += str.at(i);
       array.push_back(temp);
    }

    while(!(array.empty())){
        int grab = gen.get(0, (array.size()-1));
        hold += array.at(grab);
        array.erase(array.begin()+grab);
        
        
    }
    cout << "hold: " << hold << endl;

    return 0;
}