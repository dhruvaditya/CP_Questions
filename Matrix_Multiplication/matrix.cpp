#include<iostream>
#define ft first 
#define se second 
#define N 2
#define PB push_back
#define MP make_pair
/*Be patient && calm!
Do not pray for an easy life,
pray for the strength to endure a difficult one.
No matter how hard it gets, NEVER GIVE UP*/
//created by "Dhruv_Aditya"
//大学技术学院
using namespace std;
void insane_fighter(int mat1[N][N],int mat2[N][N],int res[N][N]){
int i,j,k;
for(i=0; i<2; i++){
	for(j=0; j<2; j++){
		res[i][j] =0;
		for(k=0; k<2; k++)
			res[i][j] = res[i][j] +(mat1[i][k] * mat2[k][j]);
	}
} 
  
}
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int mat1[N][N]= {{1,2},{3,4}};
	int mat2[N][N]={{1,2},{3,4}};
	int res[N][N];
	int i,j;
	 insane_fighter(mat1,mat2,res);
	 for(int i=0; i<N; i++){
	 	for(j=0; j<N; j++){
	 		cout<<res[i][j]<<" ";
	 	}
	 	cout<<"\n";
	 }
	 return 0;
	}
	
	
