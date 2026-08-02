#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
extern char *  pop();
extern void push(char *);
extern int isEmpty();

int main(int argc, char * argv[])
{
  int ch;
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
    if (ch == '<') {

            char tag[100];
            int i = 0;
            int endTag = 0;

            ch = getchar();

            /* Check if it is an end-tag */
            if (ch == '/') {
                endTag = 1;
                ch = getchar();
            }

            /* Read the tag name */
            while (isalpha(ch)) {
                tag[i++] = ch;
                ch = getchar();
            }

            tag[i] = '\0';

            if (!endTag) {
                /* Start-tag: make a copy and push it */
                char *copy = malloc(strlen(tag) + 1);
                strcpy(copy, tag);
                push(copy);
            }
            else {
                /* End-tag: pop and compare */
                char *startTag = pop();

                if (startTag == NULL) {
                    printf("Invalid XML\n");
                    return 0;
                }

                if (strcmp(startTag, tag) != 0) {
                    printf("Invalid XML\n");
                    free(startTag);
                    return 0;
                }

                free(startTag);
            }
        }
    }

    if (isEmpty()){
        printf("Valid XML\n");
	}
    else{
        printf("Invalid XML\n");
	}

  
  return 0;
}
