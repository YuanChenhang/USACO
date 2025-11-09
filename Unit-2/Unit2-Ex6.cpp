#include<bits/stdc++.h>
using namespace std;

//Display the powers 1, 2 1, 2 2, 2 3, …, 2 10, and 2 -1, 2 -2, 2 -3, …, 2 -10

int main(){
   //calculate the positive powers
   for(int i = 1; i <= 10; ++i){
    cout << "2`" << i  << "=" <<  pow(2,i) << endl;
   }
   
   //to see the code is true or false for positive calculation
   cout << pow(2,1) << endl;
   cout << pow(2,2) << endl;
   cout << pow(2,3) << endl;
   cout << pow(2,4) << endl;
   cout << pow(2,5) << endl;
   cout << pow(2,6) << endl;
   cout << pow(2,7) << endl;

    cout << "NOW IT IS FOR NEGETIVE CALCULATION" << endl;

   //calculate the negetive powers
   for(int n = -1; n >= -10;  n = n - 1){
    cout << "2`" << n << "=" << pow(2, n) << endl;
   }

    //to see the code is. true or false for negetive calculation
   cout << pow(2,-1) << endl;
   cout << pow(2,-2) << endl;
   cout << pow(2,-3) << endl;
   cout << pow(2,-4) << endl;
   cout << pow(2,-5) << endl;
   cout << pow(2,-6) << endl;
   cout << pow(2,-7) << endl;


    return 0;
}