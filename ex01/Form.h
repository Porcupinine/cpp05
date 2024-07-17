/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.h                                             :+:    :+:            */
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

class Form {
	public:
		Form() = default;
		~Form() = default;
		Form(std::string  name, int gradeToSign, int gradeToExec);
		Form(const Form& cp);
		Form& operator=(const Form& cp) = delete;

		std::string getName() const;
		bool getSignatureStatus() const;
		size_t getGradeToSign() const;
		size_t getGradeToExec() const;

		void beSigned(const Bureaucrat& bu) const;
		void signForm(const Bureaucrat &bu);

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
std::ostream& operator<<(std::ostream& os, const Form& form);

#endif //CPP05_FORM_H
