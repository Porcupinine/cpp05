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
	Bureaucrat() = delete;
	Bureaucrat(std::string name, int grade);
	~Bureaucrat() = default;
	Bureaucrat(const Bureaucrat& cp);
	Bureaucrat& operator=(const Bureaucrat& cp);

	std::string getName() const;
	size_t getGrade() const;
	void incrementGrade();
	void decrementGrade();
class GradeTooHighException : public std::exception {
public:
	const char * what () const noexcept override {
		return (const char *)"too smart for this!";
	}
};
class GradeTooLowException : public std:: exception {
public:
	const char * what () const noexcept override {
		return (const char*)"too dumb for this!";
	}
	};
private:
	const std::string m_name;
	int m_grade{};
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu);

//TODO throw header


#endif //CPP05_BUREAUCRAT_H
