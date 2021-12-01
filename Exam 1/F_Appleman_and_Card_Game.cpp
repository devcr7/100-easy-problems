#include<bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ff              first
#define ss              second
#define fo(i,n)         for(int i=0;i<n;i++)
#define fod(i,n)        for(int i=n-1;i>=0;i--)
#define For(i,a,b)      for(int i=a;i<=b;i++)
#define all(x)          x.begin(),x.end()
#define SET(x,v)        memset(x,v,sizeof(x))
#define si              set<int>
#define pb(i)           push_back(i)
#define sll             set<long long>
#define vs              vector<string>
#define yes             cout<<"YES\n"
#define no              cout<<"NO\n"
#define vpii            vector<pair<int,int>>
#define ll              long long int
#define vi              vector<ll>
#define mod             1000000007
#define tc(t)           int t; cin>>t; while(t--)
#define sfm(a,m,n)      ll a[m][n]; fo(i,m) fo(j,n) cin>>a[i][j]
#define sfarr(a,n)      ll a[n]; fo(i,n) cin>>a[i]
#define sfv(v,n)        vi v(n); for(ll &i:v) cin>>i
// int f[1000001];
// int prime[1000001];
// ll p_pow[1000001];
// ll shash[1000001];
// void sieve(){
//     prime[0]=prime[1]=0;
//     For(i,2,1000000) prime[i]=1;
//     for(int i=2;i*i<=1000000;i++){
//         if(prime[i]){
//             for(ll j=i*i;j<=1000000;j+=i)
//             prime[j]=0;
//         }
//     }
// }
// int power(int a,int b){
//     int r=1;
//     while(b){
//         if(b&1){
//             r=(r*1ll*a)%mod;
//             b--;
//         }
//         else{
//             a=(a*1ll*a)%mod;
//             b>>=1;
//         }
//     }
//     return r;
// }
// void factorial(){
//     f[0]=f[1]=1;
//     For(i,2,1000000) f[i]=(f[i-1]*1ll*i)%mod;
// }
// int nCr(int a,int b){
//     if(b>a) return 0;
//      factorial();
//      int r=f[a]; 
//      r=(r*1ll*power(f[b],mod-2))%mod;
//      r=(r*1ll*power(f[a-b],mod-2))%mod;
//      return r;
// }
// void polyhash(string s){//hash(substr(L,R))=(hash[R]-hash[L-1])/p^L
//     shash[0]=s[0]-'a'+1;
//     ll p=31,p_power=1;
//     For(i,1,s.length()-1){
//         p_power=(p_power*p)%mod;
//         shash[i]=(shash[i-1]+(s[i]-'a'+1)*p_power)%mod;
//     }
// }
// vi KMP(string s){
//     int n=s.length();
//     vi kmp(n);
//     For(i,1,n-1){
//         int j=kmp[i-1];
//         while(j>0 and s[i]!=s[j]) j=kmp[j-1];
//         if(s[i]==s[j]) j++;
//         kmp[i]=j;
//     }
//     return kmp;
// }
// vi z_algo(string s){
//     ll n=s.length(),l=0,r=0;
//     vi z(n);
//     For(i,1,n-1){
//         if(i<=r) z[i]=min(r-i+1,z[i-l]);
//         while(z[i]+i<n && s[z[i]]==s[i+z[i]]) z[i]++;
//         if(i+z[i]-1>r) l=i,r=i+z[i]-1;
//     }
//     return z;
// }
// int parent[1000001];
// int sz[1000001];
// int findpar(int node){
//     if(node==parent[node])
//     return node;
//     return parent[node]=findpar(parent[node]);
// }
// void connect(int u,int v){
//     u=findpar(u);
//     v=findpar(v);
//     if(u==v) return;
//     if(sz[u]<sz[v])
//     swap(u,v);
//     parent[v]=u;
//     sz[u]+=sz[v];
// }
// vector<bool> vis(1000001,0);
// vector<int> g[1000001];
// void graph(vector<int> g[],int e,bool t){
//     fo(i,e){
//         int u,v; cin>>u>>v;
//         g[u].pb(v);
//         if(!t)
//         g[v].pb(u);
//     }
// }
// int up[200001][20];
// int build_sparse(int node,int par){
//     up[node][0]=par;//2^0=1st parent
//     For(i,1,19){
//         if(up[node][i-1]!=-1)
//         up[node][i]=up[up[node][i-1]][i-1];// pow(2,i-1) + pow(2,i-1) = pow(2,i)
//         else up[node][i]=-1;
//     }
//     for(int child:g[node]){
//         if(child!=par)
//         build_sparse(child,node);
//     }
// }
// void dfs(int node){
//     vis[node]=1;
//     for(int child:g[node]){
//         if(!vis[child])
//         dfs(child);
//     }
// }
signed main(){
    // freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    // #ifndef ONLINE_JUDGE
    // if (fopen("input.txt", "r"))
    // {
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // }
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k; cin>>n>>k;
    string s; cin>>s;
    unordered_map<char,int> mp;
    for(char i:s) mp[i]++;
    multiset<ll,greater<>> st;
    for(auto i:mp)
    st.insert(i.ss);
    vi v;
    for(auto i:st){
        if(k==0)
        break;
        if(k-i>=0){
            k-=i;
            v.pb(i);
        }
        else if(k-i<0){
            v.pb(k);
            k=0;
        }
    }
    ll f=0;
    for(ll i:v) f+=i*i;
    cout<<f;
return 0;
}
