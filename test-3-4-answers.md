# test-3-4-answers.md

## general remarks

- make your trees follow the AST
- if in doubt about the AST run the program through the bnfc generated parser
- since both typechecking and interpretation work by recursion on the AST, your answer makes no sense if the structure of the AST does not become visible

- you are not allowed to change the program (think like a compiler!) ... eg your are not allowed to replace

        x=y=2;
    by 

        x=2; y=2
    
    (this is clever, but defeats the purpose: the compiler cannot come back to you and ask "Do you really want to compile `x=y=2`?")


## Q1

- all lines need to finish with a type or "valid"
- there should be no `x=y` or `x=2` (these are not in the AST)
- `int y=3` puts `y` in the context

My answer is [here](q1-answer.jpg).


## Q2
you need to take into account
- that statements only return environments
- that expressions return a value and an environment
- that the int y=3 changes the environment
- that you need a stack of environments
- how environments are propagated

My answer is [here](q2-answer.jpg).
