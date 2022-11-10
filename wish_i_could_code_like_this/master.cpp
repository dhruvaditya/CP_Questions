#include<bits/stdc++.h>
//https://codeforces.com/contest/1753/problem/C
typedef long long ll;
using namespace std;
const int _=5e5+5,mod=998244353;
int n,a[_];
ll POW(ll x,ll y){
	ll res=1;
	while(y){
		if(y&1)res=res*x%mod;
		x=x*x%mod;
		y>>=1;
	}
	return res;
}
int main(){
    ios::sync_with_stdio(false);
	int T;cin>>T;
	while(T--){
		cin>>n;
		int x=0,m=0;
		ll ans=0;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			if(a[i]==0)m++;
		}
		for(int i=1;i<=m;++i)
			x+=a[i];
		for(int i=1;i<=x;++i){
			ans+=1ll*n*(n-1)%mod*POW(1ll*i*i*2%mod,mod-2)%mod;
			ans%=mod;
		}
		cout<<ans<<endl;
	}
    return 0;
}
