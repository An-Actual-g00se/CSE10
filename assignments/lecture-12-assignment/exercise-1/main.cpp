#include <iostream>
using namespace std;

int main() {
	
	float price;

    bool member;

    cin >> price;
    cin >> member;

    if(price >= 1000){
        cout << "Free shipping" << endl;
    }else{
        if(member){
            cout << "Discounted shipping" << endl;
        }else{
            cout << "Full price shipping" << endl;
        }
    }

    return 0;
}