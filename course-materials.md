# Course Materials

## Books

The [required text](required-text.md).

For DFA, NFA, etc I will use the classic book [Introduction to Automata Theory, Languages, and Computation](https://mcdtu.files.wordpress.com/2017/03/introduction-to-automata-theory.pdf).
## BNFC resources

Quick links to BNFC installation instructions and other documentation, to be used in addition to the official [BNFC tutorial](http://bnfc.digitalgrammars.com/tutorial/bnfc-tutorial.html) and the  book [Implementing Programming Languages](http://www.grammaticalframework.org/ipl-book/):

- BNFC tutorial digest:
  - [Workflow summary](bnfcs-workflow-summary.md), [Part 1](bnfc-tutorial-short.md), [Part 2](bnfc-tutorial-C--.md)
- BNFC: [basic installation instructions](https://github.com/alexhkurz/compiler-construction-2020/blob/master/BNFC-installation.md)
- BNFC: [self check](https://github.com/alexhkurz/compiler-construction-2020/blob/master/BNFC-example.md)
- BNFC/Happy parser:
  - The BNFC/Happy [`.info`-files](https://hackmd.io/@alexhkurz/rk5PsF2EI#The-info-file-of-a-Happy-parser) and an example of [shift-reduce parsing](https://hackmd.io/@alexhkurz/rk5PsF2EI).
  - How to eliminate [shift/reduce and reduce/reduce](https://hackmd.io/@alexhkurz/SJx6T5R48) conflicts.
  - Understanding [LALR(1) parsing](https://hackmd.io/@alexhkurz/SJ4sbGyrU) with a worked example.
- [LBNF](https://hackmd.io/@alexhkurz/rkYR4-VH8): Some tips on the language in which a BNF-grammar is written.

## Scripts

I use the following script to compile and test the grammars for Assignment 2. Run as `test1-install cpp` if `cpp.cf` is the name of the grammar.

- [test1-install](https://github.com/alexhkurz/compiler-construction-2020/blob/master/Sources/Scripts/test1-install)

Matt Raymond wrote a script `bfrun` also doing some clean-up available at

- [bfrun](https://github.com/m4ttr4ymond/bfrun/blob/master/bfrun)

## Lecture notes

The main resource for your daily work will be the lecture notes available at [Lecture by Lecture](lecture-by-lecture.md).