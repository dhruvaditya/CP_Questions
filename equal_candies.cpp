#include<iostream>
using namespace std;
int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
} 

int main(void){
	int a;
	cin>>a;
	while(a--){
		int n;
		int sum=0;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int t=getMin(arr,n);
		
		for(int i=0; i<n; i++){
	    arr[i]=(arr[i]-t);
	}
	for (int i=0; i<n; i++){
		sum+=arr[i];
	}
	cout<<sum<<endl;
	



	}
}
