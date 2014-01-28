#include <msp430.h>

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    /* Is it OK..? */
    /* Second Commit to GitHub */
	return 0;
}
