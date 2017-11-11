#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++ ){
        int m1,m2,m3,atd,ct1,ct2,ct3;
        cin >> m1 >> m2 >> m3 >> atd >> ct1 >> ct2 >> ct3;
        int ctarr[3] {ct1,ct2,ct3};
        sort(ctarr, ctarr+3);
        int mrks = m1+m2+m3+atd+(ctarr[1]+ctarr[2])/2;

        if(mrks >= 90) cout << "Case " << i << ": A" << endl;
        else if(mrks >= 80) cout << "Case " << i << ": B" << endl;
        else if(mrks >= 70) cout << "Case " << i << ": C" << endl;
        else if(mrks >= 60) cout << "Case " << i << ": D" << endl;
        else cout << "Case " << i << ": F" << endl;
    }
    return 0;
}
