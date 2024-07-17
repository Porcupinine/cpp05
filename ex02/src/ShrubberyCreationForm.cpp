/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/12 15:42:10 by laura         #+#    #+#                 */
/*   Updated: 2024/03/12 15:42:10 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <utility>
#include <iostream>
#include "../includes/ShrubberyCreationForm.h"
#include "../includes/Bureaucrat.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137), m_target(std::move(target)) {
}

void ShrubberyCreationForm::executeForm(const AForm &form) const{
	std::ofstream out(m_target + "_" +form.getName());
	if(!out.is_open()) {
		std::cout<<"Can't open file";
	}
	out << "                       /\\                               \n";
	out << "                      /  \\                              \n";
	out << "                     /    \\                             \n";
	out << "                    /      \\                            \n";
	out << "                   /        \\                           \n";
	out << "                  /_        _\\                          \n";
	out << "                    /       \\                           \n";
	out << "                   /         \\                          \n";
	out << "                  /           \\                         \n";
	out << "                 /             \\                        \n";
	out << "                /___         ___\\                       \n";
	out << "                    /       \\                           \n";
	out << "                   /         \\                          \n";
	out << "                  /           \\                         \n";
	out << "                 /             \\                        \n";
	out << "                /               \\                       \n";
	out << "               /_________________\\                      \n";
	out << "                      |   |                              \n";
	out << "                      |   |                              \n";
	out << "                      |   |                              \n";
	out << "______________________|___|______________________________\n";
	out.close();
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->getSignatureStatus() && executor.getGrade() <= this->getGradeToExec()) {
		this->executeForm(*this);
		return;
	}
	throw GradeTooLowException();
}
