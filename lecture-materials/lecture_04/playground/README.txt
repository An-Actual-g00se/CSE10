============
Instructions
============

1. Please install the programs from the software folder



2. You can experiment with them in this folder.

    - Additional command line utilities: 

        - average: takes in any number of integers on STDIN and outputs their average
        
        - numgen: takes a command line argument N and outputs integers [1..N] one per line
        
        - joke: interactive program displaying jokes of various categories and types
        
        - guess: a simple number guessing game. Use -h for hints, use -m N, where N is an integer to set maximum range



3. Discuss the following questions in a small group in class 
    
    - In the guess game, how many attempts do you need on average if hints are enabled and the max range is 10?
    
    - What if hints are not enabled for max range of 10? Demonstrate this empirically.
    
    - With hints enabled, how many attempts do you need if max range is 100? What about 1000?
    
    - If hints are not enabled, what is the average number of attempts we need to guess the correct value for the following max ranges: 
        - 100
        ~/workspace/lecture-materials/lecture_04/playground:$ seq 1 100 | guess
Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: 
11
~/workspace/lecture-materials/lecture_04/playground:$ seq 1 100 | guess
Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: 
4
~/workspace/lecture-materials/lecture_04/playground:$ seq 1 100 | guess
Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: 
45
~/workspace/lecture-materials/lecture_04/playground:$ seq 1 100 | guess
Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: 
56
~/workspace/lecture-materials/lecture_04/playground:$ seq 1 100 | guess
Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: 
56
Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: 
83
~/workspace/lecture-materials/lecture_04/playground:$ seq 1 100 | guess
Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: Enter guess [1..100]: 
41
Average:
42.2857 or 43
        - 1000
    ~/workspace/lecture-materials/lecture_04/playground:$ numgen 1000|guess -m 1000|tail -n1
725
~/workspace/lecture-materials/lecture_04/playground:$ 
~/workspace/lecture-materials/lecture_04/playground:$ numgen 1000|guess -m 1000|tail -n1
857
~/workspace/lecture-materials/lecture_04/playground:$ numgen 1000|guess -m 1000|tail -n1
732
~/workspace/lecture-materials/lecture_04/playground:$ numgen 1000|guess -m 1000|tail -n1
857
~/workspace/lecture-materials/lecture_04/playground:$ numgen 1000|guess -m 1000|tail -n1
912
~/workspace/lecture-materials/lecture_04/playground:$ numgen 1000|guess -m 1000|tail -n1
79
~/workspace/lecture-materials/lecture_04/playground:$ numgen 1000|guess -m 1000|tail -n1
342
~/workspace/lecture-materials/lecture_04/playground:$ numgen 1000|guess -m 1000|tail -n1
342
~/workspace/lecture-materials/lecture_04/playground:$ numgen 1000|guess -m 1000|tail -n1
538
~/workspace/lecture-materials/lecture_04/playground:$ numgen 1000|guess -m 1000|tail -n1
588
Average: 597.2 or 598
        - 2500
        - 10000
    
    - Provide an empirical demonstration of how you obtained your answers for the last question. 
