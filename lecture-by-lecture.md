# Lecture by Lecture

- [Lecture 1.1](lecture-1.1.md): Overview, Assessment, Syllabus.
- [Lecture 1.2](lecture-1.2.md): Deterministic Finite Automata (DFA).
- [Lecture 2.1](lecture-2.1.md): Problem Class on Finite Automata. Short History of Structured Programming: [*Why do Java and Python not have goto statements?*](https://hackmd.io/@alexhkurz/rJ5wS-0f8).
- [Lecture 2.2](https://hackmd.io/@alexhkurz/B11YSGCz8): Non-deterministic Finite Automata (NFA).  
- Lecture 3.1: For a review of NFA, we did [Exercise 2.3.2 on page 66](https://mcdtu.files.wordpress.com/2017/03/introduction-to-automata-theory.pdf) together. Then we studied different ways of [Composing Automata](https://hackmd.io/@alexhkurz/ryV_FU7XI).


- [Lecture 3.2](https://hackmd.io/@alexhkurz/HkoNj8mmU): Eliminating epsilon transitions, translating regular expressions into DFAs.
- Lecture 4.1: *How to build an interpreter in one lecture*. Chapter 2.1 - 2.6 of [IPL](http://www.cse.chalmers.se/edu/year/2012/course/DAT150/lectures/plt-book.pdf). For installation  introductions see the [BNFC homepage](http://bnfc.digitalgrammars.com) or our own [BNFC installation instructions](https://github.com/alexhkurz/compiler-construction-2020/blob/master/BNFC-installation.md). 
**Homework:** 
  - Install Haskell and BNFC and get the calculator running. *Deadline: Monday, March 2, before class*. 
  - Read the [BNFC tutorial](http://bnfc.digitalgrammars.com/tutorial/bnfc-tutorial.html) or the [BNFC tutorial short version](bnfc-tutorial-short.md) which is tailored to what we covered in the lecture.
  - Convince yourself that the grammar in `Calc.cf` has only one parse tree for `1+2*3`.

... the lectures below are still in draft form ... 

- Lecture 4.2: The aim of this lecture is to understand more about parsing. I link the grammars of [C](https://cs.wmich.edu/~gupta/teaching/cs4850/sumII06/The%20syntax%20of%20C%20in%20Backus-Naur%20form.htm) and [Java](https://docs.oracle.com/javase/specs/jls/se11/html/jls-19.html). In the lecture we explain how the grammar of C-- of the [BNFC tutorial](http://bnfc.digitalgrammars.com/tutorial/bnfc-tutorial.html) works. We also look at Exercise 2 in  [BNFC self check](https://github.com/alexhkurz/compiler-construction-2019/blob/master/BNFC-example.md). Trying to find the bug in the program of Exercise 2 is **Homework**.
