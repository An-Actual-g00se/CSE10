#include <iostream>
#include <string>
#include <ucm_random>

using namespace std;

string removeSingleDigit(int digit, int number){
    string hold = "";
    string leng = to_string(number);
    string dig = to_string(digit);
    for(int i = 0; i < leng.length(); i++){
        //cout << i << endl;
        if(leng.at(i) == dig.at(0)){
            
        }else{
            hold += leng.at(i);
        }
    }
    return hold;
}

int doubleOrNothing(int value, int attempts){
    //attempts must be a value greater than 0
    RNG gamble;
    int i = 0;
    bool flag = true;
    while(i < attempts){
        int j = gamble.get(1, 100);
        if(j < 30){
            value = 0;
            flag = false;
            break;
        }
        i++;
    }
    if(flag){
        value = value * 2;
    }
    return value;
}

void explode(){
    for(int i = 3; i > 0; i--){
        cout << i << "..." << endl;
    }
    cout << "KABOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOM!!!!!!!!!!!!!!!!!!!!!!!!!!!!1" << endl;
}

void turtle(int horz, int vert, int moves){
    string grid[horz][vert];
    for(int i = 0; i < horz; i++){
        for(int j = 0; j < vert; j++){
            grid[i][j] = ".";
        }
    }
    int midh, midv;
    midh = horz/2;
    midv = vert/2;
}

int main(){
    

    return 0;
}