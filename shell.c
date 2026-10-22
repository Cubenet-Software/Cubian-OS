#include <stdint.h>
#include <stdbool.h>

int shellrunningvar = true
int main() {
  while (true) {
    printf("user$> ");
    scanf("%d", &userinputshell);
    /**note to self: still bad at C. need to make a better shell than this. this is a fileless shell that does not even have a config**/
    if (userinput == "ping") {
      printf("Pong!");
    }
  }
}
  
