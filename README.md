# 💻 C++ Notes

Welcome! 👋 This repository is a collection of beginner-friendly C++ practice programs and notes. Concepts are explained with simple examples and Hinglish comments. 🇮🇳

## 📚 What's inside?

| File | Topic |
| --- | --- |
| [`array.cpp`](./array.cpp) | Creating arrays, accessing elements, checking array size, and reading/printing values with loops |
| [`array_question.cpp`](./array_question.cpp) | Finding the smallest and largest values in an array |

You'll also find a few visual notes for loops:

- 🔁 `for loop.png`
- 🔄 `while loop.png`
- ✅ `ternary operator.png`

## 🧠 Array basics

- An array stores multiple values of the **same type**.
- Array indexes start at **0** — the first element is at `array[0]`.
- Use `sizeof(array) / sizeof(array[0])` to get the number of elements in a fixed-size array.
- Loops make it easy to visit, read, and print array elements.

## 🚀 Run a program

With a C++ compiler such as `g++`, compile and run a file from this folder:

```bash
g++ -std=c++17 array_question.cpp -o array_question
```

On Windows, run:

```powershell
.\array_question.exe
```

To try the other example, replace `array_question.cpp` with `array.cpp` and the output name with `array`.

> 💡 `array.cpp` uses a variable-length array for user-provided input size. Variable-length arrays are not part of standard C++; use `std::vector` for a standard C++ solution when the size is known only at runtime.

## 🌱 Keep practicing!

Try changing the array values, then write your own small programs to practice loops and array operations. Happy coding! 🎉
