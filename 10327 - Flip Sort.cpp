#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        int arr[n], cnt=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(i>0){
                for(int j=i; j>0; j--){
                    if(arr[j]<arr[j-1]){
                        int key = arr[j];
                        arr[j] = arr[j-1];
                        arr[j-1] = key;
                        cnt++;
                    }
                    if(i>1){
                        if(arr[j-1]>arr[j-2]) break;
                    }
                }
            }
        }
        cout << "Minimum exchange operations : " << cnt << endl;
    }
    return 0;
}
