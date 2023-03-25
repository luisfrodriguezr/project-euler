//
// Created by Luis Rodriguez on 11/02/2023.
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
    long long n=1000001;
    cin>>number;
    sieve(n);
    int p=0;
    for(int i=2; i<n; i++){
        if(primes[i]==1){
            p+=1;
            if(p==number){
                cout<<i;
                break;
            }
        }
    }
}