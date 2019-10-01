#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int a[m][n];
		int i,j;
		int ca = 0,cb = 0,b[m][n],c[m][n];
		char d[n];
		for(i =0 ;i<m;i++){
			scanf("\n%s",&d);
			for(j =0 ;j<n;j++){
				a[i][j] = 0;
				if(d[j] == 'R'){
					a[i][j] = 1;
				}
				b[i][j] = (i%2) ^ (j % 2);
				c[i][j] = (b[i][j]+1)%2 ;
				if(a[i][j] < b[i][j] ){
					ca += 3;
				}
				else if (a[i][j] > b[i][j]){
					ca += 5;
				}
				if(a[i][j] < c[i][j] ){
					cb += 3;
				}
				else if (a[i][j] > c[i][j]){
					cb += 5;
				}
			}
			
		}
		cout<<ca<<endl<<cb<<endl;
		cout<<((ca < cb) ? ca : cb )<<endl ;
	}
}
