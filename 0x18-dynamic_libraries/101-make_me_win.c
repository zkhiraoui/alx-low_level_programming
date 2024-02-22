#include <stdio.h>

// Mock version of rand() that returns predictable values
int rand(void) {
    static int calls = 0;
    calls++;
    // Return the chosen numbers based on the order of calls
    switch (calls) {
        case 1: return 9;
        case 2: return 8;
        case 3: return 10;
        case 4: return 24;
        case 5: return 75;
        // Assuming the bonus number is generated differently, adjust as necessary
        default: return 9;
    }
}
