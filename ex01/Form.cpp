/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:16:06 by laura         #+#    #+#                 */
/*   Updated: 2024/01/26 14:16:06 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"
#include "Bureaucrat.h"

#include <utility>
#include <iostream>

Form::Form(std::string  name, int gradeToSign, int gradeToExec) : m_name(std::move(name)), m_gradeToSign(gradeToSign), m_gradeToExec(gradeToExec) {
}

Form::Form(const Form &cp) : m_name(cp.m_name), m_gradeToSign(cp.m_gradeToSign), m_gradeToExec(cp.m_gradeToExec) {
}

void Form::beSigned(const Bureaucrat &bu) const {
	if (bu.getGrade() > m_gradeToSign)
		throw GradeTooLowException();
}

void Form::signForm(const Bureaucrat &bu) {
	try {
		this->beSigned(bu);
	}
	catch (const std::exception &ex) {
		std::cout<<bu.getName()<<" couldn't sign "<< this->m_name << " because "<< ex.what() <<"\n";
		return;
	}
	m_signature = true;
	std::cout<<bu.getName()<<" signed "<< this->m_name<< "\n";
}

std::string Form::getName() const {
	return m_name;
}

bool Form::getSignatureStatus() const {
	return m_signature;
}

size_t Form::getGradeToSign() const {
	return m_gradeToSign;
}

size_t Form::getGradeToExec() const {
	return m_gradeToExec;
}
std::ostream& operator<<(std::ostream& os, const Form& form) {
	os<<"Form name: "<<form.getName()<<"\n"
	<<"Status: "<<form.getSignatureStatus()<<"\n"
	<<"Grade to sign: "<<form.getGradeToSign()<<"\n"
	<<"Grade to execute: "<<form.getGradeToExec()<<"\n";
	return os;
}