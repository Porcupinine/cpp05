/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/09 14:03:43 by laura         #+#    #+#                 */
/*   Updated: 2024/01/09 14:03:43 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int main () {
	Bureaucrat b1("Burro", 150);
	Bureaucrat b2("Crata", 1);

	AForm *f0 = Intern::makeForm("PresidentialPardon", "PretyPlease");

	ShrubberyCreationForm f1("Berry");
	RobotomyRequestForm f2("Will");
	PresidentialPardonForm f3("Press");

	f0->signForm(b2);
	f0->execute(b2);

	f1.signForm(b2);
	f1.execute(b2);

	f2.signForm(b2);
	f2.execute(b2);

	f3.signForm(b2);
	f3.execute(b2);

	delete f0;
}

//TODO segfault if exception