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
	AForm f1("AForm", 25, 11);
	f1.signForm(b1);
	f1.signForm(b2);
}