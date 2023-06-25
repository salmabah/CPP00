/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbahraou <sbahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:07:41 by sbahraou          #+#    #+#             */
/*   Updated: 2023/06/25 05:22:11 by sbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
    private :
        static int     index;
        Contact mesContacts[8];
    public :
        PhoneBook();
        void addNewContact();
        Contact search();
        ~PhoneBook();
};

# endif

