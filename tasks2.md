# Exercises with classes and objects
1. Family tree
 * Compile family.cpp and person.cpp into an executable.
 * It should build without errors but produce no output when executed.
 * Add appropriate code to complete the dummy methods in person.cpp.
   Don't worry about marry() yet.
 * Add and test some access methods. Print out the state of the objects you
   have created.
 * What should the marry() method do?  What should you add to the data members.
   Discuss.

2. Sorting using containers
 * Modify your sorting program from the last set of exercises to use an
   std::vector\<double\> to hold the numbers to be sorted.  Change the data
   input to read numbers until the input file reaches the end, i.e. don't assume
   there are any particular numbers of entries.  Fill the vector using
   push_back.
 * Modify your sorting function to loop over the vector using iterators instead
   of array indexing.  Check the program still works and produces the same
   result.
 * Mofify the program to use an std::list\<double\> instead of a vector. Does it
   still work?
 * Replace your own sorting loops with a call to the list sort() method for your
   container.
