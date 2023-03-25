//
// Created by Luis Rodriguez on 19/02/2023.
//
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    for (int a=1; a<1000; a++){
        for(int b=1; b<1000; b++){
            int c_square = a*a + b*b;
            double c=sqrt(c_square);
            int c_natural = (int)c;
            if(c==c_natural && a+b+c_natural==1000){
                int res=a*b*c_natural;
                cout<<res;
                return 0;
            }
        }
    }
}