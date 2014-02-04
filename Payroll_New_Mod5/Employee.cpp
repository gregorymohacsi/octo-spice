// Payroll program version 7
// Module 5 of ESC course Introduction to C++ and OOP
// Classes
// Student: Gregory Mohacsi
// Instructor: Dr. Alireza Ebrahimi
// Object Oriented Payroll

#include <string>
#include "Employee.h"

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

void Employee::set_hours_worked(double in_hours_worked)
{
	hours_worked = in_hours_worked;
}

double Employee::get_hours_worked()
{
	return hours_worked;
}

void Employee::set_hourly_rate(double in_hourly_rate)
{
	hourly_rate = in_hourly_rate;
}

double Employee::get_hourly_rate()
{
	return hourly_rate;
}

void Employee::compute_overtime_hours()
{
	if (hours_worked > 40)
	{
		overtime_hours = hours_worked - 40;
	}
	else
		overtime_hours = 0;
}

double Employee::get_overtime_hours()
{
	return overtime_hours;
}

void Employee::set_regular_hours()
{
	if (hours_worked > 40)
	{
		regular_hours = 40;
	}
	else
		regular_hours = hours_worked;
}

double Employee::get_regular_hours()
{
	return regular_hours;
}

void Employee::compute_regular_pay()
{
	regular_pay = regular_hours * hourly_rate;
}

double Employee::get_regular_pay()
{
	return regular_pay;
}

void Employee::compute_overtime_pay()
{
	overtime_pay = overtime_hours * hourly_rate * 1.5;
}

double Employee::get_overtime_pay()
{
	return overtime_pay;
}

void Employee::compute_gross_pay()
{
	gross_pay = regular_pay + overtime_pay;
}

double Employee::get_gross_pay()
{
	return gross_pay;
}

void Employee::compute_tax_rate()
{
	tax_rate = (gross_pay * .30); // not correct will do for now
}

double Employee::get_tax_rate()
{
	return tax_rate;
}
void Employee::compute_net_pay()
{
	net_pay = gross_pay - tax_rate; // also not correct due to tax_rate being wrong
}

double Employee::get_net_pay()
{
	return net_pay;
}