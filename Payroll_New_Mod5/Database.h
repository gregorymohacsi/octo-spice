#ifndef __DATABASE_H__
#define __DATABASE_H__

// Database.h

#include <iostream>
#include <vector>
#include <memory>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalaryEmployee.h"

namespace Records {
const int kFirstEmployeeNumber = 1000;
class Database {
 public:
  Database();
  ~Database();

  void add_salaried_employee(std::string in_first_name,
                             std::string in_last_name, double in_salary,
                             double in_hours_worked, long in_id);

  std::shared_ptr<Employee> add_hourly_employee(std::string in_first_name,
                                                std::string in_last_name,
                                                double in_hourly_rate,
                                                double in_hours_worked,
                                                long in_id);

  std::shared_ptr<Employee> get_employee(long in_employee_number);

  std::shared_ptr<Employee> get_employee(std::string inFirstName,
                                         std::string inLastName);

  void display_all();

  void sort_net_pay();

 protected:
  std::vector<std::shared_ptr<Employee>> mEmployees;
  // int         mNextEmployeeNumber;
};
}  // namespace Records
#endif  // !__DATABASE_H__
