# FILE I/0
- there are several files descriptions.
- There is :
> STDIN - 0
> STDOUT - 1
> STDERR - 2 

- A succefully created file will return 3 since the first 3 are already reserved.
- Errors are denoted by negative integers ie -1
- There several system calls such as : 
open ()
close ()
read()
write()
- They should be closed after.
