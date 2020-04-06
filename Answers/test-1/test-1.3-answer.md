I abbreviate the states q0, etc by their numbers

The DFA is given by the table

|States| 0 | 1 |
|---|---|---|
|{0}|{0,1,2}|{0}|
|*{0,1,2}|{0,1,2}|{0,3}|
|*{0,3}|{0,1,2}|{0}|

{0} is the initial state and the final states are marked by `*`.

Notice that I filled the table only for the states that are reachable from the initial state. That suffices.

Further exercise: 

- Complete the table above so that it contains the transitions for all possible $4^2=16$ states.
