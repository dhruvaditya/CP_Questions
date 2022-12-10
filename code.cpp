#include<bits/stdc++.h>
using namespace std;
int T,n,L;
long long maxn,cnt[2],Res,sum;
string st;
int main()
{
	cin>>T;
	while(T--)
	{
		cin>>L>>st;maxn=0;Res=0;sum=0;cnt[0]=cnt[1]=0;
		for(int i=0;i<L;i++)
		{
			cnt[st[i]-'0']++;
			if(i==0||st[i]==st[i-1])++sum;
			else sum=1;
			maxn=max(sum,maxn);
		}cout<<max(cnt[0]*cnt[1],maxn*maxn)<<endl;
	}return 0;
}
