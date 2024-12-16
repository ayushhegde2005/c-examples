CC = gcc
CFLAGS = -Wall -g
TARGET = palindrome
SCRS = palindrome.c
OBJS = $(SCRS:.c=.o)

all:$(TARGET)

$(TARGET): $(OBJS)
		$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(TARGET)
