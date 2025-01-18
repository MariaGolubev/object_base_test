# Main variables
NAME = test

CC = cc
CFLAGS = -Wextra -Werror -Wall -Iinclude -MMD
LDFLAGS =

# Directories
SRCDIR = src
OBJDIR = obj

# Explicitly listed source files
SRC_MAIN = main.c
SRC_EXAMPLE = example/example_age.c example/example_delite.c \
              example/example_destroy.c example/example_init.c \
              example/example_new.c

# Combine all source files into one variable
SRC = $(addprefix $(SRCDIR)/, $(SRC_MAIN) $(SRC_EXAMPLE))

# Generate the list of object files from the source files
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Build rules
all: $(NAME)

# Link object files to create the final executable
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LDFLAGS)
	@echo "Linked $(NAME)"

# Compile source files to object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

# Clean up object files
clean:
	@rm -rf $(OBJDIR)
	@echo "Cleaned object files"

# Clean up and remove the final executable
fclean: clean
	@rm -f $(NAME)
	@echo "Removed $(NAME)"

# Rebuild the project from scratch
re: fclean all

# Create the object directory if it doesn't exist
$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Files that are not actual files (targets)
.PHONY: all clean fclean re
