# Practice Test-3-4 Answers    

For further practice make your own variations of little programs and send me pictures of your proof trees via email so I can have a look.

## Q1

### a)

I divded the answer in 3 pictures to show some of the method by which the tree is obtained.

First, you need to draw the abstract syntax tree, at least in your mind.

The structure of the proof tree is the same as the one of the abstract syntax tree, but we draw it upside down, with the root at the bottom and the leaves at the top.

The tree is constructed recursively by going up-left, up-right, middle.

In the [first picture](Test-3-4-1-1.jpg) you see me go up left 5 steps (actually, in one place I compressed two steps into one) and then up-right once to obtain two leaves. 

The [second picture](Test-3-4-1-2.jpg) is obtained after

- computing the types on the leaves
- going down two step, labelling the nodes, respectively with `int` and `valid`
- going up-right
- after checking that `x=2;` and `int x = 3;` are valid, conclude that `x=2; int x = 3;` is valid.

The [third picture](Test-3-4-1-3.jpg) picks up from the last bullet point (which the tree above `x=2; int x = 3;` not drawn). We start in the upper left leaf and then do the following.

- Go down one step labelling the block with valid.
- Go up-right to check that `y=2*x` is valid.
- Go down middle twice and label the corresponding nodes valid as well.

The last bullet point still needs to be performed on the third picture for a complete answer.

**Remarks:**

- You do not need to break down your answer into several pictures. One picture is fine. When I am going to check it, I will go through it up-left,up-right,middle and check the individual steps.

- I recommend sketching the abstract syntax tree first.

**Further Exercise**: Label all the horizontal lines in the proof tree with the typing rules that justify them.

### b)

`y` must be in the context Gamma, see item a).

### c)

the value of `x` will be 2 and the value of `y` will be 4.

## Q2

### a)

The proof tree that traces the operational steps of the interpreter is to be written and read in the same recursive manner. 

I drawn out the  [abstract syntax tree](Test-3-4-ast.jpg) and labelled it with concrete syntax for better readability. 

In the [proof tree](Test-3-4-2-1.jpg) I highlighted in red the part of the tree that is written while "going down".

**Further Exercise**: Label all the horizontal lines in the proof tree with the operational semantics rules that justify them.

### b)

You can answer this question yourself by compiling and running the C++ code.

But first you should answer the question for yourself by drawing out the proof tree.

Then compare the results you get from the proof tree and from running the C++ program.

