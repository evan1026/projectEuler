#include <iostream>
using namespace std;

bool testPalindrome(long num);

int main(){

    long num = 0;

    for (int i = 100; i < 999; i++){
        for (int j = 100; j < 999; j++){
            long testNum = i * j;

            if (testPalindrome(testNum) && testNum > num) {
                num = testNum;
            }
        }
    } 
    
    cout << num << endl;
    return 0;
}

bool testPalindrome(long num){
    long test  = 0,
         test1 = num;
    while (num){
        test += (num % 10);
        test *= 10;
        num /= 10;
    }
    test /= 10;
    return test == test1;
}
