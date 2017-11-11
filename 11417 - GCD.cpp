#include<bits/stdc++.h>
using namespace std;


int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

int main()
{
    int n;
    while(cin>>n && n>0){
        int G=0;
        for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
        {
            G+=GCD(i,j);
        }

        cout << G << endl;
    }
    return 0;
}
