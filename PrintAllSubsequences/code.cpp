#include<bits/stdc++.h>
using namespace std;
void printSubsequence(string input, string output){
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }
    printSubsequence(input.substr(1),output);
    printSubsequence(input.substr(1),output+input[0]);
}
int main(void){
    string input,output;
    cin>>input;
    output="";
    printSubsequence(input,output);

}
