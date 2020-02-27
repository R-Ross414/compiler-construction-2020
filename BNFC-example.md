# BNFC Self Check

See the [BNFC tutorial](http://bnfc.digitalgrammars.com/tutorial/bnfc-tutorial.html) for reference and more detail. The self-check is devided into a theory and a practice part.

## Practice: 

### Exercise 0: Parsing C-- using BNFC

You need to be able to recreate the following in Haskell (no knowledge of Haskell required at this stage).

In all cases you should start by saving the [fibonacci program of the BNFC tutorial](http://bnfc.digitalgrammars.com/tutorial/bnfc-tutorial.html) into a file called

    fibonacci.cmm
  
and saving the "Complete grammar for C--" of the tutorial in a file 

    Cmm.cf

Run

    bnfc -m -haskell Cmm.cf
    make
    ./TestCmm fibonacci.cmm

and check that you get the answer

        Parse Successful!

followed by the [Abstract Syntax] and the [Linearized tree].

### Exercise 1

Write your own C-- program and parse it.

### Exercise 2
You will not know the programming language Promela. In this exercise you will see how to use a BNF in order to understand whether a program in a programming language you don't know is a legal program (this will help you to learn how to write your own grammar later). In other words, the task is to take the [Promela grammar](http://spinroot.com/spin/Man/grammar.html) and parse the following program by hand. Return an error message if the program cannot be parsed. (The program is a variation of the [Peterson algorithm](https://en.wikipedia.org/wiki/Peterson%27s_algorithm).) (If you remember the excursion on goto and structured programming you might wonder why Promela has goto's. The answer is that the meaning of a Promela program is a particular kind of automaton and goto's are often the cleanest way to jump to successor states.)

```
bool	turn, flag[2];
byte	cnt

active [2] proctype P1()
{	pid me, other;

    me = _pid;
    other = 1 - _pid;

    again: flag[me]=1;
    turn=other;
    ! (flag[other] && turn = other) ->

    /* begin critical section */
    cnt++;
    printf("cnt=%d \n", cnt); 
    assert cnt == 1; 
    cnt--;        
    flag[me]=0;
    /* end critical section */
 
    goto again
}
```

**Exercise 2a:** Justify all steps in [this partial parse tree](https://github.com/alexhkurz/compiler-construction-2020/blob/master/Sources/partial-parse-tree.pdf) by pointing out the corresponding rule of the Promela grammar.

**Exercise 2b:** Continue the parse tree from the previous ecercise until it is complete or until it becomes easy and boring. 

**Exercise 2c:** Find the bug in the program, assuming that `pid` is a legal type. [Hint: You save space and time while doing the parsing with pen and paper, if you do not write out the full parse tree, but only maintain the stack (in addition to pen an paper it is also useful to have an erasor to pop elements from the stack).]


## Theory: Answer the following questions (Exercise 3)

If you are unsure about the answers consult Chapter 2 in [the book](http://www.cse.chalmers.se/edu/year/2012/course/DAT150/lectures/plt-book.pdf) and also the [BNFC tutorial](http://bnfc.digitalgrammars.com/tutorial/bnfc-tutorial.html).

- Explain the difference between **concrete and abstract syntax**. Why is this distinction important for compiler construction?

- Explain the importance of **precedence levels**. Why does the grammar in `Calc.cf` parse `1+2*3` as `1+(2*3)` and not as `(1+2)*3`?

- Explain the concept of **algebraic data types**. How are algebraic data types programmed in Haskell and Java?

- Explain the BNFC notation for **grammars**. Can you write out in detail how to derive the program Fibonacci from the grammar of C-- ?
