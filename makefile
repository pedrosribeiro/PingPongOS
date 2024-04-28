ppos-test: ppos-core-aux.c pingpong-preempcao.c libppos_static.a
	gcc -o ppos-test ppos-core-aux.c pingpong-preempcao.c libppos_static.a
