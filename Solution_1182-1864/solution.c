#include <stdio.h>

void main() {
//* Problem 1182 - Column in Array
    // float array[12][12], sum = 0;
    // int column;
    // char sum_of_average;

    // scanf("%u %c", &column, &sum_of_average);

    // if (column >= 0 && column <= 11) {

    //     for (int i = 0; i < 12; i++) {
    //         for (int j = 0; j < 12; j++) scanf("%f", &array[i][j]);
    //     }

    //     for (int k = 0; k < 12; k++) sum += array[k][column];
        
    //     sum_of_average == 'S' && printf("%.1f\n", sum);
    //     sum_of_average == 'M'&& printf("%.1f\n", sum / 12.00);     
    // }

//* Problem 1183 - Above the Main Diagonal
    // float array[12][12], sum = 0, average_count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);
  

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) scanf("%f", &array[i][j]);
    // }

    // for (int k = 0; k < 12; k++) {
    //     for (int l = k + 1; l < 12; l++) {
    //         sum += array[k][l];
    //         average_count++;
    //     }
    // }
        
    // sum_of_average == 'S' && printf("%.1f\n", sum);
    // sum_of_average == 'M'&& printf("%.1f\n", sum / average_count);

//* Problem 1184 - Below the Main Diagonal
    // float array[12][12], sum = 0, average_count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);
  

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) scanf("%f", &array[i][j]);
    // }

    // for (int k = 0; k < 12; k++) {
    //     for (int l = 0; l < k; l++) {
    //         sum += array[k][l];
    //         average_count++;
    //     }
    // }
        
    // sum_of_average == 'S' && printf("%.1f\n", sum);
    // sum_of_average == 'M'&& printf("%.1f\n", sum / average_count);

//* Problem 1185 - Above the Secundary Diagonal
    // float array[12][12], sum = 0, average_count = 0;
    // char sum_of_average;
    // int count_row = 11;

    // scanf("%c", &sum_of_average);
  

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) scanf("%f", &array[i][j]);
    // }

    // for (int k = 0; k < 12; k++) {
    //     for (int l = 0; l < count_row; l++) {
    //         sum += array[k][l];
    //         average_count++;
    //     }
    //     count_row--;
    // }
        
    // sum_of_average == 'S' && printf("%.1f\n", sum);
    // sum_of_average == 'M'&& printf("%.1f\n", sum / average_count);

//* Problem 1186 - Below the Secundary Diagonal
    // float array[12][12], sum = 0, average_count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);
  

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) scanf("%f", &array[i][j]);
    // }

    // for (int k = 0; k < 12; k++) {
    //     for (int l = 12 - k; l < 12; l++) {
    //         sum += array[k][l];
    //         average_count++;
    //     }
    // }
        
    // sum_of_average == 'S' && printf("%.1f\n", sum);
    // sum_of_average == 'M'&& printf("%.1f\n", sum / average_count);

//* Problem 1187 - Top Area
    // double array[12][12], sum = 0;
    // int min = 0, max = 12, count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) {
    //         scanf("%lf", &array[i][j]);
    //     }
    // }

    // for (int i = 0; i <= 4; i++) {
    //     for (int j = (min + 1); j < (max - 1); j++) {
    //         sum += array[i][j];
    //         count++;
    //     }
    //     min++; max--;
    // }

    //     sum_of_average == 'S' && printf("%.1lf\n", sum);
    //     sum_of_average == 'M'&& printf("%.1lf\n", sum / count);

//* Problem 1188 - Inferior Area
    // double array[12][12], sum = 0;
    // int min = 0, max = 12, count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) {
    //         scanf("%lf", &array[i][j]);
    //     }
    // }

    // for (int i = 11; i > 6; i--) {
    //     for (int j = (min + 1); j < (max - 1); j++) {
    //         sum += array[i][j];
    //         count++;
    //     }
    //     min++; max--;
    // }

    //     sum_of_average == 'S' && printf("%.1lf\n", sum);
    //     sum_of_average == 'M'&& printf("%.1lf\n", sum / count);

//* Problem 1189 - Left area
    // double array[12][12], sum = 0;
    // int max_1 = 1, max_2 = 5, count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) {
    //         scanf("%lf", &array[i][j]);
    //     }
    // }

    // for (int i = 1; i < 6; i++) {
    //     for (int j = 0; j < max_1; j++) {
    //         sum += array[i][j];
    //         count++;
    //     }

    //     for (int k = 0; k < max_2; k++) {
    //         sum += array[i + 5][k];
    //         count++;
    //     }
    //     max_1++;
    //     max_2--;
    // }

    // sum_of_average == 'S' && printf("%.1lf\n", sum);
    // sum_of_average == 'M'&& printf("%.1lf\n", sum / count);
}