/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:00:39 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/02 18:08:25 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap : Constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	this->_name = src._name;
	std::cout << "DiamondTrap : Copy constructor called" << std::endl;
	return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoint = src._hitPoint;
		this->_energyPoint = src._energyPoint;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << "DiamondTrap : Assignement operators called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap : Default destructor called" << std::endl;
	return ;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << BLUE << "I am " << this->_name << " and " << ClapTrap::_name << RESET << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}