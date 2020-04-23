# Test 2b

## Rules

- You have 60 minutes.
- I only accept hand written solutions.
- Take a picture when you are finished and send it to me via email to akurz@chapman.edu, subject "Compiler-Construction-Test-2".
- **No communication between yourself** or with other people. You have to work alone. If I suspect plagiarism, I will have to move on to more difficult, open-ended questions for tests and finals.
- You can use all your or my notes, run bnfc, run a C++ compiler.
- If you have less than 5 points for Qs 1-3, the bonus question can give you 0.5 points extra.

## Questions

Consider the grammar [cpp.cf](https://github.com/alexhkurz/compiler-construction-2020/blob/master/Sources/Cpp/cpp.cf).

1. (3 points) Show the steps taken by a shift/reduce parser on the program

        int g(){
            int x = 10; 
            return --x-x--+(--x) ; }

2. (1 point) Write down the concrete syntax tree of the program.

3. (1 point) Write down the abstract syntax tree of the program.

4. Bonus Question: Which value does the function return?

## Answers

### Q1

I allow myself to combine multiple shifts into one step so that ever shift is followed by a reduce.

|Stack| Input| Rule |
|---:|:---| :--: |
| | `int g(){int x=10; retrun --x-x--+(-x);}` |
|`int` | ` f(){int x=1; retrun ++x*x+++(++x);}` | 
|`Type` | ` f(){int x=1; retrun ++x*x+++(++x);}` | Type_int
|`Type f` | `(){int x=1; retrun ++x*x+++(++x);}` | 
|`Type Id` | `(){int x=1; retrun ++x*x+++(++x);}` | Id
|`Type Id () { int` | `x=1; retrun ++x*x+++(++x);}` | 
|`Type Id () { Type` | `x=1; retrun ++x*x+++(++x);}` | Type_int
|`Type Id () { Type x` | `=1; retrun ++x*x+++(++x);}` | 
|`Type Id () { Type Id` | `=1; retrun ++x*x+++(++x);}` | Id
|`Type Id () { Type Id = 1` | `; retrun ++x*x+++(++x);}` |
|`Type Id () { Type Id = Exp15` | `; retrun ++x*x+++(++x);}` | EId
|`Type Id () { Type Id = Exp ;` | `retrun ++x*x+++(++x);}` | 
|`Type Id () { Stm` | `retrun ++x*x+++(++x);}` | SInit
|`Type Id () { Stm return ++ x` | `*x+++(++x);}` | 
|`Type Id () { Stm return ++ Exp15` | `*x+++(++x);}` | EId
|`Type Id () { Stm return Exp13` | `*x+++(++x);}` | EIncr
|`Type Id () { Stm return Exp13 * x ` | `+++(++x);}` | 
|`Type Id () { Stm return Exp12 * Exp15` | `+++(++x);}` | EId
|`Type Id () { Stm return Exp12 * Exp15 ++` | `+(++x);}` | 
|`Type Id () { Stm return Exp12 * Exp14` | `+(++x);}` | EPIncr
|`Type Id () { Stm return Exp12` | `+(++x);}` | ETimes
|`Type Id () { Stm return Exp11 + ( ++ x` | `);}` | 
|`Type Id () { Stm return Exp11 + ( ++ Exp15` | `);}` | EId
|`Type Id () { Stm return Exp11 + ( Exp13` | `;}` | EIncr
|`Type Id () { Stm return Exp11 + ( Exp13 )` | `;}` | 
|`Type Id () { Stm return Exp ;` | `}` | EPlus
|`Type Id () { Stm Stm` | `}` | SReturn
|`Type Id () { Stm Stm }` | | 
|`Def` | | Dfun
|`Program` | | Dfun

## Q2

Same as above in tree form.

## Q3

Draw the AST output 

    PDefs [DFun Type_int (Id "f") [] [SInit Type_int (Id "x") (EInt 1),SReturn (EPlus (ETimes (EIncr (EId (Id "x"))) (EPIncr (EId (Id "x")))) (EIncr (EId (Id "x"))))]]

of `bnfc` in 2-dimensional form.

