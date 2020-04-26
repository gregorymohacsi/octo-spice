// Cub://github.com/gregorymohacsi/octo-spice.git Payroll program version 7
// Module 5 of ESC course Introduction to C++ and OOP
// Classes
// Student: Gregory Mohacsi
// Instructor: Dr. Alireza Ebrahimi
// Object Oriented Payroll

#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"

namespace Records {
Employee::Employee()
    : net_pay(-3),
      id(123456),
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
      tax_amount(-2) {}

Employee::~Employee() {}

void Employee::set_id(long in_id) { id = in_id; }

long Employee::get_id() { return id; }

void Employee::set_first_name(std::string in_first_name) {
  first_name = in_first_name;
}

std::string Employee::get_first_name() { return first_name; }

void Employee::set_last_name(std::string in_last_name) {
  last_name = in_last_name;
}

std::string Employee::get_last_name() { return last_name; }

void Employee::print_headings() {
  std::cout << std::setw(60) << "-PAYROLL REPORT-" << std::endl;
  std::cout << "FIRST NAME   LAST NAME   HR       HW   OTPAY     GROSS     TAX "
               "       NET    "
            << std::endl;
  std::cout << "==========   =========   ==       ==   =====     =====     === "
               "       ===    "
            << std::endl;
}

void Employee::display() const {
  std::cout << std::setprecision(2)
            << std::setiosflags(std::ios::fixed | std::ios::showpoint);
  std::cout << std::setiosflags(std::ios::left) << std::setw(13) << first_name
            << std::setiosflags(std::ios::left) << std::setw(12) << last_name
            << std::setiosflags(std::ios::left) << std::setw(1) << "$"
            << std::setw(8) << hourly_rate << std::setiosflags(std::ios::left)
            << std::setw(4) << hours_worked << std::setiosflags(std::ios::left)
            << std::setw(1) << "$" << std::setw(9) << overtime_pay
            << std::setiosflags(std::ios::left) << std::setw(1) << "$"
            << std::setw(8) << gross_pay << std::setiosflags(std::ios::left)
            << std::setw(1) << "$" << std::setw(9) << tax_amount
            << std::setiosflags(std::ios::left) << std::setw(1) << "$"
            << std::setw(9) << net_pay << std::endl;
}
}  // namespace Records
