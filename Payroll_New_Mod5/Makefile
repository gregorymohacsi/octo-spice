EXE = main 
OBJS = Employee.o HourlyEmployee.o Database.o SalaryEmployee.o UserInterface.o
CLEAN_RM =

include ../_make/generic.mk

# Directory-specific rules:
Employee: Employee.cpp
	$(LD) $^ $(LDFLAGS) .objs/Employee.o -o $@

HourlyEmployee: HourlyEmployee.cpp
	$(LD) $^ $(LDFLAGS) .objs/HourlyEmployee.o -o $@

Database: Database.cpp
	$(LD) $^ $(LDFLAGS) .objs/Database.o -o $@

SalaryEmployee: SalaryEmployee.cpp
	$(LD) $^ $(LDFLAGS) .objs/SalaryEmployee.o -o $@

UserInterface: UserInterface.cpp
	$(LD) $^ $(LDFLAGS) .objs/SalaryEmployee.o -o $@

all: main
CLEAN_RM += Employee HourlyEmployee Database SalaryEmployee UserInterface
