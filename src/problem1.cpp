#include <iostream>
#include <sstream>
using namespace std;
int main(){
    cout << "Max number: ";

    int maxNum = 0,
        sum    = 0;
    string input;

    cin >> input;
    if(!(stringstream(input) >> maxNum)){
        cout << "Invalid number" << endl;
        return 1;
    }

    for (int i = 0; i < maxNum; i++){
        if ((i % 3 == 0) || (i % 5 == 0)){
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}
