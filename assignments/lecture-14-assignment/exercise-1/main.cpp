#include <iostream>
using namespace std;

int main() {

    int a =-1;
    int low =-1;

    for(int i = 0; i < 5; i++){
        cin >> a;
        if(i == 0){
            low = a;
        }else{
            if(a < low){
                low = a;
            }
        }
    }
    cout << "The min is: " << low << endl;

    return 0;
}