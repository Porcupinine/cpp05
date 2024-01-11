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
#include <exception>

class Bureaucrat {
public:
	Bureaucrat() = default;
	Bureaucrat(std::string name, int grade);
	~Bureaucrat() = default;
	Bureaucrat(const Bureaucrat& cp);
	Bureaucrat& operator=(const Bureaucrat& cp);

	std::string getName();
	size_t getGrade();
	void incrementGrade();
	void decrementGrade();
class GradeTooHighException : public std::exception {
public:
	const char * what () {
		return (char *)"Too smart for this!\n";
	}
};
class GradeTooLowException : public std:: exception {
public:
	const char * what () {
		return (char*)"Too dumb for this!\n";
	}
	};
private:
	const std::string m_name;
	int m_grade; // 1-150
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu);


#endif //CPP05_BUREAUCRAT_H
