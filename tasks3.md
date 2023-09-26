# Object Oriented Design using Inheritance

1. Create a Box class.  Its data members should specify the half-length in
   each axis (x,y and z).  Write constructors to setup the objects given
   three doubles or a Point object.  Separately define a Point as a simple
   struct with x, y, and z components.  Make sure it compiles and that you
   can create some Boxes.

2. Add access methods to retrieve the values of the coordinates and add
   methods to test whether a point lies within the limits of a box.  Assume
   the box has a local origin of coordinates at its centre and the input
   point is specified in that coordinate system.  Provide and test the
   following methods:

   ```
   bool contains(double, double, double) const;
   bool contains(const Point&) const;
   ```

3. In order to create a flexible geometry system we will need to provide any
   number of additional shapes.  Next we shall make a hollow cylinder, but
   first we should consider factoring out the generic attributes common to
   solid objects we may wish to create.  Modify your Box class to inherit from
   a new Volume class as a base.  The Volume class should, at minimum, contain
   prototypes for the two contains methods.  Define these as pure virtual
   functions so that the Volume class is an abstract base class.

4. Test that your Box class still works correctly and then create a Tube class
   (a hollow cyclinder) with attributes rmin, rmax and half-length in z.  This
   class should also be derived from your Volume class.  Implement a set of
   constructors and access methods analogously to your Box class.  Test the
   class by constructing some Tubes and checking the contains methods work.

5. In object oriented designs we generally want to use polymorphism to handle
   collections of similar things.  Declare an array of pointers to Volume
   objects as:

   ```
   Volume *vols[10]; // for example
   ```

   Fill this array with the addresses of some of the Boxes and Tubes you have
   already created (or make some new ones on the heap).  Check that you can
   loop over your vols array and call the contains methods, e.g.

   ```
   for (int i=0; i<10; i++)
   {
     bool isin = vols[i]->contains(1, 2, 3);
     cout << "....whatever"
   }
   ```
