#include <iostream>

using namespace std;

long divisorSums[10000];

long findDivisorSum(int num);
bool areAmicable(int a, int b);

int main(){

    long sum = 0;
    for (int i = 3; i < 10000; ++i){
        for (int j = 2; j < i; ++j){
            if (areAmicable(i, j)){
                sum += i + j;
            }
        }
    }

    cout << sum << endl;

    return 0;
}

long findDivisorSum(int num){
    if (divisorSums[num] != 0) return divisorSums[num];
    else{
        int sum = 1;
        for (int i = 2; i <= num / 2; ++i){
            if (num % i == 0) {
                sum += i;
            }
        }
        divisorSums[num] = sum;

        return sum;
    }
}

bool areAmicable(int a, int b){
    return (findDivisorSum(a) == b && findDivisorSum(b) == a);
}
