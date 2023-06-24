#include <stdio.h>

int main() {
  float celsius, kelvin, farenheit;
  float temp;
  char escala, dest;

  
  
  scanf("%f %c > %c", &temp, &escala, &dest);


  switch(escala){
    case 'C':
      celsius = temp;
      kelvin = temp + 273.15;
      farenheit = temp*1.8 + 32; 
      break;
    case 'F':
      celsius = (temp-32)/1.8;
      farenheit = temp;
      kelvin = celsius + 273.15;
      break;
    case 'K':
      celsius = temp-273.15;
      farenheit = celsius*1.8 + 32;
      kelvin = temp;
      break;
  }
  
  switch(dest){
    case 'C':
      printf("%.2f C\n", celsius);
      break;
    case 'F':
      printf("%.2f F\n", farenheit);
      break;
    case 'K':
      printf("%.2f K\n", kelvin);
      break;
  }

  return 0;
}