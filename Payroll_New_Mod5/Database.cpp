// Database.cpp

#include <iostream>
#include <string>
#include <stdexcept>
#include "Database.h"

using namespace std;

namespace Records {

  Database::Database()
  {
    mNextEmployeeNumber = kFirstEmployeeNumber;
  }
  Database::~Database()
  {
  }
  Employee& Database::add_employee(string in_first_name, string in_last_name)
  {
    Employee theEmployee;
    theEmployee.set_first_name(in_first_name);
    theEmployee.set_last_name(in_last_name);
    theEmployee.set_id(mNextEmployeeNumber++);
    theEmployee.set_hourly_rate(in_hourly_rate);
	theEmployee.set_hours_worked(in_hours_worked);
	theEmployee.compute_regular_hours();
	theEmployee.compute_overtime_hours();
	theEmployee.compute_regular_pay();
	theEmployee.compute_overtime_pay();
	theEmployee.compute_gross_pay();
	theEmployee.compute_tax_rate();
	theEmployee.compute_net_pay();
    mEmployees.push_back(theEmployee);

    return mEmployees[mEmployees.size()-1];
  }
  Employee& Database::get_employee(int in_employee_number)
  {
      for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter)
      {
          if (iter->get_id() == in_employee_number)
              return *iter;
      }

      cerr << "No employee with employee number " << in_employee_number << endl;
      throw exception();
  }

  Employee& Database::get_employee(string in_first_name, string in_last_name)
  {
      for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter)
      {
          if (iter->get_first_name() == in_first_name &&
              iter->get_last_name() == in_last_name) {
                  return *iter;
          }
      }

      cerr << "No match with name " << in_first_name << " " << in_last_name << endl;
      throw exception();
  }
  void Database::display_all() const
  {
	  print_headings();
      for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter) {
          iter->display();
      }
  }

  /*void Database::display_current() const
  {
	  print_headings();
      for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter) {
          if (iter->getIsHired())
              iter->display();
      }
  }

  void Database::displayFormer() const
  {
      for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter) {
          if (!iter->getIsHired())
              iter->display();
      }
  }*/
}
