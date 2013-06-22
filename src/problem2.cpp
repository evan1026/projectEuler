#include <iostream>
using namespace std;

int main(){
    int maxNum  = 4000000,
        sum     =       0,
        current =       1,
        last    =       1;

    while (current < maxNum){
        if (current % 2 == 0){
            sum += current;
        }
        current += last;
        last = current - last;
    }

    cout << sum << endl;
    return 0;
}
