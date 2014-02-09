#ifndef __HOURLYEMPLOYEE_H__
#define __HOURLYEMPLOYEE_H__

#include "Employee.h"

namespace Records
{

	class HourlyEmployee : public Records::Employee
	{
	public:

		virtual void set_hours_worked(double in_hours_worked);
		virtual double get_hours_worked();

		virtual void set_hourly_rate(double in_hourly_rate);
		virtual double get_hourly_rate();

		virtual void compute_overtime_hours();
		virtual double get_overtime_hours();

		virtual void compute_regular_hours();
		virtual double get_regular_hours();

		virtual void compute_regular_pay();
		virtual double get_regular_pay();

		virtual void compute_overtime_pay();
		virtual double get_overtime_pay();

		virtual void compute_gross_pay();
		virtual double get_gross_pay();

		virtual void compute_tax_rate();
		virtual double get_tax_rate();

		virtual void compute_net_pay();
		virtual double get_net_pay();

		HourlyEmployee();
		~HourlyEmployee();

	private:

	};
}
#endif