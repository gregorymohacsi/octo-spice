#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main()
{
	cout << "Testing the Employee class." << endl;

	Employee emp;

	emp.set_first_name("Marni");
	emp.set_last_name("Kleper");
	emp.set_id(7112233);
	emp.set_hourly_rate(30);
	emp.set_hours_worked(42);
	emp.set_regular_hours();
	
	emp.compute_overtime_hours();

	cout << emp.get_first_name() << endl;
	cout << emp.get_last_name() << endl;
	cout << emp.get_id() << endl;
	cout << "ot: " << emp.get_overtime_hours() << endl;
	cout << emp.get_regular_hours() << endl;

	system("pause");

	return 0;
}