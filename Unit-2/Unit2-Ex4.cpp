#include<bits/stdc++.h>
using namespace std;

//Other functions different from main:

int getSum(int x, int y){
        int sum = x + y;
        return sum;
    }

    int getDiff(int x, int y){
        int diff = x - y;
        return diff;
    }

int main(){
    int x = 1,y = 2;
    cout << x << "+" << y << "=" << getSum(x, y) << endl;
    cout << x << "-" << y << "=" << getDiff(x, y) << endl;



    return 0;
}
