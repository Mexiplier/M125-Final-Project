#include <iostream>
#include <windows.h>
#include <string>
#include <algorithm>
#include <conio.h>

using namespace std;

// Change Color.
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Set Cursor Position.
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Remove Cursor Function.
void ShowConsoleCursor(bool showFlag)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag;
    SetConsoleCursorInfo(out, &cursorInfo);
}

// Box UI Function.
void uiBoxes()
{
    // Password Big Box
    for (int a = 1; a <= 1; a++)
    {
        cout << char(201);

        for (int b = 0; b < 68; b++)
            cout << char(205);

        for (int c = 1; c <= 1; c++)
            cout << char(187) << endl;

        for (int d = 0; d < 7; d++)
            cout << char(186) << "\t\t\t\t\t\t\t\t     " << char(186) << endl;
    }
    for (int e = 1; e <= 1; e++)
    {
        cout << char(200);

        for (int f = 0; f < 68; f++)
            cout << char(205);

        for (int g = 1; g <= 1; g++)
            cout << char(188) << endl;
    }
    // Password Box
    for (int a = 1; a <= 1; a++)
    {
        gotoxy(16, 1);
        cout << char(218);
        for (int b = 0; b < 33; b++)
            cout << char(196);

        for (int c = 1; c <= 1; c++)
            cout << char(191) << endl;
    }
    gotoxy(16, 2);
    for (int d = 0; d < 1; d++)
    {
        cout << char(179) << "\t\t\t\t  " << char(179) << endl;

        gotoxy(16, 3);
        for (int e = 1; e <= 1; e++)
            cout << char(192);

        for (int f = 0; f < 33; f++)
            cout << char(196);

        for (int g = 1; g <= 1; g++)
            cout << char(217) << endl;
    }
    // Password Strength Box
    gotoxy(76, 0);
    for (int a = 1; a <= 1; a++)
    {
        cout << char(201);
        for (int b = 0; b < 36; b++)
            cout << char(205);

        for (int c = 1; c <= 1; c++)
            cout << char(187) << endl;

        for (int d = 0; d <= 16; d++)
            cout << "\t\t\t\t\t\t\t\t\t    " << char(186) << "\t\t\t\t         " << char(186) << endl;
    }
    for (int e = 1; e <= 1; e++)
    {
        cout << "\t\t\t\t\t\t\t\t\t    " << char(200);

        for (int f = 0; f < 36; f++)
            cout << char(205);

        for (int g = 1; g <= 1; g++)
            cout << char(188);
    }
    // Password Score
    gotoxy(16, 6);
    for (int a = 0; a < 34; a++)
        cout << char(176);
}

// UI Design Function.
void uiDesign()
{
    SetConsoleTextAttribute(hConsole, 7);
    uiBoxes();

    // Password:
    gotoxy(6, 2);
    cout << "Password: ";

    // Complexity:
    gotoxy(4, 4);
    cout << "Complexity: ";

    // Score:
    gotoxy(9, 6);
    cout << "Score:";

    // Additions:
    gotoxy(1, 10);
    cout << "Additions";

    // Deductions
    gotoxy(32, 10);
    cout << "Deductions";

    // Count:
    gotoxy(14, 10);
    cout << "Count" << endl;
    gotoxy(60, 10);
    cout << "Count" << endl;

    // Bonus:
    gotoxy(22, 10);
    cout << "Bonus" << endl;
    gotoxy(68, 10);
    cout << "Bonus" << endl;

    // Characters:
    gotoxy(1, 12);
    SetConsoleTextAttribute(hConsole, 6);
    cout << "Characters: " << endl;

    // Upper Case:
    gotoxy(1, 14);
    SetConsoleTextAttribute(hConsole, 1);
    cout << "Upper Case: " << endl;

    // Lower Case:
    gotoxy(1, 16);
    SetConsoleTextAttribute(hConsole, 2);
    cout << "Lower Case: " << endl;

    // Numbers:
    gotoxy(1, 18);
    SetConsoleTextAttribute(hConsole, 3);
    cout << "Numbers: " << endl;

    // Symbols:
    gotoxy(1, 20);
    SetConsoleTextAttribute(hConsole, 5);
    cout << "Symbols: " << endl;

    // Maximum Occurring Character:
    gotoxy(32, 12);
    SetConsoleTextAttribute(hConsole, 6);
    cout << "Occurring Character: " << endl;

    // Consecutive Upper Letters:
    gotoxy(32, 14);
    SetConsoleTextAttribute(hConsole, 1);
    cout << "Consecutive Upper Letters: " << endl;

    // Consecutive Lower Letters:
    gotoxy(32, 16);
    SetConsoleTextAttribute(hConsole, 2);
    cout << "Consecutive Lower Letters: " << endl;

    // Consecutive Numbers:
    gotoxy(32, 18);
    SetConsoleTextAttribute(hConsole, 3);
    cout << "Consecutive Numbers: " << endl;

    // Letters Only:
    gotoxy(32, 20);
    SetConsoleTextAttribute(hConsole, 5);
    cout << "Letters Only: " << endl;

    // Password Strength:
    gotoxy(86, 1);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "PASSWORD STRENGTH" << endl;

    gotoxy(78, 3);
    SetConsoleTextAttribute(hConsole, 4);
    cout << "Must be 8 characters or longer.";

    gotoxy(78, 5);
    SetConsoleTextAttribute(hConsole, 4);
    cout << "Must contain 1 uppercase letter.";

    gotoxy(78, 7);
    SetConsoleTextAttribute(hConsole, 4);
    cout << "Must contain 1 lowercase letter.";

    gotoxy(78, 9);
    SetConsoleTextAttribute(hConsole, 4);
    cout << "Must contain 1 number.";

    gotoxy(78, 11);
    SetConsoleTextAttribute(hConsole, 4);
    cout << "Must contain 1 symbol.";

    gotoxy(81, 16);
    SetConsoleTextAttribute(hConsole, 7);
    cout << " Press Enter To Continue.";

    SetConsoleTextAttribute(hConsole, 180);
    gotoxy(76, 21);
    cout << "Date: 04/30/22                  ";
    gotoxy(76, 22);
    cout << "Created By:                     ";
    gotoxy(76, 23);
    cout << "Geo Hernandez                   ";
    gotoxy(76, 24);
    cout << "Jacob Rodriguez                 ";
    gotoxy(76, 25);
    cout << "Adrian Carreno                  ";
    gotoxy(76, 26);
    cout << "Jayveer Prajapati               ";
}

// Check For Characters.
bool isUpperLetter(char upper)
{
    if (upper >= 'A' && upper <= 'Z')
        return true;
    else
        return false;
}
bool isLowerLetter(char lower)
{
    if (lower >= 'a' && lower <= 'z')
        return true;
    else
        return false;
}
bool isNumber(char number)
{
    if (number >= '0' && number <= '9')
        return true;
    else
        return false;
}
bool isSymbol(char symbol)
{
    if (symbol >= 33 && symbol <= 47)
        return true;
    else
        return false;
}

// Count Characters.
int countUpperLetter(string password)
{
    int counter = 0;
    for (int i = 0; i < password.length(); i++)
        if (isUpperLetter(password[i]))
            counter++;
    return counter;
}
int countLowerLetter(string password)
{
    int counter = 0;
    for (int i = 0; i < password.length(); i++)
        if (isLowerLetter(password[i]))
            counter++;
    return counter;
}
int countNumber(string password)
{
    int counter = 0;
    for (int i = 0; i < password.length(); i++)
        if (isNumber(password[i]))
            counter++;
    return counter;
}
int countSymbol(string password)
{
    int counter = 0;
    for (int i = 0; i < password.length(); i++)
        if (isSymbol(password[i]))
            counter++;
    return counter;
}

// Check Password Strength.
void passwordStrength(string password, char userInputChar)
{
    int iScore = 0;
    int passReqBonus = 10;
    int iUpperCase = 0;
    int iLowerCase = 0;
    int iNumber = 0;
    int iSymbol = 0;
    int passwordLength = password.length();
    int max_count = 0;
    int count = 1;
    char cOccurring;
    int consecutiveUpper = 0, consecutiveLower = 0, consecutiveNumber = 0;
    string sLetterOnly = "0", sUpperCase = "0", sLowerCase = "0";

    // Scan Password.
    for (int i = 0; i < passwordLength; i++)
    {
        if (isUpperLetter(password[i]))
        {
            iUpperCase++;
        }
        if (isLowerLetter(password[i]))
        {
            iLowerCase++;
        }
        if (isNumber(password[i]))
        {
            iNumber++;
        }
        if (isSymbol(password[i]))
        {
            iSymbol++;
        }
        if ((i + 1) < passwordLength)
        {
            if (isUpperLetter(password[i]) && isUpperLetter(password[i + 1]))
            {
                consecutiveUpper++;
            }
            if (isLowerLetter(password[i]) && isLowerLetter(password[i + 1]))
            {
                consecutiveLower++;
            }
            if (isNumber(password[i]) && isNumber(password[i + 1]))
            {
                consecutiveNumber++;
            }
        }
    }
    // Scan Password For Occuring Characters.
    sort(password.begin(), password.end());
    for (int i = 1; i <= passwordLength; i++)
    {
        if ((i == passwordLength) || (password[i] != password[i - 1]))
        {
            if (max_count < count)
            {
                max_count = count;
                cOccurring = password[i - 1];
            }
            count = 1;
        }
        else
        {
            count++;
        }
    }

    // Print Amount of Characters in Password.
    gotoxy(14, 12);
    SetConsoleTextAttribute(hConsole, 6);
    cout << passwordLength << " ";
    gotoxy(14, 14);
    SetConsoleTextAttribute(hConsole, 1);
    cout << iUpperCase << "  ";
    gotoxy(14, 16);
    SetConsoleTextAttribute(hConsole, 2);
    cout << iLowerCase << "  ";
    gotoxy(14, 18);
    SetConsoleTextAttribute(hConsole, 3);
    cout << iNumber << "  ";
    gotoxy(14, 20);
    SetConsoleTextAttribute(hConsole, 5);
    cout << iSymbol << "  ";

    // Adding Score
    if (passwordLength > 0)
    {
        SetConsoleTextAttribute(hConsole, 6);
        iScore += passwordLength * 4;
        gotoxy(22, 12);
        cout << "+" << passwordLength * 4 << "  ";
    }
    else if (passwordLength == 0)
    {
        SetConsoleTextAttribute(hConsole, 6);
        gotoxy(22, 12);
        cout << "0   ";
    }
    if (iUpperCase > 0)
    {
        SetConsoleTextAttribute(hConsole, 1);
        iScore += ((passwordLength - iUpperCase) * 2);
        sUpperCase = "+" + to_string((password.length() - iUpperCase) * 2);
        gotoxy(22, 14);
        cout << sUpperCase;
    }
    else if (iUpperCase == 0)
    {
        SetConsoleTextAttribute(hConsole, 1);
        gotoxy(22, 14);
        cout << "0  ";
    }
    if (iLowerCase > 0)
    {
        SetConsoleTextAttribute(hConsole, 2);
        iScore += ((passwordLength - iLowerCase) * 2);
        sLowerCase = "+" + to_string((password.length() - iLowerCase) * 2);
        gotoxy(22, 16);
        cout << sLowerCase;
    }
    else if (iLowerCase == 0)
    {
        SetConsoleTextAttribute(hConsole, 2);
        gotoxy(22, 16);
        cout << "0  ";
    }
    if (iNumber > 0)
    {
        SetConsoleTextAttribute(hConsole, 3);
        iScore += iNumber * 4;
        gotoxy(22, 18);
        cout << "+" << iNumber * 4 << "  ";
    }
    else if (iNumber == 0)
    {
        SetConsoleTextAttribute(hConsole, 3);
        gotoxy(22, 18);
        cout << "0  ";
    }
    if (iSymbol > 0)
    {
        SetConsoleTextAttribute(hConsole, 5);
        iScore += iSymbol * 6;
        gotoxy(22, 20);
        cout << "+" << iSymbol * 6 << "  ";
    }
    else if (iSymbol == 0)
    {
        SetConsoleTextAttribute(hConsole, 5);
        gotoxy(22, 20);
        cout << "0  ";
    }
    if (passwordLength > 7 && iUpperCase > 0 && iLowerCase > 0 && iNumber > 0 && iSymbol > 0)
    {
        iScore += passReqBonus;
        gotoxy(85, 13);
        SetConsoleTextAttribute(hConsole, 192);
        cout << "BONUS POINTS +20  ";
    }

    // Deducting score.
    // Maximum Occurring Character:
    if (max_count > 0)
    {
        iScore -= max_count * 2;
        SetConsoleTextAttribute(hConsole, 6);
        gotoxy(60, 12);
        cout << cOccurring << " ";
        cout << "+" << max_count << "  " << endl;
        gotoxy(68, 12);
        cout << -max_count * 2 << " ";
    }
    else if (max_count == 0)
    {
        iScore += max_count * 2;
        SetConsoleTextAttribute(hConsole, 6);
        gotoxy(60, 12);
        cout << "0      ";
        gotoxy(68, 12);
        cout << "0      ";
    }
    // Consecutive Upper Letters:
    iScore -= consecutiveUpper * 2;
    gotoxy(60, 14);
    SetConsoleTextAttribute(hConsole, 1);
    cout << consecutiveUpper << "  ";
    gotoxy(68, 14);
    cout << -consecutiveUpper * 2 << " ";
    if (consecutiveUpper == 0)
    {
        gotoxy(60, 14);
        SetConsoleTextAttribute(hConsole, 1);
        cout << "0";
        gotoxy(68, 14);
        cout << "0";
    }
    // Consecutive Lower Letters:
    iScore -= consecutiveLower * 2;
    gotoxy(60, 16);
    SetConsoleTextAttribute(hConsole, 2);
    cout << consecutiveLower << "  ";
    gotoxy(68, 16);
    cout << -consecutiveLower * 2 << " ";
    if (consecutiveLower == 0)
    {
        gotoxy(60, 16);
        SetConsoleTextAttribute(hConsole, 2);
        cout << "0";
        gotoxy(68, 16);
        cout << "0";
    }
    // Consecutive Numbers:
    iScore -= consecutiveNumber * 2;
    gotoxy(60, 18);
    SetConsoleTextAttribute(hConsole, 3);
    cout << consecutiveNumber << "  ";
    gotoxy(68, 18);
    cout << -consecutiveNumber * 2 << " ";
    if (consecutiveNumber == 0)
    {
        gotoxy(60, 18);
        SetConsoleTextAttribute(hConsole, 3);
        cout << "0";
        gotoxy(68, 18);
        cout << "0";
    }
    // Letters Only:
    if ((iUpperCase > 0 || iLowerCase > 0) && iNumber == 0 && iSymbol == 0)
    {
        iScore -= passwordLength;
        gotoxy(60, 20);
        SetConsoleTextAttribute(hConsole, 1);
        cout << passwordLength << "  ";
        sLetterOnly = "-" + to_string(passwordLength);
        gotoxy(68, 20);
        cout << sLetterOnly;
    }
    else
    {
        gotoxy(60, 20);
        SetConsoleTextAttribute(hConsole, 1);
        cout << "0  ";
        gotoxy(68, 20);
        cout << "0  ";
    }

    // Determine Complexity.
    if (iScore > 100)
    {
        iScore = 100;
    }
    else if (iScore < 0)
    {
        iScore = 0;
    }
    if (iScore >= 0 && iScore < 20)
    {
        SetConsoleTextAttribute(hConsole, 4);
        gotoxy(51, 6);
        cout << "+" << iScore << "  ";
        gotoxy(16, 4);
        cout << "Very Weak";
        gotoxy(16, 6);
        for (int i = 1; i < 7; i++)
            cout << char(219);
        SetConsoleTextAttribute(hConsole, 7);
        for (int i = 0; i < 7; i++)
            cout << char(176);
    }
    if (iScore >= 20 && iScore < 40)
    {
        SetConsoleTextAttribute(hConsole, 6);
        gotoxy(51, 6);
        cout << "+" << iScore << "  ";
        gotoxy(16, 4);
        cout << "Weak       ";
        gotoxy(16, 6);
        for (int i = 1; i < 14; i++)
            cout << char(219);
        SetConsoleTextAttribute(hConsole, 7);
        for (int i = 0; i < 7; i++)
            cout << char(176);
    }
    if (iScore >= 40 && iScore < 60)
    {
        SetConsoleTextAttribute(hConsole, 2);
        gotoxy(51, 6);
        cout << "+" << iScore << "  ";
        gotoxy(16, 4);
        cout << "Good       ";
        gotoxy(16, 6);
        for (int i = 1; i < 21; i++)
            cout << char(219);
        SetConsoleTextAttribute(hConsole, 7);
        for (int i = 0; i < 7; i++)
            cout << char(176);
    }
    if (iScore >= 60 && iScore < 80)
    {
        SetConsoleTextAttribute(hConsole, 3);
        gotoxy(51, 6);
        cout << "+" << iScore << "  ";
        gotoxy(16, 4);
        cout << "Strong       ";
        gotoxy(16, 6);
        for (int i = 1; i < 28; i++)
            cout << char(219);
        SetConsoleTextAttribute(hConsole, 7);
        for (int i = 0; i < 7; i++)
            cout << char(176);
    }
    if (iScore >= 80 && passwordLength > 7 && iUpperCase > 0 && iLowerCase > 0 && iNumber > 0 && iSymbol > 0)
    {
        SetConsoleTextAttribute(hConsole, 1);
        gotoxy(51, 6);
        cout << "+" << iScore << "  ";
        gotoxy(16, 4);
        cout << "Very Strong       ";
        gotoxy(16, 6);
        for (int i = 1; i <= 34; i++)
            cout << char(219);
        gotoxy(85, 14);
        SetConsoleTextAttribute(hConsole, 192);
        cout << "   Great Job.     ";
    }
    else
    {
        gotoxy(85, 13);
        cout << "                   ";
        gotoxy(85, 14);
        cout << "                   ";
    }
    if (iScore == 0)
    {
        gotoxy(16, 4);
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Too Short";
        gotoxy(16, 6);
        SetConsoleTextAttribute(hConsole, 7);
        for (int i = 0; i < 34; i++)
            cout << char(176);
        gotoxy(51, 6);
        cout << "0  ";
    }

    // Password Strength Requirements.
    if (passwordLength > 7)
    {
        gotoxy(78, 3);
        SetConsoleTextAttribute(hConsole, 6);
        cout << "Must be 8 characters or longer.";
    }
    else
    {
        gotoxy(78, 3);
        SetConsoleTextAttribute(hConsole, 4);
        cout << "Must be 8 characters or longer.";
    }

    if (iUpperCase > 0)
    {
        gotoxy(78, 5);
        SetConsoleTextAttribute(hConsole, 1);
        cout << "Must contain 1 uppercase letter.";
    }
    else
    {
        gotoxy(78, 5);
        SetConsoleTextAttribute(hConsole, 4);
        cout << "Must contain 1 uppercase letter.";
    }
    if (iLowerCase > 0)
    {
        gotoxy(78, 7);
        SetConsoleTextAttribute(hConsole, 2);
        cout << "Must contain 1 lowercase letter.";
    }
    else
    {
        gotoxy(78, 7);
        SetConsoleTextAttribute(hConsole, 4);
        cout << "Must contain 1 lowercase letter.";
    }
    if (iNumber > 0)
    {
        gotoxy(78, 9);
        SetConsoleTextAttribute(hConsole, 3);
        cout << "Must contain 1 number.";
    }
    else
    {
        gotoxy(78, 9);
        SetConsoleTextAttribute(hConsole, 4);
        cout << "Must contain 1 number.";
    }
    if (iSymbol > 0)
    {
        gotoxy(78, 11);
        SetConsoleTextAttribute(hConsole, 5);
        cout << "Must contain 1 symbol.";
    }
    else
    {
        gotoxy(78, 11);
        SetConsoleTextAttribute(hConsole, 4);
        cout << "Must contain 1 symbol.";
    }
}

// Password Function.
void passwordFunction()
{
    uiDesign();
    string password, passwordLength;
    char userInputChar;
    int upperLetterCount, lowerLetterCount, numberCount, symbolCount;

    userInputChar = _getch();

    while (userInputChar != 13)
    {
        if (userInputChar == 8)
        {
            password.resize(password.length() - 1);
            gotoxy(18, 2);
            SetConsoleTextAttribute(hConsole, 7);
            cout << password << " ";
            passwordLength.resize(passwordLength.length() - 1);
        }
        else
        {
            password = password + userInputChar;
            gotoxy(18, 2);
            SetConsoleTextAttribute(hConsole, 7);
            cout << password;
            passwordLength.push_back(userInputChar);
        }

        upperLetterCount = countUpperLetter(password);
        lowerLetterCount = countLowerLetter(password);
        numberCount = countNumber(password);
        symbolCount = countSymbol(password);
        passwordStrength(password, userInputChar);

        userInputChar = _getch();
    }
}

// Main Function.
int main()
{
    char tryAgain = 'N';
    ShowConsoleCursor(false);
    // Loop to ask user if they want to quit.
    do
    {
        system("cls");
        passwordFunction();
        gotoxy(81, 16);
        SetConsoleTextAttribute(hConsole, 5);
        cout << "Do You Want To Quit? (Y/N): ";
        cin >> tryAgain;
        system("cls");
    } while (tryAgain == 'N' || tryAgain == 'n');

    cin.get();
    return 1;
}
