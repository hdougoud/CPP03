/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:24:34 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/03 15:47:54 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap D14D("D14D-TP");
	DiamondTrap D24D;

	D14D.attack("D14D-TP");
	D14D.takeDamage(D14D.getAttackDamage());
	D14D.guardGate();
	D14D.beRepaired(D14D.getAttackDamage());
	D14D.highFivesGuys();
	D14D.whoAmI();
	D24D.whoAmI();
	return (0);
}
