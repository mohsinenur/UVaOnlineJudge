#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }
        int m = n/2;
        cout << "Case " << i << ": " << arr[m] << endl;
    }
    return 0;
}
