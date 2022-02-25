
#include<iostream>
using namespace std;
int main()
{
	int t; 
	cin>>t;
	while(t--){
        int DSA1,TOC1,DM1,DSA2,TOC2,DM2;
        cin>>DSA1>>TOC1>>DM1;
        cin>>DSA2>>TOC2>>DM2;
        int sum1=DSA1+TOC1+DM1;
        int sum2=DSA2+TOC2+DM2;
        if(sum1>sum2){
                cout<<"Dragon\n";
        }
        else if(sum1==sum2){
                if(DSA1>DSA2){
                        cout<<"Dragon\n";
                }
                else if(DSA2>DSA1){
                        cout<<"Sloth\n";
                }
                else if(TOC1>TOC2){
                        cout<<"Dragon\n";
                }
                else if(TOC2>TOC1){
                        cout<<"Sloth\n";
                }
                else{
                        cout<<"Tie\n";
            }
        }
        else{
                cout<<"Sloth\n";
        }
    }
     return 0;
}
