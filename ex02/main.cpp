/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:24:34 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/02 14:51:19 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap CL4P("CL4P-TP");
	ScavTrap SC4V("SC4V-TP");
	FragTrap FR4G("FR4G-TP");

	CL4P.attack("SC4V-TP");
	SC4V.takeDamage(CL4P.getAttackDamage());
	SC4V.attack("CL4P-TP");
	CL4P.takeDamage(SC4V.getAttackDamage());
	CL4P.beRepaired(10);
	FR4G.attack("SC4V-TP");
	SC4V.takeDamage(FR4G.getAttackDamage());
	FR4G.highFivesGuys();
	SC4V.guardGate();
	return (0);
}
