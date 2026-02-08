What is Time Complexity? 

We can solve a problem using different logic and different codes. Time complexity basically helps to judge different codes and also helps to decide which code is better. In an interview, an interviewer generally judges a code by its time complexity.

Now, the term, time complexity, seems that it is referring to the time taken by a machine to execute a particular code. But in real life, Time complexity does not refer to the time taken by the machine to execute a particular code. 

Let’s understand why we should not judge any code on the basis of the time taken by a machine.
If we run the same code in a low-end machine(e.g. old windows machine) and in a high-end machine(e.g. Latest MacBook), we will observe that two different machines take different amounts of time for the same code. The high-end machine will take lesser time as compared to the low-end machine. 

So, the time taken by a machine can be changed depending on the configuration. That is why we should not compare the two different codes on the basis of the time taken by a machine as the time is dependent on it.

Definition:
The rate at which the time, required to run a code, changes with respect to the input size, is considered the time complexity. Basically, the time complexity of a particular code depends on the given input size, not on the machine used to run the code.

Here come the three rules, that we are going to follow while calculating the time complexity:

We will always calculate the time complexity for the worst-case scenario.
We will avoid including the constant terms.
We will also avoid the lower values.
Before discussing the point we need to understand the three terms i.e. Best Case, Worst Case, and Average Case.

Best Case: This term refers to the case where the code takes the least amount of time to get executed. For example, if the mark is 10(i.e. < 25), only the first line will be executed and the rest of the lines will be skipped. So, the least amount of steps i.e. only 2 steps are required in this case. This is an example of the best case.
Worst Case: This term refers to the case where the code takes the maximum amount of time to get executed. For example, if the mark is 70(i.e. > 65), the last line will be executed after checking all the above conditions. So, the maximum amount of steps i.e. 4 steps are required in this case. This is an example of the worst case.
Average Case: This term is pretty self-explanatory. This is basically the case between the best and the worst.
Now, as we always want that our system serves the maximum number of clients, we need to calculate the time complexity for the worst-case scenario. With this, we can actually judge the robustness of any code or any system.

2. Avoid including the constant terms:

Let’s understand this rule considering the time complexity: O(4N3 + 3N2 + 8). Now, if we consider the value of N as 105 the time complexity will be like this:  O(4*1015 + 3*1010 + 8). In this case, the constant term 8 is very less significant in terms of changing the time complexity with different values of N. That is why we should avoid the constant terms while calculating the time complexity.

3. Avoid the lower values:

Now, in the previous example, the given time complexity is O(4N3 + 3N2 + 8) and we have reduced it to O(4N3 + 3N2). Here, we can clearly observe if the value of N is a large number, the second term i.e. 3N2 will also be a less significant term. For example, if the value of N is 105 then the term 3*1010 becomes less significant with respect to 4*1015. So, we can also avoid the lower values and the final time complexity will be O(4N3 )

Note: A point to remember is that we can actually ignore the constant coefficients as well. For example, considering the time complexity O(4N3 ) as O(N3 ) is also correct.

What is Space Complexity?
The term space complexity generally refers to the memory space that a code uses while being executed. Again space complexity is also dependent on the machine and so we are going to represent the space complexity using the Big O notation instead of using the standard units of memory like MB, GB, etc.

Definition:
Space complexity generally represents the summation of auxiliary space and the input space. Auxiliary space refers to the space that we use additionally to solve a problem. And input space refers to the space that we use to store the inputs.

Good coding practice:
If a question of adding two numbers like a and b is asked, one of the possible methods will be 

b = a+b. In this case, the space complexity is definitely reduced as we are not using any extra variable but this is not a good practice to manipulate the given inputs or data. In an interview, we must be careful that we will not manipulate the given data even if the space complexity becomes 2N instead of N. If the interviewer specifically instructs us to manipulate, then only we should attempt this method.

Note: A company may use the same data for different purposes. That is why we should not attempt to manipulate the given data for reducing the space complexity. So, we will never manipulate the given data i.e. the inputs until the interviewer specifically says so.

We are now pretty much done with our concepts of time complexity and space complexity. Now, we will briefly discuss some points about competitive programming or the online judge.

Points to remember:
In competitive programming or in the platforms like takeUforward, we generally run our codes on online servers. Most of these servers execute roughly 108 operations in approximately 1 second i.e. 1s. We must be careful that if the time limit is given as 2s the operations in our code must be roughly 2*108, not 1016. Similarly, 5s refers to 5*108. Simply, if we want our code to be run in 1s, the time complexity of our code must be around O(108) avoiding the constants and the lower values.
