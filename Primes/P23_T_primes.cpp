#include <bits/stdc++.h>
using namespace std;
#define fi              first
#define sc              second
#define fo(i,n)         for(int i=0;i<n;i++)
#define fod(i,n)        for(int i=n-1;i>=0;i--)
#define For(i,a,b)      for(int i=a;i<=b;i++)
#define all(x)          x.begin(),x.end()
#define SET(x)          memset(x,-1,sizeof(x))
#define clr(x)          memset(x,0,sizeof(x))
#define pie             3.1415926535897932384626
#define pb(i)           push_back(i)
#define mp              make_pair
#define vi              vector<int>
#define vs              vector<string>
#define pii             pair<int,int>
#define vpii            vector<pair<int,int>>
#define vvi             vector<vi>
#define ll              long long int
#define vll             vector<ll>
#define mod             1000000007
#define tc(t)           int t; cin>>t; while(t--)
#define sfarr(a,n)      int a[n]; fo(i,n) cin>>a[i]
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int p[1000001];
    For(i,2,1000000)
    p[i]=1;
    p[0]=p[1]=0;
    for(int i=2;i*i<=1000000;i++){
        if(p[i]){
            for(int j=i*i;j<=1000000;j+=i)
            p[j]=0;
        }
    }
    ll x[n];
    fo(i,n)
    cin>>x[i];
    fo(i,n){
        if(x[i]<4)
        cout<<"NO\n";
        else if(x[i]==4)
        cout<<"YES\n";
        else if(!(x[i]&1))
        cout<<"NO\n";
        else{
            long double k=sqrt((long double)x[i]);
            ll a=ceil(k),b=floor(k);
            if(p[(int)sqrt(x[i])] && a==b) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}