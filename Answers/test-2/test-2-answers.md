# Test 2 - Answers

## Questions

Consider the grammar [`cpp.cf`](https://github.com/alexhkurz/compiler-construction-2020/blob/master/Sources/Cpp/cpp.cf).

1. (3 points) Show the steps taken by a shift/reduce parser on the program

        int f(){
            int x = 1; 
            return ++x*x+++(++x); }

2. (1 point) Write down the concrete syntax tree of the program.

3. (1 point) Write down the abstract syntax tree of the program.

4. Bonus Question: Which value does the function return?

## Answers

### Q1

I allow myself to combine multiple shifts into one step so that ever shift is followed by a reduce.

|Stack| Input| Rule |
|---:|:---| :--: |
| | `int f(){int x=1; retrun ++x*x+++(++x);}` |
|`int` | ` f(){int x=1; retrun ++x*x+++(++x);}` | 
|`Type` | ` f(){int x=1; retrun ++x*x+++(++x);}` | Type_int
|`Type f` | `(){int x=1; retrun ++x*x+++(++x);}` | 
|`Type Id` | `(){int x=1; retrun ++x*x+++(++x);}` | Id
|`Type Id () { int` | `x=1; retrun ++x*x+++(++x);}` | 
|`Type Id () { Type` | `x=1; retrun ++x*x+++(++x);}` | Type_int
|`Type Id () { Type x` | `=1; retrun ++x*x+++(++x);}` | 
|`Type Id () { Type Id` | `=1; retrun ++x*x+++(++x);}` | Id
|`Type Id () { Type Id = 1` | `; retrun ++x*x+++(++x);}` |
|`Type Id () { Type Id = Exp15` | `; retrun ++x*x+++(++x);}` | EInt
|`Type Id () { Type Id = Exp ;` | `retrun ++x*x+++(++x);}` | 
|`Type Id () { Stm` | `retrun ++x*x+++(++x);}` | SInit
|`Type Id () { Stm return ++ x` | `*x+++(++x);}` | 
|`Type Id () { Stm return ++ Exp15` | `*x+++(++x);}` | EId
|`Type Id () { Stm return Exp13` | `*x+++(++x);}` | EIncr
|`Type Id () { Stm return Exp13 * x ` | `+++(++x);}` | 
|`Type Id () { Stm return Exp13 * Exp15` | `+++(++x);}` | EId
|`Type Id () { Stm return Exp13 * Exp15 ++` | `+(++x);}` | 
|`Type Id () { Stm return Exp13 * Exp14` | `+(++x);}` | EPIncr
|`Type Id () { Stm return Exp12` | `+(++x);}` | ETimes
|`Type Id () { Stm return Exp12 + ( ++ x` | `);}` | 
|`Type Id () { Stm return Exp12 + ( ++ Exp15` | `);}` | EId
|`Type Id () { Stm return Exp12 + ( Exp13` | `;}` | EIncr
|`Type Id () { Stm return Exp12 + ( Exp13 )` | `;}` | 
|`Type Id () { Stm return Exp11 ` | `;}` | EPlus
|`Type Id () { Stm return Exp11; ` | `}` | 
|`Type Id () { Stm Stm` | `}` | SReturn
|`Type Id () { Stm Stm }` | | 
|`Def` | | Dfun
|`Program` | | Dfun

**Remark:** The rules that reduce `(Exp 13)` to `Exp` come from the line

    coercions Exp 15 ;

in the BNF-grammar [`cpp.cf`](https://github.com/alexhkurz/compiler-construction-2020/blob/master/Sources/Cpp/cpp.cf), which in turn is tranlsated to rule (55) and rules (58), (61), (64), (67), (72), (75), (77), (79), (81-87) in the context-free grammar in [`ParCpp.info`](https://github.com/alexhkurz/compiler-construction-2020/blob/master/Sources/Cpp/ParCpp.info).

**Exercise:** Write out the full reduction sequence that allows us to reduce `(Exp13)` to `Exp`.

**Remark:** I left some other instances of the coercion rule implicit. For example, I read the rule

      ETimes.  Exp12  ::= Exp12 "*"  Exp13 ;

as `Exp12  ::= ExpN "*"  ExpM` for all `N` less or equal to 12 and all `M` less or equal to 13. This allows me to reduce in one step

|Stack| Input| Rule |
|---:|:---|:--:|
|`Type Id () { Stm return Exp13 * Exp14` | `+(++x);}` |EPIncr
|`Type Id () { Stm return Exp12` | `+(++x);}` | ETimes

without first reducing `Exp13` to `Exp12` and `Exp14` to `Exp13` as required by the rule

      ETimes.  Exp12  ::= Exp12 "*"  Exp13 ;


**Exercise:** Which other steps in the parse make use of this abbreviation?

## Q2

The CST is the table above in tree form, see [cst.jpeg](cst.jpeg).

## Q3

Follow the instructions from Lecture 4.1 and the [bnfc tutorial](https://github.com/alexhkurz/compiler-construction-2020/blob/master/bnfc-tutorial-short.md) and run

    bnfc -m --haskell cpp.cf
    make
    ./TestCpp test-2a.cc`

to obtain the output

    PDefs [DFun Type_int (Id "f") [] [SInit Type_int (Id "x") (EInt 1),SReturn (EPlus (ETimes (EIncr (EId (Id "x"))) (EPIncr (EId (Id "x")))) (EIncr (EId (Id "x"))))]]

Then draw this in 2-dimensional form, see [ast.jpeg](ast.jpeg).

## Q4

The answer is 8 for 2a and 7 for 2b. See IPA, [Chapter 5.2 ](http://www.cse.chalmers.se/edu/year/2012/course/DAT150/lectures/plt-book.pdf) for a detailed explanation.

