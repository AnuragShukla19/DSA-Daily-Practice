Understanding For Loop

What is a For Loop and Why is it Used?

A for loop is a control structure in programming that allows you to execute a specific block of code repeatedly. It's especially useful when you want to perform the same task multiple times without duplicating your code. Let's break down the essential components of a for loop:

Initialization: You declare and initialize a variable that serves as a counter. This step only happens once at the beginning.
Condition: You specify a condition that determines when the loop should stop executing.
Increment/Decrement: You define how the counter variable changes after each iteration.

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Hey, Striver, this is the " << i << "'th iteration" << endl;
    }
    return 0;
}
In this example, the loop will run ten times because it starts with i equal to 1, and the condition is met until i becomes 11, then the loop breaks. The variable i is incremented by 1 in each iteration.
Start: The process begins at the "start" point, indicating the beginning of the loop.
Initialize counter: The loop control variable is initialised.
Condition check: If true, loop executes; if false, it stops.
If the condition is true, the loop body runs and counter updates.
After each iteration, control returns to condition check.
The counter updates after the loop body.
Loop runs while the condition remains true.
After exit, the program continues below the loop.

Nested For Loops
Just like for loops, you can nest one inside another. This becomes incredibly useful with multi-dimensional data structures or problems requiring multiple iterations.

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    return 0;
}

Conditionals Inside For Loops

For loops allow conditional logic within each iteration.

for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        // Code for even numbers
    } else {
        // Code for odd numbers
    }
}

Customising For Loops

You can customize the increment step for patterns or specific iteration counts.

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 25; i += 5) {
        cout << "i = " << i << endl;
    }
    return 0;
}
