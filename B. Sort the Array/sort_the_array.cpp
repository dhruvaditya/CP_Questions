#include<bits/stdc++.h>
using namespace std;
int n,p1,p2,a[100000],cnt,b[100000];
int main(void){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	for(int i=0; i<n; i++){
		if(b[i]!=a[i]){
			p2=i;cnt++;
			if(cnt==1){
				p1=p2;
			}
		}
	}
	reverse(a+p1,a+1+p2);
	for(int i=0; i<n; i++){
		if(b[i]!=a[i]){
			cout<<"no"<<endl;
			return 0;
		}
		if(i==n-1){
			cout<<"yes"<<"\n"<<p1+1<<" "<<p2+1;
		}
	}

}
