#include<iostream>
using namespace std;
int main()
{
    int n, prime = 100;
    cin >> n;
    for(int i=2; i<n; i++){
        if(n%i == 0) prime = 299;
    }
    if(prime == 100) cout << n << " is prime number." << endl;
    else cout << n << " is not prime number." << endl;
    return 0;
}
