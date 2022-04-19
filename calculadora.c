main(void){
                                                    /*--calculadora--*/
  int n1,n2, op, rst;
    printf(" Digite 1 para somar.\n Digite 2 para subtrair.\n Digite 3 para multiplicar.\n Digite 4 para dividir.\n");
    scanf("%d", &op);

    printf(" Digite o Primeiro Numero:\n");
    scanf("%d", &n1);

    printf(" Digite o Segundo Numero:\n");
    scanf("%d", &n2);

  if (op == 1){
    rst = n1+n2;
    printf("O resultado da soma e: %d", rst);
    
  }
   else if (op == 2)
  {
     rst = n1-n2;
    printf("O resultado da subtracao e: %d", rst);
  }
  else if (op == 3)
  {
     rst = n1*n2;
    printf("O resultado da multiplicacao e: %d", rst);
  }
  else if (op == 4)
  {
     rst = n1/n2;
    printf("O resultado da divisao e: %d", rst);
  }
 
   
}