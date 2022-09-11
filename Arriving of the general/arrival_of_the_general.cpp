#include<bits/stdc++.h>
using namespace std;
int main(void){
int n,max=0,min=100,i,a,b,c;
cin>>n;
for(int i=1; i<=n; i++){
  cin>>a;
  if(max<a) max=a,b=i;
  if(min>=a) min=a,c=i;
}
// cout<<max<<" "<<min<<" ";
// cout<<b<<" "<<c<<" ";
cout<<b-1+(n-c)-(b>c)?1:0;
}
