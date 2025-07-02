# ─────────────────────────────────
#             🎨 COLORS
# ─────────────────────────────────

RESET = \033[0m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
GRAY = \033[90m
UNDERLINE = \033[4m

# ─────────────────────────────────
#         🛠️ CONFIGURATION
# ─────────────────────────────────

NAME = libft.a

LIBC = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
	   ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy \
	   ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp

ADDITIONAL = ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup \
			 ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi \
			 ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
		ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

# ─────────────────────────────────
#      🚧 SETUP & DEPENDENCIES
# ─────────────────────────────────

SRCS = $(addsuffix .c, ${LIBC}) $(addsuffix .c, ${ADDITIONAL})

BONUS_SRCS = $(addsuffix _bonus.c, ${BONUS})

OBJS = ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS_SRCS:.c=.o}

DEPS =  $(OBJS:.o=.d) $(BONUS_OBJS:.o=.d)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ./ -MMD -MP
AR = ar
ARFLAGS = rcs

# ─────────────────────────────────
#        💽 COMPILATION RULE
# ─────────────────────────────────

.c.o:
	@printf "Compiling $(BLUE)%-25s$(RESET)" $<
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} && printf "✅\n" || printf "❌\n"

# ─────────────────────────────────
#            🎯 TARGETS
# ─────────────────────────────────

all:	$(NAME)

$(NAME):	$(OBJS)
	@echo "$(MAGENTA)⏳ Archiving to $(NAME)$(RESET)"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(GREEN)✅ $(NAME) created$(RESET)"

bonus:	all $(BONUS_OBJS)
	@$(AR) $(ARFLAGS) $(NAME) $(BONUS_OBJS)
	@echo "$(GREEN)✅ libft.a $(UNDERLINE)with Bonus$(RESET)$(GREEN) created$(RESET)"
	@echo "$(CYAN)🔎 $(words $(BONUS_OBJS)) bonus functions added$(RESET)"

# ─────────────────────────────────
#            🧹 CLEANING
# ─────────────────────────────────

clean:
	@rm -f $(OBJS) $(BONUS_OBJS) $(OBJS:.o=.d) $(BONUS_OBJS:.o=.d)
	@echo "$(YELLOW)🧹 Objects and Dependencies deleted (clean)$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)❌ $(NAME) removed (fclean)$(RESET)"

re:	fclean all

# ─────────────────────────────────
#         🌐 HELP & FOOTER
# ─────────────────────────────────

help:
	@echo "$(BLUE)Available targets:$(RESET)"
	@echo "$(YELLOW)all      $(RESET)– Build libft.a"
	@echo "$(YELLOW)bonus    $(RESET)– Build with bonus"
	@echo "$(YELLOW)clean    $(RESET)– Delete .o files"
	@echo "$(YELLOW)fclean   $(RESET)– Full clean (including libft.a)"
	@echo "$(YELLOW)re       $(RESET)– fclean + all"

-include $(DEPS)

.PHONY: all clean fclean re bonus
