#include <iostream>
using namespace std;
int main() {
	int x, y;
	cout << "x값을 입력하시오";
	cin >> x;
	cout << "y값을 입력하세요";
	cin >> y;
	if (x > y) {
		cout << "x가 더 큽니다.";
	}
	else {
		cout << "y가 더 큽니다.";
	}
	return 0;
}
