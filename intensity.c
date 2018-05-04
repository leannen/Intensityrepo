// intensity.c
// Assignment 2, COMP1511 18s1: Intensity
//
// This program by YOUR-NAME-HERE (z5555555) on INSERT-DATE-HERE
//
// Version 1.0.1: Minor changes to wording of comments.
// Version 1.0.0: Assignment released.

#include <stdio.h>
#include <assert.h>

// SOME USEFUL #defines - YOU WILL NEED MORE

#define ACTION_PLAYER_NAME    0
#define ACTION_DISCARD        1
#define ACTION_PLAY_CARD      2
#define ACTION_UNIT_TESTS     3

#define N_CARDS              40
#define N_CARDS_INITIAL_HAND 10
#define N_PLAYERS             4
#define N_CARDS_DISCARDED     3

#define CARD_MIN             10
#define CARD_MAX             49


// ADD EXTRA #defines HERE

void print_player_name(void);
void choose_discards(void);
void choose_card_to_play(void);
void run_unit_tests(void);
int get_cards_initial(int initial[N_CARDS_INITIAL_HAND]);
int play_discards(int initial[], int discarded[]);


// ADD PROTOTYPES FOR YOUR FUNCTIONS HERE




// You should not need to change this main function

int main(void) {

    int which_action = 0;
    scanf("%d", &which_action);
    if (which_action == ACTION_PLAYER_NAME) {
        print_player_name();
    } else if (which_action == ACTION_DISCARD) {
        choose_discards();
    } else if (which_action == ACTION_PLAY_CARD) {
        choose_card_to_play();
    } else {
        run_unit_tests();
    }

    return 0;
}

void print_player_name(void) {
    // CHANGE THIS PRINTF TO YOUR DESIRED PLAYER NAME
    printf("COMP1511 Student");

}

void choose_discards() {
    // ADD CODE TO READ THE CARDS OF YOUR HAND INTO AN ARRAY USING SCANF
    // THEN ADD YOUR CODE HERE TO CHOOSE AND PRINT THE CARDS YOU WISH TO DISCARD

    // NOTE: THE PROVIDED CODE DOES NOT MAKE A LEGAL MOVE. YOU MUST CHANGE IT TO
    // DISCARD CARDS FROM YOUR HAND.
    int initial[N_CARDS_INITIAL_HAND] = {0};
    int discarded[N_CARDS_DISCARDED] = {0};
    get_cards_initial(initial);
    play_discards(initial, discarded);

}

void choose_card_to_play(void) {
    // ADD CODE TO READ THE FIRST THREE NUMBERS (NUMBER OF CARDS IN YOUR HAND,
    // NUMBER OF CARDS PLAYED THIS ROUND, TABLE POSITION)
    // ADD CODE TO READ THE CARDS OF YOUR HAND INTO AN ARRAY USING SCANF
    // ADD CODE TO READ THE CARDS PREVIOUSLY PLAYED THIS ROUND INTO AN ARRAY USING SCANF
    // ADD CODE TO READ THE CARDS PLAYED IN THE HISTORY OF THE GAME INTO AN ARRAY USING SCANF
    // ADD CODE TO READ THE CARDS YOU DISCARDED AT THE START INTO AN ARRAY USING SCANF
    // ADD CODE TO READ THE CARDS YOU RECEIVED AT THE START INTO AN ARRAY USING SCANF
    
    // THEN ADD YOUR CODE HERE TO CHOOSE AND PRINT THE CARD YOU WISH TO PLAY

    // NOTE: THE PROVIDED CODE DOES NOT MAKE A LEGAL MOVE. YOU MUST CHANGE IT TO
    // PLAY A CARD FROM YOUR HAND.
    printf("42\n");

}


// ADD A COMMENT HERE EXPLAINING YOUR OVERALL TESTING STRATEGY

void run_unit_tests(void) {
    // PUT YOUR UNIT TESTS HERE
}


// ADD YOUR FUNCTIONS HERE
int get_cards_initial(int initial[N_CARDS_INITIAL_HAND]) {
    int scan_number = 0;
    //puts numbers into an array
    while (scan_number < N_CARDS_INITIAL_HAND) {
        scanf("%d" , &initial[scan_number++]);
    }
    // scan_number = 0;
    //  while (scan_number < N_CARDS_INITIAL_HAND) {
    //     printf("%d " , initial[scan_number++]);
    //     printf("%d", scan_number);
    // }
    
    return scan_number;
}

//figure out which one to print using mod e.g. 49 % 40 = 9 - discard
//
int play_discards(int initial[], int discarded[]) {
    int i = 1;
    while(i < N_CARDS_INITIAL_HAND) {
        int k = 0;
        while(k < N_CARDS_DISCARDED) { 
            //gets rid of high numbered special cards first
            if(initial[i] == 47) {
                discarded[k] = initial[i];
                initial[i] = -1;    
            }
            else if(initial[i] == 39) {
                discarded[k] = initial[i];
                initial[i] = -1;     
            }
            else if(initial[i] == 38) {
                discarded[k] = initial[i];
                initial[i] = -1;      
            }
            else if(initial[i] == 37) {
                discarded[k] = initial[i];
                initial[i] = -1;      
            }
            else if(initial[i] == 36) {
                discarded[k] = initial[i];
                initial[i] = -1;      
            }
            //Then gets rid of high numbers in other ranges
            else if(initial[i] == 49) {
                discarded[k] = initial[i];
                initial[i] = -1; 
            }
            else if(initial[i] == 29) {
                discarded[k] = initial[i];
                initial[i] = -1; 
            }   
            else if(initial[i] == 19) {
                discarded[k] = initial[i];
                initial[i] = -1; 
            }
            else if(initial[i] == 48) {
                discarded[k] = initial[i];
                initial[i] = -1; 
            }
            else if(initial[i] == 28) {
                discarded[k] = initial[i];
                initial[i] = -1; 
            }   
            else if(initial[i] == 18) {
                discarded[k] = initial[i];
                initial[i] = -1; 
            }
            else if(initial[i] == 27) {
                discarded[k] = initial[i];
                initial[i] = -1; 
            }   
            else if(initial[i] == 17) {
                discarded[k] = initial[i];
                initial[i] = -1; 
            }
            else if(initial[i] == 46) {
                discarded[k] = initial[i];
                initial[i] = -1; 
            }
            else if(initial[i] == 26) {
                discarded[k] = initial[i];
                initial[i] = -1; 
            }   
            else if(initial[i] == 16) {
                discarded[k] = initial[i];
                initial[i] = -1; 
            }
            k++;
       }
        i++;
    }
    int k = 0;
    while(k < N_CARDS_DISCARDED) {
         printf("%d ", discarded[k++]);
    }
    return i;
}