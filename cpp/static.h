#include <iostream>

using namespace std;

class A{
public:
	static int a;
	int b;
	static void put(int x)
	{
		cout << "in A a: " << a << endl;
	//	cout << "in A b: " << b << endl;	// error    不能访问非静态成员
		cout << x << endl;
	}
};

void out();
