#include <iostream>
using namespace std;

int main() {

    float golfer;
    float sum;

    for(int i = 0; i < 8; i++){
        cin >> golfer;
        //cout << sum << endl;
        sum +=golfer;
    }    
    float index;
    index = sum / 8;

    cout << index << endl;
    
    return 0;
}