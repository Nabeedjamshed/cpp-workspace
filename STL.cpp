/*
*******STL*******
An STL is a library of generic functions and classes which saves you time and energy which you would have spent constructing for your use. This helps you reuse these well tested classes and functions umpteenth number of times according to your own convenience. 

To put this simply, STL is used because it is not a good idea to reinvent something which is already built and can be used to innovate things further. Suppose you go to a company who builds cars, they will not ask you to start from scratch, but to start from where it is left. This is the basic idea behind using STL.

COMPONENTS OF STL:

We have three components in STL:

Containers
Algorithm
Iterators
Let’s deal with them individually;

Containers:

Container is an object which stores data. We have different containers having their own benefits. These are the implemented template classes for our use, which can be used just by including this library. You can even customise these template classes.

Algorithms:

Algorithms are a set of instructions which manipulates the input data to arrive at some desired result. In STL, we have already written algorithms, for example, to sort some data structure, or search some element in an array. These algorithms use template functions. Algo is a procedure jo data ko process kre.

Iterators:
Iterators are the objects which points the elements of a container.
Iterators are objects which refer to an element in a container. And we handle them very much similarly to a pointer. Their basic job is to connect algorithms to the container and play a vital role in manipulation of the data.like i,j etc
*/


/*
Containers in C++ STL
Containers, objects which store data, Algorithms, set of procedures to process data, and Iterators, objects which point to some element in a container. Today, in this tutorial, we will be interested in discussing more about containers.

Containers are themselves of three types: 

Sequence Containers
Associative Containers
Derived Containers

Sequence Containers
A sequence container stores that data in a linear fashion. Refer to the illustration below to understand what storing something in a linear fashion means.
Sequence containers include Vector, List, Dequeue etc. These are some of the most used sequence containers.

Associative Containers
An associative container is designed in such a way that enhances the accessing of some element in that container. It is very much used when the user wants to fastly reach some element. Some of these containers are, Set, Multiset, Map, Multimap etc.  They store their data in a tree-like structure

Derived Containers 
 As the name suggests, these containers are derived from either the sequence or the associative containers. They often provide you with some better methods to deal with your data. They deal with real life modelling. Some examples of derived containers are Stack, Queue, Priority Queue, etc. The following illustration give you the idea of how a stack works.
Now since we have got the basic idea of all the three types of containers, a question which might arise is when to use which.  So, let’s deal with that,

In sequence containers, we have Vectors, which has following properties:

Faster random access to elements in comparison to array
Slower insertion and deletion at some random position, except at the end.
Faster insertion at the end.
 

In Lists, we have,

Random accessing elements is too slow, because every element is traversed using pointers.
Insertion and deletion at any position is relatively faster, because they only use pointers, which can easily be manipulated.
In associative containers, every operation except random access is faster in comparison to any other containers, be it inserting or deleting any element.

In associative containers, we cannot specifically tell which operation is faster or slower, we’ll have to inspect every data structure separately, and to get a clearer picture of all of these, you can access my Data Structure course 
*/