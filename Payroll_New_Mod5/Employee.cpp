// Payroll program version 7
// Module 5 of ESC course Introduction to C++ and OOP
// Classes
// Student: Gregory Mohacsi
// Instructor: Dr. Alireza Ebrahimi
// Object Oriented Payroll

#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"

namespace Records
{
	Employee::Employee()
		:id(123456),
		first_name("John"),
		last_name("Doe"),
		hours_worked(-40.0),
		hourly_rate(-40.0),
		overtime_hours(-1),
		regular_hours(-10),
		regular_pay(-10),
		overtime_pay(-20),
		gross_pay(-23),
		tax_rate(-4),
		tax_amount(-2),
		net_pay(-3)
	{
	}

	Employee::~Employee()
	{
	}

	void Employee::set_id(long in_id)
	{
		id = in_id;
	}

	long Employee::get_id()
	{
		return id;
	}

	void Employee::set_first_name(std::string in_first_name)
	{
		first_name = in_first_name;
	}

	std::string Employee::get_first_name()
	{
		return first_name;
	}

	void Employee::set_last_name(std::string in_last_name)
	{
		last_name = in_last_name;
	}

	std::string Employee::get_last_name()
	{
		return last_name;
	}

	void Employee::print_headings()
	{
		std::cout << std::setw(45) << "-PAYROLL REPORT-" << std::endl;
		std::cout << "-----------------------------------------------------------------------" << std::endl;
		std::cout << " NAME      ID       HW OT  RT-PAY   OT-PAY   GROSS    TAX   NETPAY     " << std::endl;
		std::cout << "-----------------------------------------------------------------------" << std::endl;
	}

	void Employee::display() const
	{
		std::cout << std::setprecision(2) << std::setiosflags(std::ios::fixed | std::ios::showpoint);
		std::cout << std::setw(6) << last_name << std::setw(12) << id << std::setw(4) << hours_worked
			<< std::setw(3) << overtime_hours << std::setw(8) << regular_pay << std::setw(8) << overtime_pay << std::setw(8)
			<< gross_pay << std::setw(8) << tax_amount << std::setw(8) << net_pay << std::endl;
	}
}