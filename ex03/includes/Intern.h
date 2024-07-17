/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/14 10:20:20 by laura         #+#    #+#                 */
/*   Updated: 2024/07/14 10:20:20 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_INTERN_H
#define CPP05_INTERN_H

#include "AForm.h"

class Intern {
public:
	Intern() = default;
	~Intern() = default;
	Intern(const Intern& cp) = default;
	Intern& operator=(const Intern& cp) = delete;

	static AForm* makeForm(const std::string& formName, const std::string& target);
};

typedef struct my_pair {
	std::string str;
	AForm* (*func) (const std::string&);
}form_pair;

#endif //CPP05_INTERN_H
