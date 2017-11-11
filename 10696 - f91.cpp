#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin>>n && n!=0){
        if(n>=101) cout << "f91(" << n << ") = " << n-10 << endl;
        if(n<=100) cout << "f91(" << n << ") = " << 91 << endl;
    }
    return 0;
}
