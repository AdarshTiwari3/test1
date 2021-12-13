#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
const int N=1e6+7;
/*
int prime[N];
//sieve
void primecheck()
{
    prime[0]=prime[1]=0;
    for(int i=2;i<N;i++)
        {
            prime[i]=1;
        }
    for(int i=2;i*i<N;i++)
        {
            if(prime[i]==1)
            {
                for(int j=i*i;j<N;j+=i) 
                {
                 prime[j]=0;//for only sieve
                }
            }
        }
}
*/


//---------------------------------------------------------------//
void solve()
{
  int n,c=0; cin>>n;
  string s=to_string(n);
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='4'||s[i]=='7') c++;
  }
  if(c==s.size() || (n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%477==0 || n%474==0 || n%747==0||n%447==0)) cout<<"YES\n";
  else cout<<"NO\n";

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
        solve();
}