#include<iostream>
#include<string>
using namespace std;

void dump_test()
{
	int num[3][4];
	for (int i = 0; i < 3; i++)
	{
		for (int r = 0; r < 4; r++)
		{
			num[i][r] = i + 2 * r + i * r;
			std::cout << "�}�C" << i+1 << "��" << r+1 << "�C���ȬO�G" << num[i][r] << endl;
		}
	}

}

int main(int argc, char** argv)
{
	dump_test();
}
