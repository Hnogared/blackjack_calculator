# blackjack_calculator
### DESCRIPTION
C program to calculate the value of a black hand.

### SYNOPSIS
```
Compilation :
$> gcc blackjack.c -o blackjack

Execution :
$> ./blackjack "<cards>"
```

### USAGE
When executing the program, you will have to give the \<cards\> hand as parameter.<br />
Valid cards are : `23456789TJDKA`<br />
Example :
```
$> ./blackjack A93
13
$> _
```
The program will tell you if you hit a blackjack :
```
$> ./blackjack 8AAA
Blackjack!
$> _
```
It will also tell you if you entered one or more invalid cards :
```
$> ./blackjack B
Invalid cards ! (23456789TJDKA)
$> _
```
### *DISCLAIMER*
*This program is not to be used for cheating at any casino.<br />
Thank you.*
