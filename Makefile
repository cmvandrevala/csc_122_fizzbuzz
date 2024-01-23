0: clean
	g++ 0_minimal_working_code.cpp fizzbuzz.cpp -o 0_minimal_working_code
	@echo
	./0_minimal_working_code

1: clean
	g++ 1_manual_testing_via_driver.cpp fizzbuzz.cpp -o 1_manual_testing_via_driver
	@echo
	./1_manual_testing_via_driver

2: clean
	g++ 2_testing_via_cout.cpp fizzbuzz.cpp -o 2_testing_via_cout
	@echo
	./2_testing_via_cout

3: clean
	g++ 3_testing_via_cout_improved.cpp fizzbuzz.cpp -o 3_testing_via_cout_improved
	@echo
	./3_testing_via_cout_improved

4: clean
	g++ 4_testing_via_assert.cpp fizzbuzz.cpp -o 4_testing_via_assert
	@echo
	./4_testing_via_assert

# Yes, I know it is really weird to call CMake from a Makefile. The goal of CMake is to make Makefiles.
# This is for educational purposes only. Don't do this in production :P
5: clean
	cmake -S . -B build
	cmake --build build
	cd build && ctest --output-on-failure

clean:
	@rm -f 0_minimal_working_code
	@rm -f 1_manual_testing_via_driver
	@rm -f 2_testing_via_cout
	@rm -f 3_testing_via_cout_improved
	@rm -f 4_testing_via_assert
	@rm -rf build
