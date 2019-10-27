# CS4202-P1-Branch-Prediction
First practical for CS4202 Computer Architecture on branch prediction

Test Programs Used to Gather Data:

1. bzip2 

- second most popular compression tool for Linux, uses Burrows-Wheeler block sorting transformation and Huffman coding

- https://people.csail.mit.edu/smcc/projects/single-file-programs/

- Ran the following command - ../../../pin -injection child -t obj-intel64/branchtrace.so -- bzip2 -z ../../../../Test_Programs/bzip2/gcc.c

- Stopped running when the output file was around 800MB (about 11 million lines), took lines 5-6 million as a sample
	
2. oggenc

- Implementation of a command-line encoding tool for Ogg Vorbis, a non-proprietary lossy audio compression scheme

- Downloaded source from - https://people.csail.mit.edu/smcc/projects/single-file-programs/

- Ran the following command - ../../../pin -injection child -t obj-intel64/branchtrace.so -- ../../../../Test_Programs/oggenc/oggenc ../../../../Test_Programs/oggenc/jfk_1963_0626_berliner.wav

- Stopped running when output file was around 600MB (13 million lines), took lines 6-7 million as a sample

3. gcc

- GNU C Compiler

- Compiled the gcc source code available in a single file from https://people.csail.mit.edu/smcc/projects/single-file-programs/

- Ran the command: ../../pin-3.7-97619-g0d0c92f4f-gcc-linux/pin -injection child -t ../../pin-3.7-97619-g0d0c92f4f-gcc-linux/source/tools/ManualExamples/obj-intel64/branchtrace.so -- gcc gcc.c -c

- Stopped running when file was round 750MB (10 million lines)

- Took lines 5-6 million as a sample

4. runtm 

- turing machine simulation practical

- Ran with command: ../../../pin -injection child -t obj-intel64/branchtrace.so -- ../../../../Test_Programs/TM/runtm ../../../../Test_Programs/TM/busy5.tm ../../../../Test_Programs/TM/busy5.tape

- Stopped running when output file was around 750MB, 

5. jvm
