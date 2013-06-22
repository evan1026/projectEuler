#include <iostream>
#include <sstream>
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
    
    stringstream a;
    a << num;
    string testString = a.str();
    
    string reverse = "";
    for (int i = 0; i < testString.length(); i++){
        reverse += testString[testString.length() - i - 1];
    }

    return reverse == testString;
}
