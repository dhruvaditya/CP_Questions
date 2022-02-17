#include<bits/stdc++.h>
using namespace std;
const int N =1e5+10;
// int main(void){
// 	cout<<INT_MAX <<endl;
// 	int a=(1<<4);
// 	cout<< a << endl;



// }
void printBinary(int num) {
	for(int i=10; i>=0; --i){
		cout<<((num>>i)&1);

	}
	cout<<endl;
}
int main(void){
	printBinary(9);
	int a=9;
	int i=1;
	if((a &(1<<i)) !=0){
		cout<< "set bit";
}
else{
	cout<<"not set bit";
}

}
