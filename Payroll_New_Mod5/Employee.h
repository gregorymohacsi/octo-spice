#include <string>

	class Employee
	{
	public:

		void set_id(long);
		long get_id();

		void set_first_name(std::string in_first_name);
		std::string get_first_name();

		void set_last_name(std::string in_last_name);
		std::string get_last_name();

		void set_hours_worked(double in_hours_worked);
		double get_hours_worked();

		void set_hourly_rate(double in_hourly_rate);
		double get_hourly_rate();

		void compute_overtime_hours();
		double get_overtime_hours();

		void set_regular_hours();
		double get_regular_hours();

		void compute_regular_pay();
		double get_regular_pay();

		void compute_overtime_pay();
		double get_overtime_pay();

		void compute_gross_pay();
		double get_gross_pay();

		void compute_tax_rate();
		double get_tax_rate();

		void compute_net_pay();
		double get_net_pay();

		Employee();
		~Employee();

	private:
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
		double net_pay;
	};