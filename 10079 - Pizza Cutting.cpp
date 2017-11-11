#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,tmp;
    while(cin>>n && n>=0){
        tmp = ((n)*((n)+1))/2;
        cout << tmp+1 << endl;
    }
    return 0;
}
