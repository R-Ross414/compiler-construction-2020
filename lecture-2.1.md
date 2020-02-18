# Problem Class on DFAs

A systematic way of constructing a DFA is to start from the universal infinite automaton in which every state encodes the history of the letters read so far and then to quotient it by identifying state that are equivalent wrt the "expected continuations".

**Example:** The language {a}* is accepted by the infinite automaton which transitions on reading a letter "a" as 

     q0 -> q1 -> q2 -> q3 -> ...
     
 and all states accepting, but also by the finite automaton that has one (accepting) state q with a loop 
 
    q -> q.

The above gives two extreme examples of two automata accepting the same language. One is maximal, the other is minimal. The maximal one also counts time, so it is never finite. A minimal one does always exist, but whether it is finite depends on the language. Let us explore these ideas a bit more.

**Activity 1:** Given any language, construct a deterministic automaton (with possibly infinitely many states) that accepts the language.

**Activity 2:** Apply the method above to the language that arbitrary long repetitions of "ab".

**Activity 3:** Think about a systematic way, a method, of turning the infinite automaton from the previous activity into a finite one. 

**Activity 4:** Express the method from the previous activity as quotienting by an equivalence relation.

**Remark:** Putting things together, instead of first constructing an infinite automaton and then quotienting, we can now directly construct the finite automaton by constructing new states only "up to equivalence".

**Activity 5:** Apply the method from the previous remark to construct an automaton that accepts all string that end with "abc". What happened if you tried to use a more direct approach as in Activities 2 and 3? 

# Excursion: Structured Programming

I put together some notes on the history of structured programming under the title [*Why do Java and Python not have goto statements?*](https://hackmd.io/@alexhkurz/rJ5wS-0f8).

## Homework:

**Mandatory:**

Read at least one article referenced in [*Why do Java and Python not have goto statements?*](https://hackmd.io/@alexhkurz/rJ5wS-0f8) and post a summary, question, or comment on the discussion group. You can also address the Activities that we did not have time to discuss in detail in class.  

**Optional:**

Read all articles referenced in [*Why do Java and Python not have goto statements?*](https://hackmd.io/@alexhkurz/rJ5wS-0f8). 