// Database.cpp

#include <iostream>
#include <string>
#include <stdexcept>
#include <memory>
#include <algorithm>
#include "Database.h"
#include "Employee.h"

using namespace std;

struct compare_net_pay {
  inline bool operator()(shared_ptr<Records::Employee> a,
                         shared_ptr<Records::Employee> b) {
    return (a->net_pay < b->net_pay);
  }
};

namespace Records {

Database::Database() {
  // mNextEmployeeNumber = kFirstEmployeeNumber;
  shared_ptr<HourlyEmployee> theEmployee(new HourlyEmployee);
  mEmployees.push_back(theEmployee);
}

Database::~Database() {}

shared_ptr<Employee> Database::add_hourly_employee(string in_first_name,
                                                   string in_last_name,
                                                   double in_hourly_rate,
                                                   double in_hours_worked,
                                                   long in_id) {
  shared_ptr<HourlyEmployee> theEmployee(new HourlyEmployee);
  theEmployee->set_first_name(in_first_name);
  theEmployee->set_last_name(in_last_name);
  theEmployee->set_id(in_id);
  theEmployee->set_hourly_rate(in_hourly_rate);
  theEmployee->set_hours_worked(in_hours_worked);
  theEmployee->compute_regular_hours();
  theEmployee->compute_overtime_hours();
  theEmployee->compute_regular_pay();
  theEmployee->compute_overtime_pay();
  theEmployee->compute_gross_pay();
  theEmployee->compute_tax_rate();
  theEmployee->compute_net_pay();

  mEmployees.push_back(theEmployee);

  return mEmployees[mEmployees.size() - 1];
}

void Database::add_salaried_employee(string in_first_name, string in_last_name,
                                     double in_salary, double in_hours_worked,
                                     long in_id) {
  shared_ptr<SalaryEmployee> theEmployee(new SalaryEmployee);
  theEmployee->set_first_name(in_first_name);
  theEmployee->set_last_name(in_last_name);
  theEmployee->set_id(in_id);
  theEmployee->set_hours_worked(in_hours_worked);
  theEmployee->set_salary(in_salary);
  theEmployee->set_hourly_rate(in_salary);
  theEmployee->compute_regular_hours();
  theEmployee->compute_overtime_hours();
  theEmployee->compute_regular_pay();
  theEmployee->compute_overtime_pay();
  theEmployee->compute_gross_pay();
  theEmployee->compute_tax_rate();
  theEmployee->compute_net_pay();

  mEmployees.push_back(theEmployee);
}
shared_ptr<Employee> Database::get_employee(long in_employee_number) {
  for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter) {
    if ((*iter)->get_id() == in_employee_number) return *iter;
  }

  cerr << "No employee with employee number " << in_employee_number << endl;
  throw exception();
}

shared_ptr<Employee> Database::get_employee(string in_first_name,
                                            string in_last_name) {
  for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter) {
    if ((*iter)->get_first_name() == in_first_name &&
        (*iter)->get_last_name() == in_last_name) {
      return *iter;
    }
  }

  cerr << "No match with name " << in_first_name << " " << in_last_name << endl;
  throw exception();
}
void Database::display_all() {
  SalaryEmployee print;
  print.print_headings();
  for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter) {
    (*iter)->display();
  }
}

void Database::sort_net_pay() {
  sort(mEmployees.begin(), mEmployees.end(), compare_net_pay());
}
}  // namespace Records

