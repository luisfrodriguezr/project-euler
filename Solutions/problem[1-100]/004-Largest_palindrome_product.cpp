//
// Created by Luis Rodriguez on 10/02/2023.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string str;
    int res=0;
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            int product=i*j;
            str= to_string(product);
            string str2=str;
            reverse(str.begin(), str.end());
            if(str==str2){
                if(i*j>res){
                    res=i*j;
                }
            }
        }
    }
    cout<<res;
}