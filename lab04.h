// File name: lab04.h
// Author: Reagan Massey
// VUnetid: masseyrf
// Email: reagan.f.massey@vanderbilt.edu
// Class: 2201
// Assignment Number: 4
// Honor statement: yes
// Description: write a brief but complete description
//  of what the program does. Use multiple lines as needed.
// Last Changed: 10.19/2021

// Recursive programming lab

#ifndef LAB04_H
#define LAB04_H

#include <string>

// NOTE: the functions in this file are not listed in any particular order.
// In particular, they are not listed easiest to hardest. You are not
// required to implement them in the order given, so jump around and do
// the easy ones, or the ones that make sense to you, first.

// NOTE: your implementation of these functions must be recursive.
// NO LOOPS ARE ALLOWED, except where permitted in the header comments.
// Please read the project spec for other restrictions.



//int sumArray(int anArray[], size_t size);
//Task: compute the sum of an array of integers
//Pre: anArray is an array of 'size' integers, size is nonnegative
//Post: the sum of anArray[0]...anArray[size-1] is returned
// Additional requirement: This function must be done by dividing the array 
//   in half and performing recursive calls on each half (as opposed to just 
//   shrinking the size by one each time). Hint: use pointer arithmetic
int sumArray(int anArray[], size_t size);

//bool member(int target, const int set[], size_t size);
//Task: determine if target is in the set
//Pre: set is an array of 'size' integers, size is nonnegative
//Post: true is returned if target is in the set, else false;
//  the set is unchanged
bool member(int target, const int set[], size_t size);


//bool isPalindrome(const std::string &str);
//Task: determine if a string is a palindrome
//Pre: str is a string object
//Post: returns true if str is a palindrome, otherwise returns false
//      The test is case insensitive [look up toupper() and
//      tolower()]. You do not need to worry about
//      trimming blanks from the ends of the string.
//Note: the empty string is a palindrome
bool isPalindrome(const std::string &str);


//double harmonicSum(size_t n);
//Task: compute the sum of the first n harmonic terms
//Pre: n is a positive integer
//Post: the sum of the first n harmonic terms is returned.
// The harmonic series is 1 + (1/2) + (1/3) + (1/4) + ...
double harmonicSum(size_t n);


//std::string addStar(const std::string &str);
// Task: Given a string, compute recursively a new string where all the adjacent
//   chars are now separated by a "*".
// Pre: str is a string (may be empty).
// Post: a correctly starred string is returned.
// Examples:
//   addStar("hello") --> "h*e*l*l*o"
//   addStar("abc") --> "a*b*c"
//   addStar("ab") --> "a*b"
std::string addStar(const std::string &str);


//size_t setArray(int *begin, int *end, int value);
//Task: replace array elements in a range of elements with a given value
//Pre: an integer array with two pointers: 'begin' points to the first element of a range.
// 'end' points to an element immediately following the end of the range.
// 'begin' and 'end' are valid pointers.
//Post: array elements from 'begin' up to but not including 'end' are replaced by 'value', and
//  the number of elements replaced is returned to the caller.
//Note: if begin==end then the range of elements is empty.
//Hint: remember the concept of pointer arithmetic.
size_t setArray(int *begin, int *end, int value);


//size_t gcd(size_t x, size_t y);
// Task: compute the Greatest Common Divisor (GCD) of two nonnegative
//       integers using Euclid's formula:
//
// Euclid's method for computing the greatest common divisor (GCD) of two
// nonnegative integers a and b is as follows. Divide a and b to obtain the
// integer quotient q and remainder r, so that a = bq+r (if b = 0,
// then GCD(a, b) = a). Then GCD(a, b) = GCD(b, r). Replace a with b and
// b with r and repeat the procedure. Because the remainders are decreasing,
// eventually a remainder of 0 will result. The last nonzero remainder is
// the greatest common divisor of a and b.
//
// Pre: the parameters x & y are nonnegative
// Post: the GCD of x & y is returned
size_t gcd(size_t x, size_t y);


//std::string helloWorldRepeat(size_t num);
// Task: produce a string of num copies "Hello World"'s, where all the "Hello"'s precede
//   all the "World"'s. For example:
//   When num is 1, return "Hello World"
//   When num is 3, return "Hello Hello Hello World World World"
//   Note: there is only a single space between any two words, and there is
//   no space at the beginning or end of the string
// Pre: num is a nonnegative integer
// Post: the desired string is returned
std::string helloWorldRepeat(size_t num);


//size_t numberOfOnes(size_t num);
// Task: Compute the number of 1s in the binary representation of num.
//   A decimal number is converted to binary representation by repeated
//   division by 2. For each division, keep track of the quotient
//   and remainder. The remainder becomes the low-order bit (rightmost
//   bit) of the binary representation -- it will be a 0 or 1. The higher-order
//   bits are determined by repeating the processes with the quotient.
//   The process stops when num is either zero or one.
// Pre: num is a nonnegative integer
// Post: Returns the number of 1s in the binary representation of num
size_t numberOfOnes(size_t num);


//void printPattern2(size_t num);
// Task: Print a line of num characters that are made up of balanced curly
//   braces or square brackets with either "*" or "++" in the center.
// Pre: num is a positive integer
// Post: the desired pattern is displayed on cout
// Note: no iteration is allowed on this function, but you can print multiple
//   characters together (at one time). Do not add a linefeed.
// Examples: num     pattern
//           1       *
//           2       ++
//           3       [*]
//           4       {++}
//           5       [[*]]
//           6       {{++}}
//           7       [[[*]]]
void printPattern2(size_t num);



//void reverseArray(int a[], size_t first, size_t last);
// Task: reverse the contents of a[first]...a[last]
// Pre: 'a' is an array of at least 'last'+1 integers, first&last are nonnegative
// Post: the elements a[first]...a[last]have been reversed.
void reverseArray(int a[], size_t first, size_t last);


//void arrayInitialize(int a[], int value, size_t lb, size_t ub);
// Task: initialize all elements of the array between indices lb and ub to the
//   given value, including the elements at lb & ub
// Note: lb = lower bound, ub = upper bound
// Pre: lb and ub are valid indices into the array a [the actual size of the
//   array is unknown]
// Post: the array elements in the segment a[lb..ub] have been set to value
// Additional requirement: This function must be done by dividing the array
//   segment in half and performing recursive calls on each half (as opposed
//   to just shrinking the array bound by one each time)
void arrayInitialize(int a[], int value, size_t lb, size_t ub);


//size_t binomialCoeff(size_t n, size_t r);
// Task: Compute the Binomial Coefficient using Pascal's Triangle.
// The Binomial Coefficient B(n, r) is the coefficient of the term x^r in the
// binormial expansion of (1 + x)^n.
// For example, B(4, 2) = 6 because (1+x)^4 = 1 + 4x + 6x^2 + 4x^3 + x^4.
// The Binomial Coefficient can be computed using the Pascal Triangle formula:
//	B(n, r) = 1                          if r = 0 or r = n
//	B(n, r) = B(n-1, r-1) + B(n-1, r)    otherwise
// Pre: r & n are non-negative, and r<=n
// Post: the correct coefficient is returned
size_t binomialCoeff(size_t n, size_t r);


//size_t count2(size_t n);
// Task: Given a non-negative int n, compute recursively (no loops) the count
//   of the occurrences of 2 as a digit, except that a 2 with another 2
//   immediately to its left counts double, so 2212 yields 4, and 222212
//   yields 8. Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
//   while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
// Pre: n is non-negative
// Post: count of the occurrences of 2 is returned (with doubling as appropriate)
// Examples:
//   count2(2) --> 1
//   count2(212) --> 2
//   count2(2212) --> 4
//   count2(222212) --> 8
size_t count2(size_t n);


//size_t numDecodes(const std::string & msg);
// Task: Given the mapping a = "1", b = "2", ... z = "26", and an encoded message consisting
//   only of integers, count the number of ways the message can be decoded.
// Pre: msg is string with a decodable message (may be empty)
// Post: number of ways the message can be decoded is returned
// Example: the message "111" would give 3, since it could be decoded as "aaa", "ka", and "ak".
// You can assume that the messages are decodable. For example, "001" is not allowed.
// You may use iteration to enumerate all 26 possibilities for the next letter, but must use
// recursion to solve the problem. The function std::to_string(int) will return a string
// representation of the int parameter.
size_t numDecodes(const std::string & msg);


//size_t countSubs(const std::string &str, const std::string &sub);
// Task: Given a string and a non-empty substring sub, compute recursively
//   the number of times that sub appears in the string, without the sub
//   strings overlapping.
// Pre: sub is a non-empty string
// Post: the count of non-overlapping occurrences of sub in str is returned
// Examples:
//   countSubs("catcowcat", "cat") --> 2
//   countSubs("catcowcat", "cow") --> 1
//   countSubs("catcowcat", "dog") --> 0
size_t countSubs(const std::string &str, const std::string &sub);


//std::string moveXs(const std::string &str);
// Task: Given a string, compute recursively a new string where all the
//   lowercase 'x' chars have been moved to the end of the string.
// Pre: str is a string (possibly empty)
// Post: return a new string where all lowercase 'x' chars have been
//   moved to the end
// Examples:
//   moveXs("xxre") --> "rexx"
//   moveXs("xxhixx") --> "hixxxx"
//   moveXs("xhixhix") --> "hihixxx"
std::string moveXs(const std::string &str);


//double newton(size_t number, size_t iterations);
// Newtons method for approximating square roots.
// The next iteration is the average of the previous iteration and the
// ratio of the number in question to the previous iteration.
// In other words:
//     x_i = ( x_(i-1) + number/x_(i-1) ) / 2
// if i is 0 the approximation is simply half the number.
// Pre: number & iterations are non-negative integers
// Post: return an approximation of sqrt(number)
// Note: number & iterations are integers, but the return value is double
double newton(size_t number, size_t iterations);




//size_t uniqueSteps (size_t n);
// Task: There exists a staircase with N steps, and you can climb up either 1 or 2 steps
//   at a time. Given N, return the number of unique ways you can climb the staircase.
//   The order of the steps matters.
// Pre: n>0
// Post: The number of ways to climb the staircase is returned
// Example: If N is 4, then there are 5 unique ways:
//      1, 1, 1, 1
//      2, 1, 1
//      1, 2, 1
//      1, 1, 2
//      2, 2
size_t uniqueSteps (size_t n);



//bool K_element_sum(size_t k, int sum, int arr[], size_t size);
// This is an interview problem that was asked by Microsoft
//
// Given an int array of size elements, determine if there are k elements that add up to sum.
// The array holds integers, both positive and negative and zero.
// It is not possible to add zero elements (that's when k==0) to any sum, not even zero.
// It is not possible to add any elements from an empty array.
bool K_element_sum(size_t k, int sum, int arr[], size_t size);




struct Node {
    int value;
    Node* next;
};

typedef Node* NodePtr;

//size_t numOfTerms(NodePtr tmpPtr);
// Task: Count the number of nodes with a nonzero value in a linked list
// Pre: tmpPtr points to the first node of the list, or it is nullptr if
//  the list is empty
// Post: the number of nodes with a nonzero value in the linked list is
//  returned, and the linked list is unchanged.
size_t numOfTerms(NodePtr tmpPtr);



//void normalizeBigNum(NodePtr &tmpPtr);
// Task: Remove leading zeroes from a BigNum represented by a linked list.
// Pre: tmpPtr points to the first node of a list, or is nullptr if the
//  list is empty
// Post: all nodes at the end of the list which have a zero have been removed
// Note 1: as discussed in lecture, a BigNum stores the digits of the number
//         in reverse order, with the ones digit at the front of the list.
//         We are deleteing leading zeroes, which would appear at the end
//         of the list if they exist
// Note 2: The parameter tmpPtr is passed by reference, so any changes to it
//         will affect the pointer in the caller
void normalizeBigNum(NodePtr &tmpPtr);



//std::string echo2(NodePtr tmpPtr);
// Task: Create a string of the contents of the linked list in forward order and then
//   echo the same values in reverse order. Each value is followed by a space in the string.
// Pre: tmpPtr points to the first node of the list, or it is nullptr if
//  the list is empty
// Post: the values of all nodes in the linked list are in the string in forward
//  order, and then the same values are printed in reverse order, with each value
//  followed by a single blank, and the linked list is unchanged.
// Ex: if the list contains tmpPtr->1->2->3, we will return "1 2 3 3 2 1 "
std::string echo2(NodePtr tmpPtr);



////////////////////////////////////////////
// CHALLENGE PROBLEM
//
// This problem is optional, and is for those who find recursive
// programming fun and interesting. This problem will not count
// against you if you do not attempt it or if you get it wrong.
// It also does not earn any extra credit if you get it right.
// It's just here for the challenge.
//
// If you attempt it and want feedback, please change the zero
// on the following line to a one.
#define CHALLENGE  0

//NodePtr reverseList(NodePtr tmpPtr);
// Task: Reverse the nodes in a linked list.
// Pre: tmpPtr points to the first node of the list, or it is nullptr if the list is empty.
// Post: the list has been reversed and a pointer to the new first node is returned.
// This must be accomplished without allocating any new nodes or deleting existing nodes.
// In fact, you should only change the 'next' field of each node.
// You must accomplish this task only with recursion and without any code to walk the list.
NodePtr reverseList(NodePtr tmpPtr);

#endif
