using System;
using System.IO.Ports;

class Program
{
    static void Main()
    {
        SerialPort sp = new SerialPort("COM3");

        sp.Open();
        for(int i = 0; i < 1000; i ++)
        {
            string yolo = sp.ReadLine();
            Console.WriteLine(yolo);
        }
        sp.Close();
    }
}