# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: laura <laura@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/18 18:53:32 by laura         #+#    #+#                  #
#    Updated: 2024/02/18 18:53:32 by laura         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#--------------------------------------------------------------------Executable
NAME	:= ex02

#----------------------------------------------------------------------Compiler
CC 		=  c++

#-------------------------------------------------------------------------Flags
CFLAGS	+= -Wextra -Wall -Werror
ASANFLAGS += -g -fsanitize=address -fsanitize=leak

#----------------------------------------------------------------Libraries path

#-----------------------------------------------------------------------Headers
HEADER	= includes/ShrubberyCreationForm.h includes/RobotomyRequestForm.h \
          includes/PresidentialPardonForm.h includes/AForm.h includes/Bureaucrat.h
#---------------------------------------------------------------------Libraries

#------------------------------------------------------------------------Source
SRC	:= src/Bureaucrat.cpp src/ShrubberyCreationForm.cpp \
       src/RobotomyRequestForm.cpp src/PresidentialPardonForm.cpp \
       src/main.cpp src/AForm.cpp
#-----------------------------------------------------------------------Objects
OBJS	:= ${SRC:.cpp=.o}

#---------------------------------------------------------------------Directory
OBJ_DIR := objs/
OBJECTS_PREFIXED := $(addprefix $(OBJ_DIR), $(OBJS))

#-------------------------------------------------------------------------Rules
all: $(NAME)


$(OBJ_DIR)%.o : %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJECTS_PREFIXED)
	@$(CC) $(OBJECTS_PREFIXED) -o $(NAME)
	@echo "ex02 is ready!"

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: clean all

.PHONY: all, clean, fclean, re