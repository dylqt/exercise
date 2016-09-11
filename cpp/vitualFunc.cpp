#include <iostream>
using namespace std;
class A{

	int a;
public :
	A() {};
	A(int i) :a(i) {}
	virtual void output(){
	cout << "A : " << a << endl;
	}
	virtual void out() = 0;
protected:
	int d = 3;
};

class B : public A{

	int b;
public:
	B() {};
	B(int i, int j) :A(i), b(j){}
	void out(){
		
	}
	void outputB()
	{
		cout << A::d << endl;
		cout << "B self" << endl;
	}
	void output1(B &x){
		B e(1,1);
		e.d = 4;
		cout << e.d << endl;
		cout << x.d << endl;
	}
};


int main()
{
	//A a(1);
	B b(1, 2);
//	a.output();
	b.output();
	b.outputB();
	int *p = new int[10];
	cout << sizeof(p) << endl;
	delete p;

	B c;
//	printf("%x\n", &c);
//	printf("%x\n", p);

	B *d = new B;
	delete []d;
//	b.output1(b);
//	cout << b.d << endl;	// 
//	A &c = b;
//	c.output();
//	c.outputB();
//	c.b;
//	A d = b;
//	d.output();
//	cout << d.b << endl;	// error
}
