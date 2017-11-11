#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin >> n){
        n = ((n*(n+1))/2)*((n*(n+1))/2);
        cout << n << endl;
    }
    return 0;
}
