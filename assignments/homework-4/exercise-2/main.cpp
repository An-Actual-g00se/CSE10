#include <iostream>
using namespace std;

int main() {

int val, even = 0, odd = 0;


for(int i = 0; i < 10; i++){
    cin >> val;
    if(val % 2 == 0){
        even += 1;
    }else{
        odd+=1;
    }
}
if(even == 0){
    cout << "There were no even numbers"<< endl;
}else{
    cout << "There were " << even << " even numbers" << endl;
}
if(odd == 0){
    cout << "There were no odd numbers"<< endl;
}else{
    cout << "There were " << odd << " odd numbers" << endl;
}

    return 0;
}