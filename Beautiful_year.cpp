#include<bits/stdc++.h>
using namespace std;
int main(void){
	int a,b,c,d,n;
	cin>>n;
	a=n/1000,b=(n/100)%10,c=(n/10)%10,d=n%10;
	do {
		n++;
	}

	 while(a==b || a==c || a==d || b==c || b==d || c==d);
	 cout<<n<<endl;
	

	
}