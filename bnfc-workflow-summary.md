# Building a Grammar - Workflow Summary

If `grammar.cf` is a BNFC gramar

    bnfc -m --haskell grammar.cf
    make
    ./TestGrammar file-name

See also the [scripts](https://github.com/alexhkurz/compiler-construction-2020/blob/master/course-materials.md#scripts).