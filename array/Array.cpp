#include <iostream>
#include <string>
using namespace std;
int num[2][3];

void set(int A, int B, int C) {
	num[A][B] = C;
}

void get(int A, int B) {
	cout << "num[" << A << "][" << B << "] = " << num[A][B] << endl;
}

void dump(int A, int B, int C) {
	cout << "First Number(F) is: " << A << endl;
	cout << "Second Number(S) is: " << B << endl;
	cout << "Third Number(T) is: " << C << endl;
	cout << "So, num[F][S] = T, num[" << A << "][" << B << "] = " << C << endl;
}

int main()
{
	int a, b, c;
	cout << "Please input 3 numbers: ";
	cin >> a >> b >> c;
	set(a, b, c);
	get(a, b);
	dump(a, b, c);
	system("pause");
	return 0;
}