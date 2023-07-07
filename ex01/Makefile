NAME = phonebook

SRCS = main.cpp PhoneBook.cpp Contact.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++	

all : $(NAME)

$(NAME) : $(SRCS) 
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re