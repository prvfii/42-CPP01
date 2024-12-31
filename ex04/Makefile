# Nom de l'exécutable
NAME = replace

# Compilateur et options
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers sources
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

# Règles
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all