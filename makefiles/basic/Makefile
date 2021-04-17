# .DEFAULT_GOAL := generate

.PHONY: all say_hello generate

all: say_hello generate

say_hello:
	@echo "Hello world"
generate:
	@echo "Creating my empy text files..."
	touch file-{1..10}.txt
clean:
	@echo "Cleaning up"
	rm *.txt
