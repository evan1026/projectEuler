#include <iostream>
#include <cmath>
using namespace std;

int main(){
    for (int a = 1; a < 1000; ++a){
        for (int b = a; b < 1000; ++b){
            double c = sqrt((a * a) + (b * b));
            if (a + b + c == 1000) {
                cout << (a * b * c) << endl;
                return 0;
            }
        }
    }
}
