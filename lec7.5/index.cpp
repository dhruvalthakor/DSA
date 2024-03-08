#include <iostream>
using namespace std;
int main()
{
    //--------Q1-------
    // find avg of all elements of 2D ARRAY
    //  int a[5][5]{
    //      {1, 2, 3, 4, 5}, {
    //          6, 7, 8, 9, 10}, {
    //          11, 12, 13, 14, 15}, {
    //          16, 17, 18, 19, 20}, {
    //          21, 22, 23, 24, 25}};

    // int sum = 0;
    // int lenth = sizeof(a) / sizeof(a[0][0]);

    // for (int i = 0; i <= 4; i++)
    // {
    //     for (int j = 0; j <= 4; j++)
    //     {
    //         sum = sum + a[i][j];
    //     }
    // }

    // cout << "avg:" << sum / lenth << endl;

    //
    //--------Q2-------
    /*
        int rows = 3, cols = 3;
        int array1[3][3] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};
        int array2[3][3] = {{21, 22, 23}, {24, 25, 26}, {27, 28, 29}};
        int sumArray[rows][cols];


        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                sumArray[i][j] = array1[i][j] + array2[i][j];
            }
        }


        cout << "Resultant Array:" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << sumArray[i][j] << " ";
            }
            cout << endl;
        }
        */

    //--------Q3-------

//    int array1[3][3] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};
  
   
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<3; j++) {
//            if(i == 0 || i ==2 || j == 0 || j ==2) {
//                cout << array1[i][j] << " ";
//            }
//            else {
//                cout << "   ";
//            }
//        }
//        cout << endl;
//    }
 //--------Q4-------



    
    // int matrix[3][3] = {{1, 2, 3}, 
    //                     {4, 5, 6}, 
    //                     {7, 8, 9}};

    // cout << "Diagonal elements: ";
    // for(int i = 0; i < 3; i++) {
    //    for (int j=0;j<3;j++){
    //     if(i==j){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //    }
    // }


 //--------Q5-------

// int ma[3][3] = {{1, 2, 3}, 
//                 {4, 5, 6},
//                 {7, 8, 9}};
    
//     cout << "Row-wise Sum:" << endl;
//     for(int i=0; i<3; ++i) {
//         int rowSum = 0;
//         for(int j=0; j<3; ++j) {
//             // cout<<ma[i][j];
//            rowSum += ma[i][j];
//         }
//       cout << "Row " << i+1 << ": " << rowSum << endl;
//     }

//   
//     cout << "Column-wise Sum:" << endl;
//     for(int j=0; j<3; ++j) {
//         int colSum = 0;
//         for(int i=0; i<3; ++i) {
//             colSum += ma[i][j];
//         }
//      cout << "Column " << j+1 << ": " << colSum<<endl;
//      }
















}
