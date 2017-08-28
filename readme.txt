This program was used to show how to "overload " a report.  In this case it was reportA().
This program recieves a report ID and that becomes the index into the array that contains the information of that report.
Including the funtion pointer.

to run :
install cmake
go to build directory
> cmake -DSTATE:STRING="TX" ..  // to run anything but ILLINOIS
or
> cmake -DSTATE:STRING="IL" .. // to run  ILLINOIS

//  if you want to debug add the following before the ".." in the cmake statement: 
//  -DCMAKE_BUILD_TYPE=Debug


> make
> ./ChildThread


RESULTS:

TX
Starting Server

*****  creating report table  ******

Process Report A: Hello From Common A
Process Report B: Hello From Common B
/nI don't know what this report: '100'  is
It's data is: Hello From IL X
/nI don't know what this report: '101'  is
It's data is: Hello From IL Y
/nI don't know what this report: '102'  is
It's data is: Hello From IL Z
/nI don't know what this report: '103'  is
It's data is: What is this?


IL:
Starting Server

*****  creating report table  ******

Process Report A in ILLINOIS: Hello From Common A
Process Report B: Hello From Common B
Process Report X: Hello From IL X
Process Report Y: Hello From IL Y
Process Report Z: Hello From IL Z
/nI don't know what this report: '103'  is
It's data is: What is this?

