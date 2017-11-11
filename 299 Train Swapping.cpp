#include<iostream>
using namespace std;

main()
{
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        int L;
        cin >> L;
        int arrL[L];
        for(int j = 1; j <= L; L++)
        {
            cin >> arrL[j];
        }


       int swp = 0;
       top:
       for(int k = 1; k <= L; k++)
       {
           if(arrL[k] > arrL[k+1])
           {
               int tmp = arrL[k+1];
               arrL[k+1] == arrL[k];
               arrL[k] == tmp;

               swp++;
           }

       }

       for(int k = 1; k <= L; k++)
       {
           cout << arrL[k] << " ";
       }

    }

    return 0;
}


