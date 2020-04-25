# Test 2 - Answers

## Rules

- You have 60 minutes.
- I only accept hand written solutions.
- Take a picture when you are finished and send it to me via email to akurz@chapman.edu, subject "Compiler-Construction-Test-2".
- **No communication between yourself** or with other people. You have to work alone. If I suspect plagiarism, I will have to move on to more difficult, open-ended questions for tests and finals.
- You can use all your or my notes, run bnfc, run a C++ compiler.
- If you have less than 5 points for Qs 1-3, the bonus question can give you 0.5 points extra.

## Questions

Consider the grammar [`cpp.cf`](https://github.com/alexhkurz/compiler-construction-2020/blob/master/Sources/Cpp/cpp.cf).

1. (3 points) Show the steps taken by a shift/reduce parser on the program

        int f(){
            int x = 1; 
            return ++x*x+++(++x); }

2. (1 point) Write down the concrete syntax tree of the program.

3. (1 point) Write down the abstract syntax tree of the program.

4. Bonus Question: Which value does the function return?
