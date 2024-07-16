/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/14 10:19:22 by laura         #+#    #+#                 */
/*   Updated: 2024/07/14 10:19:22 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "Intern.h"

AForm *Intern::makeForm(const std::string& formName, const std::string& target) {
	form_pair AForms[3];
	AForms[0].str = "PresidentialPardon";
	AForms[0].func = &PresidentialPardonForm::makePresidentialForm;
	AForms[1].str = "RobotomyRequest";
	AForms[1].func = &RobotomyRequestForm::makeRobotomyForm;
	AForms[2].str = "ShrubberyCreation";
	AForms[2].func = &ShrubberyCreationForm::makeShrubberyForm;

	for (auto & AForm : AForms) {
		if (AForm.str == formName) {
			std::cout<<"Intern creates: "<<formName<<"\n";
			return AForm.func(target);
		}
	}
	std::cout<<"This intern have no imagination and this form does not exist!\n";
	return nullptr;
}
