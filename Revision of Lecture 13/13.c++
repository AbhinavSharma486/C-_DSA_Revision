// ^ Problem 1 :- Add Digits :- Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

// & link :- https://leetcode.com/problems/add-digits/description/

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter n : ";
//   cin >> n;

//   while (n > 9)
//   {
//     int rem, ans = 0;

//     while (n != 0)
//     {
//       rem = n % 10;
//       n = n / 10;
//       ans = ans + rem;
//     }
//     n = ans;
//   }

//   cout << "Sum is : " << n << endl;

//   return 0;
// }

// ---------------------------------------------------------------------------------

// ^ Problem 2 :-  Check a year is leap year or not

// & link :- https://www.geeksforgeeks.org/problems/leap-year0943/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// #include <iostream>
// using namespace std;
// int main()
// {
//   int year;
//   cout << "Enter year : ";
//   cin >> year;

//   if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//   {
//     cout << "Yes, it is a leap year";
//   }
//   else
//   {
//     cout << "No, year is not a leap year";
//   }

//   return 0;
// }

// ---------------------------------------------------------------------------------

// * Problem 3 :- Reverse the integer

// & link :- https://leetcode.com/problems/reverse-integer/description/

// #include <iostream>
// using namespace std;
// int main()
// {
//   int num;
//   cout << "Enter num : ";
//   cin >> num;

//   int rem, ans = 0;

//   while (num != 0)
//   {
//     rem = num % 10;
//     num = num / 10;

//     if (ans > INT32_MAX / 10 || ans < INT32_MIN / 10)
//     {
//       cout << "Overflow occured. Cannnot reverse the integer" << endl;
//       return 1;
//     }

//     ans = ans * 10 + rem;
//   }

//   cout << "Reverse Interger is : " << ans;

//   return 0;
// }

// ---------------------------------------------------------------------------------

// ^ Problem 4 :- Power of 2

// & link :- https://leetcode.com/problems/power-of-two/description/

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter x : ";
//   cin >> n;

//   for (int i = 1; i < 31; i++)
//   {
//     int ans = pow(2, i);

//     if (ans == n)
//     {
//       cout << "Yes it is power of 2";
//       return true;
//     }
//   }
//   cout << "No it is not under power of 2";
//   return false;

//   return 0;
// }

// ---------------------------------------------------------------------------------

// ^ Problem 5 :- Find the square root of given no.

// & link :- https://leetcode.com/problems/sqrtx/description/

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//   int x;
//   cout << "Enter x : ";
//   cin >> x;

//   int sqrtOfX = sqrt(x);
//   cout << "Square root of " << x << " is : " << sqrtOfX;

//   return 0;
// }

// ---------------------------------------------------------------------------------

// ^ Problem 6 :- Check a number is palindrome or not

// & link :- https://leetcode.com/problems/palindrome-number/description/

// #include <iostream>
// using namespace std;
// int main()
// {
//   int num;
//   cout << "Enter num : ";
//   cin >> num;

//   int rem, ans = 0, n = num;
//   while (n != 0)
//   {
//     rem = n % 10;
//     n = n / 10;
//     ans = ans * 10 + rem;
//   }

//   if (num == ans)
//   {
//     cout << "Yes it is palindrome";
//   }
//   else
//   {
//     cout << "No it not palindrome";
//   }

//   return 0;
// }

// ----------------------------------------------------------------------------------------
