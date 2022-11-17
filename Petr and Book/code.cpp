#include <bits/stdc++.h>
using namespace std;
long long n,a[1006];
int main()
{
	cin>>n;
	for(int i=0;i<=6;i++) cin>>a[i];
	long long i=0;
	while (n-a[i]>0) 
	{
		n=n-a[i];
    	i=(i + 1)%7;
	}
	cout<<(i+1);
    return 0;
}
