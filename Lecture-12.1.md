# Webassembly and WASM and WAT

The aim of this lecture is to understand how to compile by hand C++ to Webassembly.

- We start with an example.
- We give a short introduction to Webassembly. 
- We compile and run C++ programs in Webassembly using a tool chain.
- We learn how to compile by hand simple C++ programs to Webassembly.

## Example

As a recent example of an application that can be run in a browser thanks to Webassembly we use this implementation of [neural field models](https://olly.website/sims.html). As a side remark, the mathematics behind this goes back to Alan Turing's [The Chemical Basis of Morphogenesis](https://en.wikipedia.org/wiki/The_Chemical_Basis_of_Morphogenesis.)

Have a go and you will see that the patterns react to user input in real time.

The implementation posed a challenge since the fast Fourier transform (FFT) needed to solve the differential equation needs to run in real time in the browser client-side. While there are JavaScript libraries for FFT, they do not deliver the required performance. Instead, the mathematics was implemented in Rust and then compiled to Webassembly.


## Introduction

To quote from [webassembly.org](https://webassembly.org/):

    WebAssembly (abbreviated Wasm) is a binary instruction format for a 
    stack-based virtual machine. Wasm is designed as a portable target for 
    compilation of high-level languages like C/C++/Rust, enabling deployment 
    on the web for client and server applications.

Technically, Webassembly comes in two formats. 

- A [binary format](https://webassembly.org/docs/binary-encoding/) (in `wasm`-files).

 - A [text format](https://webassembly.org/docs/text-format/) of more human readable S-expressions (in `wat`-files).

In this lecture we will learn how to write Webassembly in the `wat`-format and then translate it to `wasm` and execute it. 




## Technical Preliminaries

To run Webassembly programs we need to set up the necessary infrastructure.

#### Installation

Start by installing `node.js` and the [Webassembly Binary Toolkit](https://github.com/WebAssembly/wabt).

- install [node.js](https://nodejs.org/en/)

To follow this lecture:

- make a local copy of [`Compiler-Assignment-5`]()

- change directory to `Compiler-Assignment-5`

- install [wabt](https://www.npmjs.com/package/wabt)

      npm install wabt


#### Compile C++ to Wat

In this lecture we will learn how to translate by hand simple C++ programs to WebAssembly, or to Wat, more precisely. 

- Our running example is `fibonacci.cc` from `/test/good`. 
- Its translation is `fibonacci.wat`.

In order to run Wat programs we need to compile Wat to Wasm:

#### Compile WAT to WASM

Run

    node wat2wasm.js fibonacci.wat

This should create a file `fibonacci.wasm`.

#### Run WASM files

We first install the [scanf](https://www.npmjs.com/package/scanf) library for input and output.

    npm install scanf

Now we can run `fibonacci.wasm`:

    node run.js fibonacci.wasm

#### Test Webassembly code against C++ code

To test whether the translation `fibonacci.wat` has the same observable behaviour as `fibonacci.cc`, we can do the following.

  - add the header `#include "env.h"` to `fibonnaci.cc`
  - observe the behaviour of the C++ program:
     
         gcc fibonacci.cc -o fibonacci
         ./fibonnacci

  - observe the behaviour of the Wasm program:

        node wat2wasn.js fibonacci.wat
        node run.js fibonacci.wasm
  
  - compare the results

## Translate C++ to WAT 

What is the best way to learn Webassembly? 

One important resource is the [Wat language definition](https://webassembly.github.io/spec/core/text/index.html) at webassembly.org. But while this is the most important reference, it is not a good starting point for learning the language.

Instead we take a language we know, C++, and see how to translate it to Wasm (or, rather, Wat).

We compare line by line the C++ program

    int main () {
      int lo,hi,mx ;
      lo = 1 ;
      hi = lo ;
      mx = 5000000 ;
      printInt(lo) ;
      while (hi < mx) {
        printInt(hi) ;
        hi = lo + hi ;
        lo = hi - lo ;
      }
      return 0 ;
    
    }
    
and the compiled Webassembly program

    (module
     (import "env" "readInt" (func $readInt (result i32)))
     (import "env" "readDouble" (func $readDouble (result f64)))
     (import "env" "printInt" (func $printInt (param i32)))
     (import "env" "printDouble" (func $printDouble (param f64))    )
     (func
      $main
      (result i32)
      (local $ilo$0 i32)
      (local $ihi$0 i32)
      (local $imx$0 i32)
      (i32.const 1)
      (local.set $ilo$0)
      (local.get $ilo$0)
      (local.set $ihi$0)
      (i32.const 5000000)
      (local.set $imx$0)
      (local.get $ilo$0)
      (call $printInt)
      (block
       (loop
        (local.get $ihi$0)
        (local.get $imx$0)
        i32.lt_s
        i32.eqz
        (br_if 1)
        (local.get $ihi$0)
        (call $printInt)
        (local.get $ilo$0)
        (local.get $ihi$0)
        i32.add
        (local.set $ihi$0)
        (local.get $ihi$0)
        (local.get $ilo$0)
        i32.sub
        (local.set $ilo$0)
        (br 0)
       )
      )
      (i32.const 0)
      return
     )
     (export "main" (func $main))
    )

**Activity:** Make a table matching the C++ program and the WAT program line by line.

**Exercise:** Translate to Wat the program [ass_in_arith-short.cc](Compiler-Assignment-5/examples/ass_in_arith-short.cc):

    int main() {
      int x = 50;
      int y = x+++x--;
      printInt(y);
      printInt(x);
      return 0;
    }

Test your `ass_in_arith-short.wat` as described [above](Lecture-12.1.md#test-webassembly-code-against-C++-code).

## References

A good reference for the topic of this lecture is the article 

- [Writing WebAssembly By Hand](https://blog.scottlogic.com/2018/04/26/webassembly-by-hand.html).

To learn more about Webassembly, here is an article about how to write a type checker for Webassembly

- [Learning the Webassembly type system](https://maurobringolf.ch/2018/04/learning-the-webassembly-type-system/)

and how to write a compiler for Webassembly

- [Build your own WebAssembly Compiler](https://blog.scottlogic.com/2019/05/17/webassembly-compiler.html).

#### General references

[Webassembly Specification](https://webassembly.github.io/spec/core/)

[WebAssembly at MDN](https://developer.mozilla.org/en-US/docs/WebAssembly)
