/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:32:14 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/02 14:51:44 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap : Constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap : Copy constructor called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoint = src._hitPoint;
		this->_energyPoint = src._energyPoint;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << "FragTrap : Assignement operators called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Default destructor called" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << BLUE << this->_name << "Gimme five ! Come on, right here! Up top! Don’t leave me hangin’, bro. Don’t make this awkward." << RESET << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (CheckEnergyAndHit())
	{
		std::cout << PURPLE << "FragTrap Unit " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage !" << RESET << std::endl;
		this->_energyPoint -= 1;
		std::cout << BLUE << "This action took 1 energy point, " << this->_energyPoint << " remaining" << RESET << std::endl;
	}
}