// Midterm_DS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stack>
#define CAPACITY 5
#define NUMLIB_MAX 20
using namespace std;
int times;
int top_ = 0;
int cache[CAPACITY];
int num_lib[NUMLIB_MAX];
bool ans_result = 1;

void print_out_number() {
	int max_num = NUMLIB_MAX;
	srand(time(NULL));
	cout << "number_lib list:" << endl;
	for (int i = 1; i <= max_num; i++) {

		num_lib[i] = (rand() % 100) + 1;
		cout << num_lib[i] << endl;
	}
	cout << "Push Number is:" << endl;
}

void push_(int d) {
	int numv = 0;
	int list_num = d;
	srand(20);
	for (int i = 0; i < list_num; i++)
	{
		numv = (rand() % 20) + 1;
	}
	cache[d]=num_lib[numv];

}

void running() {
	for (int i = 1; i <= CAPACITY; i++) {
		push_(i);
	}
}


void printing() {
	for (int i = 1; i <= CAPACITY; i++) {
		cout << "Push " << i << " is " << cache[i] << endl;
	}
}

void dorun() {
	for (int i = 1; i <= CAPACITY; i++) {
		for (int f = 1; f <= CAPACITY; f++) {
			if (i != f) {
				if (cache[i] == cache[f]) {
					cache[i] = NULL;
					cache[f] = NULL;
					push_(i);
					push_(f);
					printing();
				}
			}
		}
	}
}

void asking() {
	char ans;
	int asking_num = CAPACITY + 1;
	cout << "Do you want to do again or exit??(answer 'Y' or 'N', 'Y' means do again, 'N' means exit.)" << endl;
	cin >> ans;
	if (ans == 'Y' || ans == 'y') {
		dorun();
	}
	else if (ans == 'N' || ans == 'n') {

	}
	else {
		cout << "Your answer is wrong. Please check and reanswer." << endl;
		cin >> ans;
	}
}


int main()
{
	print_out_number();
	running();
	printing();
	asking();
	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
