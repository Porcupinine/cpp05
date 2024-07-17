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
#include <iostream>
#include <utility>

Bureaucrat::Bureaucrat(const Bureaucrat &cp) : m_name(cp.m_name),  m_grade(cp.m_grade) {
	std::cout<<"Bureaucrat "<<m_name<<" is ready to make your life harder\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cp) {
	m_grade = cp.m_grade;
	auto& ref = const_cast<std::string&>(m_name);
	ref = cp.m_name; //TODO????
	return *this;
}

std::string Bureaucrat::getName() const {
	return m_name;
}

size_t Bureaucrat::getGrade() const {
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

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(std::move(name)) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		m_grade = grade;
	std::cout<<"Bureaucrat "<<m_name<<" is ready to make your life harder\n";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu) {
	os<<bu.getName()<<" grade is "<<bu.getGrade()<<"\n";
	return os;
}