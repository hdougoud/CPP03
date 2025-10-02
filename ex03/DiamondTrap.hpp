/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:00:42 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/02 17:57:45 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap &operator=(const DiamondTrap &src);
		~DiamondTrap();
		void whoAmI(void);
		void attack(const std::string &target);
	private:
		std::string	_name;
};

#endif