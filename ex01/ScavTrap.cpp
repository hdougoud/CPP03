/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:15:59 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/02 11:33:29 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap : Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap : Copy constructor called" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoint = src._hitPoint;
		this->_energyPoint = src._energyPoint;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << "ScavTrap : Assignement operators called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Default destructor called" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string &target)
{
	if (CheckEnergyAndHit())
	{
		std::cout << PURPLE << "ScavTrap Unit " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage !" << RESET << std::endl;
		this->_energyPoint -= 1;
		std::cout << BLUE << "This action took 1 energy point, " << this->_energyPoint << " remaining" << RESET << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << BLUE << this->_name << " is now in Gate keeper mode" << RESET << std::endl;
}