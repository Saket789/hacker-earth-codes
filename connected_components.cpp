
#include <bits/stdc++.h>
using namespace std ; 
#define ll              int
// #define cini(x)	        scanf("%lld",&x)
// #define cins(s)	        scanf("%s",s)
#define deb(x)          cout << x << "  " ;
#define out(x)          cout << x << endl ;
#define endl            '\n'
#define pb              push_back
#define mk              make_pair
#define fastio          ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(x,n,v)     for(ll v=x; v<n; v++)
#define loopr(n,x,v)     for(ll v=n-1; v>=x; v--)
#define mod             1000000007
#define all(x)          x.begin(), x.end()
#define clr(x)          memset(x, 0, sizeof(x))
#define sortall(x)      sort(all(x))
#define tr(it, a)       for(auto it = a.begin(); it != a.end(); it++)
#define PI              3.1415926535897932384626
#define setbits(x)      __builtin_popcount(x)
#define zrobits(x)      __builtin_ctz(x)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(t)            int t; cin>>t; while(t--) 
#define     vi          vector<ll>
#define     vtt         vector<pair<ll,ll>> 
#define     pii         pair<ll,ll> 
#define  mapp           map<ll,ll> 
#define  sett           set<ll>
//====================================
//====================================

// vi g[N];
// int a[N][N];
// // int n;
bool mark[10000];
        vi vec[100];

void dfs(int u, int par){
    if(mark[u] == 1) return ;
    mark[u]=1;
    for(auto it : vec[u]) dfs(it,par); 
    return;
}




int main(){
    fastio ;

        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1 ;
        // loop(0,n,i) brr[i]=0;
        // char s[100005];
        string s ;
        ll n,m ;
        cin >> n ;
        cin >> m ;
        while(m--){
            cin >> a >> b ;
            vec[a].pb(b); 
            vec[b].pb(a); 
        }
        
        loop(1,n+1,i){
            if(mark[i] == 0){
            dfs(i,n);
            c++;
            }
        }

        out(c)

    return 0 ;
}

// g++ x.cpp -o as && ./as