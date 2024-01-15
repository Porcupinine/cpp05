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

int main () {
	{
		std::cout<<"Bureaucrat creation tests\n";
		try {
			Bureaucrat b1("X", 199);
		}
		catch (const std::exception &ex) {
			std::cout << "X " << ex.what() << "\n";
		}
		try {
			Bureaucrat b2("Y", -1);
		}
		catch (const std::exception &ex) {
			std::cout << "Y " << ex.what() << "\n";
		}
		try {
			Bureaucrat b3("Z", 1);
		}
		catch (const std::exception &ex) {
			std::cout << "z " << ex.what() << "\n";
		}
		try {
			Bureaucrat b4("A", 150);
		}
		catch (const std::exception &ex) {
			std::cout << "A " << ex.what() << "\n";
		}
	}
	{
		std::cout<<"Decrement tests\n";
		Bureaucrat b1("Z", 1);
		Bureaucrat b2("A", 150);
		try {
			b1.decrementGrade();
		}
		catch (const std::exception &ex) {
			std::cout << "Z " << ex.what() << "\n";
		}
		try {
			b2.decrementGrade();
		}
		catch (const std::exception &ex) {
			std::cout << "A " << ex.what() << "\n";
		}
	}
	{
		std::cout<<"Increment tests\n";
		Bureaucrat b1("Z", 1);
		Bureaucrat b2("A", 150);
		try {
			b1.incrementGrade();
		}
		catch (const std::exception &ex) {
			std::cout << "Z " << ex.what() << "\n";
		}
		try {
			b2.incrementGrade();
		}
		catch (const std::exception &ex) {
			std::cout << "A " << ex.what() << "\n";
		}
	}
	{
		std::cout<<"Get grade tests\n";
		Bureaucrat b1("Z", 1);
		Bureaucrat b2("A", 150);
	}
}