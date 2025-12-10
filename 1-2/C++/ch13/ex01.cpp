#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	ofstream os("sample.txt"); 
	for (int i = 0; i < 10; i++) {
		os << i << " " ;
	}
	return 0;
}
