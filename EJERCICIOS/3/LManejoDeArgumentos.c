/* LManejoDeArgumentos.c */
  // $ ./LManejoDeArgumentos -p nada -c
  // Activada la impresora: nada
  // Entorno de consola activado

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {

  extern char *optarg;
  extern int optind, opterr, optopt;
  int option;
  int verbose = 1; /* FLAG */
  /*
   * Verificando los argumentos
   */


  while ((option = getopt(argc, argv, "p:gcvt")) != -1) {
    switch (option) {
    case 'p':
      fprintf(stdout, "Activada la impresora: %s\n", optarg);
      break;

    case 'g':
      fprintf(stdout, "Entorno gr�fico activo\n");
      break;

    case 'c':
      fprintf(stdout, "Entorno de consola activado\n");
      break;

    case 'v':
      verbose = 1;
      fprintf(stdout, "Modo detallado\n");
      break;

    case 't':
      fprintf(stdout, "Modo tintico\n");
      break;

    default:
      fprintf(stdout, "No se reconoce la opcion\n");
      break;
    }
  }

  for (int i = optind; i < argc; i++)
    printf ("Archivos que se enviaran %s\n", argv[i]);


  // int i = 0;
  // for (i = 0; i < argc; i++) {
  //   if(strcmp(argv[i], "-p") == 0){
  //     // NO HACE NADA
  //     i++;
  //   }else if(strcmp(argv[i], "-g") == 0){
  //     i++;
  //   }else if(strcmp(argv[i], "-c") == 0){
  //     i++;
  //   }else if(strcmp(argv[i], "-v") == 0){
  //     i++;
  //   }else if(strcmp(argv[i], "-t") == 0){
  //     i++;
  //   }else if(i == 0){
  //     i++;
  //   }else{
  //       fprintf(stdout, "Argumento[%d]=%s\n", i, argv[i]);
  //   }
  //}

  return 0;
}
