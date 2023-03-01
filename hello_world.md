# Overview
This repository contains examples of how to extend the functionality of a string data type in various programming languages. The examples include:

- Swift
- Kotlin
- TypeScript
- Dart
- Rust
- Crystal
- Go
- Python
- C++17

Each code snippet extends the String type with a custom method that prints the string to the console.

# Code Examples

## Swift

```swift
extension String {
    func myprint() {
        print(self)
    }
}

let message = "Hello World!"
message.myprint()
```

## Kotlin

```kotlin
fun String.myprint() {
    println(this)
}

val message = "Hello World!"
message.myprint()
```

## TypeScript

```typescript
declare global {
  interface String {
    myprint(): void;
  }
}

String.prototype.myprint = function () {
  console.log(this);
};

let message = "Hello World!";
message.myprint();
```

## Dart

```javascript
extension MyStringExtension on String {
  void myprint() {
    print(this);
  }
}

void main() {
  final message = "Hello World!";
  message.myprint();
}
```

## Rust

```rust
trait MyPrint {
    fn myprint(&self);
}

impl MyPrint for str {
    fn myprint(&self) {
        println!("{}", self);
    }
}

fn main() {
    let message = "Hello World!";
    message.myprint();
}
```

## Crystal

```ruby
class String
  def myprint
    puts self
  end
end

message = "Hello World!"
message.myprint
```

## Go

```go
package main

import "fmt"

type MyString string

func (s MyString) myprint() {
    fmt.Println(s)
}

func main() {
    message := MyString("Hello World!")
    message.myprint()
}
```

## Python

```ruby
class MyString(str):
    def myprint(self):
        print(self)

message = MyString("Hello World!")
message.myprint()
```

## C++17

```cpp
#include <iostream>
#include <string>

using namespace std;

namespace my_string {
    class MyString : public string {
        public:
            void myprint() {
                cout << *this << endl;
            }
    };
}

int main() {
    my_string::MyString message = "Hello World!";
    message.myprint();
    return 0;
}
```
