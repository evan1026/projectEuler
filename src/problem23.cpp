#include <iostream>

using namespace std;

#define UNASSIGNED   0
#define ABUNDANT     1
#define NOT_ABUNDANT 2

int abundant[28123];

bool isAbundant(int num);
bool canSum(int num);

int main(){

    int sum = 0;
    for (int i = 1; i <= 28123; ++i){
        if (!canSum(i)) sum += i;
    }

    cout << sum << endl;

    return 0;
}

bool canSum(int num){
    for (int i = 1; i < num; ++i){
        if (isAbundant(i) && isAbundant(num - i)){
            return true;
        }
    }
    return false;
}

bool isAbundant(int num){
    if (abundant[num] != UNASSIGNED) return abundant[num] == ABUNDANT;

    int sum = 1;
    for (int i = 2; i <= num / 2; ++i){
        if (num % i == 0){
            sum += i;
        }
    }

    if (sum > num){
        abundant[num] = ABUNDANT;
        return true;
    }

    abundant[num] = NOT_ABUNDANT;
    return false;

}
