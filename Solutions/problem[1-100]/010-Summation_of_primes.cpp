//
// Created by Luis Rodriguez on 24/02/2023.
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
    int n=2000000;
    cin>>n;
    sieve(n);
    long int p=0;
    for(int i=2; i<n; i++){
        if(primes[i]==1){
            p+=i;
        }
    }
    cout<<p;
}