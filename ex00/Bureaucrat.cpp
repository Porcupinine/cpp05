/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/05 15:26:33 by laura         #+#    #+#                 */
/*   Updated: 2024/01/05 15:26:33 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const Bureaucrat &cp) {

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cp) {
	return *this;
}

std::string Bureaucrat::getName() {
	return m_name;
}

size_t Bureaucrat::getGrade() {
	return m_grade;
}

void Bureaucrat::incrementGrade() {
	if (m_grade == 1) {
		throw GradeTooHighException();
	} else
		m_grade--;
}

void Bureaucrat::decrementGrade() {
	if(m_grade == 150) {
		throw GradeTooLowException();
	} else
		m_grade++;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		m_grade = grade;
}
