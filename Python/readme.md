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
