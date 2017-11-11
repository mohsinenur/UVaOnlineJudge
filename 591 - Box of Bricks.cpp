#include<iostream>
using namespace std;
int main()
{
    int n,t=1;
    while(cin>>n && n!=0){
        int b,sum=0,h[n],ht,htt=0;
        for(int i=0; i<n; i++){
            cin >> h[i];
            sum+=h[i];
        }
        ht = sum/n;
        for(int j=0; j<n; j++){
            if(h[j]>ht) htt+=(h[j]-ht);
        }
        //Set #1
        //The minimum number of moves is 5.
        cout << "Set #" << t << endl;
        cout << "The minimum number of moves is " << htt << "." << endl << endl;
        t++;
    }
    return 0;
}
