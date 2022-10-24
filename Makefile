check:
	python3 cpplint.py --extensions=cpp src/*.cpp
	cppcheck --enable=all --suppress=missingIncludeSystem .

build:
	echo "Typo"

test:
	echo "Testing"
