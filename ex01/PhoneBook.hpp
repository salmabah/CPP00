/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbahraou <sbahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:07:41 by sbahraou          #+#    #+#             */
/*   Updated: 2023/07/09 21:14:30 by sbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
    private :
        static int     index;
        Contact mesContacts[8];
    public :
        PhoneBook();
        void addNewContact();
        void printHeader();
        void printDetails();
        void printContacts();
        void searchContact();
        ~PhoneBook();
};

# endif

