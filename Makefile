NAME = push_swap
GCC = cc
HEADER_DIR = include
HEADER = include/push_swap.h
SRC = push_swap.c\
	utils.c\
	utils2.c\
	swap_func.c\
	swap_func2.c\
	quick_sort.c
#SRCB = minitalk_utils_bonus.c

OBJS = $(SRC:.c=.o)
#OBJBS = $(SRCB:.c=.o)
all: $(OBJS)
	$(CC) $(FLAGS) -I$(HEADER_DIR) $(OBJS) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -I$(HEADER_DIR) -c $< -o $@

clean:
	rm -rf $(OBJS) $(OBJBS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus