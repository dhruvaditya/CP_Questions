#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include <string>
#define ft first 
#define se second 
#define PB push_back
#define MP make_pair
#define nline "\n"
/*Be patient && calm!
Do not pray for an easy life,
pray for the strength to endure a difficult one.
No matter how hard it gets, NEVER GIVE UP*/
//created by "Dhruv_Aditya"
//大学技术学院
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// insane_fighter();
	int t; cin>>t;
	// cout<<t<<nline;
	int s=t;
	vector<int>v1;
	vector<int>v2;
	while(t--){
		int a,b;cin>>a>>b;
        v1.PB(a);
        v2.PB(b);
	}
	int count1=0;
	int count2=0;
	for(int i=0; i<v1.size(); i++){
		if(v1[i]==1){
			count1++;
		}
	}
	for(int i=0; i<v2.size(); i++){
		if(v2[i]==1){
			count2++;
		}
	}
	// cout<<count1<<" "<<count2<<nline;

	int p= min(count1,s-count1)+min(count2,s-count2);
      cout<<p;
}
