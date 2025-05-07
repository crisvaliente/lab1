#include <stdio.h>

int main() {
    // Declaración de variables
    int cant_camisas, cant_pantalones, cant_zapatos, cant_medias, cant_gorros;
    float subtotal_camisas, subtotal_pantalones, subtotal_zapatos, subtotal_medias, subtotal_gorros;
    float descuento_camisas, descuento_pantalones, descuento_zapatos, descuento_medias, descuento_gorros;
    float total_con_descuento, total_descuentos, total_sin_descuentos;
    int grupos_pantalones, pares_zapatos, grupos_medias, pares_gorros;

    // Constantes de precios
    const float precio_camisa = 1200;
    const float precio_pantalones = 1600;
    const float precio_zapatos = 4380;
    const float precio_medias = 380;
    const float precio_gorro = 560;

    // Entrada de datos
    printf("Ingrese la cantidad de camisas: ");
    while (1) {
        if (scanf("%d", &cant_camisas) == 1 && cant_camisas >= 0) {
            break;
        } else {
            while (getchar() != '\n'); // Limpiar buffer
            printf("Entrada incorrecta. Por favor, ingrese una cantidad válida de camisas (número positivo): ");
        }
    }

    printf("Ingrese la cantidad de pantalones: ");
    while(1){
       if(scanf("%d", &cant_pantalones) == 1 && cant_pantalones >= 0) {
              break;
       }else {
              while(getchar() != '\n'); // Limpiar buffer
              printf("Entrada incorrecta. Por favor, ingrese una cantidad válida de pantalones");
       }
    }

  
    printf("Ingrese la cantidad de zapatos: ");
    while (1){
       if (scanf("%d", &cant_zapatos) == 1 && cant_zapatos >= 0){
              break;
       }else{
              while(getchar() != '\n'); // Limpiar buffer
              printf("Entrada incorrecta. Por favor, ingrese una cantidad válida de zapatos");
       }
    }

    

printf("Ingrese la cantidad de medias:");
while(1){
       if(scanf("%d", &cant_medias) == 1 && cant_medias >= 0){
              break;
       }else{
              while(getchar() != '\n'); // Limpiar buffer
              printf("Entrada incorrecta. Por favor, ingrese una cantidad válida de medias");
       }
}




printf("Ingrese la cantidad de gorros: ");
while(1){
       if(scanf("%d", &cant_gorros) == 1 && cant_gorros >= 0){
              break;
       }else{
              while(getchar() != '\n'); // Limpiar buffer
              printf("Entrada incorrecta. Por favor, ingrese una cantidad válida de gorros");
       }
}




    // Cálculo de subtotales
    subtotal_camisas = cant_camisas * precio_camisa;
    subtotal_pantalones = cant_pantalones * precio_pantalones;
    subtotal_zapatos = cant_zapatos * precio_zapatos;
    subtotal_medias = cant_medias * precio_medias;
    subtotal_gorros = cant_gorros * precio_gorro;

    // Cálculo de descuentos
    descuento_camisas = subtotal_camisas * 0.10;

    grupos_pantalones = cant_pantalones / 3;
    descuento_pantalones = grupos_pantalones * 3 * precio_pantalones * 0.10;

    pares_zapatos = cant_zapatos / 2;
    descuento_zapatos = pares_zapatos * 2 * precio_zapatos * 0.04;

    grupos_medias = cant_medias / 3;
    descuento_medias = grupos_medias * precio_medias * 0.5;

    pares_gorros = cant_gorros / 2;
    descuento_gorros = pares_gorros * 2 * precio_gorro * 0.08;

    // Totales
    total_sin_descuentos = subtotal_camisas + subtotal_pantalones + subtotal_zapatos + subtotal_medias + subtotal_gorros;
    total_descuentos = descuento_camisas + descuento_pantalones + descuento_zapatos + descuento_medias + descuento_gorros;
    total_con_descuento = total_sin_descuentos - total_descuentos;

    // Mostrar resultados
    printf("\nSu compra es:\n");

    printf("%d Camisas - $%.2f, Descuento: $%.2f, Total: $%.2f\n",
           cant_camisas, subtotal_camisas, descuento_camisas, subtotal_camisas - descuento_camisas);

    printf("%d Pantalones - $%.2f, Descuento: $%.2f, Total: $%.2f\n",
           cant_pantalones, subtotal_pantalones, descuento_pantalones, subtotal_pantalones - descuento_pantalones);

    printf("%d Zapatos - $%.2f, Descuento: $%.2f, Total: $%.2f\n",
           cant_zapatos, subtotal_zapatos, descuento_zapatos, subtotal_zapatos - descuento_zapatos);

    printf("%d Medias - $%.2f, Descuento: $%.2f, Total: $%.2f\n",
           cant_medias, subtotal_medias, descuento_medias, subtotal_medias - descuento_medias);

    printf("%d Gorros - $%.2f, Descuento: $%.2f, Total: $%.2f\n",
           cant_gorros, subtotal_gorros, descuento_gorros, subtotal_gorros - descuento_gorros);

    printf("\nTotal a pagar: $%.2f\n", total_con_descuento);

    return 0;
}
