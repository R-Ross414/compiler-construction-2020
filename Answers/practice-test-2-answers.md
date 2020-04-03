
|Stack| Input|
|---:|:---|
| | `int main (){int x= ++x-++x*x}` |
|`int` | `main (){int x= ++x-++x*x}` |
|`Type main` | `(){int x= ++x-++x*x}` |
|`Type Id` | `(){int x= ++x-++x*x}` |
|`Type Id (` | `){int x= ++x-++x*x}` |
|`Type Id ( )` | `{int x= ++x-++x*x}` |
|`Type Id ( ) {` | `int x= ++x-++x*x}` |
|`Type Id ( ) { int` | ` x= ++x-++x*x}` |
|`Type Id ( ) { Type` | ` x= ++x-++x*x}` |
|`Type Id ( ) { Type x` | `= ++x-++x*x}` |
|`Type Id ( ) { Type Id` | `= ++x-++x*x}` |
|`Type Id ( ) { Type Exp15` | `=++x-++x*x}` |
|`Type Id ( ) { Type Exp3` | `=++x-++x*x}` |
|`Type Id ( ) { Type Exp3 =` | `++x-++x*x}` |
|`Type Id ( ) { Type Exp3 = ++` | `x-++x*x}` |
|`Type Id ( ) { Type Exp3 = ++ x` | `-++x*x}` |
|`Type Id ( ) { Type Exp3 = ++ Exp14` | `-++x*x}` |
|`Type Id ( ) { Type Exp3 = Exp12` | `-++x*x}` |
|`Type Id ( ) { Type Exp3 = Exp13` | `-++x*x}` |
|`Type Id ( ) { Type Exp3 = Exp11` | `-++x*x}` |
|`Type Id ( ) { Type Exp3 = Exp11 -` | `++x*x}` |
|`Type Id ( ) { Type Exp3 = Exp11 - ++` | `x*x}` |
|`Type Id ( ) { Type Exp3 = Exp11 - ++ x` | `*x}` |
|`Type Id ( ) { Type Exp3 = Exp11 - ++ Id` | `*x}` |
|`Type Id ( ) { Type Exp3 = Exp11 - ++ Exp14` | `*x}` |
|`Type Id ( ) { Type Exp3 = Exp11 - Exp13` | `*x}` |
|`Type Id ( ) { Type Exp3 = Exp11 - Exp12` | `*x}` |
|`Type Id ( ) { Type Exp3 = Exp11 - Exp12 *` | `x}` |
|`Type Id ( ) { Type Exp3 = Exp11 - Exp12 * x` | `}` |
|`Type Id ( ) { Type Exp3 = Exp11 - Exp12 * Id` | `}` |
|`Type Id ( ) { Type Exp3 = Exp11 - Exp12 * Exp13` | `}` |
|`Type Id ( ) { Type Exp3 = Exp11 - Exp12` | `}` |
|`Type Id ( ) { Type Exp3 = Exp11` | `}` |
|`Type Id ( ) { Type Exp3 = Exp2` | `}` |
|`Type Id ( ) { Type Exp2` | `}` |
|`Type Id ( ) { Type Exp` | `}` |
|`Type Id ( ) { Type Stm` | `}` |
|`Type Id ( ) { Type Stm }` |  |
|`Def` |  |
|`Program` |  |


