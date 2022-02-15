#include<bits/stdc++.h>
using namespace std;
int main(void){
	int t;
	cin>>t;
	while(t--){
		int d,n;
		cin>>d>>n;
		int curr=n;
		for(int i=1; i<=d; i++)
		{
			curr=(curr*(curr+1))/2;

		}
		cout<<curr<<"\n";
		

	}
}
