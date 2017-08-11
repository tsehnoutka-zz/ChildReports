to run :
install cmake
go to build directory
> cmake -DSTATE:STRING="TX" ..  // to run anything but ILLINOIS
or
> cmake -DSTATE:STRING="IL" .. // to run  ILLINOIS

> make
> ./ChildThread


RESULTS:

TX
Fox@MADAN-W10 ~/workspace/ChildThread/build
$ ./ChildThread
Process Report A
Process Report B
I don't know what this: 'Y' report is
I don't know what this: 'Z' report is
I don't know what this: 'M' report is


IL:
Process Report A in ILLINOIS
Process Report B
Process Report Y
Process Report Z
I don't know what this: 'M' report is.

