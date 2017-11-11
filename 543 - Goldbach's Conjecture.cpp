#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    for(int i=3; i*i<=n; i+=2){
        if (n%i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    while(cin >> n){
        for(int i=3; i<=n; i+=2){
            if(isPrime(i)==1 && isPrime(n-i)==1){
                cout << n << " = " << i << " + " << n-i << endl;
                break;
            }
        }
    }
    return 0;
}
