#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, address1, address2;

    getline(cin, name);
    getline(cin, address1);
    getline(cin, address2);

    float length, width, height;

    cin >> length;
    cin >> width;
    cin >> height;
    cin.ignore();

    string matter;
    getline(cin, matter);

    bool delivery;
    cin >> delivery;
    string YoN;
    if(delivery){
        YoN = "Yes";
    }else{
        YoN = "No";
    }

    float matterVal = 0;
    if(matter == "Metal"){
        matterVal = 2.0;
    } 
    if(matter == "Wood"){
        matterVal = 1.5;
    }

    float wh, lh, roof;

    lh = 2 * length * height * matterVal;
    wh = 2 * width * height * matterVal;

    roof = 3.0 * length * width;

    float walls;
    walls = lh + wh;

    float build;
    build = roof + walls;

    float deliver;
    if((delivery && build >= 1500) || !delivery){
        deliver = 0;
    }else{
        deliver = 100;
    }

    float sum;
    sum = deliver + build;

    cout << "-------------------------" << endl;
    cout << "          QUOTE          " << endl;
    cout << "-------------------------" << endl;
    cout << name << endl;
    cout << address1 << endl;
    cout << address2 << endl;
    cout << endl;
    cout << "DESCRIPTION SUMMARY" << endl;
    cout << "Dimensions: " << length << " x " << width << " x " << height << endl;
    cout << "Material: " << matter << endl;
    cout << "Delivery: " << YoN << endl;
    cout << endl;
    cout << "PRICE SUMMARY" << endl;
    cout << "Walls:    $" << walls << endl;
    cout << "Roof:     $" << roof << endl;
    cout << "Delivery: $" << deliver << endl;
    cout << "Total:    $" << sum;


    return 0;
}