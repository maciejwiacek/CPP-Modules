NAME = megaphone

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

COMP = g++
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(COMP) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re