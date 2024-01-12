#include <igloo/igloo.h>
#include "ucm_arrays.h"

using namespace igloo;


Context(TextProgram){
    Spec(Size_0_Min){
        const int size = 0;
        float weather[size];
        AssertThrows(std::logic_error, getColdestTemperature(weather, size));
    }
    Spec(Size_0_Max){
        const int size = 0;
        float weather[size];
        AssertThrows(std::logic_error, getHottestTemperature(weather, size));
    }
    Spec(Size_1_Min){
        const int size = 1;
        float weather[size] = {100.5};
        Assert::That(getColdestTemperature(weather, size), EqualsWithDelta(100.5, 0.001));
    }
    Spec(Size_1_Max){
        const int size = 1;
        float weather[size] = {100.5};
        Assert::That(getHottestTemperature(weather, size), EqualsWithDelta(100.5, 0.001));
    }
    Spec(Size_7_Min){
        const int size = 7;
        float weather[size] = {90.3, 96.5, 106.6, 108.3, 104.4, 98.9, 103.0};
        Assert::That(getColdestTemperature(weather, size), EqualsWithDelta(90.3, 0.001));
    }
    Spec(Size_7_Max){
        const int size = 7;
        float weather[size] = {90.3, 96.5, 106.6, 108.3, 104.4, 98.9, 103.0};
        Assert::That(getHottestTemperature(weather, size), EqualsWithDelta(108.3, 0.001));
    }
    Spec(Size_14_Min){
        const int size = 14;
        float weather[size] = {102.9, 95.9, 91.1, 95.9, 95.9, 101.4, 107.4, 106.9, 101.6, 99.8, 97.0, 90.2, 109.3, 95.9};
        Assert::That(getColdestTemperature(weather, size), EqualsWithDelta(90.2, 0.001));
    }
    Spec(Size_14_Max){
        const int size = 14;
        float weather[size] = {102.9, 95.9, 91.1, 95.9, 95.9, 101.4, 107.4, 106.9, 101.6, 99.8, 97.0, 90.2, 109.3, 95.9};
        Assert::That(getHottestTemperature(weather, size), EqualsWithDelta(109.3, 0.001));
    }
    Spec(Size_31_Min){
        const int size = 31;
        float weather[size] = {101.0, 99.5, 92.4, 96.1, 103.3, 105.5, 106.5, 109.1, 102.1, 94.0, 109.8, 98.3, 100.9, 98.3, 94.9, 102.1, 94.7, 102.8, 103.2, 108.9, 97.3, 104.4, 107.6, 104.4, 105.9, 107.4, 106.8, 100.3, 107.8, 101.9, 106.0};
        Assert::That(getColdestTemperature(weather, size), EqualsWithDelta(92.4, 0.001));
    }
    Spec(Size_31_Max){
        const int size = 31;
        float weather[size] = {101.0, 99.5, 92.4, 96.1, 103.3, 105.5, 106.5, 109.1, 102.1, 94.0, 109.8, 98.3, 100.9, 98.3, 94.9, 102.1, 94.7, 102.8, 103.2, 108.9, 97.3, 104.4, 107.6, 104.4, 105.9, 107.4, 106.8, 100.3, 107.8, 101.9, 106.0};
        Assert::That(getHottestTemperature(weather, size), EqualsWithDelta(109.8, 0.001));
    }
};

int main(int argc, const char* argv[]){
    TestRunner::RunAllTests(argc, argv);
}

