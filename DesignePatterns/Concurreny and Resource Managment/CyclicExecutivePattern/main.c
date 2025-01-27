#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

bool hasElapsed()
{
    int random_number;
    bool ret = false;

    // random  function was used instead of a timer
    random_number = rand();

    if(random_number % 5 == 0)
    {
        ret = true;
    }

    return ret;
}

void run()
{
    printf("Run \n");  
}

void main(void)
{
    int r;
    uint8_t i = 0;

    srand(time(NULL));   // Initialization, should only be called once.
    r = rand();          // Returns a pseudo-random integer between 0 and RAND_MAX.
    
    printf("Cyclic Executive Pattern %i\n",r);    

    while(i<100)
    {
        // checking if time elapsed
        if(hasElapsed())
        {
            run();
        }
                
        i++;
    }
}