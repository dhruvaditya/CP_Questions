#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a[1001],b[1001],h=0,l=0;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	
	sort(a,a+m);
	sort(b,b+m);
	int temp=n;
	int i=0;
	while(temp--)
	{
	  l=l+a[i];
	  a[i]-=1;
	  if(a[i]==0)
	  i++;	
	}
	i=m-1;
	while(n--){
		h+=b[i];
		b[i]-=1;
		sort(b,b+m);
	}
	cout<<h<<" "<<l;
}
