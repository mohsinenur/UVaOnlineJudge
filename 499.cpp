#include<stdio.h>

static char s[256];

int main(){
    register unsigned i;
    while(gets(s)){
        /*
         * Declare array for counting upper and lower case letters
         */
        unsigned upcase[32] = {0}, lowcase[32] = {0};

        for (i = 0; s[i]; ++i){
            /*
             * Check if upper case letter as the input may contain other characters
             */
            if (s[i] >= 'A' && s[i] <= 'Z')
                /*
                 * Subtracting a character ASCII ( upper and lower case ) from its base ASCII will give us an index from 0 to 26
                 */
                ++upcase[s[i] - 'A'];
            else if (s[i] >= 'a' && s[i] <= 'z')
                ++lowcase[s[i] - 'a'];
        }

        /*
         * Set the first index as max then compare against all array to find maximum occurrence of a letter
         */
        unsigned max = upcase[0];

        for (i = 0; i < 26; ++i){
            if (upcase[i] > max)
                max = upcase[i];
            if (lowcase[i] > max)
                max = lowcase[i];
        }

        for (i = 0; i < 26; ++i){
            if (upcase[i] == max)
                 /*
                  * Print the uppercase letters first since it was specified in the problem
                  */
                printf("%c", 'A'+i);
        }
        for (i = 0; i < 26; ++i){
            if (lowcase[i] == max)
                /*
                 * Now print the uppercase letters
                 */
                printf("%c", 'a'+i);
        }

        /*
         * Now print their frequency which is the max frequency
         */
        printf(" %u\n", max);
    }
    return 0;
}
