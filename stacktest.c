#include "stack.h"
#include <assert.h>
#include <stdio.h>

int main() {

    stack s;
    initialize(&s);


    // (1) After executing initialize(s); the stack s must be empty
    assert(empty(&s) == true);


    // (2) After executing push(x, s); y = pop(s); the s must be the same as before
    //execution of the two commands, and x must equal y.
    int x = 10;

    push(x, &s);

    int y = pop(&s); //Remove top element and store data in variable y

    assert(x == y); //Control that x is equal to y
    //x is equal to y meaning the pushed value is equal to the popped value
    //Stack is now the same as before
    

    // (3) After executing push(x0, s); push(x1, s); y0 = pop(s); y1 = pop(s); the stack s must
    //be the same as before execution of the four commands, x0 must equal y1, and x1 must equal y0.
    int x0 = 100;
    int x1 = 200;

    push(x0, &s);
    push(x1, &s);

    int y0 = pop(&s);
    int y1 = pop(&s);

    assert(x0 == y1);
    assert(x1 == y0);
    //x is equal to y meaning the pushed value is equal to the popped value
    //Stack is now the same as before


    printf("All tests passed\n");
    return 0;

}
