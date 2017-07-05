#include <iostream>
#include "emp.h"

using namespace std;

void main (void)
{
	/*
	employee e("Jane", "444-55-6666");

	e.displayEmployeeInfo();
	cout << endl << endl;
	

	salaryEmployee sEmp("Louis","111-22-3333",800);
	hourlyEmployee hEmp("John","222-33-4444",19.50,40);

	sEmp.payrollCheck();
	cout << endl << endl;

	sEmp.displayEmployeeInfo();
	cout << endl << endl;
	hEmp.displayEmployeeInfo();
	cout << endl << endl;



	//Call displayEmployeeInfo for base class
	sEmp.employee::displayEmployeeInfo();
	cout << endl << endl;
	hEmp.employee::displayEmployeeInfo();
	cout << endl << endl;


	//Copy derived class to base class
	e = hEmp;	// ?
	e.displayEmployeeInfo();
	cout << endl << endl;

	//Copy base class to derived class
	//sEmp = e;	// ? NO


	
	//Consider a pointer
	employee *arr[3];

	arr[0] = new hourlyEmployee("HE1", "1234", 12, 34);
	arr[1] = new salaryEmployee("SE1", "9876", 500);
	arr[2] = new employee("base", "4567");

	for (int i = 0; i < 3; i++)
	{
		arr[i]->displayEmployeeInfo();
		cout << endl << endl;
	}
	*/
	//Constructors/Destructors
	employee *p = new salaryEmployee("TEST", "1111", 1234);

	p->displayEmployeeInfo();
	cout << endl << endl;

	delete p;
	//Abstract Classes
	// virtual f() = 0;		// forces any derived class to implement f() before compiling, but can't use base class anymore



}