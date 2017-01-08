#include <iostream>

#include "SMCore.h"
#include "SMApplication.h"

using namespace std;

int main()
{
	cout << "hello world" << endl;
	auto timer = Timer();
	timer.print();

	SMTest::test();

	system("pause");
	return 0;
}