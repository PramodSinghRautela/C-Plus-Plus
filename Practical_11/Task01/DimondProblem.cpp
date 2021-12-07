//DIMOND PROBLEM

#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    int k;
	void display()
	{
		cout << "This is display method from Base class A" << endl;
	}
};

class B :public A{
    public:
	void display1()
	{
		cout << "This is display1 method from class B" << endl;
	}
};

class C :public A{
	public:
	void display2()
	{
		cout << "This is display2 method from class C" << endl;
	}
};

class D : public B, public C{
	//contains two display() functions, how?
	public:
	void display3()
	{
		cout << "This is display3 method from class D" << endl;
	}
};

int main(){

    D d;
    d.display1();
    d.display2();
    d.display3();
    d.display();                                  //This will generate a error          
    d.k = 10;                                     //error: request for member ‘display’ is ambiguous
    return 0;
}
