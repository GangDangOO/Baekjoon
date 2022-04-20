using System;

class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c = int.Parse(Console.ReadLine());
            string value = (a * b * c).ToString();
            for (int i = 0; i < 10; i++)
            {
                int Itemp = 0;
                for (int j = 0; j < value.Length; j++)
                {
                    string stemp = value.Substring(j, 1);
                    if(i == int.Parse(stemp))
                    {
                        Itemp++;
                    }
                }
                Console.WriteLine(Itemp);
            }
        }
    }