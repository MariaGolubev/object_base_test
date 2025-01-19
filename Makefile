# Main variables
NAME = test

CC = cc
CFLAGS = -Wextra -Werror -Wall -Iinclude -MMD -O3
LDFLAGS = $(LIBFT)

# Directories
SRCDIR = src
OBJDIR = obj

LIBFTDIR = libft
LIBFT = $(LIBFTDIR)/libft.a

# Explicitly listed source files
SRC_MAIN = main.c

SRC_EXAMPLE = example/example_age.c example/example_delite.c \
	example/example_destroy.c example/example_init.c \
	example/example_new.c

SRC_BTREEMAP = btreemap/btreemap_node_delone.c btreemap/btreemap_delete.c \
	btreemap/btreemap_get.c btreemap/btreemap_len.c \
	btreemap/btreemap_node_clean.c btreemap/btreemap_node_new.c \
	btreemap/btreemap_del.c btreemap/btreemap_destroy.c \
	btreemap/btreemap_init.c btreemap/btreemap_new.c \
	btreemap/btreemap_node_extract.c btreemap/btreemap_set.c

SRC_HASHMAP = hashmap/hashmap_del.c hashmap/hashmap_destroy.c \
	hashmap/hashmap_get.c hashmap/hashmap_init.c \
	hashmap/hashmap_len.c hashmap/hashmap_new.c \
	hashmap/hashmap_set.c hashmap/hashmap_delete.c

# Combine all source files into one variable
SRC = $(addprefix $(SRCDIR)/, $(SRC_MAIN) $(SRC_EXAMPLE) $(SRC_BTREEMAP) $(SRC_HASHMAP))

# Generate the list of object files from the source files
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Build rules
all: $(NAME)

# Link object files to create the final executable
$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LDFLAGS)
	@echo "Linked $(NAME)"

# Compile source files to object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

$(LIBFT):
	@make -C $(LIBFTDIR)

# Clean up object files
clean:
	@rm -rf $(OBJDIR)
	@make -C $(LIBFTDIR) clean
	@echo "Cleaned object files"

# Clean up and remove the final executable
fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFTDIR) fclean
	@echo "Removed $(NAME)"

# Rebuild the project from scratch
re: fclean all

# Create the object directory if it doesn't exist
$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Files that are not actual files (targets)
.PHONY: all clean fclean re
