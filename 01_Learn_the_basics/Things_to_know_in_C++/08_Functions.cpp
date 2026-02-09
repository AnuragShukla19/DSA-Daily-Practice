Functions (Pass by Reference and Value)

Before jumping into code, let’s first understand the concept with a real-life analogy. Imagine you are helping your friend prepare a resume. There are two ways to help:

You take a photocopy of their resume and edit it. Their original stays unchanged. (This is pass by value)
You take the actual resume and make edits. Now, their original resume is changed. (This is pass by reference)
This is exactly what happens in programming. Depending on the language and how you pass data to functions, you either pass a copy or the actual data.

What is Pass by Value?
When a variable is passed by value, a copy of the variable is made. The function works on that copy, and the original variable remains unchanged.

Imagine passing your Xeroxed mark sheet to a company. If they stamp or mark it, your original remains untouched. That’s pass-by-value.

Key Characteristics:
The function receives a separate copy
Changes inside the function don’t affect the original variable
Safe, but potentially less efficient for large objects

Pass by Value

#include <iostream>
using namespace std;

void modify(int a) {
    a = a + 10;
}

int main() {
    int x = 5;
    modify(x);
    cout << x << endl; // Output: 5
    return 0;
}

What is Pass by Reference?
When a variable is passed by reference, the function receives the actual variable (not a copy). Any changes made inside the function will reflect on the original.

You give your friend your actual debit card to withdraw money. Any changes made (like balance deduction) affect your real bank account. That’s pass-by-reference.

Key Characteristics:
The function receives the original memory address
Changes inside the function affect the original
Useful when you want to update multiple variables or return multiple values

Pass by Reference

#include <iostream>
using namespace std;

void modify(int &a) {
    a = a + 10;
}

int main() {
    int x = 5;
    modify(x);
    cout << x << endl; // Output: 15
    return 0;
}
