bin: zombie.c
	gcc $< -o $@

.PHONY: run clean

run:
	./bin

clean:
	rm bin
