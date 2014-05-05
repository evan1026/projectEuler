#include  <iostream>
using namespace std;

int main(){
    long sum       = 0,
         squareSum = 0;

    for (int i = 1; i <= 100; ++i){
        sum += i;
        squareSum += (i * i);
    }
    cout << (sum * sum - squareSum) << endl;
}
