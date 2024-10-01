CC = gcc
CFLAGS = -Wall -g
TARGET = main
SCRS = main.c
OBJS = $(SCRS:.C=.O)

all: $(TARGET)

$(TARGET): $(OBJS)
	        $(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	        $(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
