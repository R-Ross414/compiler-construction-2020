# Writing Webassembly, continued

We are going to practice some more Webassembly writing. The emphasis is not on learning to write Webassembly programs that can do cool stuff, but on writing programs that help you understand how to compile cool C++ programs to Webassembly.

We start with variations on the program `return_in_while` from the good test programs.

Go to the [wat2wasm demo](https://webassembly.github.io/wabt/demo/wat2wasm/). 

**Exercise 1:** Write a Webassembly program that has the same observable behaviour as [`return-in-while-1.cc`](Compiler-Assignments-5/return-in-while-1.cc):

    int main() {
      int i = 0;
      return 52;
    }

**Remark:** The return value of `main()` can be displayed as follows.

    gcc return-in-while-1.cc
    ./a.out
    echo $?

**Hint:** Use [`fibonacci.wat`](Compiler-Assignments-5/fibonacci.wat) as a template.

**Exercise 2:** Write a Webassembly program that has the same observable behaviour as [`return-in-while-2.cc`](Compiler-Assignments-5/return-in-while-2.cc):

    int main() {
      int i = 0;
    
      while (i++ < 5) {
      }
    
      return i;
    }
    
**Exercise 3:** Write a Webassembly program that has the same observable behaviour as [`return-in-while.cc`](Compiler-Assignments-5/return-in-while.cc):

    int main() {
      int i = 0;
    
      while (i++ < 5) {
          return 71;
      }
    
      return 52;
    }

For the next exercise we need to know how to implement if-then-else in Webassembly. We could try to find out  by consulting the documentation on

- [typing rules](https://webassembly.github.io/spec/core/valid/instructions.html#) and
- [operational semantics](https://webassembly.github.io/spec/core/exec/instructions.html#)

but this level of detail is maybe only needed if you want to implement a compiler from Wat to Wasm. Instead look at the article

- [Writing WebAssembly By Hand](https://blog.scottlogic.com/2018/04/26/webassembly-by-hand.html)

and search for if then else.

**Exercise 4:** Write a Webassembly program that has the same observable behaviour as [`redeclare-in-if-1.cc`](Compiler-Assignments-5/redeclare-in-if-1.cc):

    int main () {
      int x0 = 32 ;
      if (0 < 0 - 0) x0 = true ;
      else x0 = false ;
      return x0;
    }
    
For the next exercise, we need to think about how to implement shadowing in Webassembly. As you can see, the variable `x0` is redeclared in the branches of the conditional. One way of solving the problem is to count the levels of scope and to have two copies of `x0`, one called `x0$0` and the other `x0$10`.

**Exercise 5:** Write a Webassembly program that has the same observable behaviour as [`redeclare-in-if.cc`](Compiler-Assignments-5/redeclare-in-if.cc):

    int main () {
      int x0 = 32 ;
      if (0 < 0 - 0) bool x0 = true ;
      else bool x0 = false ;
      return x0;
    }
    
