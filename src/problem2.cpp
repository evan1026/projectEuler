#include <iostream>
#include <sstream>
using namespace std;
int main(){
    int maxNum  = 0,
        sum     = 0,
        current = 1,
        last    = 1;
    
    string input;

    cout << "Max num: ";

    cin >> input;
    
    if (!(stringstream(input) >> maxNum)){
        cout << "Invalid number";
        return 1;
    }

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
