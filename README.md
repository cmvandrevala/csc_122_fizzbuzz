# CSC 122 Fizz Buzz

This codebase uses the [fizz buzz](https://en.wikipedia.org/wiki/Fizz_buzz) game to introduce how we might test our code in a C++ project. It starts with a minimal working example, and then shows examples of how to test code using a driver function, `cout` statements, the `assert` function, and finally with Google Test.

## Requirements

* CMake

## Setup

Currently, the Makefile only supports building and running the code via `g++`. If you want to build the code using another compiler, you will have to do so manually.

Each `.cpp` file is prefixed with a number indicating the step in the lesson. You can build and run a step of the lesson using:

```bash
make 1
make 2
make 3
make 4
make 5
```

## Lesson Outline

### 0. Minimum Working Code

This file is fizz buzz code that has no tests associated with it.

* Why is it important to test code?
* What is the testing pyramid?

### 1. Manual Testing Via Driver

In this iteration, we test the code manually via a driver program. The program prompts a user for a value and then runs fizz buzz on it.

* Would this be considered a unit test, integration test, or acceptance test?
* What are some advantages of this method of testing?
* What are some shortcomings of this method of testing?

### 2. Testing Via Cout

In this step, we print many outputs of our fizz buzz function to the console rather than inputting values one by one via a driver function. This allows us to test a number of cases in an automated fashion rather than inputting them one by one. However, the comparison of the calculated values with the theoretical correct values is still done manually.

* What is the difference between manual and automated testing?
* How do you know what test cases to write? How might you use the ZOMBIES acronym?

### 3. Testing Via Cout (Improved)

We can improve our manual tests via `cout` by including information about the function being called as well as the output.

### 4. Testing Via Assert

In this step, we replace our `cout` code with `assert` statements. Using `assert` statements has the advantage that if an assertion fails, the test will exit loudly with an error message. This makes it difficult to miss errors as you are skimming the output from the console.

* What are some pros and cons of using `assert` statements when compared to a driver function?
* What are some shortcomings of testing via `assert` statements?

### 5. Testing With Google Test

In the final step of this lesson, we use CMake to build the app and test it using the Google Test framework. Generally, you will use a dedicated testing framework in a professional setting. You will rarely see testing via `assert` statements alone.

* What are some of the pros and cons of a testing framework when compared to a driver function?
* What are some testing frameworks available to C++ programmers?
