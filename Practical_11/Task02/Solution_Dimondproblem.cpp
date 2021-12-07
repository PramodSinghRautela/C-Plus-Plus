//SOLUTION OF DIMOND PROBLEM 

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
//Add virtual keyword in Class B AND Class c
/*Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances. 
When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members. 
A single copy of its data members is shared by all the base classes that use virtual base. */	

class B :virtual public A{
    public:
	void display1()
	{
		cout << "This is display1 method from class B" << endl;
	}
};

class C :virtual public A{
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
    d.display();                               
    d.k = 10;                                     
    return 0;
}
