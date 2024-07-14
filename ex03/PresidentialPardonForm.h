/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.h                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/14 10:20:41 by laura         #+#    #+#                 */
/*   Updated: 2024/07/14 10:20:41 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_PRESIDENTIALPARDONFORM_H
#define CPP05_PRESIDENTIALPARDONFORM_H


#include <string>
#include "Bureaucrat.h"
#include "AForm.h"

class PresidentialPardonForm : public AForm {
public:
	PresidentialPardonForm() = delete;
	~PresidentialPardonForm() = default;
	explicit PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& cp) = default;
	PresidentialPardonForm& operator=(const PresidentialPardonForm& cp) = delete;

	static AForm* makePresidentialForm(const std::string& target);

	void execute(Bureaucrat const & executor) const override;
	void executeForm(AForm const & form) const override;

private:
	std::string m_target;
};


#endif //CPP05_PRESIDENTIALPARDONFORM_H
