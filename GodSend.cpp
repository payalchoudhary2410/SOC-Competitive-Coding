#include"bits/stdc++.h"
using namespace std;
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define mp make_pair
#define pb push_back
#define mset(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
int main()
{
    int n,b,p=0;
    cin>>n;

    for(int i=0;i<n;i++)
     {
     cin>>b;
     if(p==0 && b%2!=0)
       p=1;
     }

     if(p==1) cout<<"First";
     else cout<<"Second";
}
