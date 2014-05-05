#include <iostream>

using namespace std;

string intToString(int num);
int numberLength(int num);

int until20[] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3,
                 6, 6, 8, 8, 7, 7, 9, 8, 8};
int tensAfter20[] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6}; //0 = empty strings for easy lookups

int main(){

    int total = 0;
    for (int i = 1; i <= 1000; +i){
        total +=  numberLength(i);
    }
    cout << total << endl;
    return 0;
}

int numberLength(int num){
    int output = 0;
    while (num > 0){
        int lastHundred = num % 1000;
        if (lastHundred % 100 < 20){
            output += until20[lastHundred % 100];
            lastHundred /= 100;
        }
        else{
            output += until20[lastHundred % 10];
            lastHundred /= 10;
            output += tensAfter20[lastHundred % 10];
            lastHundred /= 10;
        }
        if (lastHundred > 0) {
            if (output.length() > 0) output += until20[lastHundred] + 10; //length of "hundredand"
            else output += until20[lastHundred] + 7; //length of "hundred"
        }
        num /= 1000;
        if (num > 0) output += 8; //length of "thousand
    }
    return output;
}
