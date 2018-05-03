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
#define TRUE 1
#define FALSE 0

//for use in play function
//defines cards played in the round
#define MAX_CARDS_PER_ROUND 4
#define FIRST_PLAY 0
#define SECOND_PLAY 1
#define THIRD_PLAY 2
#define LAST_PLAY 3



void print_player_name(void);
void choose_discards(void);
void choose_card_to_play(void);
void run_unit_tests(void);
int scan_new_hand(int new_hand[], int cards_in_hand);
int scan_current_plays(int cards_played, int current_plays[]);
int gets_first_card(int current_plays[]);
int play_non_first_position(int new_hand[], int current_plays[], int cards_in_hand);


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
    printf("43 44 45\n");

}

void choose_card_to_play(void) {
    // ADD CODE TO READ THE FIRST THREE NUMBERS (NUMBER OF CARDS IN YOUR HAND,
    // NUMBER OF CARDS PLAYED THIS ROUND, TABLE POSITION)
    int cards_in_hand = 0;
    int cards_played = 0;
    int table_position = 0;
    int new_hand[N_CARDS_INITIAL_HAND] = {0};
    int current_plays[N_CARDS_INITIAL_HAND] = {0};


    scanf("%d %d %d", &cards_in_hand, &cards_played, &table_position);

    
    scan_new_hand(new_hand, cards_in_hand);
    scan_current_plays(cards_played, current_plays);
    play_non_first_position(new_hand, current_plays, cards_in_hand);





    int received_discards[N_CARDS_DISCARDED] = {0};
    // ADD CODE TO READ THE CARDS OF YOUR HAND INTO AN ARRAY USING SCANF
    // ADD CODE TO READ THE CARDS PREVIOUSLY PLAYED THIS ROUND INTO AN ARRAY USING SCANF
    // ADD CODE TO READ THE CARDS PLAYED IN THE HISTORY OF THE GAME INTO AN ARRAY USING SCANF
    // ADD CODE TO READ THE CARDS YOU DISCARDED AT THE START INTO AN ARRAY USING SCANF
    // ADD CODE TO READ THE CARDS YOU RECEIVED AT THE START INTO AN ARRAY USING SCANF
    
    // THEN ADD YOUR CODE HERE TO CHOOSE AND PRINT THE CARD YOU WISH TO PLAY

    // NOTE: THE PROVIDED CODE DOES NOT MAKE A LEGAL MOVE. YOU MUST CHANGE IT TO
    // PLAY A CARD FROM YOUR HAND.

}


// ADD A COMMENT HERE EXPLAINING YOUR OVERALL TESTING STRATEGY

void run_unit_tests(void) {
    // PUT YOUR UNIT TESTS HERE
}


// ADD YOUR FUNCTIONS HERE
//this function scans the new hand
int scan_new_hand(int new_hand[], int cards_in_hand) {
    int scancount = 0;
    while(scancount < cards_in_hand) {
        scanf("%d", &new_hand[scancount++]);
    }
    return scancount;
}

int scan_received_discards(int received_discards[]) {
    int i = 0;
    while(i < N_CARDS_DISCARDED) {
        scanf("%d", &received_discards[i++]);
    }
    return i;
}

int scan_current_plays(int cards_played, int current_plays[]) {
    int i = 0;
    while(i < cards_played) {
        scanf("%d", &current_plays[i++]);
    }
    return i;
}

int gets_first_card(int current_plays[]) {
    int first_card = 0;
    int i = 0;
    while(i < 1) {
        first_card = current_plays[i];
        i++;
    }
    return first_card;
}

int play_non_first_position(int new_hand[], int current_plays[], int cards_in_hand) {
    int printed = FALSE;
    int first_play = gets_first_card(current_plays);
    if(first_play >= 10 && first_play < 20) {
        int i = cards_in_hand;
        while(i > 0 && printed == FALSE) {
            if(new_hand[i] >= 10 && new_hand[i] < 20) {
                printf("%d", new_hand[i]);
                printed = TRUE;
            }
            i--;
        }
    }

    if(first_play >= 20 && first_play < 30) {
        int i = cards_in_hand;
        while(i > 0 && printed == FALSE) {
            if(new_hand[i] >= 20 && new_hand[i] < 30) {
                printf("%d", new_hand[i]);
                printed = TRUE;
            }
            i--;
        }
    }

    if(first_play >= 30 && first_play < 40) {
        int i = 0;
        while(i < cards_in_hand && printed == FALSE) {
            if(new_hand[i] >= 30 && new_hand[i] < 40) {
                printf("%d", new_hand[i]);
                printed = TRUE;
            }
            i++;
        }
    }

    if(first_play >= 40 && first_play < 50) {
        int i = cards_in_hand;
        while(i > 0 && printed == FALSE) {
            if(new_hand[i] >= 30 && new_hand[i] < 40) {
                printf("%d", new_hand[i]);
                printed = TRUE;
            }
            i--;
        }
    }
   return printed; 

}

