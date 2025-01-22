// ! Print the table of given number

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter value for which table of number you want : ";
//   cin >> n;

//   for (int i = 1; i <= 10; i++)
//   {
//     cout << n << " " << "*" << " " << i << " " << "=" << " " << n * i << endl;
//   }
// }

//----------------------------------------------------------------------------------

// ^ Write a program to find the factors of a given number

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter the no. for which you want to get factors : ";
//   cin >> n;

//   cout << "These are the possible factors of the entered no. : ";
//   int i = 1;
//   while (i <= n)
//   {
//     if (n % i == 0)
//     {
//       cout << i << "," << " ";
//     }
//     i++;
//   }
// }

//----------------------------------------------------------------------------------

// ^ Print all even numbers 0 to 'n'

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter n : ";
//   cin >> n;

//   for (int i = 0; i <= n; i++)
//   {
//     if (i % 2 == 0)
//     {
//       cout << i << "," << " ";
//     }
//   }
// }

//----------------------------------------------------------------------------------

// ^ Print all odd numbers 0 to 'n'

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter n : ";
//   cin >> n;

//   for (int i = 0; i <= n; i++)
//   {
//     if (i % 2 != 0)
//     {
//       cout << i << "," << " ";
//     }
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// ? Homework start from here :-

// & Question 1 :- Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5.(use Continue here).

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter n : ";
//   cin >> n;

//   for (int i = 1; i <= n; i++)
//   {
//     if (i % 3 == 0 || i % 5 == 0)
//     {
//       continue;
//     }
//     cout << i << " ";
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// * Question 2 :- Given a number n, print the corresponding month of it.For n = 1, print Jan, n = 2, print Feb…, if the user puts any invalid number, don’t do anything.(Use switch here)

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter n : ";
//   cin >> n;

//   switch (n)
//   {
//   case 1:
//     cout << "January";
//     break;

//   case 2:
//     cout << "February";
//     break;

//   case 3:
//     cout << "March";
//     break;

//   case 4:
//     cout << "April";
//     break;

//   case 5:
//     cout << "May";
//     break;

//   case 6:
//     cout << "June";
//     break;

//   case 7:
//     cout << "July";
//     break;

//   case 8:
//     cout << "August";
//     break;

//   case 9:
//     cout << "September";
//     break;

//   case 10:
//     cout << "October";
//     break;

//   case 11:
//     cout << "November";
//     break;

//   case 12:
//     cout << "December";
//     break;

//   default:
//     cout << "Enter n in range of 1 to 12";
//     break;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// * Question 3 :- Print all the Capital and small letters using a while loop. It means A - Z, then a - z.

// #include <iostream>
// using namespace std;
// int main()
// {
//   char capitalCh = 'A';
//   char smallCh = 'a';
//   int i = 1, j = 1;

//   while (i <= 26)
//   {
//     cout << capitalCh << " ";
//     capitalCh++;
//     i++;
//   }

//   cout << endl;

//   while (j <= 26)
//   {
//     cout << smallCh << " ";
//     smallCh++;
//     j++;
//   }

//   return 0;
// }

//----------------------------------------------------------------------------------

// * Question 4 :- Give a number n, find if it is prime or not, use a while loop and break here to solve it.

// #include <iostream>
// using namespace std;

// bool isPrime(int n)
// {
//   if (n <= 1)
//   {
//     return false;
//   }
//   if (n <= 3)
//   {
//     return true;
//   }

//   if (n % 2 == 0 || n % 3 == 0)
//   {
//     return false;
//   }

//   int i = 5;
//   while (i * i <= n)
//   {
//     if (n % i == 0)
//     {
//       return false;
//     }
//     i++;
//   }
//   return true;
// }

// int main()
// {
//   int n;
//   cout << "Enter n : ";
//   cin >> n;

//   if (isPrime(n))
//   {
//     cout << n << " is a prime no.";
//   }
//   else
//   {
//     cout << n << " is not a prime no.";
//   }

//   return 0;
// }