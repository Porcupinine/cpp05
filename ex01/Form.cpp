/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                           :+:    :+:            */
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

AForm::AForm(std::string  name, int gradeToSign, int gradeToExec) : m_name(std::move(name)), m_gradeToSign(gradeToSign), m_gradeToExec(gradeToExec) {
}

AForm::AForm(const AForm &cp) : m_name(cp.m_name), m_gradeToSign(cp.m_gradeToSign), m_gradeToExec(cp.m_gradeToExec) {
}

void AForm::beSigned(const Bureaucrat &bu) const {
	if (bu.getGrade() > m_gradeToSign)
		throw GradeTooLowException();
}

void AForm::signForm(const Bureaucrat &bu) {
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

std::string AForm::getName() const {
	return m_name;
}

bool AForm::getSignatureStatus() const {
	return m_signature;
}

size_t AForm::getGradeToSign() const {
	return m_gradeToSign;
}

size_t AForm::getGradeToExec() const {
	return m_gradeToExec;
}
std::ostream& operator<<(std::ostream& os, const AForm& form) {
	os<<"Form name: "<<form.getName()<<"\n"
	<<"Status: "<<form.getSignatureStatus()<<"\n"
	<<"Grade to sign: "<<form.getGradeToSign()<<"\n"
	<<"Grade to execute: "<<form.getGradeToExec()<<"\n";
	return os;
}