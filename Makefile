NAME = push_swap
NAME_CHECKER = checker
GCC = cc
HEADER_DIR = include
HEADER = include/push_swap.h
SRC = push_swap.c\
	utils.c\
	utils2.c\
	swap_func.c\
	swap_func2.c\
	quick_sort.c\
	low_solver.c\
	greater_than.c\
	sorting.c\
	rev_sorting.c\
	perfect_sort.c\
	opt_movements.c

SRCB = home_made_checker.c\
	get_next_line.c\
	swap_func.c\
	swap_func2.c\
	utils.c\
	utils2.c


OBJS = $(SRC:.c=.o)

OBJBS = $(SRCB:.c=.o)
all: $(OBJS)
	$(CC) $(FLAGS) -I$(HEADER_DIR) $(OBJS) -o $(NAME)
bonus: $(OBJBS)
	$(CC) $(FLAGS) -I$(HEADER_DIR) $(OBJBS) -o $(NAME_CHECKER)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -I$(HEADER_DIR) -c $< -o $@

clean:
	rm -rf $(OBJS) $(OBJBS)

fclean: clean
	rm -rf $(NAME) $(NAME_CHECKER)

re: fclean all

.PHONY : all clean fclean re bonus