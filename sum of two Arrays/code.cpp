// #include<bits/stdc++.h>
// using namespace std;
// int isPalindrome(int a){
// 	int rem,rev=0;
// 	while(a!=0){
// 		rem=a%10;
// 		rev=rev*10+rem;
// 		a=a/10;
// 	}
// 	cout<<rev<<endl;
// }
// int main(void){
// 	int n;
// 	cin>>n;
// 	isPalindrome(n);
// }
#include <bits/stdc++.h>
using namespace std;

int main()  
{  
	// int arr[5]={4,3,53,23,1};
	// sort(arr,arr+5);
	// int key=3;
	// int high=5;
	// int low=0;
	// int mid=(high+low)/2;
	// if(arr[mid]==key){
	// 	return mid;
	// }
	// else if(key<arr[mid]){
	// 	high=mid+1;
	// }
	int s1,s2;
	int k=4;
	cin>>s1>>s2;
	int a1[s1];
	int a2[s2];
	int final[k];
	for(int i=0; i<s1; i++){
		cin>>a1[i];
	}
	for(int j=0; j<s2; j++){
		cin>>a2[j];
	}
// for(int i=0; i<s1; i++){
// 	cout<<a1[i];
// 	cout<<a2[i];
// }
	int carry=0;
	for(int i=k-1; i>=0; i--){
		int nums=0;
	nums=a1[s1-1]+a2[s2-1]+carry;
	if(nums>=10){
		int p=nums%10;
		carry=nums/10;
		final[i]=p;

	}
	else{
		final[i]=nums;
		carry=0;
	}
	s1--;
	s2--;
	

}
for(int _=0; _<k; _++){
	cout<<final[_]<<" ";
}

return 0;  
}  
