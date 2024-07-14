/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/14 10:21:26 by laura         #+#    #+#                 */
/*   Updated: 2024/07/14 10:21:26 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"
#include "Bureaucrat.h"
#include <utility>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string  target) : AForm("Robot", 72, 45), m_target(std::move(target)) {
	std::random_device r;
	e1 = std::default_random_engine(r());
	uniform_dist = std::uniform_int_distribution<int>(0, 1);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp) {

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cp) {
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (this->getSignatureStatus() && executor.getGrade() <= this->getGradeToExec()) {
		this->executeForm(*this);
		return;
	}
	throw GradeTooLowException();
}

void RobotomyRequestForm::executeForm(const AForm &form) const {
	std::cout<<"*Drill noise*\n";
	if (uniform_dist(e1) == 0) {
		std::cout<<this->m_target<<" is now robotomized!\n";
	} else {
		std::cout<<"Robotomy failed!\n";
	}
}
