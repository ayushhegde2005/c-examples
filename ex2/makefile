CC = gcc
CFLAGS = -Wall -g 
TARGET = pingala_series
SCRS = pingala_series.c
OBJS = $(SCRS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
		        $(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
		        $(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(OBJS) $(TARGET)
