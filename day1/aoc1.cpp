#include <iostream> 
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	vector<int> elves; 
	string line;
	int count = 0; 
	int max_count = 0;
	int biggest_elf = 0;
	while(getline(cin, line)){
		if(line.empty()){
			elves.push_back(count);
			if (max_count < count){
				max_count = count; 
				biggest_elf = elves.size() -1;
			}
			count = 0;
		}
		else count += stoi(line);
	}
	sort(elves.begin(), elves.end(), greater<int>());
	cout << elves[0] << endl;
	cout << elves[0] + elves[1] + elves[2] << endl;
}