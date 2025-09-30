/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:24:29 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/30 16:04:37 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap : Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &src) : _hitPoint(src._hitPoint), _energyPoint(src._energyPoint), _attackDamage(src._attackDamage)
{
	return ;
}

ClapTrap ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		this->_hitPoint = src._hitPoint;
		this->_energyPoint = src._energyPoint;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << "ClaptTrap : Assignement operators called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Default destructor called" << std::endl;
	return ;
}