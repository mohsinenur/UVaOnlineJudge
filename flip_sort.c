#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n)){
        int arr[n], cnt=0, i;
        for(i=0; i<n; i++){
            scanf("%d", &arr[i]);
            //cin >> arr[i];
            if(i>0){
                int j;
                for(j=i; j>0; j--){
                    if(arr[j]<arr[j-1]){
                        int key = arr[j];
                        arr[j] = arr[j-1];
                        arr[j-1] = key;
                        cnt++;
                    }
                    //if(arr[j]>arr[j-1]) break;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", cnt);
        //cout << "Minimum exchange operations : " << cnt << endl;
    }
    return 0;
}
