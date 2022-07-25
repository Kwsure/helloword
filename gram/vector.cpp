#include <iostream>
#include <string>
#include<cstdlib>
#include <fstream>
#include<vector>
using namespace std;
void display1(vector<int> vec) {
	for (int i = 0; i < vec.size(); i++) {
		vec[i]++;
		cout << vec[i];
		cout << endl;
	}
}
void display2(vector<int>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		vec[i]++;
		cout << vec[i];
		cout << endl;
	}
}
void display3(vector<int>* vec) {
	for (int i = 0; i < vec->size(); i++) {
		(*vec)[i]++;
		cout << (*vec)[i];
		cout << endl;
	}
}
int main() {
	vector<int> ve = { 1,2,3,4 };
	
	display1(ve);

	
	display2(ve);

	
	display3(&ve);

	return 0;
}

