#include <iostream>
using namespace std;

bool isPrime(long num);

int main(){
    long maxFactor =            0,
         maxNum    = 600851475143;

    for (long i = 1; i < maxNum; ++i){
        if (maxNum % i == 0){
            if (isPrime(maxNum / i)){
                maxFactor = maxNum / i;
                break;
            }
        }
    }

    cout << maxFactor << endl;
    return 0;
}

bool isPrime(long num){
    for (long i = 2; i < num / 2; ++i){
        if (num % i == 0) return false;
    }
    return true;
}
