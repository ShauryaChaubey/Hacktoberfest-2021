#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int T,t;
    cin >> T;
    for(t=0;t<T;t++)
    {
        string s;
        cin >> s;
        int a[100],i=0,j=0,c=0,sum=0;
        while(i<=s.length())
        {
          if(s[i] == '1')
          {
            c++;
            i++;
          }
          else
          {
            a[j] = c;
            i++;
            c=0;
            j++;
          }
        }
        sort(a, a+j);
        for(i=j-1;i>=0;i=i-2)
        {
          sum += a[i];
        }
        cout << sum << endl;
    }
}
