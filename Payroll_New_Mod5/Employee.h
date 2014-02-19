#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#include <string>

namespace Records
{
	class Employee
	{
	public:

		virtual void set_id(long);
		virtual long get_id();

		virtual void set_first_name(std::string in_first_name);
		virtual std::string get_first_name();

		virtual void set_last_name(std::string in_last_name);
		virtual std::string get_last_name();

		virtual void set_hours_worked(double in_hours_worked)=0;
		virtual double get_hours_worked()=0;

		virtual void set_hourly_rate(double in_hourly_rate)=0;
		virtual double get_hourly_rate()=0;

		virtual void compute_overtime_hours()=0;
		virtual double get_overtime_hours()=0;

		virtual void compute_regular_hours()=0;
		virtual double get_regular_hours()=0;

		virtual void compute_regular_pay()=0;
		virtual double get_regular_pay()=0;

		virtual void compute_overtime_pay()=0;
		virtual double get_overtime_pay()=0;

		virtual void compute_gross_pay()=0;
		virtual double get_gross_pay()=0;

		virtual void compute_tax_rate()=0;
		virtual double get_tax_rate()=0;

		virtual void compute_net_pay()=0;
		virtual double get_net_pay()=0;

		virtual void print_headings();
		virtual void display() const;


		Employee();
		virtual ~Employee();

		double net_pay;

	protected:
		long int id;
		std::string first_name;
		std::string last_name;

		double hours_worked;
		double hourly_rate;
		double overtime_hours;
		double regular_hours;
		double regular_pay;
		double overtime_pay;
		double gross_pay;
		double tax_rate;
		double tax_amount;
		
	};
}
#endif
