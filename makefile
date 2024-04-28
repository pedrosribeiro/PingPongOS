ppos-test: ppos-core-aux.c pingpong-preempcao.c libppos_static.a
	gcc -Wall -o ppos-test ppos-core-aux.c pingpong-preempcao.c libppos_static.a
