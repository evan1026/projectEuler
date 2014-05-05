#include <iostream>
using namespace std;

int main(){

    int maxNum = 1000,
        sum    =    0;

    for (int i = 0; i < maxNum; ++i){
        if ((i % 3 == 0) || (i % 5 == 0)){
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}
