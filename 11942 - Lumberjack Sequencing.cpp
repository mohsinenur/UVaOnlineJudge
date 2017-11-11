#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        bool aord = false;
        bool fl = false;
        int nm[10];
        for(int j=0; j<=9; j++){
            cin >> nm[j];
            int k = j;
            if(k>1){
                if(nm[j]>=nm[j-1] && nm[j-1]>=nm[j-2]) aord = true;
                else if(nm[j]<=nm[j-1] && nm[j-1]<=nm[j-2]) aord = true;
                else aord = false;
                if(aord == false) fl = true;
            }
        }
        if(i==1) cout << "Lumberjacks:" << endl;
        if(fl==true) cout << "Unordered" << endl;
        else cout << "Ordered" << endl;
    }
    return 0;
}
