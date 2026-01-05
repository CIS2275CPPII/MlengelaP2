# Simple Calculator
Write a class that is a simple calculator.  It performs addition, subtraction, multiplication, and division operations.  All operations are performed on doubles.  The class should be named _SimpleCalc_. It has one default constructor.  There is a public function called _SetOperation_ that is passed a character representing the desired operation, and the two operands.  The character symbols are +, -, /, and *.   The actual calculation is performed in Calculate, called by _SetOperation_.  The result of the operation is returned via a _GetResults_ function that returns a neatly formatted string that your operation is addition:   5 + 7 = 12 states the name of the operation, shows the two operands, the math operator, and the result in an equation-type format.  For example, if the user requested that 5 and 7 are added together, the results string should look like this:

### Your operation is addition:   5 + 7 = 12

If the user requests a division by zero, the result string indicates that it is illegal to perform a division by zero.  It should say something like this:

### Your operation is division: 6 / 0 	Illegal Operation!

Your main function should show your course header and create a _SimpleCalc_ object.  Then begin a do-while loop that asks the user to select an operation and enter the two operands.  Pass the values into the _SetOperation_ function and call _GetResults_.  <ins>Be sure to take care of the case when the user enters the wrong operation</ins>.  Show the results string to the user.  Format the output numbers to 2 decimal places.   Continue to allow the user to perform math until they wish to stop.  Then display a good-bye message. 

### Your class should look like this:

<img width="1129" height="609" alt="image" src="https://github.com/user-attachments/assets/7e4c542d-73e2-4bb4-a8a9-e5ad0a25c95e" />

# Sources:
 * [Pound include utility library](https://learn.microsoft.com/en-us/cpp/standard-library/utility-functions?view=msvc-170)
# Usage:
# Contribution: 

