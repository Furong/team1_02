#include "common.h"

static void print_page_header(char source_name[], char date[]);

void print_line(char line[], char source_name_to_print[], char date_to_print[]) {
    char save_ch;																			// 1 byte char allocated: undefined/garbage value
    char *save_chp = NULL;															// new pointer location (at 0x0 [null])
    static int line_count = MAX_LINES_PER_PAGE;					// integer allocated = 80
    
    if (++line_count > MAX_LINES_PER_PAGE) {
        /* Missing Code Here
		 Checks how many lines are on the current page
		 if on the last line, will call print_page_header() to start new page
		 resets line_count
		 */
		
		
		
		
    }
    if (strlen(line) > MAX_PRINT_LINE_LENGTH) {
        /* Missing Code Here 
		 Determines if last line can fit on current page
		 otherwise will place on new page
		 */
		
		save_chp = line + MAX_PRINT_LINE_LENGTH;
		save_ch = *save_chp;													// proper types on each side
		*save_chp = '\0';															// second null terminator to truncate in the midst of the string
		
    }
    if (save_chp) {
        /* Missing Code Here 
		 False when == 0
		 Can use recursion if you really want
		 */
		
		printf(line);								// FIX TO PROPERLY PRINT
		*save_chp = save_ch;
		
		
		
		
    }
    /* Missing Code Here */
    if (save_chp) {
        /* Missing Code Here */
    }
}

static void print_page_header(char source_name[], char date[]) {
    static int page_number = 0;
    
    /* Missing Code Here 
	 prints new page headers and resets the count on line number
	 
	 
	 
	 
	 */
}










