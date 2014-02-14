//SalaryEmployee.cpp

#include "SalaryEmployee.h"

namespace Records
{
	SalaryEmployee::SalaryEmployee() : Employee(),
		salary(50000)
	{
	}

	SalaryEmployee::~SalaryEmployee()
	{
	}

	void SalaryEmployee::set_salary(double in_salary)
	{
		salary = in_salary;
	}

	double SalaryEmployee::get_salary()
	{
		return salary;
	}

	void SalaryEmployee::set_hours_worked(double in_hours_worked)
	{
		hours_worked = in_hours_worked;
	}

	double SalaryEmployee::get_hours_worked()
	{
		return hours_worked;
	}

	void SalaryEmployee::set_hourly_rate(double in_salary)
	{
		hourly_rate = (salary / 52) / 40;
	}

	double SalaryEmployee::get_hourly_rate()
	{
		return hourly_rate;
	}

	void SalaryEmployee::compute_overtime_hours()
	{
		if (hours_worked > 40)
		{
			overtime_hours = hours_worked - 40;
		}
		else
			overtime_hours = 0;
	}

	double SalaryEmployee::get_overtime_hours()
	{
		return overtime_hours;
	}

	void SalaryEmployee::compute_regular_hours()
	{
		if (hours_worked > 40)
		{
			regular_hours = 40;
		}
		else
			regular_hours = hours_worked;
	}

	double SalaryEmployee::get_regular_hours()
	{
		return regular_hours;
	}

	void SalaryEmployee::compute_regular_pay()
	{
		regular_pay = regular_hours * hourly_rate;
	}

	double SalaryEmployee::get_regular_pay()
	{
		return regular_pay;
	}

	void SalaryEmployee::compute_overtime_pay()
	{
		overtime_pay = overtime_hours * hourly_rate * 1.5;
	}

	double SalaryEmployee::get_overtime_pay()
	{
		return overtime_pay;
	}

	void SalaryEmployee::compute_gross_pay()
	{
		gross_pay = regular_pay + overtime_pay;
	}

	double SalaryEmployee::get_gross_pay()
	{
		return gross_pay;
	}

	void SalaryEmployee::compute_tax_rate()
	{
		tax_rate = .3; // not correct will do for now
	}

	double SalaryEmployee::get_tax_rate()
	{
		return tax_rate;
	}
	void SalaryEmployee::compute_net_pay()
	{
		tax_amount = gross_pay * tax_rate;
		net_pay = gross_pay - (gross_pay * tax_rate); // also not correct due to tax_rate being wrong
	}

	double SalaryEmployee::get_net_pay()
	{
		return net_pay;
	}
}