//
// Created by Luis Rodriguez on 10/02/2023.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> primes;
void sieve(int n){
    primes.resize(n,1);
    for(int i=2; i<n; i++){
        if (primes[i]==0) continue;
        for(int j=2*i; j<n; j+=i){
            primes[j]=0;
        }
    }
}
int main(){
    long long number;
    int n=1000000;
    cin>>number;
    sieve(n);
    for(int i=2; i<n; i++){
        if(primes[i]==1 && number%i==0){
            number/=i;
            if(number==1){
                cout<<i;
                break;
            }
        }
    }
}