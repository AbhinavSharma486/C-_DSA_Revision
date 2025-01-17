// ^ Print this pattern
// & *
// & * *
// & * * *
// & * * * *
// & * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     for (col = 1; col <= row; col++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

//----------------------------------------------------------------------------------

// ^ Print this pattern
// & 1
// & 1 2
// & 1 2 3
// & 1 2 3 4
// & 1 2 3 4 5

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
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
// & 1
// & 2 2
// & 3 3 3
// & 4 4 4 4
// & 5 5 5 5 5

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
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
// & 1
// & 2 1
// & 3 2 1
// & 4 3 2 1
// & 5 4 3 2 1

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     int n = row;
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

// ^ Print the pattern
// & a
// & b b
// & c c c
// & d d d d
// & e e e e e

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     char ch = 'a' + (row - 1);
//     for (col = 1; col <= row; col++)
//     {
//       cout << ch << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// ^ Print the pattern
// & * * * * *
// & * * * *
// & * * *
// & * *
// & *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     for (col = 1; col <= 5 - (row - 1); col++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

//----------------------------------------------------------------------------------

// ^ Print the pattern
// & 1 2 3 4 5
// & 1 2 3 4
// & 1 2 3
// & 1 2
// & 1

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     for (col = 1; col <= 5 - (row - 1); col++)
//     {
//       cout << col << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

//----------------------------------------------------------------------------------

// ^ Print the pattern
// & 5
// & 5 4
// & 5 4 3
// & 5 4 3 2
// & 5 4 3 2 1

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
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

// ! Homework start from here

// * 1 First Pattern :
// & 1
// & 1 2
// & 1 2 3
// & 1 2 3 4
// & 1 2 3 4 5
// & 1 2 3 4 5 6
// & 1 2 3 4 5 6

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;
//   int n = 6;

//   for (row = 1; row <= n; row++)
//   {
//     for (col = 1; col <= row; col++)
//     {
//       cout << col << " ";
//     }
//     cout << endl;
//   }

//   for (int i = 1; i <= n; i++)
//   {
//     cout << i << " ";
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// * 2 Second Pattern :

// & A
// & A B
// & A B C
// & A B C D
// & A B C D E

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
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

// * 3 Third Pattern :

// & 10
// & 10 11
// & 10 11 12
// & 10 11 12 13
// & 10 11 12 13 14
// & 10 11 12 13 14 15

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 6; row++)
//   {
//     int n = 10;
//     for (col = 1; col <= row; col++)
//     {
//       cout << n << " ";
//       n++;
//     }
//     cout << endl;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// * Fourth Pattern :-

// & A B C D
// & A B C
// & A B
// & A

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 4; row++)
//   {
//     char ch = 'A';
//     for (col = 1; col <= 4 - (row - 1); col++)
//     {
//       cout << ch << " ";
//       ch++;
//     }
//     cout << endl;
//   }

//   return 0;
// }