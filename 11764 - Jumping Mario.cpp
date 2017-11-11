#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int j=1; j<=t; j++){
        int w,cl=0,ch=0;
        cin >> w;
        int arr[w];
        for(int i=0; i<w; i++){
            cin >> arr[i];
            if(i>=1){
                if(arr[i] > arr[i-1]) ch++;
                else if(arr[i] < arr[i-1]) cl++;
            }
        }
        cout << "Case " << j << ": " << ch << " " << cl << endl;
    }
    return 0;
}
