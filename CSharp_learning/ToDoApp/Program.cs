using System;
using System.Globalization;
using System.Reflection.Metadata;

string[] notes = {"dupa","kokoko"};
bool isChoosen = false;
byte ile = 0;

void Show_content(string[] Content)
{
    foreach(string note in Content)
    {   
        ile ++;
        System.Console.WriteLine($"{ile}. {note}");
    }
}

void Menu()
{
    System.Console.WriteLine(" ---- TO DO APP ----");
    Console.WriteLine("1. Show Content\n2. Add new note\n3. Delete note\n4. Delete every note\n5. Exit");
    int Num = 0;
    System.Console.Write($"Which option do you choose?: ");
    try
    {
        Num = Convert.ToInt32(Console.ReadLine());
    }
    catch(Exception)
    {
        System.Console.WriteLine("\n ------ SCHAME BRO ------ \n");
    }

    //return Num;

    if(!isChoosen)
    {
        //int Nr = Menu();
        switch(Num)
        {
            case 1:
                System.Console.WriteLine("\n___ ACTUAL TO DO LIST ___");
                Show_content(notes);
                System.Console.WriteLine(" ");
                Menu();
                break;
            case 2:
                System.Console.Write("Add new to-do content: ");
                notes.Append(Console.ReadLine());
                isChoosen = true;
                //Menu();
                break;
            case 5:
                System.Console.WriteLine("  Good Bye !!! ");
                Environment.Exit(0);
                break;
            default:
                Console.WriteLine("\n ------ Wrong Number, try again! ------ \n");
                Menu();
                break;
        }
    }
    if (isChoosen)
    {
        Console.Clear();
        Show_content(notes);
    }
}
Menu();
