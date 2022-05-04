#include <iostream>
using namespace std;
#define r 10000
int arr[r]={0};
int main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);
	arr[1]=1;
	int yy=0,y=0;
	for(int i=1;i<r/2;i++){
		y=yy+(i*2);
		arr[i*2]=y;
		arr[(i*2)+1]=y+(i+1);
		yy=y;
	}
//	for(auto p:arr){
//		cout<<p<<" ";
//	}
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		for(int i=0;i<r;i++){
			if(abs(a-b)<=arr[i]){
				cout<<i<<"\n";
				break;
			}
		}
	}
	return 0;
}
