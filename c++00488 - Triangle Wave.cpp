#include <iostream>
using namespace std;
int main(){
	int t,a,f;
	cin>>t;
	while(t--){
//		cout<<"aaaa\n";
		cin>>a>>f;
		for(int f0=0;f0<f;f0++){
			for(int a0=1;a0<a+1;a0++){
				for(int i=0;i<a0;i++){
					cout<<a0;
				}
				cout<<"\n";
			}
			for(int i=a-1;i>0;i--){
				for(int j=0;j<i;j++){
					cout<<i;
				}
				cout<<"\n";
			}
			cout<<"\n";
		}
	}
	
	return 0;
}
