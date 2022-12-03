#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
	string s;
	vector<char> dups;
	while(cin >> s){
		unordered_map<char, int> sack;
		for(int i = 0; i < s.size(); i++){
			sack[s[i]] = 1;
		}
		cin >> s;
		for(int i = 0; i < s.size(); i++){
			if(sack[s[i]]==1){
				sack[s[i]]=2;
			}
		}
		cin >> s;
		for(int i = 0; i < s.size(); i++){
			if(sack[s[i]]==2){
				dups.push_back(s[i]);
				break;
			}
		}
	}
	int sum = 0;
	for(auto c : dups){
		cout << c << endl;
		if(isupper(c)) sum+= c - 'A' + 27;
		else sum+= c - 'a' + 1;
	}
	cout << sum << endl;
}