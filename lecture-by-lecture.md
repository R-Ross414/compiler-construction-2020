# Lecture by Lecture

- [Lecture 1.1](lecture-1.1.md): Overview, Assessment, Syllabus.

### Part 1: Finite Automata

- [Lecture 1.2](lecture-1.2.md): Deterministic Finite Automata (DFA).
- [Lecture 2.1](lecture-2.1.md): 
  - Problem Class on Finite Automata. 
  - [*Why do Java and Python not have goto statements?*](https://hackmd.io/@alexhkurz/rJ5wS-0f8).
- [Lecture 2.2](https://hackmd.io/@alexhkurz/B11YSGCz8): Non-deterministic Finite Automata (NFA).  
- Lecture 3.1: 
  - For a review of NFA, we did [Exercise 2.3.2 on page 66](https://mcdtu.files.wordpress.com/2017/03/introduction-to-automata-theory.pdf) together. 
  - Then we studied different ways of [Composing Automata](https://hackmd.io/@alexhkurz/ryV_FU7XI).
- [Lecture 3.2](https://hackmd.io/@alexhkurz/HkoNj8mmU): Eliminating epsilon transitions, translating regular expressions into DFAs.

### Part 2: Parsing

- **Lecture 4.1**: **How to build an interpreter in one lecture**. Chapter 2.1 - 2.6 of [IPL](http://www.cse.chalmers.se/edu/year/2012/course/DAT150/lectures/plt-book.pdf). For installation  introductions see the [BNFC homepage](http://bnfc.digitalgrammars.com) or our own [BNFC installation instructions](https://github.com/alexhkurz/compiler-construction-2020/blob/master/BNFC-installation.md). *Homework* (mandatory): 
  - Install Haskell and BNFC following the [BNFC installation instructions](https://github.com/alexhkurz/compiler-construction-2020/blob/master/BNFC-installation.md) and get the calculator running. *Deadline: Monday, March 2* (we need this Tuesday in class). 
  - Read the [BNFC tutorial](http://bnfc.digitalgrammars.com/tutorial/bnfc-tutorial.html) or the [short version](bnfc-tutorial-short.md) which contains what we covered in the lecture.
  - Convince yourself that the grammar in `Calc.cf` has only one parse tree for `1+2*3`.

- **Lecture 4.2**: **How to use a grammar for debugging a program**. Exercise 2 in  [BNFC self check](https://github.com/alexhkurz/compiler-construction-2020/blob/master/BNFC-example.md). *Homework* (mandatory): Find the bug in the program of [Exercise 2](https://github.com/alexhkurz/compiler-construction-2020/blob/master/BNFC-example.md). *Homework* (optional): Study the grammar of a language you know, for example [C](https://cs.wmich.edu/~gupta/teaching/cs4850/sumII06/The%20syntax%20of%20C%20in%20Backus-Naur%20form.htm) or [Java](https://docs.oracle.com/javase/specs/jls/se11/html/jls-19.html).


- **Lecture 5.1**:  **How to build a grammar**. We explain how one can come up with the grammar of C-- of the [BNFC tutorial](http://bnfc.digitalgrammars.com/tutorial/bnfc-tutorial.html), see [here](bnfc-tutorial-C--.md) for a short version of the tutorial. *Homework* (mandatory): Play around with changing the grammar of C-- (and possibly the program). Post your findings on the discussion group.

- **[Lecture 5.2](https://hackmd.io/@alexhkurz/rk5PsF2EI)**: **How does shift-reduce parsing work?**  How to use a `.info`-file? 
  - *Homework* (mandatory): Do the exercises from the lecture notes. These exercises are relevant for tests and final.
  - *Homework* (optional): Study ParCalc.info and understand how it describes a determinstic algorithm.

- **6.1:** Test 1. 

- **Assignment 2**: [Grammar and Parser for C++](http://www.grammaticalframework.org/ipl-book/assignments/assignment1/assignment1.html). You can start from `bnfc/examples/cpp/cpp.cf`, see also [here](https://github.com/alexhkurz/compiler-construction-2020/blob/master/Sources/Cpp/cpp.cf).  
  - Deadline for the first test file is Wed, March 11, (11:59 pm PST).
  - Deadline for the second part is Wed, March 18, (11:59 pm PST).
  - Deadline for the rest of the assignment Wed, March 25, (11:59 pm PST).
  - This assignment is a great opportunity to practice proper use of git. Provide a full trail of your work under git. In particular, each time your parser parses successfully a new testfile, it is time to make sure that this grammar is pushed to git. You can then create a new branch to work on the new version of the grammar and merge it back to master when it passes the new test-file. Branches also allow you to work in a group on different versions of the grammar at the same time.
  - Use git to share your current version of the grammar with me if you want to ask me a question.

- [Lecture 6.2](https://hackmd.io/@alexhkurz/SJx6T5R48): Shift/reduce and reduce/reduce conflicts. *Homework:* Do the exercise from the lecture notes. These exercises are relevant for Assignment 2.

- Lecture 7.1: We spent most of the time discussing the benign shift-reduce conflict known as **[dangling else](https://en.wikipedia.org/wiki/Dangling_else)** (good Wikepedia article). We wrote out some (improvised) grammar rules such as

      Exp ::= ExpIf | ExpIfElse | C | D | ...
      ExpBool ::= A | B | ...
      ExpIf ::= "if" ExpBool "then" Exp 
      ExpIfElse ::= "if" ExpBool "then" Exp "else" Exp 

  and analysed how a shift-reduce parser would parse
  
      if A then if B then C else D

  (Note that in the grammar we chose to make if-then-else an expression, not a statement, as, for example, in [F#](https://fsharpforfunandprofit.com/posts/expressions-vs-statements/) or the language  LambdaNat we have seen last semester in Programming Languages.)

- [Lecture 7.2](https://hackmd.io/@alexhkurz/SkXrrBuSI): How to debug a grammar? We spent most of the time on Examples 1 and 2.

- [Bonus lecture](https://hackmd.io/@alexhkurz/SJ4sbGyrU): As this question came up in class, for those who are interested, I worked out a detailed example showing how the LALR(1) parser generated by BNFC and Happy works.

## Part 3: Type Checking

**Stocktaking:** We have covered the first three chapters of the book [Implementing Programming Languages](http://www.cse.chalmers.se/edu/year/2012/course/DAT150/lectures/plt-book.pdf). This could be a good time to read through these chapters to consolidate what we learned. 

We will now turn to Chapter 4 of [IPL](http://www.cse.chalmers.se/edu/year/2012/course/DAT150/lectures/plt-book.pdf).

Reasons why type checking is important:

- The copy language is not context free.
- Compile-time errors are cheaper than run-time errors.
- Information in the types can be used to produce more efficient code.
- Types can be used to disambiguate over-loaded operations.

For us there is another one, namely that type checking can be seen as a poor cousin of interpretation (only finitely many values). Everything we learn about typechecking will help us to understand interpretation better.

- **Lecture 8.1**: Working towards Assignment 3, the [Type Checker for CPP](http://www.grammaticalframework.org/ipl-book/assignments/assignment2/assignment2.html). Main source is Chapter 4 of the book. **Homework:** Read Chapter 3.9 to 4.3 of [IPL](http://www.cse.chalmers.se/edu/year/2012/course/DAT150/lectures/plt-book.pdf) and be prepared to ask any questions that you might have on this at the beginning of the next lecture. Read the rest of Chapter 4 to prepare for the next lecture.

- **Lecture 8.2**: Working towards Assignment 3. For general background, we need the [Grammar](http://www.grammaticalframework.org/ipl-book/examples/CPP.cf) and understand how programs are translated into abstract syntax. We went through [Slides](http://www.grammaticalframework.org/ipl-book/slides/4-slides-ipl-book.pdf), up to page 15. **Homework:** Run (a program with) the expression `x+y>y` through your bnfc generated parser and study the abstract syntax tree. Can you write out the steps that the typchecker takes for a similar but different example?

...

## Part 4: Interpretation
...

## Part 5: Code Generation
...
