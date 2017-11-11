#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t ;i++){
        int r;
        cin >> r;
        int w = r*10/2;
        int h = r*6/2;

        cout << "Case " << i << ":" << endl;
        cout << -int(w*4.5/10) << " " << h/2 << endl;
        cout << int(w*5.5/10) << " " << h/2 << endl;
        cout << int(w*5.5/10) << " " << -(h/2) << endl;
        cout << -int(w*4.5/10) << " " << -(h/2) << endl;
    }
    return 0;
}
