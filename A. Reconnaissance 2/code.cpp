https://codeforces.com/contest/34/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, idx=0;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=1; i<n; i++) if (abs(a[idx]-a[(idx-1+n)%n])>abs(a[i]-a[i-1])) idx=i;
	cout<<idx+1<<' '<<(idx-1+n)%n+1<<'\n';
}
//solve this question and understand this code.
