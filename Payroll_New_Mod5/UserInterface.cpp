// UserInterface.cpp

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include "Database.h"

using namespace std;
using namespace Records;

int displayMenu();
void hire_hourly(Database& inDB);
void hire_salaried(Database& inDB);
void find_employee_id(Database& inDB);
void find_employee_name(Database& inDB);
void sort_employees(Database& inDB);

int main()
{
	Database employeeDB;
	bool done = false;

	while (!done)
	{
		int selection = displayMenu();

		switch (selection)
		{
		case 1:
			hire_hourly(employeeDB);
			break;
		case 2:
			hire_salaried(employeeDB);
			break;
		case 3:
			find_employee_id(employeeDB);
			break;
		case 4:
			find_employee_name(employeeDB);
			break;
		case 5:
			employeeDB.display_all();
			break;
		case 6:
			sort_employees(employeeDB);
			break;
		case 0:
			done = true;
			break;
		default:
			cerr << "Unknown command." << endl;
		}
	}
	return 0;
}

int displayMenu()
{
	int selection;

	cout << endl;
	cout << "Employee Database" << endl;
	cout << "-----------------" << endl;
	cout << "1) Add a new hourly employee" << endl;
	cout << "2) Add a new salaried employee" << endl;
	cout << "3) Search an employee by employee id" << endl;
	cout << "4) Search an employee by first and last name" << endl;
	cout << "5) List all current employees" << endl;
	cout << "6) Sort all employees by netpay" << endl;
	cout << "0) Quit" << endl;
	cout << endl;
	cout << "---> ";

	cin >> selection;

	return selection;
}

void hire_hourly(Database& inDB)
{
	string firstName;
	string lastName;
	double hourly_rate, hours_worked;
	long in_id;

	cout << "First name? ";
	cin >> firstName;
	cout << "Last name? ";
	cin >> lastName;
	cout << "Hourly rate?";
	cin >> hourly_rate;
	cout << "Hours worked?";
	cin >> hours_worked;
	cout << "Employee id?";
	cin >> in_id;

	try
	{
		inDB.add_hourly_employee(firstName, lastName, hourly_rate, hours_worked,in_id);
	}
	catch (const exception&)
	{
		cerr << "Unable to add new employee!" << endl;
	}
}

void hire_salaried(Database& inDB)
{
	string firstName;
	string lastName;
	double salary, hours_worked;
	long in_id;

	cout << "First name? ";
	cin >> firstName;
	cout << "Last name? ";
	cin >> lastName;
	cout << "Annual salary?";
	cin >> salary;
	cout << "Hours worked?";
	cin >> hours_worked;
	cout << "Employee id?";
	cin >> in_id;

	try
	{
		inDB.add_salaried_employee(firstName, lastName, salary, hours_worked, in_id);
	}
	catch (const exception&)
	{
		cerr << "Unable to add new employee!" << endl;
	}
}

void find_employee_id(Database& inDB)
{
	int employeeNumber;

	cout << "Employee number? ";
	cin >> employeeNumber;

	try
	{
		shared_ptr<Employee> emp = inDB.get_employee(employeeNumber);
		emp->display();
	}
	catch (const std::exception&)
	{
		cerr << "Unable to locate employee!" << endl;
	}
}

void find_employee_name(Database& inDB)
{
	string employee_first_name;
	string employee_last_name;

	cout << "Employee first name? ";
	cin >> employee_first_name;
	cout << "Employee last name?";
	cin >> employee_last_name;
	try
	{
		shared_ptr<Employee> emp = inDB.get_employee(employee_first_name, employee_last_name);
		emp->display();
	}
	catch (const std::exception&)
	{
		cerr << "Unable to locate employee!" << endl;
	}
}

void sort_employees(Database& inDB)
{
	inDB.sort_net_pay();
}

