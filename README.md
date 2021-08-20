
# Generic Stack using C

This project explore that how can we implement the
concept of polymorphism in C with the help of void and 
function pointer. It also helps us to understand that  how
can we create a hetrogeneous array in C.



## Documentation

This stack supports elements of any data type.

### Initialise
You can have to first declare and initialse the
stack varible by writing

```bash
 stack s;
 s_in(&s); //this line is important
```
### Push
Elements of any data type can be pushed by writing
the command 

```bash
 push(&<stack_variable>,<item to be pushed>);
```
#### Pushing integer

You can push integer by creating an integer varible
or by directly passing the integer like this:

```bash
 push(&s,23);
```

#### Pushing float
Doubles and floats are treated similary, and
if you enter some value out of the range of 
float it will convert it to float.

You can push float by creating an float varible
or by directly passing the float like this:

```bash
 push(&s,23.343);
```

#### Pushing string
Anything which is entered inside double qoutes
is treated as string.

You can push string by creating an string varible
or by directly passing the string like this:

```bash
 push(&s,"string");
```

#### Pushing character
Anything which is entered inside single qoutes
is treated as character, but note that C treates
character internally as integers.

So if you declare a character varible and then push
it inside the stack it will work fine

But if you directly pass something in single qoutes like
this:

```bash
 push(&s,'c');
```
![image](https://user-images.githubusercontent.com/62440699/130241740-abc5f081-e030-42d2-adbd-f070fdf52651.png)

C will treat it as an integer so it as an integer,
and will push it's ascii value into the stack 

In order to enter it corectly you must mention char
in brackets like this

```bash
 push(&s,(char)'c');
```
![image](https://user-images.githubusercontent.com/62440699/130242403-004c548e-7805-4066-83b0-65f8761ae019.png)


### Pop

Elements can be poped from the stack by entering

```bash
 pop(&s);
```
You can also  save the varible the varibles of all 4
types like this

```bash
float *a=pop(&s);
char c=pop(&s);
int i=pop(&s);
char *st=pop(&s);
```

### Display
You can display the whole stack using display function
```
display(&s);
```

### Top

It displays as well as returns the top element of the stack

You can store it's value in a varible as you do in pop.
![image](https://user-images.githubusercontent.com/62440699/130244806-dd22f1a2-3e15-4664-a2ab-124328ea6f92.png)
## Stack menu
You can directly interact with the stack by initialising 
the stack and then entering:-

```
menu(&s)

```

![image](https://user-images.githubusercontent.com/62440699/130233324-64a1d02e-6a71-4890-9374-2988f9ee7475.png)

You can push anything float,integer,character and string.
Note that the program treats a single character entered as 
string

![image](https://user-images.githubusercontent.com/62440699/130234112-e69241ff-c080-435a-807f-c1dc2621e175.png)
![image](https://user-images.githubusercontent.com/62440699/130234377-8b52520c-ec99-4808-b0cf-332a55890ece.png)

You can display the whole stack by entering 4 or you can also
just display the top using 3

![image](https://user-images.githubusercontent.com/62440699/130234702-bee9631c-6ac1-42a7-b03a-161f6bbec3d2.png)

You can pop out any element from the stack using pop option

![image](https://user-images.githubusercontent.com/62440699/130234930-84760164-6494-4b68-a371-6683f82d34ec.png)

For exiting from the menu you may press 5 and you can also perform futher operation
on the same stack by using above mentioned functions present in the documentation
## Installation

Clone the repository to your local system using the command
```bash
  git clone https://github.com/Bhaumik-Tandan/Generic_Stack_using_c
```

In order to include the file from anywhere you must add
the stack_header folder and you stack.h file in your sytem's
include folder.

You can check it's path using the command

```bash
  gcc -v /dev/null
```

And then paste the folder and file inside it

![image](https://user-images.githubusercontent.com/62440699/130239325-30c8f3c7-7ccb-4a1c-ad7d-d9c5302ea888.png)

![image](https://user-images.githubusercontent.com/62440699/130239404-ce248608-344f-4078-9c8f-5ddc5f8aa57c.png)
![image](https://user-images.githubusercontent.com/62440699/130239445-4d519e11-a4a0-417f-a7b8-656019f36770.png)


Now you can include the header file from anywhere by using

```bash
  #include <stack.h>
```

If you don't want to place it in your include folder 
you can also use it by saving the code file, in the same
folder and including the header file in it by using the 
command
Now you can write
```bash
   #include "stack.h"
```


    
## Tech Stack

**Client:** React, Redux, TailwindCSS

**Server:** Node, Express

  
## 🛠 Skills Used
C...

  
