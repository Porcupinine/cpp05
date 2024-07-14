/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:02:06 by laura         #+#    #+#                 */
/*   Updated: 2024/01/26 14:02:06 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_FORM_H
#define CPP05_FORM_H


#include <string>
class Bureaucrat;

class AForm {
	public:
		AForm() = default;
		~AForm() = default;
		AForm(std::string  name, int gradeToSign, int gradeToExec);
		AForm(const AForm& cp) = default;
		AForm& operator=(const AForm& cp) = delete;

		std::string getName() const;
		bool getSignatureStatus() const;
		size_t getGradeToSign() const;
		size_t getGradeToExec() const;

		void beSigned(const Bureaucrat& bu) const;
		void signForm(const Bureaucrat &bu);
		void beExecuted(const Bureaucrat &bu) const;
		virtual void execute(Bureaucrat const & executor) const = 0;
		virtual void executeForm(AForm const & form) const = 0;

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
		std::string const m_name{};
		bool m_signature{false};
		size_t const m_gradeToSign{};
		size_t const m_gradeToExec{};
};
std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif //CPP05_FORM_H
