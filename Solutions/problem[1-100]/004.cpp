//
// Created by Luis Rodriguez on 10/02/2023.
//
#include <iostream>

using namespace std;

int main(){
    int n=100;
    // Sum of the first N squares
    int sum_of_squares=n*(n+1)*(2*n+1)/6;
    int square_of_sum=n*n*(n+1)*(n+1)/4;
    cout<<square_of_sum-sum_of_squares;
}