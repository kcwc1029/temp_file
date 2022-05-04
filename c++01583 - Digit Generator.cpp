#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)	{
		int n,copy_i,temp;
		string s_i;
		
		cin>>n;
		int ans=0;
		for(int i=1;i<n;i++){
			copy_i=i;
			temp=i;
			s_i=to_string(i);
			for(int j=0;j<s_i.size();j++){
				temp+=s_i[j]-'0';
			}
			if(temp==n){
				ans=i;
				break;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
