#include<iostream>
#include<string>
using namespace std;
int main(void){
	int t;
	cin>>t;
	while(t--){
		int X;
		cin>>X;
		std::string s;
		char ch='C';
		char nh='N';
		char dh='D';
		cin>>s;
		int carlsen=0;
		int chef=0;
		int draw=0;
		for(int i=0; (i=s.find(ch,i)) != std:: string::npos; i++){
			carlsen++;
		}
		for(int i=0; (i=s.find(nh,i)) != std:: string::npos; i++){
			chef++;
		}
		for(int i=0; (i=s.find(dh,i)) != std:: string::npos; i++){
			draw++;
		}
		int scr1=(carlsen*2+draw*1);
		int scr2=(chef*2+draw*1);
		if(scr1>scr2){
			cout<<(60*X)<<endl;
		}
		else if(scr1==scr2){
			cout<<(55*X)<<endl;
		}
		else
		{
			cout<<(40*X)<<endl;
		}
	}
}
