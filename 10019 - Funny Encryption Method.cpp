#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        cin >> n;
        bitset<16> bn(n);
        cout << bn << endl;
        bitset<8> hn(n);
        cout << hn << endl;
    }
    return 0;
}
