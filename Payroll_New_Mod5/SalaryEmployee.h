#ifndef __SALARYEMPLOYEE_H__
#define __SALARYEMPLOYEE_H__

#include "Employee.h"

namespace Records {
class SalaryEmployee : public Employee {
 public:
  virtual void set_salary(double);
  virtual double get_salary();

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

  SalaryEmployee();
  ~SalaryEmployee();

 protected:
  double salary;
};
}  // namespace Records
#endif
