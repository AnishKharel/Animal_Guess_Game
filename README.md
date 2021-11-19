# L8: Animal Guessing Game
## Use a binary tree and a file to create a 20-question guessing game

### Author(s):
- Author of this program: Beau Schneider and Anish Kharel
- Author of lab and stubs: Jan Pearce, Berea College

# Implementation Prompts due with Milestone 2:

1. **PROCESS SUMMARY**
*Briefly summarize your  implementation process,
including how much your initial design plan evolved,
the final results you achieved, and the amount of time you spent
as a programmer or programmers in accomplishing these results.
This should be one or at most two paragraphs.*
- Our design plan was overall not as thought out as we wish we would have made it. We ended up using the majority of the code that we thought we would have had to write, but also we had to use a lot of code that we didnt realize that we would need in order for this program to work as intended.
The final results we got were very good considering the time and engergy we spent into making this lab work, we loved the progress that we made for this project and are happy with the work we were able to do. We did feel that we could have structured the code that is written much better but in the end 
we did not have enough time to make it as nice as we thought we would be able too. For the whole duration of this lab-aside from a few times-we worked together to complete this assignment. This was the best way for us to both learn as much as possible and get the most done the fastest. We spent roughly in total for this whole lab
probably around 20 hours combined researching, coding, cleaning, and brainstorming.

2. **DESIGN CHALLENGES**
*Describe the primary conceptual challenges that you encountered
in trying to complete this lab and what might have made the
lab easier for you.*
- The main challenges that we faced for this lab was getting the text file into a state where it would fill into our tree properly and then write back into the text file with the new questions/answers in the correct way to make it "learn" as the program encounters new information. It probably would have helped to have 
more experience with manipulating text files, and have learned more about how to implement a tree data structure in code before this lab.

3. **BIG O ANALYSIS**
*Please analyze the Big O of all of the methods of your class, including all constructors.*
- For the main(): we didnt use any methods here and used this class to do all of our checks to decide how to manipulate the dat in the different files.
For the Tnode(): The getLeftTree/getRightTree have a BigO(1). the hasLeftTree/hasRightTree methods have a BigO(1). The hasBothChildren/hasChildren both have a BigO(1). the replaceNodeData has a BigO(1). 
For the bin_tree(): The getrootnode has a BigO(1). the add() has a BigO(1). The implementadd has a BigO(1). The  build() method has a BigO(1). the traversetree(logn) becasue this methods traverses the whole binary tree.

4. **TESTING**
*Please briefly describe your testing process.
Here you should be careful to select representative input cases,
including both representative typical cases as well as extreme cases.*
- For the tesing of this program we tested for the program and its ability to properly add data to the text file and use that data in the next time the game is played. We also tested the program to handle the file structure to to make sure that it will be updated and saved each time the program learns of a new animal.
we also tested to make sure that the animals that were being shown as the guesses correctly fell in line with the answers beofre it and you wouldnt get an animal that would seem out of place.

5. **ERRORS**
*List in bulleted form of all known errors
and deficiencies with a very brief explanation.*
- One of the errors that we know of is the text file manipulation and sometimes reading for that text file can result in a strange tree that is constructed.

6. **LEARNING AND REACTION**
*A paragraph or so of your own comments
on what you learned and your reactions to this lab.*
- Our reactions to this lab were overall pretty positive, we had a hard time with the text files and the storage and organization of the data inside of it.
We learned a lot about streams and how to use them with files to manipulate data inside of them, we learned a lot about the usage of trees and how to properly 
implement a tree data structure into code to work as intended in certian situations, and we learned about how to go about making a machine "learn" from past iterations of the code being run and how to sue that data.

7. **INTEGRITY STATEMENT**
*INTEGRITY STATEMENT: Please briefly describe ALL help you 
received and all help you gave to others in completing this lab.
Also list all other references. 
If you worked in a pair you must also attested to only 
having worked together as a pair, not separately.*
- for this lab we received no help aside from the runstone text book for the CSC236 course 
this was used to help use structure our Tnode() and bin_tree() classes.
- For this lab we only worked as a pair, and did not work on any logic or any large scale pieces of this
code by ourselves.

## References:
- Runstone CSC236 textbook: https://runestone.academy/runestone/books/published/cppds/Trees/NodesandReferences.html
- Some of the original work in main() by Jan Pearce.
