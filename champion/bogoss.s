.name "bogoss"
.comment "I WILL CRUSH YOU"

sti r1, %:bubble_machine, %1
ld %42, r2

forking_loop:
		fork %:bubble_machine
		zjmp %:forking_loop

bubble_machine:
	live %42
	zjmp %:bubble_machine
