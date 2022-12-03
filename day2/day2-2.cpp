#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

char stdify(char y){
	return y-'X' + 'A'; 
}

int scoreA(char a, char b){
	switch(b){
		case 'A': return (a-'A'+2) %3 + 1;
		case 'B': return a - 'A' + 1; 
		case 'C': return (a - 'A'+1)%3 + 1; 
		default: return -1;
	}
}

int scoreAB(char b){
	return (b - 'A') * 3;
}

int scoreGame(char o, char y){
	y = stdify(y);
	return scoreA(o, y) + scoreAB(y);
}

int main(){
	char o; char y;
	int sum = 0; 
	while(cin >> o >> y){
		cout << scoreGame(o, y) << endl;
		sum += scoreGame(o, y);
	}
	cout << sum << endl;
}