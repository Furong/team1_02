//adding comments is awesome. It makes it personal.

#include "common.h"

int main (int argc, const char *argv[]) {
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
   
   /* Missing Code Here
	pass source_file to init_lister()
	
	use a while loop to go through all lines of the code being read
	
	
	*/
    return 0;
}

FILE *init_lister(const char *name, char source_file_name[], char dte[]) {
    time_t timer;
    FILE *file;
    
    /* Missing Code Here 
	copy the name into variable called “source_name”, open the source file parameter “source_file”, and set the date and time string.
	 
	 
	 */
    return file;
}

BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[]) {
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;
    
    if (1) { //This is missing a condition
    
		/*  Missing Code Here */
        return (TRUE);
    }
    else {
        return (FALSE);
    }
}

