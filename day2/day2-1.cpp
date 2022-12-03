#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

char stdify(char y){
	return y-'X' + 'A'; 
}

int scoreA(char a){
	return a - 'A' + 1;
}

int scoreAB(char a, char b){
	switch(a-b){
		case 0: return 3;
		case 1: return 0; 
		case 2: return 6; 
		case -1: return 6; 
		case -2: return 0;
		default: return -1;
	}
}

int scoreGame(char o, char y){
	y = stdify(y);
	return scoreA(y) + scoreAB(o, y);
}

int main(){
	char o; char y;
	int sum = 0; 
	while(cin >> o >> y){
		//cout << scoreGame(o, y) << endl;
		sum += scoreGame(o, y);
	}
	cout << sum << endl;
}