CC= cc
CFLAGS= -Wall -Wextra -Werror
SRCS= main.c functions.c
OBJS= main.o functions.o
EXEC= rush02

all:$(EXEC)
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)