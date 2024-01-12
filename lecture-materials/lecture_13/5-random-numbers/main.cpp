#include <iostream>
#include <ucm_random>

using namespace std;

int main() {

    // Your code here

    RNG generator;

    for (int i = 0; i < 5; i++){
        int x = generator.get(100, 1000);
        cout << x << endl;
    }

    



	return 0;
}