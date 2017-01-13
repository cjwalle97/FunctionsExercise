#include <iostream>
#include <cstdlib>

//1. What is the output of this program?
/*#include <iostream>
void PrintInteger(int variable)
{
 std::cout << variable << std::endl;
}
int main()
{
int the_variable = 1;
PrintInteger(the_variable);
{
PrintInteger(the_variable);
int the_variable = 2;
PrintInteger(the_variable);
{
PrintInteger(the_variable);
int the_variable = 3;
PrintInteger(the_variable);
}
PrintInteger(the_variable);
}
PrintInteger(the_variable);
}
Output = 1122333 */

//2.
float FindSmaller()
{
	float a;
	float b;
	std::cout << "input 2 floats" << std::endl;
	std::cin >> a;
	std::cin >> b;
	if (a < b)
	{
		std::cout << "smallest float is " << a << std::endl;
	}
	if (a > b)
	{
		std::cout << "smallest float is " << b << std::endl;
	}
	else
	{
		std::cout << "the floats are equal" << std::endl;
	}
}

//3. 
float FindSmallest()
{
	float a;
	float b;
	float c;
	std::cout << "input 3 floats" << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a < b && a < c)
	{
		std::cout << "smallest float is " << a << std::endl;
	}
	if (b < a && b < c)
	{
		std::cout << "smallest float is " << b << std::endl;
	}
	if (c < a && c < b)
	{
		std::cout << "smallest float is " << c << std::endl;
	}
	else
	{
		std::cout << "all of the floats are equal" << std::endl;
	}
}

//4.
float Half(float a)
{
	float result = a / 2;
	return result;
}

//5.
void CoinToss(int num)
{
	for (int i = 0; i < num; i++)
	{
		int Coin = rand() % 2;
		if (Coin = 1)
		{
			std::cout << "Heads" << std::endl;
		}
		if (Coin = 2)
		{
			std::cout << "Tails" << std::endl;
		}
	}
}

//6. Find the error in each of the following functions and explain how to fix them
/*
int sum (int x, int y)
{
 int result;
 result = x + y;
}int result and what result equals to should be in the same line
int result = x + y;

int sum (int n)
{
	if (0 == n)  //if (n == 0)
	{
		return 0;
	}
	else
	{
		n = n + n;
	{
}

#include <iostream>
int main()
{
	double x = 13.6;
	{
		std::cout << "square of 13.6 = " << square(x) << std::endl; error: 13.6 is not an int it is a float
	}
}
	int square (int x) error: this needs to be above the main or else it can't be called
	{
		return x * x;
	}
*/

//7.
int SumTo(int N)
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += i;
	}
	return sum;
}

//8.
int SumArray(int* Array, int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += Array[i];
	}
}

//9.
int MinInArray(int* Array, int size)
{
	int temp = Array[0];
	for (int i = 0; i < size; i++)
	{
		if (Array[i] < temp)
		{
			temp = Array[i];
		}
	}
	return temp;
}

//10.
int MultiplyByIndex(int* Array, int* otherArray, int size)
{
	for (int i = 0; i < size; i++)
	{
		otherArray[i] = Array[i] * i;
	}
}

//11.
int AddArrays(int* ArrayA, int* ArrayB, int size, int* Output)
{
	for (int i = 0; i < size; i++)
	{
		Output[i] = ArrayA[i] + ArrayB[i];
	}
}

//12.
int RunningArray(int*input_array, int size)
{
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		input_array[i] += temp;
		temp = input_array[i];
	}
}

//13.
int FindNumber(int* input_Array, int size, int number)
{
	for (int i = 0; i < size; i++)
	{
		if (input_Array[i] == number)
		{
			return i;
		}
	}
	return -1;
}

//14.
int Split(int* input_array, int size, int* outputA, int* outputB)
{
	int k = -1;
	int j = -1;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (input_array[i] >= 0)
		{
			outputA[k += 1] = input_array[i];
			count += 1;
		}
		else
		{
			outputB[j += 1] = input_array[i];
		}
	}
	return count;
}

//15.
int PowerOf(int X, int Y)
{
	int total = X;
	for (int i = 1; i < Y; i++)
	{
		total = total * X;
	}
	return total;
}

//16.
int LookandSay(int* Array, int size)
{
	int count = Array[0];
	int current = 0;
	for (int i = 0; i < size; i++)
	{
		if (current == Array[i])
		{
			count += 1;
		}
		if (current != Array[i])
		{
			std::cout << count << std::endl;
			std::cout << current << std::endl;
			current = Array[i];
		}
	}
}

//17.
void RockPaperScissors()
{
	int choice;
	int CPU = rand() % 3;
	std::cout << "1. = Rock  2. = Scissors  3. = Paper" << std::endl;
	std::cin >> choice;
	if (choice == 1 && CPU == 2)
	{
		std::cout << "you win!" << std::endl;
	}
	if (choice == 2 && CPU == 3)
	{
		std::cout << "you win!" << std::endl;
	}
	if (choice == 3 && CPU == 1)
	{
		std::cout << "you win!" << std::endl;
	}
	if (choice == 1 && CPU == 3)
	{
		std::cout << "you lose!" << std::endl;
	}
	if (choice == 2 && CPU == 1)
	{
		std::cout << "you lose!" << std::endl;
	}
	if (choice == 3 && CPU == 2)
	{
		std::cout << "you lose!" << std::endl;
	}
	else
	{
		std::cout << "Tie!" << std::endl;
	}
}

int main()
{
	int result = SumTo(3); //result = 1 + 2 + 3 = 6
	std::cout << result << std::endl;
	result = SumTo(15); //result should now be 120
	std::cout << result << std::endl;
	int integer_array[5] = { 7, 3, 2, 4, 9 };
	int result = SumArray(integer_array, 5); //result = 25
	std::cout << result << std::endl;
	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int result = MinInArray(integer_array, 7); //result = 4
	std::cout << result << std::endl;
	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int output_array[7] = {};
	MultiplyByIndex(integer_array, output_array, 7);
	//output_array should be {0, 15, 14, 12, 52, 95, 48};
	return 0;
}