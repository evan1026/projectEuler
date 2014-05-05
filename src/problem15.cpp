#include <iostream>

using namespace std;

long long move(int x, int y);

long long lengths[21][21];

int main(){

    for (int i = 0; i <= 20; ++i){
        for  (int j = 0; j <= 20; ++j){
            lengths[i][j] = -1;
        }
    }

    cout << "Number of moves: " << move(0, 0) << endl;

    return 0;
}

long long move(int x, int y){
    long long sum = 0;
    if (lengths[x][y] != -1){
        sum = lengths[x][y];
    }
    else{
        if (x < 20) sum += move(x + 1, y);
        if (y < 20) sum += move(x, y + 1);
        if (x == 20 && y == 20) sum += 1;
        lengths[x][y] = sum;
    }
    return sum;
}
