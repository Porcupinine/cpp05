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
		ex02/ShrubberyCreationForm.cpp)
