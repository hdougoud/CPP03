/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:24:34 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/02 12:33:44 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap CL4P("CL4P-TP");
	ClapTrap L4CK("L4CK-TP");
	ScavTrap SC4V("SC4V-TP");

	for (int i = 0; i < 10; i++)
		CL4P.beRepaired(1);
	CL4P.attack("L4CK-TP");
	L4CK.takeDamage(CL4P.getAttackDamage());
	SC4V.attack("L4CK-TP");
	L4CK.takeDamage(SC4V.getAttackDamage());
	SC4V.guardGate();
	return (0);
}

