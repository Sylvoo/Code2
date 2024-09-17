using System;
using System.ComponentModel.DataAnnotations;

namespace Variables
{
    class Program
    {
        static void Main(string[] args)
        {
            System.Console.WriteLine("{0} elo elo {1}", byte.MaxValue, byte.MinValue);
            var number = "1234";
            int i = Convert.ToInt32(number);
            System.Console.WriteLine(i-1);
            
            var dayOfTheWeek = DateTime.Now.DayOfWeek;
            System.Console.WriteLine(dayOfTheWeek);
            char[] tab ={'A','K'};
            System.Console.WriteLine(tab);
            Array.Clear(tab);
            System.Console.WriteLine(tab);
        }
    }
}  