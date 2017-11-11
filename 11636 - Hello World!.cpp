#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int t=1; t<=2000; t++){
        int n;
        cin >> n;
        if(n<=0) break;
        int cntt=0;
        for(int i=1; i<=i+i; i=i+i){
            cntt++;
            if(i+i >= n) break;
        }
        cout << "Case " << t << ": " << cntt << endl;
    }
    return 0;
}
