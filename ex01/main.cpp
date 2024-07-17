/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/09 14:03:43 by laura         #+#    #+#                 */
/*   Updated: 2024/01/09 14:03:43 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.h"
#include "Form.h"

int main () {
	Bureaucrat b1("Burro", 50);
	Bureaucrat b2("Crata", 10);
	Form f1("Form", 25, 11);
	std::cout<<"This is the form\n"<<f1<<"\n";
	f1.signForm(b1);
	f1.signForm(b2);
}