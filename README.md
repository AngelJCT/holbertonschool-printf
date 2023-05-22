# _Printf: A custom printf implementation in C
### The function main focus is to produce an output according to a format. A way of printing an output is by using a format specifier. This function write its output to the stdout (standar output). Returns the count of printed characters when the function is succesful and -1 when fails.
### Usage
#### The `_printf` function has the following prototype:
```
int _printf(const char *format, ...);
```
### Example:
```
int main (void)
{
  int x = 10;
  
  _printf("x is equal to %d", x);
  return (0);
}
```
```
x is equal to 10
```
### What is a format specifier?
#### Format specifiers in C are used to take an input and print the output of a type. The symbol we use in every format specifier is %. It tells the compiler about the type of data that most be given or input and the type of data that most be printed on the screen.
### Below are examples of the format specifiers supported by the function _printf:
| Formats | Description |
| --- | --- |
| %c | Print a character |
| %s | Print a string |
| %% | Print a percent sign |
| %d or %i | Print integers |
### What language was used for the creation of this function?
#### The language used was C. This low level language allow us to create from scratch and control functions with more flexibility in order to define its output. We are currently in our foundation trimester of C programming and we are testing our knowledge by building the _printf(); from scratch.
### Challenges and Learning Outcomes
#### During the development of this project, we faced several challenges. For instance, handling unknown characters after the percent sign in the format string was a tricky problem to solve. This project has helped us develop critical thinking skills and has emphasized the importance of collaboration.
#### Here is an example of an edge case for unknown characters after the percent sign in which it has to write the percent sign if the next character is unknown compared to format specifiers:
```
_printf("Result is %r%y%d", x);
printf("Result is %r%y%d", x);
```
```
Result is %r%y10
Result is %r%y10
```
### Contributors
#### This project was created by [Angel J. Carrión](https://github.com/AngelJCT) and [Yahdiel Saldaña](https://github.com/yahdielo).
