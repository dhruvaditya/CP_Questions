#include<bits/stdc++.h>
using namespace std;
#define ft first 
#define se second 
#define PB push_back
#define MP make_pair
#define nline "\n"
#define ll long long
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;

#ifdef TESTING
#define DEBUG fprintf(stderr, "====TESTING====\n")
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG
#define VALUE(x)
#define debug(...)
#endif
/*--------------------------------------------------------------------*/
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)
/*--------------------------------------------------------------------*/
void solve(){
	int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int count_1=0;
    int count_0=0;
    for(int i=0; i<n; i++){
        if(a[i]==1){
            count_1++;
        }
        else
            count_0++;
    }
    int sum=count_1;
    while(sum<n && count_0>0){
        sum+=2;
        count_0--;
        if(sum==n){
            cout<<"YES"<<nline;
            return;
        }
        else if(sum>n){
            cout<<"NO"<<nline;
            break;
        }
    }
    if(sum==n){
        cout<<"YES"<<nline;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solve();
    int t; cin>>t;
    TC(t){
    	solve();
    }
}
