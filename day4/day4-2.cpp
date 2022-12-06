#include <iostream>

using namespace std;

int main(){
	int a,b,c,d;
	char e,f,g;
	int count = 0;
	while(cin >> a >> e >> b >> f >> c >> g >> d){
		count+=((a-d)*(b-c) <= 0);
	}
	cout << count << endl;
}