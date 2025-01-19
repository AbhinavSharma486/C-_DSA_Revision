// ^ Print the pattern
// &         *
// &       * *
// &     * * *
// &   * * * *
// & * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }
//     //  Printing the *
//     for (col = 1; col <= row; col++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// ^ Print the pattern
// &         1
// &       2 2
// &     3 3 3
// &   4 4 4 4
// & 5 5 5 5 5

// Method 1 :-

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }
//     int n = 1 + (row - 1);
//     // printing the numbers
//     for (col = 1; col <= row; col++)
//     {
//       cout << n << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// Method 2 :-

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }
//     // printing the numbers
//     for (col = 1; col <= row; col++)
//     {
//       cout << row << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// ^ Print the pattern
// &         1
// &       1 2
// &     1 2 3
// &   1 2 3 4
// & 1 2 3 4 5

// Method 1 :-

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }

//     // printing numbers
//     int n = 1;
//     for (col = 1; col <= row; col++)
//     {
//       cout << n << " ";
//       n++;
//     }
//     cout << endl;
//   }

//   return 0;
// }

// Method 2 :-

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }

//     // printing numbers
//     for (col = 1; col <= row; col++)
//     {
//       cout << col << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// ^ Print the pattern
// &          A
// &        A B
// &      A B C
// &    A B C D
// &  A B C D E

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }

//     // printing numbers
//     char ch = 'A';
//     for (col = 1; col <= row; col++)
//     {
//       cout << ch << " ";
//       ch++;
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// ^ Print the pattern
// &         1
// &       2 1
// &     3 2 1
// &   4 3 2 1
// & 5 4 3 2 1

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing the white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }

//     // printing the numbers
//     int n = 5;
//     for (col = row; col >= 1; col--)
//     {
//       cout << col << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// ! Homework start from here

// &         1
// &       2 1
// &     3 2 1
// &   4 3 2 1
// & 5 4 3 2 1

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }

//     // printing numbers
//     for (col = row; col >= 1; col--)
//     {
//       cout << col << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// &         A
// &       B B
// &     C C C
// &   D D D D
// & E E E E E

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }

//     // printing the alphabets
//     char ch = 'A' + (row - 1);
//     for (col = 1; col <= row; col++)
//     {
//       cout << ch << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// &         5
// &       5 4
// &     5 4 3
// &   5 4 3 2
// & 5 4 3 2 1

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing the white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }

//     // printing the numbers
//     int n = 5;
//     for (col = 1; col <= row; col++)
//     {
//       cout << n << " ";
//       n--;
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// &         E
// &       E D
// &     E D C
// &   E D C B
// & E D C B A

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing the white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }

//     // printing the alphabets
//     char ch = 'E';
//     for (col = 1; col <= row; col++)
//     {
//       cout << ch << " ";
//       ch--;
//     }

//     cout << endl;
//   }

//   return 0;
// }