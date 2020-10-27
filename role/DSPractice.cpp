// DSPractice.cpp

#include <iostream>
#include <string>
using namespace std;



struct Role
{
    char* name;
    int level;
    int hp;
    int ap;
    int dp;
    int sp;
};

void dump_role(Role& role) {
    cout << "姓名：" << role.name << endl;
    cout << "等級：" << role.level << endl;
    cout << "血量：" << role.hp << endl;
    cout << "攻擊力：" << role.ap << endl;
    cout << "防禦力：" << role.dp << endl;
    cout << "能量：" << role.sp << endl;
}

void test_role()
{

    char name[] = " Fuhong";

    struct Role role;

    role.name = name;
    role.level = 1;
    role.hp = 10;
    role.ap = 1;
    role.dp = 1;
    role.sp = 10;
    
    dump_role(role);
}

int main(int argc, char* argv[]) {
    test_role();
}