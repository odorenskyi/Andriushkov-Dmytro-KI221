#include <iostream>
#include <cmath>
#include "modulesAndriushkov.h"

using namespace std;

int main()
{
    float input_array[5][3] = {{0, 1.0, 2.0}, {1.0, 1.0, 3.0}, {3.0, 2.0, 1.0}, {0, 1.0, 0}, {6.0, -2.0, 2.0}};
    float output_array[5] = {1.41421, 5.52441 , -0.0114773 , 0, -1.55347};
    int n = sizeof(input_array)/sizeof(input_array[0]);
    for(int i = 0; i < n; i++)
    {
        float s_cal = s_calculation(input_array[i][0], input_array[i][1], input_array[i][2]);
        if(fabs(s_cal - output_array[i]) < 0.0001){
            cout << "Testcase " << i+1 << " PASSED" << endl;
        }
        else{
            cout << "Testcase " << i+1 << " FAILED"<< s_cal << output_array << endl;
        }
    }
    return 0;
}
