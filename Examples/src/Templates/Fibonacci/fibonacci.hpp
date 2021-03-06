#ifndef  H_FIBONACCI_H
#define H_FIBONACCI_H
// ! Fibonacci class. Compatible with C++98
template<int N> struct fib{
  enum { value = fib<N-1>::value + fib<N-2>::value};
};

//! Specialization for 1
template<> struct fib<1>{
  enum { value = 1 };
};

//!Specializatio for 0
template<> struct fib<0>{
  enum { value = 0 };
};


/*!
  Fibonacci template function (only C++11).
  
  It implements a constexpr function. The advantage is that it works
  also with non constant expression arguments. In that case it is
  evaluated run time. 
  
  While, if the argument is a contant expression the function all is
  resolved at compile time.
*/
constexpr unsigned int Fibonacci(unsigned int n)
{
  return n <=2u ? 1u: Fibonacci(n-1)+Fibonacci(n-2);
}


#endif
