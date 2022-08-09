//https://codeforces.com/gym/102267/problem/B
// output is correct but wrong answer in test case 3;
#include<bits/stdc++.h>
#define ft first 
#define se second 
#define PB push_back
#define MP make_pair
/*Be patient && calm!
Do not pray for an easy life,
pray for the strength to endure a difficult one.
No matter how hard it gets, NEVER GIVE UP*/
//created by "Dhruv_Aditya"
//大学技术学院
using namespace std;
int primeNumber(int n){
	int flag=0;
	int m=n/2;
	for(int i=2; i<=m; i++)
	{
		if(n%i==0){
			flag=1;
		
		}
	}
	if(flag!=1){
		return 1;
	}
	else
		return 0;
}
void insane_fighter(){
          int prime;
          cin>>prime;
          int c1=prime-1;
          if(primeNumber(c1)){
          	cout<<1<<" "<<c1<<endl;
          }
          int symbol=0;
         for(int i=2; i<prime; i++){
            if(primeNumber(i)){
            	int c2=prime-i;
            	if(primeNumber(c2)){
            		cout<<i<<" "<<c2<<endl;
            		symbol=1;
            		break;
            	}
            }
         }
         if(symbol!=1){
         	cout<<-1<<endl;
         }
}
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	insane_fighter();
	
}
