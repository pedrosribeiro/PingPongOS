CFLAGS = -Wall

ifeq ($(DEBUG),1)
    CFLAGS += -DDEBUG
endif

ppos-test: ppos-core-aux.c pingpong-scheduler-srtf.c libppos_static.a
	gcc $(CFLAGS) -o ppos-test ppos-core-aux.c pingpong-scheduler-srtf.c libppos_static.a
