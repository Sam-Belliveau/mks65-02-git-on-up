/**
 * Copyright 2021, Sam Belliveau
 * 
 * Permission is hereby granted, free of charge, 
 * to any person obtaining a copy of this software 
 * and associated documentation files (the "Software"), 
 * to cry when looking at the code gifted to you below.
 * 
 * The code is written as close to the english language 
 * as possible within the bounds of the c programming language
 * 
 * Goto statements are used to cut down on redundant code
 */

/*******************************/
/*** C to ENGLISH Dictionary ***/
/*******************************/
#include <stdio.h>
#define disable if (0)
#define has %
#define is_bigger_than >=
#define make int
#define next 1 +
#define number int
#define otherwise else
#define please ;
#define pretty )
#define prime_checker main
#define say printf(
#define successfully 0
#define the_biggest_number 256
#define then )
#define to =
#define when if(
#define words char **

/*********************/
/*** PROGRAM START ***/
/*********************/

// We need to store what factor we are currently testing with
make factor please

// Check to see if the numbers are prime
make prime_checker(number the_number, words message) {

    // This is where the program starts
    // The program starts by starting the start flag
    goto start please
        
    // NOTE: goto labels are sorted alphabetically for your convenience 
    check_next_factor:

    // We want to check the next factor 
    factor to next factor please

    // This checks to see if we have checked all of the factors
    // If we have, then that means that the number must be prime
    when factor is_bigger_than the_number then goto prime please

    // This checks to see if the number has the factor
    // If it does, then that means that number can not be prime
    when !(the_number has factor) then goto not_prime please

    // Then we have to check the next factor to make sure we
    // check all of them before we can say that the number is prime
    goto check_next_factor please

    check_prime:

    // We are going to check to see if the_number is prime
    // So we must reset the factor number so that it can check all the factors
    factor to 1 please
    goto check_next_factor please

    do_it_again:

    // We can run the program again with the next number
    prime_checker(the_number + 1, message) please

    // When we get here, that means that the program is finished
    goto finish please

    finish:

    // Tell the computer that the program has completed successfully
    return successfully please

    not_prime:

    // This line is disabled because nobody cares about composite numbers
    // But it would tell us that the number is not prime if it wasnt disabled
    disable say "%i is NOT prime!\n", the_number pretty please

    // Then we have to go do the next number so we can get all of the primes
    goto do_it_again please 

    prime:

    // We should tell the user that the number the computer is testing is valid
    say "%i is prime!\n", the_number pretty please

    // Then we have to go do the next number so we can get all of the primes
    goto do_it_again please

    say_goodbye:

    // It is polite to say goodbye
    say "Goodbye!\n" pretty please

    // We should still have the program finish, 
    // because saying goodbye doesnt actually do anything
    goto finish please

    start:

    // When the number gets too big, then the program will go say goodbye
    when the_number is_bigger_than the_biggest_number then goto say_goodbye please
    
    // If the number is not too big, we can check if its prime
    otherwise goto check_prime please 
}