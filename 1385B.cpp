#include <iostream>

using namespace std;

int main()
{
    int t,T;
    cin >> T;
    for(t=0;t<T;t++)
    {
        int n,i,p[200],arr[100];
        cin >> n;
        for(i=0;i<2*n;i++)
        {
            cin >> p[i];
        }
        arr[0] = p[0];
        int k =1,j=0,f=0;
        for(i=1;i<2*n;i++)
        {
            f=0;
           for(j=0;j<k;j++)
           {
               if(p[i] == arr[j])
               {
                   f = 1;
                   break;
               }
           }
           if(f == 0 && k<n)
           {
               arr[k] = p[i];
               k++;
           }
        }
        for(i=0;i<n;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

    }
}
