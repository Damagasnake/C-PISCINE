# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/22 13:27:28 by marcsan2          #+#    #+#              #
#    Updated: 2024/07/23 15:16:04 by davidma2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
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
