/**
 * @file system_call.c
 * 
 * @brief   Exemple de code C pour des appels systèmes 
 *          (équivalent à une commande dans un émulateur de terminal, ou un script Bash)
 * 
 * @author  Kevin Cotton
 * @date    2024-08-02
 *
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * print texte "processus 1"
 * attendre 10 sec
 * print texte "processus 3"
 * attendre 5 sec
 * print texte "processus 5"
 * 
 * printf "nouvelle ligne, "terminé", nouvelle ligne"
 * 
 * @return     0 
 */
int main() {
  system("echo \"processus 1 \""); 
  system("sleep 10"); // processus 2
  system("echo \"processus 3 \""); 
  system("sleep 5"); // processus 4
  system("echo \"processus 5 \""); 

  printf("\n terminé \n");
  return 0;
}
