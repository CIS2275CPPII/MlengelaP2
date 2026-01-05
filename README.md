# Simple Calculator
Write a class that is a simple calculator.  It performs addition, subtraction, multiplication, and division operations.  All operations are performed on doubles.  The class should be named SimpleCalc. It has one default constructor.  There is a public function called SetOperation that is passed a character representing the desired operation, and the two operands.  The character symbols are +, -, /, and *.   The actual calculation is performed in Calculate, called by SetOperation.  The result of the operation is returned via a GetResults function that returns a neatly formatted string that states the name of the operation, shows the two operands, the math operator, and the result in an equation-type format.  For example, if the user requested that 5 and 7 are added together, the results string should look like this:

### Your operation is addition:   5 + 7 = 12

