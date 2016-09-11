#include <iostream>
#include "static.h"
using namespace std;



int A::a = 1;

int main()
{
	A::put(A::a);
	
	A b;
	b.b = 2;
	b.put(b.b);

	out();
}
