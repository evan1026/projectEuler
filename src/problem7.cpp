#include <iostream>
using namespace std;

bool isPrime(int num);

int main(){
    int prime     = 0,
        numPrimes = 0;

    for (int i = 2; numPrimes <= 10001; ++i){
        if (isPrime(i)){
            prime = i;
            ++numPrimes;
        }
    }

    cout << prime << endl;
}

bool isPrime(int num){
    for (int i = 2; i < num / 2; ++i){
        if (num % i == 0) return false;
    }
    return true;
}
