# AVR_Assembly_VS_C_compiler
## Assembly VS C language in AVR microcontroller programming
This project is aiming to compare the Assembly code and the equivalent C code to compate different approaches of programming a microcontroller. This goal is achived by implementing a simple 7_seg_blink program. The codes had been written in Atmel Studio (for Assebly language) and CodeVisionAVR (for C language).
## Test & Simulate
Although both of the above codes had been implemented on a Atmega64 and 7 seg LED practically, for your assurance a Proteus simulation is also included in the directory.
## Results
As you can realize from the uploaded codes, the size of the final output (.hex file) in Assembler is (325 bytes) half of the C compiler output size (705 bytes). However, although the assembler code is much more convenient for the machine to understand, the C language is much easier to write for the programmer. Therefore, for the memory-sensitive applications Assembly would be a better choice, but for the more complicated systems that memory is not an issue, C language would be a much better approach to write our program. 
