## Overview

The course is a sequel of last semester's course on [Programming Languages](https://github.com/alexhkurz/programming-languages-2019). Nevertheless, with some extra effort, it can also be followed independently as everything will be explained. Last semester, among other things, we
- explained the basic ideas of parsing,
- saw some simple context free grammars in BNFC,
- wrote some functional programs (in LambdNat)
- modified an interpreter written in Haskell to accommodate implement new language features.

This semester, we move from building our own toy language to a challenging fragment of C++. This means that we will study the following classic compiler topics:
- lexing/finite automata
- parsing/context free grammars/pushdown automata
- type checking/type theory
- interpretation/operational semantics
- code generation 

These topics have a practical and a theoretical side. The practical side consists in implementing lexers, parsers, type checkers, interpreters, etc. The theoretical side abstracts away from the implementation details and allows to specify and verify the algorithms that need to be implemented. We will not go into the mathematical aspects of the theory, which proves theorems about the correctness or complexity of the algorithms or also sometimes proves the non-existence of algorithms for certain classes of problems. But we will need to learn enough theory, so that we understand how it helps us to specify and to correctly implement the algorithms in questions.

If I had to summarise the course in one slogan, I would say

    compilers translates languages by induction on the abstract syntax tree.

The first part of the course on lexing and parsing is about how to construct the abstract syntax tree. The second part on type checking, interpretation and code generation is about the inverse, namely about how to go from an abstract syntax tree to another language.
