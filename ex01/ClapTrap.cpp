/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:24:29 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/03 15:40:37 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap : Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap : Ordinary constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &src) : _name(src._name), _hitPoint(src._hitPoint)
	, _energyPoint(src._energyPoint), _attackDamage(src._attackDamage)
{
	std::cout << "ClapTrap : Copy constructor called" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
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
	if (CheckEnergyAndHit())
	{
		std::cout << PURPLE << "ClapTrap Unit " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage !" << RESET << std::endl;
		this->_energyPoint -= 1;
		std::cout << BLUE << "This action took 1 energy point, " << this->_energyPoint << " remaining" << RESET << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hitPoint)
	{
		std::cout << RED << this->_name << " is already dead !" << RESET << std::endl;
		return;
	}
	std::cout << RED << this->_name << " took " << amount << " damage points !" << RESET << std::endl;
	if (amount > this->_hitPoint)
		amount = this->_hitPoint;
	this->_hitPoint -= amount;
	std::cout << BLUE << this->_name << " has " << this->_hitPoint << " hit point remaining" << RESET << std::endl;
	if (this->_hitPoint == 0)
		std::cout << RED << this->_name << " is dead" << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (CheckEnergyAndHit())
	{
		this->_energyPoint -= 1;
		if ((this->_hitPoint + amount) > (unsigned int)MAX_HIT_POINT)
			amount = (unsigned int)MAX_HIT_POINT - this->_hitPoint;
		this->_hitPoint += amount;
		std::cout << GREEN << this->_name << " has been repaired with " << amount << " hit point, " << "actual " << this->_hitPoint << RESET << std::endl;
		std::cout << BLUE << "This action took 1 energy point, " << this->_energyPoint << " remaining" << RESET << std::endl;
	}
}

unsigned int	ClapTrap::getAttackDamage(void)
{
	return (this->_attackDamage);
}

bool	ClapTrap::CheckEnergyAndHit(void)
{
	if (!this->_hitPoint || !this->_energyPoint)
	{
		if (!this->_hitPoint)
			std::cout << RED << "Impossible action, " << this->_name << " is dead" << RESET << std::endl;
		else if (!this->_energyPoint)
			std::cout << YELLOW << this->_name << " have no more energy !" << RESET << std::endl;
		return (false);
	}
	return (true);
}