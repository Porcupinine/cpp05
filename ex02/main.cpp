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
#include "AForm.h"
#include "ShrubberyCreationForm.h"

int main () {
	Bureaucrat b1("Burro", 50);
	Bureaucrat b2("Crata", 10);
	ShrubberyCreationForm f1("Form");
	f1.execute(b1);
}