#include <iostream>
#include <string>
#include <stack>
#define CAPACITY 20
using namespace std;
stack <int> lib;

void push_(int num) {
	lib.push(num);
}

void pop() {
	lib.pop();
}

void top(int num) {
	int pn = num;
	lib.pop();
	lib.push(num);
}

void peep(int num) {
	
}

void empty() {

}

void IsEmpty() {

}

void printing(int num,int nump) {
	cout << "Push Number " << num << " is : " << nump << endl;
}

int main() {
	for (int i = 1; i <= 5;i++) {
		int p = i * 50;
		push_((i*50));
		printing(i,p);
	}
	system("pause");
	return 0;
}