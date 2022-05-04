/*
1(case數)
(有一行空白) 
3 1 2(索引) 
32.0 54.7 -2(值) 

54.7
-2
32.0
*/ 
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(){
	
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	
	int t;
	string s;
	cin>>t; //輸入測資 
	getline(cin,s); //清除cin剩下的'\n' 
	while(t--){
		vector<int> v1;
		getline(cin,s);//讀入空白 
		getline(cin,s);//讀入索引
		
		stringstream ss(s);
		int p1;
		while(ss>>p1){
			v1.push_back(p1); //v {3,1,2} 
		}
		/*test
		for(int i=0;i<v1.size();i++){
			cout<<v1[i]<<" ";
		}*/
		
		
		/*--------------------------------*/
		vector<string> v2;
		getline(cin,s);//讀入目標 
		
		ss.clear() ;
		ss.str(s);
		
		string p2;
		while(ss>>p2){
			v2.push_back(p2); 
		}
		
		/*test
		for(int i=0;i<v1.size();i++){
			cout<<v2[i]<<" ";
		}*/
	 
		//cout<<v1.size()<<"\n";
		string ans[v1.size()+1]; //這裡為什麼要+1呢 
		for(int i=0;i<v1.size();i++ ){
			ans[v1[i]]=v2[i];
		}
		for(int i=0;i<v1.size()+1;i++){
			cout<<ans[i]<<"\n";
		}
	}
	
	
	return 0;
}
