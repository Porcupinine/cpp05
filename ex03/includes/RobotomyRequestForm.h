/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.h                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/14 10:20:57 by laura         #+#    #+#                 */
/*   Updated: 2024/07/14 10:20:57 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_ROBOTOMYREQUESTFORM_H
#define CPP05_ROBOTOMYREQUESTFORM_H


#include <string>
#include <random>
#include "AForm.h"

class RobotomyRequestForm : public AForm {
public:
	RobotomyRequestForm() = delete;
	~RobotomyRequestForm() = default;
	explicit RobotomyRequestForm(std::string  target);
	RobotomyRequestForm(const RobotomyRequestForm& cp) = default;
	RobotomyRequestForm& operator=(const RobotomyRequestForm& cp) = delete;

	void execute(Bureaucrat const & executor) const override;
	void executeForm(AForm const & form) const override;
	static AForm* makeRobotomyForm(const std::string& target);

private:
	std::string m_target;
	mutable std::default_random_engine e1;
	mutable std::uniform_int_distribution<int> uniform_dist;
};


#endif //CPP05_ROBOTOMYREQUESTFORM_H
