#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map <char, char> mp;
string s;
bool is_palindrome(){
	string s_reverse="";
	for(int i=s.size()-1;i>-1;i--){
		s_reverse+=s[i];
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=s_reverse[i])return false;
	}
	return true;
}

bool is_mirroredstr(){
	for (int i = 0; i <= s.size()/2; i++){
		if (mp[s[i]] != s[s.size()-1-i]) return false;
	}
	return true;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s1= "AEHIJLMOSTUVWXYZ012358";
    string s2 = "A3HILJMO2TUVWXY501SEZ8";
    for(int i=0;i<s1.size();i++){
    	mp[s1[i]]=s2[i];
	}
	
	/*§¹¦¨Ãè¹³¬MÅ¨*/
	for(auto p:mp ){
		cout<<p.first<<" "<<p.second<<"\n";
	}
	
	while(cin>>s){
		bool flag_palindrome=is_palindrome();
		bool flag_mirroredstr=is_mirroredstr();
		if (flag_palindrome && flag_mirroredstr) cout << s << " -- is a mirrored palindrome.\n\n";
        else if (flag_palindrome) cout << s << " -- is a regular palindrome.\n\n";
        else if (flag_mirroredstr) cout << s << " -- is a mirrored string.\n\n";
        else cout << s << " -- is not a palindrome.\n\n";
	}
	return 0;
}
