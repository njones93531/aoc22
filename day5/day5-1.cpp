#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int num_piles = 9;

int main(){
	char e,f;
	int count = 0;
	string line;
	vector<stack<char>> stx;
	stack<char> dummy;
	dummy.push('~');
	stx.push_back(dummy);

	//Initialize stacks
	for(int i = 0; i < num_piles; i++){
		getline(cin, line);
		stack<char> s;
		for(char c : line){
			if(isupper(c)){
				s.push(c);
			}
		}
		stx.push_back(s);
	}
	getline(cin, line);
	cout << stx.size() << endl;
	string trsh;
	int num, st, fin;
	while(cin >> trsh >> num >> trsh >> st >> trsh >> fin){
		for(int i = 0; i < num; i++){
			stx[fin].push(stx[st].top());
			stx[st].pop();
		}
	}
	for(stack<char> a : stx)
		cout << a.top();
	cout << endl;
}

