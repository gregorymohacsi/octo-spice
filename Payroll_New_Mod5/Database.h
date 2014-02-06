// Database.h

#include <iostream>
#include <vector>
#include "Employee.h"

namespace Records
{
	const int kFirstEmployeeNumber = 1000;
	class Database
	{
	public:
		Database();
		~Database();

		Employee& add_employee(std::string in_first_name, std::string in_last_name);
		Employee& get_employee(int in_employee_number);
		Employee& get_employee(std::string inFirstName, std::string inLastName);
		void        display_all() const;
		/*void        display_current() const;
		void        display_former() const;*/
	protected:
		std::vector<Employee>  mEmployees;
		int         mNextEmployeeNumber;
	};
}
