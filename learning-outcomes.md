## Course Learning Outcomes

See also the [Fowler School of Engineering Program Learning Outcomes](https://docs.google.com/document/d/1OESCtPUolnWFV_qRFuRzNrzxmUtYr5H-dFaYVmPUKY0/edit?usp=sharing).

This course teaches compiler construction not as a low level machine language oriented course but as a high level software engineering course. The aim is to give students the means to design and implement their own domain specific language (DSL). The [quote](http://wiki.c2.com/?DomainSpecificLanguage)

        Any sufficiently large software project becomes a DSL by virtue of the
        library of functions built up to implement the solution to the specific
        problem the project was concieved to address. 

indicates how DSLs are related to software engineering in general.

While writing a fully fledged compiler is a big task beyond what we can do in a one semester course, with a good mix of theory based software engineering tools, it is well in the scope of a semester to learn how to create a grammar, parser, typechecker and interpreter for a small but realistic programming language. In our case, we choose a fragment of C++, which should be familiar to many students and emphasises that the taught methods apply to real existing mainstream programming languages.

The course is structured around the assignments which should give students the practical skills needed to create their own domain specific language. These include how to 

- define a language by writing a grammar
- create a lexer and parser using a "compiler compiler"
- write a type checker  
- write an interpreter  
- write a code generator   

On the way, students will learn more about theory and practice of programming. For example, students will 

- learn how to use the principles of compositionality and separation of concerns in order to structure a major software engineering project such as a compiler (example: the use of abstract syntax trees to separate parser, typechecker, interpreter, code generation)

- learn to use software engineering tools such as compiler-compilers

- deepen their knowledge of recursive programming (a technique without which the assignments would be infeasible to do in the given time)

- learn more about a range of programming languages such as C++, Haskell, Java, Scala  (for example, we will see to use the algebraic data types of Haskell and Scala and indicate how to work around the fact that they do not exist in Java)

- see examples of domain specific programming languages (such as regular expressions and BNF, but see also Chapter 8 of the book *Implementing Programming Languages* for more) 

- learn how to read and write context free grammars of a programming language  

- learn about some of the intricacies of parsing and understand how the design of languages is influenced and constrained by available parsing techniques

- understand more about the history of programming languages, in particular about the debate surrounding the software crisis of the 1960ies and how it gave birth to structured programming and the field of software engineering  

Moreover, students will encounter and understand important algorithms such as 

- regular expression search
- transforming NFAs to DFAs
- recursive tree traversals 
- typechecking
- typeinference

We will also understand how compiler construction relies crucially on important topics in the theory of programming languages such as

- the distinction between syntax and semantics  
- finite automata (DFA, NFA, ...)  
- regular expressions  
- context free grammars  
- pushdown automata  
- LL and LR parsing, shift reduce parsing  
- abstract syntax
- type theory (judgements, rules, type checking, type inference, context/environments, ...)  
- operational semantics  
- ...

Finally, students will learn to appreciate that mathematics is not only important for developers who create the tools used in everyday engineering practice, but that knowledge of the mathematical concepts and results underpinning these engineering tools also have a positive impact on engineering practice (and increase your chances to pass a coding interview). I discuss some aspects of this in a these notes on [mathematics as a programming language](https://hackmd.io/s/ByGLTvFDE).
