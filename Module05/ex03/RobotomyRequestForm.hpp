/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:51:40 by abouazi           #+#    #+#             */
/*   Updated: 2023/09/13 15:40:30 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	target;
	public:
		RobotomyRequestForm(const std::string	t);
		~RobotomyRequestForm();

		RobotomyRequestForm(RobotomyRequestForm &cp);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &cp);

		void	execute(Bureaucrat const & executor) const;
};


# endif
