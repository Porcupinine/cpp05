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

#include <utility>

Form::Form(std::string  name, int gradeToSign, int gradeToExec) : m_name(std::move(name)), m_gradeToSign(gradeToSign), m_gradeToExec(gradeToExec) {

}

Form::Form(const Form &cp) {

}

Form& Form::operator=(const Form &cp) {
	return *this;
}

void Form::beSigned(const Bureaucrat &bu) {

}

std::string Form::getName() const {
	return m_name;
}

bool Form::getSignatureStatus() const {
	return m_signature;
}

int Form::getGradeToSign() const {
	return m_gradeToSign;
}

int Form::getGradeToExec() const {
	return m_gradeToExec;
}
