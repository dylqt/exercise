#include <iostream>

using namespace std;

class A{};
class B{
	int a;
	int b;
};
class C{
	char b[0];
};
class D{
	static int a;
	int b;
};
class E{
	void func(){cout << " ";}

};
class F{
	virtual void func(){cout << " ";}
	virtual void func1(){cout << " ";}

};

int main()
{
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;
	cout << sizeof(D) << endl;
	cout << sizeof(E) << endl;
	cout << sizeof(F) << endl;
}
