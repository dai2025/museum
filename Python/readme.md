## Python unit test sample

Here's an example of using the assertRaises method in the unittest library in Python to test that a certain exception is raised:

```ruby
import unittest

def divide(a, b):
    if b == 0:
        raise ValueError("division by zero")
    return a / b

class TestDivide(unittest.TestCase):
    def test_division(self):
        result = divide(10, 5)
        self.assertEqual(result, 2.0)
        
    def test_division_by_zero(self):
        with self.assertRaises(ValueError):
            divide(10, 0)
```

In this example, the test_division_by_zero method uses the assertRaises method to test that a ValueError is raised when trying to divide by zero. If a ValueError is not raised, the test will fail.

```ruby
import unittest

class Test(unittest.TestCase):
        def test1(self):
                s = 'hello world'
                self.assertEqual(s.split(), ['Hello', 'world!'])
                with self.assertRaises(TypeError):
                        s.split(2)
if __name__ == 'main':
        unittest.main()
```

## ```python3 -m unittest```

python3 -m unittest is a command used to run tests written using the unittest library in Python 3. The -m option is used to run a library module as a script, and unittest is the name of the library module.

When you run this command, unittest will discover and run all the test cases in your Python files that start with the word test. For example, if you have a file named test_example.py that contains tests written using unittest, you can run those tests by executing the following command:

When you run this command, unittest will discover and run all the test cases in your Python files that start with the word test. For example, if you have a file named test_example.py that contains tests written using unittest, you can run those tests by executing the following command:

```sh
python3 -m unittest test_example.py
```

This will give you output on the console indicating which tests passed and which tests failed. If you want to run all the tests in a directory, you can run the following command:

```sh
python3 -m unittest discover
```

The discover option tells unittest to find all the test cases in the current directory and its subdirectories.

```sh
python3 abc.py > test.txt 2> test.err
```
python3 abc.py && 
python3 abc.py ||
python3 abc.py |
python3 abc.py |&
python3 abc.py 2>&1
python3 abc.py >&1
python3 abc.py >&2
python3 abc.py >&


## mandelbrot.py

Example: draw the Mandelbrot set with a size of 500x500, zoom factor of 2, offset of (-0.5, 0), and max iterations of 1000.
draw_mandelbrot(500, 500, zoom=2, x_off=-0.5, max_iters=1000)

When you run this program, it will display an image of the Mandelbrot set. You can generate different images of the Mandelbrot set by adjusting the zoom factor, offset, and max iterations.


## julia_set.jl

- The `Plots` package is imported, which provides a convenient way to plot data in Julia.
- The `julia` function takes a complex number `z`, a complex constant `c`, and a maximum number of iterations `max_iters`. It computes the number of iterations it takes for `z` to diverge from the origin, using the recursive formula `z = z^2 + c`. If `z` diverges before `max_iters` iterations are reached, the function returns the number of iterations it took for `z` to diverge. Otherwise, it returns `max_iters`.
- The `draw_julia` function takes the width and height of the plot, a complex constant `c`, a zoom factor `zoom`, an x offset `x_off`, a y offset `y_off`, and a maximum number of iterations `max_iters`. It generates a grid of `width` by `height` pixels, where each pixel corresponds to a point on the complex plane. It then computes the number of iterations it takes for each point to diverge using the `julia` function. Finally, it plots the resulting Julia set using the `heatmap` function, which maps each iteration count to a color using the `inferno` colormap.\
\
To run this program, you need to have Julia installed. You can save the code in a file named `julia_set.jl`. Then, navigate to the directory where the file is saved and run the command `julia julia_set.jl` to execute the program. Before running the program, make sure to install the `Plots` package by running the command `using Pkg; Pkg.add("Plots")`.
