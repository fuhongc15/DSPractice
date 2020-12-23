#include <iostream>
#include <string>
#include <stack>
#define CAPACITY 20
using namespace std;
int lib[CAPACITY];
int _top = 0;
void push(int num) {
	if (_top == CAPACITY) {

	}
	lib[_top] = num;
	cout << "Push number is " << num << "(_top is <" << _top << ">)" << endl;
	_top++;
}

void pop() {
	int x = lib[_top];
	cout << "Pop number is " << x << endl;
	lib[_top] = NULL;
	_top--;
}

void top() {
	int x = lib[CAPACITY];
	cout << "Currently, the top is " << x << endl;
}

void peep(int num) {
	
}

void empty() {

}

void IsEmpty() {

}

int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	pop();
	pop();
	pop();
	pop();
	top();
	system("pause");
	return 0;
}