#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the n--> ";
    cin >> n;
    int row = 1;

    /*
     *
     **
     ***
     ****
     *****
     */
    // while(row<=n){
    //     // first print the space
    //     int space=n-row;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //                 }
    // // print the stars
    // int col=1;
    // while(col<=row){
    //     cout<<"*";
    //     col++;
    // }
    // row++;
    // cout<<endl;
    // }

    /*            1
                 23
                456
               78910*/
    //     int count=1;
    //    while(row<=n){
    //     //for space
    //     int space=n-row;
    //     while(space){
    //         cout<<" ";
    //         space--; }
    //     //for counting
    //     int col=1;
    //     while(col<=row){
    //        cout<<count;
    //        count++;
    //        col++;}
    //     row++;
    //     cout<<endl;}

    /*****
     ****
     ***
     **
     */
    // while(row<=n){
    //     int col=1;
    //     while(col<=n-row+1){
    //         cout<<"*";
    //         col++;
    //     }
    //     row++;
    //     cout<<endl;
    // }

    /*****
      ****
       ***
        **
         */
    // while(row<=n){
    //     //loop for space
    //     int space=0;
    //     while(space<row-1){
    //         cout<<" ";
    //         space++;
    //     }
    //     //loop for star
    //     int col=space+1;
    //     while(col<=n){
    //         cout<<"*";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    /*  11111
         2222
          333
           44
            5
            */
// while(row<=n){
//         //loop for space
//         int space=0;
//         while(space<row-1){
//             cout<<" ";
//             space++;
//         }
//         //loop for star
//         int col=space+1;
//         while(col<=n){
//             cout<<row;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }



    /*      1
           22
          333
         4444
        55555
            */


    /*    1234
           234
            34
             4
            */



/*     1
      121
     12321
    1234321
    */
    // while (row <= n)
    // {  // for space
    //     int space = n - row;
    //     while (space)
    //     {
    //       cout << " ";
    //         space--;
    //     }
    //     // for first triangle
    //     int col1 = 1;
    //     while (col1 <= row)
    //     {
    //         cout << col1;
    //         col1++;
    //     }
    //     // for second triangle
    //     int col2 = row - 1;
    //     while (col2)
    //     {
    //         cout << col2;
    //         col2--;
    //     }
    //     row++;
    //     cout << endl;
    // }


    /*
      1 2 3 4 5 5 4 3 2 1
      1 2 3 4 * * 4 3 2 1
      1 2 3 * * * * 3 2 1
      1 2 * * * * * * 2 1
      1 * * * * * * * * 1
      */
   
   while(row<=n){
   //for  first triangle 
     int col1=1;
     while(col1<=n-row+1){
        cout<<col1<<" ";
        col1++;
     }

     // star vali triangle ke lie

     int star=col1;
     while(star<=n+row-1){
        cout<<"*"<<" ";
        star++;
     } 
      
      //next number vali triangle ke lie
      int col2=n-row+1;
      while(col2>=1){ 
          cout<<col2<<" ";
          col2--;
      }
     row++;
     cout<<endl;
   }

   /*
      
   */
   
}