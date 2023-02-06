//C code for perceptron, the fundamental building block for artificial neural networks
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
    int Y[4] = { 0, 0, 0, 1 }; //the actual labels for the output
    int Y_p[4]; //need to compute this for predicting the label during training
    float w[4] = { 1.0, 1.0, 1.0, 1.0 }; //contains weights which will be adjusted during training
    //training data needs a 2D array AKA matrix
    int x[4][4] = { {1, 0, 0, 0},
                    {1, 0, 1, 0},
                    {1, 1, 0, 1},
                    {1, 1, 1, 1 } };
    int    err = 0; //keep track of the error Y-Y_p
    int i, j = 0; //used for our matrix
    int epoch = 0; //training cycle each time through the training data
    float net = 0.0; //keep track of the weighted sum 
    float lr = 0.75; //learning rate

    printf("Training a perceptron\n");
    printf("**************************************************************** \n");
    printf("Below contains our input data with our bias and two features: \n");
    printf("Bias\tX1\tX2\tX3 \n");
    printf("-------------------------- \n");

    //print out the matrix of our training data
    for (i = 0; i < 4; i++)  //iterate through each row
    {
        for (j = 0; j < 4; j++) //iterate through each column
        {
            printf("%i \t", x[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");
    printf("**************************************************************** \n");

    //display the final table
    printf("W0 \t W1 \t W2 \t W3 \t NET OUTPUT \t Y_p \t Y \n");
    printf("------------------------------------------------------------\n");
    //do while loop to handle how many times training is done
    do
    {
        for (i = 0; i < 4; i++) //iterate through each row 
        {
            for (j = 0; j < 4; j++) //iterate through each column
            {
                net = net + (w[j] * x[i][j]); //delta learning rule
            }
            //activation function outcome
            if (net >= 0)
            {
                Y_p[i] = 1;
            }
            else
            {
                Y_p[i] = 0;
            }
            err = Y[i] - Y_p[i]; //compute the difference between predicted and actual label            

            //updating the weights for the current epoch
            for (j = 0; j < 4; j++)
            {
                w[j] = w[j] + (lr * x[i][j] * err); //updating the weight vector
                printf("%.2f \t", w[j]);
            }
            printf("%.2f \t\t %d \t %d \n", net, Y_p[i], Y[i]);
        }
        printf("------------------------------------------------------------\n");
        epoch++; //epoch = epoch + 1;

        //keep training (iterate epoch) until prediction value is equal to actual value
    } while (Y_p[0] != Y[0] || Y_p[1] != Y[1] || Y_p[2] != Y[2] || Y_p[3] != Y[3]);

    printf("Learning rate is  %.2f and the number of epochs is %i", lr, epoch);
    printf("\n\n\n");
    system("pause");
    return 0;
}
