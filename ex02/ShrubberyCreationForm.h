/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.h                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/12 15:40:03 by laura         #+#    #+#                 */
/*   Updated: 2024/03/12 15:40:03 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_SHRUBBERYCREATIONFORM_H
#define CPP05_SHRUBBERYCREATIONFORM_H

#include "AForm.h"

class ShrubberyCreationForm : public AForm {
public:
	ShrubberyCreationForm() = default;
	~ShrubberyCreationForm() = default;
	explicit ShrubberyCreationForm (std::string target);
	void execute(Bureaucrat const & executor) const override;
	void executeForm(AForm const & form) const override;
private:
	std::string m_target;
};


#endif //CPP05_SHRUBBERYCREATIONFORM_H
