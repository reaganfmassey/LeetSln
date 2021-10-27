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


#include <iostream>
#include <string>
#include <cstdlib>
#include <utility>
#include <cmath>
#include "lab04.h"


// write your recursive functions here


bool member(int target, const int set[], size_t size)
{
    if(target == set[size -1] ){
        return true;
    } if (size <= 1){
        return false;
    }
    else{
        return member(target, set, size - 1);
    }
}

bool isPalindrome(const std::string &str){
    if(str.length() % 2 != 0){
        return false;
    }
    if (str.length() < 2 ){
        return true;
    }
    return isPalindrome(str.substr(1,str.length()-2));
}

double harmonicSum(size_t n){
    if (n == 1) {
        return n;
    }
    else{
        return  (1.0/n) + harmonicSum(n-1.0);
    }
}

size_t gcd(size_t x, size_t y){
    if (x == 0)
    return y;
    return gcd(y % x, x);
}

std::string helloWorldRepeat(size_t num) {
    if (num == 1) {
        return "Hello World";
    } else {

       return "Hello " + helloWorldRepeat(num - 1) + " World";
    }
}

size_t numberOfOnes(size_t num){
    if(num == 0){
        return num;
    }
    return (num%2) + numberOfOnes(num/2);
}


//	B(n, r) = 1                          if r = 0 or r = n
//	B(n, r) = B(n-1, r-1) + B(n-1, r)    otherwise
// Pre: r & n are non-negative, and r<=n
// Post: the correct coefficient is returned

size_t binomialCoeff(size_t n, size_t r){
    if ( n == r || r == 0){
        return 1;
    } else{
        return binomialCoeff(n-1,r-1) + binomialCoeff(n-1,r);
    }
}

void arrayInitialize(int a[], int value, size_t lb, size_t ub)
{
    if(lb<=ub){
        a[lb] = value;
        arrayInitialize(a , value , lb + 1, ub);
    }
}

//Task: Given a string and a non-empty substring sub, compute recursively
//   the number of times that sub appears in the string, without the sub
//   strings overlapping.
// Pre: sub is a non-empty string
// Post: the count of non-overlapping occurrences of sub in str is returned
// Examples:
//   countSubs("catcowcat", "cat") --> 2
//   countSubs("catcowcat", "cow") --> 1
//   countSubs("catcowcat", "dog") --> 0
size_t countSubs(const std::string &str, const std::string &sub){

    if(sub.length() > str.length() ){
        return 0;
    }

    if( str.substr(0,sub.length()) != sub ){
       return countSubs(str.substr(1,str.length()-1),sub);
    }

    return 1 + countSubs(str.substr(sub.length()), sub);

}

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
std::string moveXs(const std::string &str){
    if(str.length() == 0){
        return str;
    }
    if(str[0] == 'x'){
        return moveXs(str.substr(1)) + 'x';
    } else{
        return str[0] + moveXs(str.substr(1));
    }
}
//EC: end in 0??

size_t numDecodes(const std::string & msg) {
    size_t val (0);
    if(msg.length() == 0 ){
        return  1;
}
    for (size_t i(0); i <= 26 ; i++){
        if( msg.substr(0,1) == std::to_string(i) ) {
            val += numDecodes(msg.substr(1, msg.length()));
        }
        if( msg.length() >= 2 && msg.substr(0,2) == std::to_string(i)){
            val += numDecodes(msg.substr(2, msg.length()));
        }
    }
    return val;
}


//Task: compute the sum of an array of integers
//Pre: anArray is an array of 'size' integers, size is nonnegative
//Post: the sum of anArray[0]...anArray[size-1] is returned
// Additional requirement: This function must be done by dividing the array
//   in half and performing recursive calls on each half (as opposed to just
//   shrinking the size by one each time). Hint: use pointer arithmetic

int sumArray(int anArray[], size_t size){
   if(size == 0){
       return 0;
   }
  return anArray[size-1] + sumArray(anArray , size -1);
}
//void reverseArray(int a[], size_t first, size_t last);
// Task: reverse the contents of a[first]...a[last]
// Pre: 'a' is an array of at least 'last'+1 integers, first&last are nonnegative
// Post: the elements a[first]...a[last]have been reversed.
void reverseArray(int a[], size_t first, size_t last){

        if(first > last){
            return;
        }
        std::swap(a[first],a[last]);
        reverseArray(a,first+1,last-1);


}


//std::string addStar(const std::string &str);
// Task: Given a string, compute recursively a new string where all the adjacent
//   chars are now separated by a "*".
// Pre: str is a string (may be empty).
// Post: a correctly starred string is returned.
// Examples:
//   addStar("hello") --> "h*e*l*l*o"
//   addStar("abc") --> "a*b*c"
//   addStar("ab") --> "a*b"
std::string addStar(const std::string &str){
    if ( str.length() <=1){
        return str;
    }
    std::string starred = "";
    starred += str [0];
    starred += "*";
    return starred + addStar(str.substr(1,str.length()));
}


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

void printPattern2(size_t num){
    if(num == 0){
        return;
    }
    if (num == 1){
        std::cout<<"*";
    } else if ( num % 2 == 1) {
        std::cout << "[";
        printPattern2(num - 2);
        std::cout << "]";
    }
    if(num == 2){
        std::cout<<"+";
    }
    else if (num % 2 == 0){
        std:: cout << "{";
        printPattern2(num-2);
        std::cout<<"}";
    }
}

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
size_t count2(size_t n) {
    if (n < 1) {
        return 0;
    }if(n % 10 ==2 && (n / 10) % 10 == 2){
        return 2 + count2(n/10);
    }
    return count2(n/10);
}
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
double newton(size_t number, size_t iterations){
    if (iterations == 0){
        return (number/2);
    }
    return (newton(number,iterations-1) + ((number / newton(number,iterations-1))) )/2 ;
}


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
size_t uniqueSteps (size_t n){
    if( n <= 1){
        return 1;
    }
    return uniqueSteps(n-1) + uniqueSteps(n-2);
}

//size_t setArray(int *begin, int *end, int value);
//Task: replace array elements in a range of elements with a given value
//Pre: an integer array with two pointers: 'begin' points to the first element of a range.
// 'end' points to an element immediately following the end of the range.
// 'begin' and 'end' are valid pointers.
//Post: array elements from 'begin' up to but not including 'end' are replaced by 'value', and
//  the number of elements replaced is returned to the caller.
//Note: if begin==end then the range of elements is empty.
//Hint: remember the concept of pointer arithmetic.
size_t setArray(int *begin, int *end, int value){

    if (begin == end ){
        return 0;
    }
    *begin = value;

    return 1+ setArray(begin+1, end, value);
}
//size_t numOfTerms(NodePtr tmpPtr);
// Task: Count the number of nodes with a nonzero value in a linked list
// Pre: tmpPtr points to the first node of the list, or it is nullptr if
//  the list is empty
// Post: the number of nodes with a nonzero value in the linked list is
//  returned, and the linked list is unchanged.
size_t numOfTerms(NodePtr tmpPtr){
    if( tmpPtr == nullptr){
        return 0;
    }
    if(tmpPtr -> value > 0){
        return 1 + numOfTerms(tmpPtr -> next);
    }
    return 0 + numOfTerms(tmpPtr -> next);
}

//void normalizeBigNum(NodePtr &tmpPtr);
// Task: Remove leading zeroes from a BigNum represented by a linked list.
// Pre: tmpPtr points to the first node of a list, or is nullptr if the
//  list is empty
// Post: all nodes at the end of the list which have a zero have been removed
// Note 1: as discussed in lecture, a BigNum stores the digits of the number
//         in reverse order, with the ones digit at the front of the list.
//         We are deleting leading zeroes, which would appear at the end
//         of the list if they exist
// Note 2: The parameter tmpPtr is passed by reference, so any changes to it
//         will affect the pointer in the caller
void normalizeBigNum(NodePtr &tmpPtr){
    if(tmpPtr == nullptr ){
        return;
    }
    normalizeBigNum(tmpPtr -> next);

    if (tmpPtr -> value == 0 && tmpPtr -> next == nullptr){
        tmpPtr = nullptr;
    }

}


//std::string echo2(NodePtr tmpPtr);
// Task: Create a string of the contents of the linked list in forward order and then
//   echo the same values in reverse order. Each value is followed by a space in the string.
// Pre: tmpPtr points to the first node of the list, or it is nullptr if
//  the list is empty
// Post: the values of all nodes in the linked list are in the string in forward
//  order, and then the same values are printed in reverse order, with each value
//  followed by a single blank, and the linked list is unchanged.
// Ex: if the list contains tmpPtr->1->2->3, we will return "1 2 3 3 2 1 "
std::string echo2(NodePtr tmpPtr){
    if(tmpPtr == nullptr ) {
        return "";
    }
        return std::to_string(tmpPtr -> value) + " " + echo2(tmpPtr->next)  + std::to_string(tmpPtr -> value)+ " ";

}

bool K_element_sum(size_t k, int sum, int arr[], size_t size){
    if(sum == 0 && k == 0){
        return true;
    }
    if(size == 0){
        return false;
    }
    if( k == 1 && arr[size -1] != sum){
         K_element_sum(k+1, sum + arr[size] , arr, size -1);

    }
    return K_element_sum(k-1, sum - arr[size-1] , arr, size -1);


}
