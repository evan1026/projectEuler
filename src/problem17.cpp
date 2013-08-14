#include <iostream>

using namespace std;

string intToString(int num);
int numberLength(int num);

string until20[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string tensAfter20[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}; //empty strings for easy lookups

int main(){

    int total = 0;
    for (int i = 1; i <= 1000; i++){
        total +=  numberLength(i);
    }
    cout << total << endl;
    return 0;
}

int numberLength(int num){
    return intToString(num).length();
}

string intToString(int num){
    string output = "";
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
            if (output.length() > 0) output += until20[lastHundred] + "hundredand";
            else output += until20[lastHundred] + "hundred";
        }
        num /= 1000;
        if (num > 0) output += "thousand";
    }
    return output;
}
