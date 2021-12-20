#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            /* code */cin>>a[i];
        }
        sort(a,a+n);
        int c=0,min=a[0];

        for ( int i = 0; i < n; i++)
        {
            /* code */
            if(a[i]>min)
            c++;
        }
        cout<<c<<endl;
        
    }
}
