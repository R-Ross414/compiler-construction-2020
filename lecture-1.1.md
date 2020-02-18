
# Introduction

For a general overview and the syllabus see the [README](README.md).

The rest of the lecture we started with the first part of the course, which will be about lexing and parsing. 

## Context Free Grammars

(You need to take your own notes for this part of the lecture.)

What better place to start with the beginning, an extract from Noam Chomsky's original, which I made available [here](Sources/Noam_Chomsky_Syntactic_Structures-p.26-27.pdf). We use this original example to discuss the basic ideas of context free grammars, before going to finite automata in the next lecture.

We finished the lecture with some definition from theoretical computer science, see 

## Homework

Studying Noam Chomsky's writing is an opportunity for you to travel back in time to when context free grammars were invented, but it is also important to learn the modern terminology, for which we refer throughout the course to the classic [Introduction to Automata Theory, Languages, and Computation]( https://mcdtu.files.wordpress.com/2017/03/introduction-to-automata-theory.pdf)  by Hopcroft, Motwani, Ullman.

**Mandatory:**

- Read the [two pages](Sources/Noam_Chomsky_Syntactic_Structures-p.26-27.pdf) of Chomsky's again carefully.
- Make your own example of a sentence that can be derived by the grammar and of a sentence that cannot be derived by grammar. Think about changing the grammar to account for a larger fragement of English.
- Read Sections 1.5.1-1.5.3 of [Introduction to Automata Theory, Languages, and Computation]( https://mcdtu.files.wordpress.com/2017/03/introduction-to-automata-theory.pdf). In particular, you need  
  - to know what is meant by *letter*, *alphabet*, *string*, *word*, and *language* in the technical sense of automata theory; 
  - to be able to recognise and apply these technical notions in concerete examples;
  - to be ablet to explain, in particular, the meaning of these notions from the point of view of a lexer and the point of view of a parser.
- Post a reply to my homework question for this lecture on the [discussion forum](https://groups.google.com/forum/#!forum/chapman-compiler-construction-2020). 

**Optional:**

- Some examples of ambiguous sentences.
  - [The tourist saw the astronomer with the telescope](https://nacloweb.org/resources/problems/sample/Ambiguous.pdf)
  - [Fruit flies like a banana](https://ai.stackexchange.com/questions/10958/a-sentence-with-different-parse-tree-structures)
  - [Mary ate a salad with spinach from Califonia for lunch on Tuesday](https://cs.nyu.edu/faculty/davise/ai/ambiguity.html)

  Think about how these examples of ambiguity correspond to the existence of multiple parse trees. Can you make your own ambiguous sentences?
- Think about other features of the grammar of English and whether they can be formalised by the rules of a context-free grammar.
- Read the wikipedia article [Context-free grammar](https://en.wikipedia.org/wiki/Context-free_grammar). (I am not saying that this is a good article ... on the other hand it would be strange to learn about context free grammars and NOT to know what wikipedia has to say on the topic.)
- Read the wikipedia article on Chomsky's book [Syntactic Structures](https://en.wikipedia.org/wiki/Syntactic_Structures).
- Browse through the [original book](https://archive.org/details/NoamChomskySyntcaticStructures/page/n33/mode/2up).

