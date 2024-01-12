#include <iostream>
using namespace std;

int main() {
    int total, count, in;
    while(cin >> in){
        total+=in;
        count++;
    }
    cout<< (float)total/(float)count <<endl;

    return 0;
}