# C++ Patterns Learning Repository

This repository is a personal learning resource dedicated to mastering pattern generation and various approaches to solved the task using C++. It includes a variety of patterns created using numbers, stars, and alphabets, providing practical examples to deepen your understanding of C++ loops, conditionals, and control structures.

## Table of Contents

- [Star Patterns](#star-patterns)
- [Number Patterns](#number-patterns)
- [Alphabet Patterns](#alphabet-patterns)
- [Learning Focus](#learning-focus)
- [Why This Repository is Valuable](#why-this-repository-is-valuable)
- [Sample Programs](#sample-programs)
- [Contribution](#contribution)

## Star Patterns

This section contains various patterns formed with stars (`*`). You will start with simple designs like squares and triangles and gradually move to more complex shapes such as pyramids, diamonds, and custom patterns. These exercises will help you understand nested loops and space management in C++.

- [Sample programs of Star Patterns](#1-stars-patterns)

## Number Patterns

In this section, you will find patterns generated using numbers. This includes numeric pyramids, symmetrical patterns, and complex designs like Pascal's Triangle. These patterns are excellent for practicing arithmetic operations and loop control in C++.

- [Sample programs of Number Patterns](#2-number-patterns)

## Alphabet Patterns

This section explores patterns formed by alphabets. You will work with simple letter sequences and more sophisticated arrangements like alphabet pyramids and diamond shapes. This will enhance your understanding of character manipulation in C++.

- [Sample programs of Althabet Patterns](#3-alphabet-patterns)

## Learning Focus

- **Hands-On Practice**: Each pattern program serves as a practical exercise to implement and manipulate loops and conditions, essential skills for any C++ programmer.
- **Progressive Complexity**: The repository is structured to start with simpler patterns and gradually introduce more challenging ones, allowing you to build your skills incrementally.
- **Customization**: The patterns are easily modifiable, giving you the flexibility to experiment with different dimensions and configurations, helping you better understand the underlying logic.

## Why This Repository is Valuable

- **Foundational Exercises**: This repository is a great starting point for anyone looking to strengthen their basic programming skills in C++.
- **Creative Exploration**: As you progress, you'll have the opportunity to explore more creative and complex patterns, further enhancing your problem-solving abilities.
- **Personal Growth**: By working through these patterns, you'll develop a deeper understanding of how to use C++ to manipulate data and control program flow effectively.

# Sample Programs

## 1. Stars patterns

### 1.1 Square Pattern of Stars

**Output:**

    *****
    *****
    *****
    *****

**Program:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
```

### 1.2 Right-Angled Triangle Pattern

**Output:**

    *
    **
    ***
    ****
    *****

**Program:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

```

### 1.3 Inverted Triangle Pattern

**Output:**

    *****
    ****
    ***
    **
    *

- **Program:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
```

### 1.4 Pyramid Pattern

**Output:**

        *
       ***
      *****
     *******
    *********

**Program:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
```

### 1.5 Diamond Pattern

**Output:**

        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *

**Program:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n-1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```

### 1.6 Hourglass Pattern

**Output:**

    *********
     *******
      *****
       ***
        *
       ***
      *****
     *******
    *********

**Program:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper part of the hourglass
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the hourglass
    for (int i = 2; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```

## 2. Number patterns

### 2.1 Number Pyramid Pattern

**Output:**

        1
       222
      33333
     4444444
    555555555

**Program:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

```

### 2.2 Pascal's Triangle

**Output:**

        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1

**Program:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        int num = 1;
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}

```

### 2.3 Number Diamond Pattern

**Output:**

        1
       121
      12321
     1234321
    123454321
     1234321
      12321
       121
        1

**Program:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n-1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

```

## 3. Alphabet patterns

### 3.1 Alphabet Pyramid Pattern

**Output:**

        A
       BBB
      CCCCC
     DDDDDDD
    EEEEEEEEE

**Program:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n-1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

```

### 3.2 Square alphabets

**Output:**

    A A A A
    B B B B
    C C C C
    D D D D

**Program:**

```cpp
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            j++;
        }
        ch++;
        i++;
        cout << endl;
    }

    return 0;
}
```

### 3.3 Right Triagle Alphabets

**Output:**

    A
    B C
    C D E
    E F G H

**Program:**

```cpp
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char(ch + j + i - 2) << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}
```

## Contribution

This repository is primarily for personal learning. However, if you have ideas for additional patterns or improvements, feel free to contribute.

- Fork the Project
- Create your Feature Branch (git checkout -b feature/NewFeature)
- Commit your Changes (git commit -m 'Add some NewFeature')
- Push to the Branch (git push origin feature/NewFeature)
- Open a Pull Request

## Rajendra Pancholi.com

More about me [visit now](https://www.rajendrapancholi.vercel.app)
