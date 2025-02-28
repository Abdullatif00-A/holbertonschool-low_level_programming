#ifndef HOLBERTONH
#define HOLBERTONH

int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
int _putchar(char c);
void print_number(int n)
{
 long m;
 int c;
 long num;
 num = n;
 if (num < 0)
 {
  num *= -1;
  _putchar('-');
 }
 m = 1;
 c = 1;
 while (c)
 {
  if (num / (m * 10) > 0)
   m *= 10;
  else
   c = 0;
 }
 while (num >= 0)
 {
  if (m == 1)
  {
   _putchar(num % 10 + '0');
   num = -1;
  }
  else
  {
   _putchar((num / m % 10) + '0');
   m /= 10;
  }
 }
}
[preprocessed_does_not_contain] Student stdout length: 684
[preprocessed_does_not_contain] Student stderr:
[preprocessed_does_not_contain] Student stderr length: 0
[preprocessed_does_not_contain] Pattern found: long

