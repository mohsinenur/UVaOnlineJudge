#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n,k,j,x;
        int a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
        cin >> n;
        //n=17
        for(k=1; k<=n; k++){
            x = k%10;
            while(k>=1){
                j=x;
                if(j==0) a0++;
                else if(j==1) a1++;
                else if(j==2) a2++;
                else if(j==3) a3++;
                else if(j==4) a4++;
                else if(j==5) a5++;
                else if(j==6) a6++;
                else if(j==7) a7++;
                else if(j==8) a8++;
                else if(j==9) a9++;
                k = k/10;

            }
        }
        cout << a0 << " " << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << " " << a7 << " " << a8 <<  " " << a9 << endl;
    }
    return 0;
}
