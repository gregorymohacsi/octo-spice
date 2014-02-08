#include <iostream>
#include <string>
#include "Employee.h"
#include "SalaryEmployee.h"
//#include "HourlyEmployee.h"

using namespace std;


int main()
{
	cout << "Testing the Employee class." << endl;

	Records::Employee emp;
	Records::SalaryEmployee sal_emp;

	emp.set_first_name("Marni");
	emp.set_last_name("Kleper");
	emp.set_id(7112233);
	emp.set_hourly_rate(30);
	emp.set_hours_worked(42);
		
	emp.compute_overtime_hours();
	emp.compute_regular_hours();

	cout << emp.get_first_name() << endl;
	cout << emp.get_last_name() << endl;
	cout << emp.get_id() << endl;
	cout << "ot: " << emp.get_overtime_hours() << endl;
	cout << emp.get_regular_hours() << endl;

	sal_emp.set_salary(99000);
	sal_emp.set_hourly_rate(sal_emp.get_salary());
	sal_emp.set_id(1005000);
	sal_emp.set_first_name("SalariedEmp");
	sal_emp.set_last_name("SalLast");
	sal_emp.set_hours_worked(43);
	sal_emp.compute_overtime_hours();
	sal_emp.compute_regular_hours();

	system("pause");

	cout << sal_emp.get_first_name() << endl;
	cout << sal_emp.get_last_name() << endl;
	cout << sal_emp.get_hourly_rate() << endl;

	system("pause");

	emp.print_headings();
	emp.display();
	sal_emp.display();

	system("pause");

	return 0;
}