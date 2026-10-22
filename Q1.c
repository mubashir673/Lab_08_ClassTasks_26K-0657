#include <stdio.h>

int main() {

    int sales[3][3];
    int prices[3][2];
    int total_cost , total_sales , temp , temp1;
    int i , j ,k;
    int total[3][2];
    int profit[3] = {0};
    int high = 0;

    // initializing sales matrix
    for( i = 0 ; i < 3 ; i++ ){
        printf("\n Enter Sales Quantity of branch %d for Charger : " , i + 1);
        scanf("\n %d" , &temp);
        sales[i][0] = temp;
    }

    for( i = 0 ; i < 3 ; i++ ){
        printf("\n Enter Sales Quantity of branch %d for Earphones : " , i + 1);
        scanf("\n %d" , &temp);
        sales[i][1] = temp;
    }

    for( i = 0 ; i < 3 ; i++ ){
        printf("\n Enter Sales Quantity of branch %d for Cover : " , i + 1);
        scanf("\n %d" , &temp);
        sales[i][2] = temp;
    }

    // initializing prices matrix
    printf("\n Enter Cost Price for charger: ");
    scanf("\n %d" , &temp);
    prices[0][0] = temp; 

    printf("\n Enter Selling Price for charger: ");
    scanf("\n %d" , &temp);
    prices[0][1] = temp; 

    printf("\n Enter Cost Price for earphones: ");
    scanf("\n %d" , &temp);
    prices[1][0] = temp; 

    printf("\n Enter Selling Price for earphones: ");
    scanf("\n %d" , &temp);
    prices[1][1] = temp; 

    printf("\n Enter Cost Price for cover: ");
    scanf("\n %d" , &temp);
    prices[2][0] = temp; 

    printf("\n Enter Selling Price for cover: ");
    scanf("\n %d" , &temp);
    prices[2][1] = temp;

    //Calculating total sales and costs
    for( i = 0 ; i < 3 ; i++ ){
        for( j = 0 ; j < 2 ; j++ ){
            for( k = 0 ; k < 3 ; k++){
                total[i][j] += sales[i][k] * prices[k][j];
            }
        }
    }

    //calculating profit 
    for( i = 0 ; i < 3 ; i++) {
        profit[i] = total[i][1] - total[i][0];
    }

    for( i = 0 ; i < 3 ; i++) {
        if( profit[i] > high ){
            high = profit[i];
            temp1 = i;
        }
    }
    printf("\n Branch %d got the highest profit ie : %d " , temp1 + 1 , high );   
    








    return 0;
}