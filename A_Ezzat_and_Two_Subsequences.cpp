#include<bits/stdc++.h>
#define ll long long 
#define db double
using namespace std;
int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        
        sort(a,a+n);
        s=s-a[n-1];
        //cerr<<a[n-1]<<" "<<(db)s/(n-1);
        db res=(db)a[n-1]+((db)s/(n-1));
        //cout<<setprecision(10)<<res<<endl;
        printf("%0.9lf\n",res);
    }
}