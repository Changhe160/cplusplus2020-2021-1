#include "myHeader.h"
#include <iostream>

using namespace std;

//5.8.1 宏定义调用函数
#define PI 3.14159
void testPI() {
	cout << 2 * PI << endl;
}
#define fun2(a,b) (a)*(b)
#define fun3(a,b) a*b
void testFun() {
	cout << fun2(1 + 2, 3 - 2) << endl;
	cout << fun3(1 + 2, 3 - 2) << endl;
}
#define str(a) #a
#define glue(a,b) a##b
void testDefine() {
	cout << str(test) << endl;
	glue(c, out) << "test" << endl;
	int glue(x, 1) = 1;
#ifdef DEBUG
	cout << "x=" << x << endl;
#endif
#if 0
	cout << "此行代码永远也不会被编译" << endl;
#endif
}

void testMultifile() {
	g_sum = add(4, 5);
	cout << g_sum << endl;
}
int main() {

	testPI();
	testFun();
	testDefine();

	return 0;
}

