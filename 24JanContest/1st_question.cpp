#include<bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                count++;
            }
        }
        if(count==0){
            cout<<n<<endl;
        }
        else if(count%2==1){
            cout<<n-(count/2)<<endl;
        }
        else if(count%2==0){
            cout<<n-(count/2)<<endl;
        }
    }
}
