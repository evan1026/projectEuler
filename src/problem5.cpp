#include <iostream>
using namespace std;

void addPrimes(int num);

int numbers[19];

int main(){
    long num = 1;

    for (int i = 2; i <= 20; i++){
        addPrimes(i);
    }
    for (int i = 2; i <= 20; i++){
        for (int j = 0; j < numbers[i - 2]; j++){
            num *= i;
        }
    }

    cout << num << endl;
}

void addPrimes(int num){
    int tempNum = num;
    for (int i = 2; i <= num; i++){
        int occurances = 0;
        while (tempNum % i == 0){
            occurances++;
            tempNum /= i;
        }
        if (occurances > numbers[i - 2]) numbers[i - 2] = occurances;
    }
}
