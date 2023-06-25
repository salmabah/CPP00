NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98
	
all : $(NAME)

$(NAME) : $(SRC) Makefile
	@c++ $(FLAGS) $(SRCS) -o $(NAME)

bonus : $(NAME_BNS)

$(NAME_BNS) : $(SRCSBNS) $(HEADER_BNS) Makefile
	@$(CC) $(FLAGS) $(SRCSBNS) -o $(NAME_BNS)

clean :
	@rm -rf $(NAME)
