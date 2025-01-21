// ^ Print the pattern
// &            *
// &          * * *
// &        * * * * *
// &      * * * * * * *
// &    * * * * * * * * *

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

//     // printing the *
//     for (col = 1; col <= (2 * row) - 1; col++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

//----------------------------------------------------------------------------------

// ^ Print the pattern
// &              1
// &            1 2 1
// &          1 2 3 2 1
// &        1 2 3 4 3 2 1
// &      1 2 3 4 5 4 3 2 1

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

//     // printing the left side numbers
//     for (col = 1; col <= row; col++)
//     {
//       cout << col << " ";
//     }

//     // printing the right side numbers
//     for (col = row - 1; col >= 1; col--)
//     {
//       cout << col << " ";
//     }

//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// ^ Print the pattern
// &     * * * * * * * * *
// &       * * * * * * *
// &         * * * * *
// &           * * *
// &             *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing white spaces
//     for (col = 1; col <= row - 1; col++)
//     {
//       cout << "  ";
//     }

//     // printin *
//     for (col = 1; col <= 9 - (2 * (row - 1)); col++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// ^ Print the pattern
// &      * * * * * * * *
// &      * * *     * * *
// &      * *         * *
// &      *             *
// &      *             *
// &      * *         * *
// &      * * *     * * *
// &      * * * * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 4; row++)
//   {
//     // * left side of upper part
//     // printing *
//     for (col = 1; col <= 4 - (row - 1); col++)
//     {
//       cout << "* ";
//     }

//     // printing the white spaces
//     for (col = 1; col <= (row - 1); col++)
//     {
//       cout << "  ";
//     }

//     // & right side of upper part
//     // printing white spaces
//     for (col = 1; col <= row - 1; col++)
//     {
//       cout << "  ";
//     }

//     // printing the *
//     for (col = 1; col <= 4 - (row - 1); col++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   // * left side of lower part
//   for (row = 1; row <= 4; row++)
//   {
//     // printing hte *
//     for (col = 1; col <= row; col++)
//     {
//       cout << "* ";
//     }

//     // printing the white spaces
//     for (col = 1; col <= 4 - row; col++)
//     {
//       cout << "  ";
//     }

//     // & right side of lower part
//     // printing the white spaces
//     for (col = 1; col <= 4 - row; col++)
//     {
//       cout << "  ";
//     }

//     // printing the *
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
// &     *             *
// &     * *         * *
// &     * * *     * * *
// &     * * * * * * * *
// &     * * *     * * *
// &     * *         * *
// &     *             *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   // * Complete Upper Part
//   for (row = 1; row <= 4; row++)
//   {
//     // printing the *
//     for (col = 1; col <= row; col++)
//     {
//       cout << "* ";
//     }

//     // printing the white spaces
//     for (col = 1; col <= 2 * (4 - row); col++)
//     {
//       cout << "  ";
//     }

//     // printing the *
//     for (col = 1; col <= row; col++)
//     {
//       cout << "* ";
//     }

//     cout << endl;
//   }

//   // & Complete Lower Part
//   for (row = 1; row <= 3; row++)
//   {
//     // printing the *
//     for (col = 1; col <= 3 - (row - 1); col++)
//     {
//       cout << "* ";
//     }

//     // printing white spaces
//     for (col = 1; col <= 2 * row; col++)
//     {
//       cout << "  ";
//     }

//     // printing *
//     for (col = 1; col <= 3 - (row - 1); col++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// ^ Print the pattern
// &         *
// &        * *
// &       * * *
// &      * * * *
// &      * * * *
// &       * * *
// &        * *
// &         *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   // & printing the complete uppar part
//   for (row = 1; row <= 4; row++)
//   {
//     // printing the white spaces
//     for (col = 1; col <= 4 - row; col++)
//     {
//       cout << " ";
//     }

//     // printing the *
//     for (col = 1; col <= row; col++)
//     {
//       cout << "* ";
//     }

//     cout << endl;
//   }

//   // & printing the complete lower part
//   for (row = 1; row <= 4; row++)
//   {
//     // printing the white spaces
//     for (col = 1; col <= row - 1; col++)
//     {
//       cout << " ";
//     }

//     // printing the *
//     for (col = 1; col <= 4 - (row - 1); col++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// ! Homework start form here

// * 1 First Pattern:
// &     *
// &    * *
// &   * * *
// &  * * * *
// & * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing white space
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << " ";
//     }

//     // printing *
//     for (col = 1; col <= row; col++)
//     {
//       cout << "* ";
//     }

//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// * 2 Second Pattern:

// &          1
// &        1 2 3
// &      1 2 3 4 5
// &    1 2 3 4 5 6 7
// &  1 2 3 4 5 6 7 8 9

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
//     for (col = 1; col <= 2 * row - 1; col++)
//     {
//       cout << col << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// * 3 Third Pattern:

// &         A
// &       A B A
// &     A B C B A
// &   A B C D C B A
// & A B C D E D C B A

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     // printing white spaces for left side
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << "  ";
//     }

//     // printing the half pattern
//     char ch = 'A';
//     for (col = 1; col <= row; col++)
//     {
//       cout << ch << " ";
//       ch++;
//     }

//     // printing the next right side half pattern from 2nd row
//     for (char col = 'A' + (row - 1) - 1; col >= 'A'; col--)
//     {
//       cout << col << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// * 4 Fourth Pattern:

// &          *
// &         * *
// &        * * *
// &       * * * *
// &      * * * * *
// &      * * * * *
// &       * * * *
// &        * * *
// &         * *
// &          *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   // & Half Upper part of pattern
//   for (row = 1; row <= 5; row++)
//   {
//     // printing white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << " ";
//     }

//     // printing *
//     for (col = 1; col <= row; col++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   // * Half Lower part of pattern
//   for (row = 5; row >= 1; row--)
//   {
//     // printing white spaces
//     for (col = 1; col <= 5 - row; col++)
//     {
//       cout << " ";
//     }

//     // printing *
//     for (col = 1; col <= row; col++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   return 0;
// }