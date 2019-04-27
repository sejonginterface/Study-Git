#include <iostream>
using namespace std;

class MyIntStack {
	int *p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(MyIntStack& s);
	~MyIntStack();

	bool push(int n);
	bool pop(int &n);
};

MyIntStack::MyIntStack(int size) {
	p = new int[size];
	this->size = size;
	tos = 0;
}

MyIntStack::MyIntStack(MyIntStack& s) {
	p = new int[size];
	this->size = s.size;
	this->tos = s.tos;
}

MyIntStack::~MyIntStack() {
	delete[]p;
}

bool MyIntStack::push(int n) {
	if (tos > size) {
		p[tos++] = n;
		return true;
	}

	else return false;
}

bool MyIntStack::pop(int &n) {
	if (tos > 0) {
		tos--;
		n = p[tos];
		return true;
	}

	else return false;
}

int main()
{
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}