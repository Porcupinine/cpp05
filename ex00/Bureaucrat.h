/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/05 15:26:20 by laura         #+#    #+#                 */
/*   Updated: 2024/01/05 15:26:20 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_BUREAUCRAT_H
#define CPP05_BUREAUCRAT_H

#include <string>

class Bureaucrat {
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& cp);
	Bureaucrat& operator=(const Bureaucrat& cp);

	std::string getName();
	size_t getGrade();
private:
	const std::string m_name{"Hermes"};
	size_t m_grade; // 1-150
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu);


#endif //CPP05_BUREAUCRAT_H
