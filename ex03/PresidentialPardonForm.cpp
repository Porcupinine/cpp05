/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/14 10:20:31 by laura         #+#    #+#                 */
/*   Updated: 2024/07/14 10:20:31 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Pardon?", 25, 5), m_target(std::move(target)){
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (this->getSignatureStatus() && executor.getGrade() <= this->getGradeToExec()) {
		this->executeForm(*this);
	}
	else
		throw GradeTooLowException();
}

void PresidentialPardonForm::executeForm(const AForm &form) const {
	std::cout<<m_target<<" has been pardoned by Zaphod Beeblebrox!\n";
}

AForm *PresidentialPardonForm::makePresidentialForm(const std::string &target) {
		return new PresidentialPardonForm(target);
}
