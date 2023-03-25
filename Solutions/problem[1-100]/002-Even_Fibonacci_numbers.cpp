//
// Created by Luis Rodriguez on 10/02/2023.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> fibs;
// Return the N-fibonacci number using Dynamic Programming No longer needed
int dp_fib(int n){
    if (n<2) return 1;
    if (fibs[n]!=0) return fibs[n];
    fibs[n] = dp_fib(n-1)+ dp_fib(n-2);
    return fibs[n];
}

int main(){
    int fib_n_1=1;
    int fib_n_2=1;
    int res=0;
    while(fib_n_1<=4000000){
        int fib=fib_n_2+fib_n_1;
        if ((fib)%2==0){
            res+=fib;
        }
        fib_n_2=fib_n_1;
        fib_n_1=fib;
    }
    cout<<res;
}