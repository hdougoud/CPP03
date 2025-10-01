/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:24:34 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/01 17:08:00 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap		CL4P("CL4P-TP");
	ClapTrap		L4CK("L4CK-TP");
	ClapTrap		VR0N1CA("VR-0N1CA");

	for (int i = 0; i < 10; i++)
		CL4P.attack("L4CK-TP");
	CL4P.beRepaired(5);
	L4CK.takeDamage(5);
	L4CK.beRepaired(2);
	VR0N1CA.attack("L4CK-TP");
	L4CK.takeDamage(10);
	L4CK.beRepaired(5);
	VR0N1CA.beRepaired(7);
	VR0N1CA.beRepaired(5);
	VR0N1CA.attack("L4CK-TP");
	L4CK.takeDamage(5);
	return (0);
}

