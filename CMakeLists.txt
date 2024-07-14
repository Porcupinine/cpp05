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
		ex02/AForm.cpp
		ex02/ShrubberyCreationForm.cpp
		ex02/ShrubberyCreationForm.h
		ex02/main.cpp
		ex02/Bureaucrat.cpp
		ex02/ShrubberyCreationForm.cpp
		ex02/RobotomyRequestForm.cpp
		ex02/RobotomyRequestForm.h
		ex02/PresidentialPardonForm.cpp
		ex02/PresidentialPardonForm.h)

add_executable(ex03
		ex03/AForm.cpp
		ex03/ShrubberyCreationForm.cpp
		ex03/ShrubberyCreationForm.h
		ex03/main.cpp
		ex03/Bureaucrat.cpp
		ex03/ShrubberyCreationForm.cpp
		ex03/RobotomyRequestForm.cpp
		ex03/RobotomyRequestForm.h
		ex03/PresidentialPardonForm.cpp
		ex03/PresidentialPardonForm.h
		ex03/Intern.cpp
		ex03/Intern.h)