NAME = intern
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
	
SRCS_LIST = main.cpp\
	AForm.cpp\
	Bureaucrat.cpp\
	Intern.cpp\
	PresidentialPardonForm.cpp\
	RobotomyRequestForm.cpp\
	ShrubberyCreationForm.cpp

OBJS_DIR = objs
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS_LIST:.cpp=.o))

GREEN = \033[1;32m
RED = \033[0;31m
BLUE = \033[0;34m
RESET = \033[m

$(OBJS_DIR)/%.o : %.cpp
	mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(BLUE)Compiling$(RESET) $<... $(GREEN)Done$(RESET)"
	
all: $(NAME)

$(NAME):$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME)... $(GREEN)Ready$(RESET)"


clean:
	@rm -rf $(OBJS_DIR)
	@rm -f *_shrubbery
	@echo "$(RED)Removing$(RESET) object files... $(GREEN)Done$(RESET)"
	@echo "$(RED)Removing$(RESET) shrubbery files... $(GREEN)Done$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Removing$(RESET) $(NAME)... $(GREEN)Done$(RESET)"

re: fclean all	 

.PHONY: all clean fclean re

.SILENT: $(OBJS)