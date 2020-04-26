// HourlyEmployee.cpp

#include "HourlyEmployee.h"

namespace Records {
HourlyEmployee::HourlyEmployee() : Employee() {}

HourlyEmployee::~HourlyEmployee() {}

void HourlyEmployee::set_hours_worked(double in_hours_worked) {
  hours_worked = in_hours_worked;
}

double HourlyEmployee::get_hours_worked() { return hours_worked; }

void HourlyEmployee::set_hourly_rate(double in_hourly_rate) {
  hourly_rate = in_hourly_rate;
}

double HourlyEmployee::get_hourly_rate() { return hourly_rate; }

void HourlyEmployee::compute_overtime_hours() {
  if (hours_worked > 40) {
    overtime_hours = hours_worked - 40;
  } else
    overtime_hours = 0;
}

double HourlyEmployee::get_overtime_hours() { return overtime_hours; }

void HourlyEmployee::compute_regular_hours() {
  if (hours_worked > 40) {
    regular_hours = 40;
  } else
    regular_hours = hours_worked;
}

double HourlyEmployee::get_regular_hours() { return regular_hours; }

void HourlyEmployee::compute_regular_pay() {
  regular_pay = regular_hours * hourly_rate;
}

double HourlyEmployee::get_regular_pay() { return regular_pay; }

void HourlyEmployee::compute_overtime_pay() {
  overtime_pay = overtime_hours * hourly_rate * 1.5;
}

double HourlyEmployee::get_overtime_pay() { return overtime_pay; }

void HourlyEmployee::compute_gross_pay() {
  gross_pay = regular_pay + overtime_pay;
}

double HourlyEmployee::get_gross_pay() { return gross_pay; }

void HourlyEmployee::compute_tax_rate() {
  tax_rate = .30;  // not correct will do for now
}

double HourlyEmployee::get_tax_rate() { return tax_rate; }
void HourlyEmployee::compute_net_pay() {
  tax_amount = gross_pay * tax_rate;
  net_pay =
      gross_pay - tax_amount;  // also not correct due to tax_rate being wrong
}

double HourlyEmployee::get_net_pay() { return net_pay; }
}  // namespace Records
