using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal static class NativeMethods
    {
        // Declares managed prototypes for unmanaged functions.
        [DllImport("User32.dll", EntryPoint = "MessageBox",
            CharSet = CharSet.Auto)]
        internal static extern int MsgBox(
            IntPtr hWnd, string lpText, string lpCaption, uint uType);

        // Causes incorrect output in the message window.
        [DllImport("User32.dll", EntryPoint = "MessageBoxW",
            CharSet = CharSet.Ansi)]
        internal static extern int MsgBox2(
            IntPtr hWnd, string lpText, string lpCaption, uint uType);

        // Causes an exception to be thrown. EntryPoint, CharSet, and
        // ExactSpelling fields are mismatched.
        [DllImport("User32.dll", EntryPoint = "MessageBox",
            CharSet = CharSet.Ansi, ExactSpelling = true)]
        internal static extern int MsgBox3(
            IntPtr hWnd, string lpText, string lpCaption, uint uType);
    }
    class Program
    {
        static void Main(string[] args)
        {
            NativeMethods.MsgBox(System.IntPtr.Zero, "bla", "titlu", 0);
            Bridge b = new Bridge();

            MatrixRef p = b.call();
            unsafe
            {
                fixed (char* value = "safe")
                {
                    char* ptr = value;
                    while (*ptr != '\0')
                    {
                        Console.WriteLine(*ptr);
                        ++ptr;
                    }
                }
            }
        }
    }
}
