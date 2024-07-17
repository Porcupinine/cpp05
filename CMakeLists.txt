cmake_minimum_required(VERSION 3.26)
project(cpp05)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex00
		ex00/Bureaucrat.cpp
		ex00/Bureaucrat.h
		ex00/main.cpp)

add_executable(ex01
		ex01/Form.cpp
		ex01/Form.h
		ex01/Bureaucrat.cpp
		ex01/main.cpp
)

add_executable(ex02
		ex02/src/AForm.cpp
		ex02/src/ShrubberyCreationForm.cpp
		ex02/includes/ShrubberyCreationForm.h
		ex02/src/main.cpp
		ex02/src/Bureaucrat.cpp
		ex02/src/ShrubberyCreationForm.cpp
		ex02/src/RobotomyRequestForm.cpp
		ex02/includes/RobotomyRequestForm.h
		ex02/src/PresidentialPardonForm.cpp
		ex02/includes/PresidentialPardonForm.h)

add_executable(ex03
		ex03/src/AForm.cpp
		ex03/src/ShrubberyCreationForm.cpp
		ex03/includes/ShrubberyCreationForm.h
		ex03/src/main.cpp
		ex03/src/Bureaucrat.cpp
		ex03/src/ShrubberyCreationForm.cpp
		ex03/src/RobotomyRequestForm.cpp
		ex03/includes/RobotomyRequestForm.h
		ex03/src/PresidentialPardonForm.cpp
		ex03/includes/PresidentialPardonForm.h
		ex03/src/Intern.cpp
		ex03/includes/Intern.h)