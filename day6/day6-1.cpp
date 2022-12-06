#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

bool Qnique(queue<char> q){
	set<char> s;
	while(q.size() > 0){
		if(s.count(q.front())>0) return false;
		s.insert(q.front());
		q.pop();
	}
	return true;
}

int main(){
	char c;
	queue<char> q;
	int count = 0;
	while(cin >> c){
		count++;
		q.push(c);
		if(q.size() >= 4){
			while(q.size() > 4) q.pop();
			if(Qnique(q)) break;
		}
	}
	cout << count << endl;
}

