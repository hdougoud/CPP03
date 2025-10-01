/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:24:29 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/01 13:29:14 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap : Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &src) : _name(src._name), _hitPoint(src._hitPoint)
	, _energyPoint(src._energyPoint), _attackDamage(src._attackDamage)
{
	std::cout << "ClapTrap : Copy constructor called" << std::endl;
	return ;
}

ClapTrap ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoint = src._hitPoint;
		this->_energyPoint = src._energyPoint;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << "ClaptTrap : Assignement operators called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Default destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	if (!this->_hitPoint || !this->_energyPoint)
	{
		//add string
		return;
	}
	std::cout << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	this->_energyPoint -=1;
	std::cout << "This action took 1 energy point, " << this->_energyPoint << " remaining" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hitPoint)
	{
		std::cout << RED << this->_name << " is already dead" << RESET << std::endl;
		return;
	}
	std::cout << RED << this->_name << " took " << amount << " damage points !" << RESET << std::endl;
	if (amount > this->_hitPoint)
		amount = this->_hitPoint;
	std::cout << this->_name << " has " << this->_hitPoint << " hit point remaining" << std::endl;
	if (this->_hitPoint == 0)
		std::cout << RED << this->_name << " is dead" << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
		
	if (!this->_hitPoint || !this->_energyPoint)
	{
		//add string
		return ;
	}
	std::cout << GREEN << this->_name << " has been repaired by " << amount << " point !" << RESET << std::endl;
	this->_energyPoint =-1;
}
