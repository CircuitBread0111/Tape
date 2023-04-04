<center>
	<h1>TAPE</h1>
	<h5><u><i>A turing machine instruction language</i></u></h5>
</center>

### Description

​		Tape is an assembly language that allows you to write instructions for a turning machine.

### What is in the tape?

Example: 5 length tape

| **0** | **1** | **1** | **B** | **0** |
| ----- | ----- | ----- | ----- | ----- |

0: Represents the binary 0 in the cell

1: Represents the binary 1 in the cell

B: Represents a blank cell
### Syntax
|Directives|Function|
|-|-|
|LEN|length of tape|
|TAPE|start state of tape|
|START|start of instructions|
|END|end of program|

| Instructions | Arguments | Function                                        |
| ------------ | --------- | ----------------------------------------------- |
| CHECK        | 0, 1, B   | check value and skip conditionally if not equal |
|WRITE|0, 1, B|write a given value to the tape|
|JUMP|label||
|HALT ||stop execution|
|RIGHT|NUM|number of movements right|
|LEFT|NUM|number of movements left|
|PRINT||prints the current status of the tape|

| Other Syntax |
| ------------------ |
| [label]: |
| ; this is a comment |