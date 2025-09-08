#include <iostream>
using namespace std;
int main() {
	int count = 10, i=count;
	while (count > 0) {
		for (count = 10; count > 0; count--) {
			cout << count;
			cout << "  ";
		}
	}
	cout << "발사!";
	return 0;
}

