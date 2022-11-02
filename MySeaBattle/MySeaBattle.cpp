#include <iostream>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <dos.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

const int SIZEf = 10;
int field[SIZEf][SIZEf] = {};

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

char s1[1251];

void GotoXY(int X, int Y)
{
    COORD coord = { X, Y };
    SetConsoleCursorPosition(hStdOut, coord);
}

void menu()
{

    int f = 1, k, code;

    cout << "\n\n"; // * фігура
    for (int x = 0; x < 13; x++)
    {
        for (int y = 0; y < 13; y++)
        {
            if (x == 0 || x == y && y < 13 / 2 || x + y == 13 - 1 && y > 13 / 2 - 1)
            {
                cout << "    \t* ";
            }
            else
            {
                cout << "    \t  ";
            }
        }
        cout << endl;
    } // *ffff

    GotoXY(27, 12);
    cout << "\t\t\t--> Нова гра <--";
    GotoXY(30, 13);
    cout << "\t\t\t       Вихід    ";
    cout << "\n\n\t\t« Морський бій » — гра для двох учасників, у якій гравці по черзі називають координати на невідомій карті суперника. Якщо у суперника за цими координатами є корабель (координати зайняті), то корабель або його частина «топиться», а той, хто потрапив, отримує право зробити ще один хід";
    do
    {
        k = 0;
        code = _getch();
        if (code == 224 || code == 0)
        {
            code = _getch();
        }

        if (code == 80)
        {
            f = f * (-1);
            if (f == 1)
            {
                GotoXY(27, 12);
                cout << "\t\t\t--> Нова гра <--";
                GotoXY(30, 13);
                cout << "\t\t\t       Вихід   ";
            }
            else if (f == 2)
            {
                GotoXY(27, 12);
                cout << "\t\t\t    Нова гра    ";
                GotoXY(30, 13);
                cout << "\t\t\t       Вихід    ";
            }
            else
            {
                GotoXY(27, 12);
                cout << "\t\t\t    Нова гра      ";
                GotoXY(30, 13);
                cout << "\t\t\t   --> Вихід <--";
            }
        }
        else if (code == 72)
        {
            f = f * (-1);
            if (f == 1)
            {
                GotoXY(27, 12);
                cout << "\t\t\t--> Нова гра <--";
                GotoXY(30, 13);
                cout << "\t\t\t      Вихід   ";
            }
            else if (f == 2)
            {
                GotoXY(27, 12);
                cout << "\t\t\t    Нова гра   ";
                GotoXY(30, 13);
                cout << "\t\t\t       Вихід    ";
            }
            else
            {
                GotoXY(27, 12);
                cout << "\t\t\t    Нова гра   ";
                GotoXY(30, 13);
                cout << "\t\t\t   --> Вихід <--";
            }
        }
        else if (code == 13)
        {
            k = 1;
        }
        cout << endl << endl << endl << endl << endl;
    }

    while (k == 0);
    {
        if (f != 1)
        {
            exit(0);
        }
    }
    system("cls");
    cout << endl << endl;
}

void figure1()
{
    system("cls");
    for (int x = 0; x < 15; x++) // * Створили квадрат
    {
        for (int y = 0; y < 15; y++)
        {
            if (x == 0 || x == 15 - 1 || y == 0 || y == 15 - 1)
            {
                cout << "    \t* ";
            }
            else
            {
                cout << "    \t ";
            }
            if (x == 6) // ** Опускаємось нижче, щоб написати текст усередині квадрата
            {
                cout << "      \t\t\t\t\t";
                string h = "Морський бій!";
                for (int i = 0; i < h.length(); i++)
                {
                    Sleep(60);
                    cout << h[i];
                }
                break;
            } // **
        }
        cout << endl; // эндл чтобы создавать строки для квадрата
    }
    Sleep(1500); // пауза // *
    cout << "\a"; // звук перемикання меню
}

void reminder1()
{
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t   Нагадування:\n";
    cout << "\t\t\t    Натисніть хрестик зверху, щоб вийти з гри\n\t\t\t       При цьому досягнення не зберігаються!";
    cout << "\n\t\t\t\t";
    string h = "................................."; // **Искусственное ожидание за допомогою імітації завантаження візуалізованих точок
    for (int i = 0; i < h.length(); i++)
    {
        Sleep(50);
        cout << h[i];
    } // **
    cout << "\n\n";
    Sleep(1000);
    system("cls");
}

void win()
{

    system("cls");
    for (int x = 0; x <= 2; x++)
    {
        if (x <= 1)
        {
            system("Color 05");
            Sleep(200);
            cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\tП";
            system("Color 15");
            Sleep(200);
            cout << " о";
            system("Color 25");
            Sleep(200);
            cout << " з";
            system("Color 35");
            Sleep(200);
            cout << " д";
            system("Color 48");
            Sleep(200);
            cout << " р";
            system("Color 65");
            Sleep(200);
            cout << " а";
            system("Color 85");
            Sleep(200);
            cout << " в";
            system("Color 93");
            Sleep(200);
            cout << " л";
            system("Color A5");
            Sleep(200);
            cout << " я";
            system("Color B5");
            Sleep(200);
            cout << " е";
            system("Color C0");
            Sleep(200);
            cout << " м";
            system("Color E5");
            Sleep(200);
            cout << "\n\n\t\t\t\t\t\t\t\tВ";
            system("Color F5");
            Sleep(200);
            cout << " а";
            system("Color 75");
            Sleep(200);
            cout << " с";
            Sleep(200);
        }
        else
        {
            system("cls");
            for (int x = 0; x < 15; x++) // * Створили квадрат
            {
                for (int y = 0; y < 15; y++)
                {
                    if (x == 0 || x == 15 - 1 || y == 0 || y == 15 - 1)
                    {
                        cout << "    \t* ";
                    }
                    else
                    {
                        cout << "    \t ";
                    }
                    if (x == 6) // **Опускаємось нижче, щоб написати текст усередині квадрата
                    {
                        cout << "      \t\t\t\t\t";
                        string h = "Ви виграли!";
                        for (int i = 0; i < h.length(); i++)
                        {
                            Sleep(60);
                            cout << h[i];
                        }
                        break;
                    } // **
                }
                cout << endl; // ендл щоб створювати рядки для квадрата
            } // *
        }
    }
}

void ad()
{
    system("cls");
    for (int x = 0; x < 15; x++) // * Створили квадрат
    {
        for (int y = 0; y < 15; y++)
        {
            if (x == 0 || x == 15 - 1 || y == 0 || y == 15 - 1)
            {
                cout << "    \t* ";
            }
            else
            {
                cout << "    \t ";
            }
            if (x == 6) // ** Опускаємось нижче, щоб написати текст усередині квадрата
            {

                string h;
                for (int i = 0; i < h.length(); i++)
                {
                    Sleep(40);
                    cout << h[i];
                }
                break;
            } // **
        }
        cout << endl; // ендл щоб створювати рядки для квадрата
    } //
    Sleep(3300);
    system("cls");
}

void tableShow()
{
    system("cls");
    cout << endl << endl << "\t\t\t\t";
    int counter = 0;
    for (int i = 0; i < SIZEf; i++)
    {
        counter++;
        cout << counter;
        cout << "\t";
    }
    cout << "\n\t\t\t\t==========================================================================";

    counter = 0;

    cout << endl << endl << "\t\t";
    for (int i = 0; i < SIZEf; i++)
    {
        if (i == 5)
        {
            cout << "\t        ==========================================================================\n\n\n\t\t";
        }

        for (int j = 0; j < SIZEf; j++)
        {
            if (i >= 0 && j == 0)
            {
                counter++;
                cout << "\t" << counter << " |";
            }

            if (field[i][j] == 5)
            {
                cout << "\t" << field[i][j];
            }
            else if (i < 5)
            {
                cout << "\t0";
            }
            else
            {
                cout << "\t" << field[i][j];
            }
        }
        cout << endl << endl << endl << "\t\t";
    }
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(NULL));
    system("Color 75");
    menu();
    figure1();
    reminder1();

    int x, y;

    int enemyShipCounter = 0; // * Розташування та кількість ворожих кораблів
    while (true)
    {
        x = rand() % SIZEf;
        if (x <= 4)
        {
            y = rand() % SIZEf;
            field[x][y] = 1;
            enemyShipCounter++;
            if (enemyShipCounter == 10)
            {
                break;
            }
        }
    } // *


    int myShipCounter = 0; // * Розташування та кількість моїх кораблів
    while (true)
    {

        x = rand() % SIZEf;
        if (x >= 5)
        {
            y = rand() % SIZEf;
            field[x][y] = 1;
            myShipCounter++;
            if (myShipCounter == 10)
            {
                break;
            }
        }
    } // *

    tableShow();

    bool isMyRound = false;
    while (true)
    {
        cout << "\t\tВведіть координати: ";
        do
        {
            cin >> x;
            cin >> y;
            if (x >= 6 || x <= 0 || y <= 0)
            {
                cout << "\n\t\t\t\tВведіть координати, які вище 6 рядка ( 5, 4, 3, 2, 1), щоб стріляти по ворожому полю!\n\n";
                cout << "\t\t\t\tВведіть координати: ";
            }
        } while (x >= 6 || x <= 0 || y <= 0);
        {
            x--;
            y--;
        }

        if (field[x][y] == 1)
        {
            cout << "\n\t\t\t\tВи потрапили по ворожому кораблю!\a" << endl;
            field[x][y] = 8;
            Sleep(3300);

            tableShow();

            bool ship_detect = false;
            for (int i = 0; i < SIZEf - 5; i++)
            {
                for (int j = 0; j < SIZEf; j++)
                {
                    if (field[i][j] == 1)
                    {
                        ship_detect = true;
                        break;
                    }
                }
                if (ship_detect == true)
                {
                    break;
                }
            }
            if (ship_detect == false)
            {
                cout << "\t\tВи виграли!!! Усі кораблі суперника потепліли!" << endl;
                Sleep(4000);
                win();
                Sleep(2000);
                ad();
                break;
            }
            isMyRound = true;
        }
        else
        {
            cout << "\n\t\t\t\tВи схибили!" << endl;
            isMyRound = false;
            Sleep(3400);
            tableShow();
        }

        int BotX{}, BotY{}; // * ход бота
        int Direction = -1;
        bool BotHit = false;
        bool BotHitForSecondBotHit = false;
        bool SecondBotHit = false;
        bool BotMiss[4] = { false, false, false, false }; //Попадання бота з чотирьох сторін
        {
            cout << "\t\tХод бота...\n\n";
            if (BotHit == true)
            {
                if (SecondBotHit == false)
                {
                    while (true)
                    {
                        Direction = 1 + rand() % 4;
                        if (Direction == 1 && BotMiss[0] == false && BotY > 0)
                        {
                            BotY--; //Стріляє лівіше
                            break;
                        }
                        else if (Direction == 2 && BotMiss[1] == false && BotX > 5)
                        {
                            BotX--; //Стріляє вище
                            break;
                        }
                        else if (Direction == 3 && BotMiss[2] == false && BotY < 9)
                        {
                            BotY++; //Стріляє правіше
                            break;
                        }
                        else if (Direction == 4 && BotMiss[3] == false && BotX < 9)
                        {
                            BotX++; //Стріляє нижче
                            break;
                        }
                        else
                        {
                            BotMiss[Direction - 1] = true; //Якщо нікуди не вдалося вистрілити
                        }
                        if (BotMiss[0] == true && BotMiss[1] == true && BotMiss[2] == true && BotMiss[3] == true)
                        {
                            break; //Якщо вже були спроби вистрілити з усіх боків
                        }
                    }
                }
                else
                { //При другому попаданні стріляє у напрямку, в якому раніше стріляв
                    if (Direction == 1 && BotY > 0)
                    {
                        BotY--;
                    }
                    else if (Direction == 2 && BotX > 5)
                    {
                        BotX--;
                    }
                    else if (Direction == 3 && BotY < 9)
                    {
                        BotY++;
                    }
                    else if (Direction == 4 && BotX < 9)
                    {
                        BotX++;
                    }
                    else
                    {
                        SecondBotHit = false;
                    }
                }
            }
            else
            {
                BotX = rand() % 4 + 5;
                BotY = rand() % 10;
            }
            int CoutBotX = BotX + 1;
            int CoutBotY = BotY + 1;
            cout << "\t\t\t\tБот ввів координати: x[" << CoutBotX << "] і y[" << CoutBotY << "]\n";

            if (field[BotX][BotY] == 1)
            {
                if (BotHit == true)
                {
                    BotHitForSecondBotHit = true;
                }
                if (BotHitForSecondBotHit == true)
                {
                    SecondBotHit = true;
                }
                BotHit = true;
                cout << "\n\t\t\t\tБот потрапив по нашому кораблю!\a" << endl;
                field[BotX][BotY] = 5;

                Sleep(5500);

                tableShow();

                field[BotX][BotY] = -1;

                bool ship_detect = false;
                for (int i = 6; i < SIZEf; i++)
                {
                    for (int j = 0; j < SIZEf; j++)
                    {
                        if (field[i][j] == 1)
                        {
                            ship_detect = true;
                            break;
                        }
                    }
                    if (ship_detect == true)
                    {
                        break;
                    }
                }
                if (ship_detect == false)
                {
                    cout << "\t\t\t\tБот виграв! Усі наші кораблі потеплені!" << endl;
                    Sleep(5500);
                    ad();
                    break;
                }
            }
            else
            {
                if (field[BotX][BotY] != -1)
                {
                    cout << "\n\t\t\t\tБот промахнувся! Ваша черга..." << endl;
                    isMyRound = true;
                }
                BotHitForSecondBotHit = false;
                if (Direction != -1)
                {
                    BotMiss[Direction - 1] = true;
                    if ((BotMiss[0] == true && BotMiss[1] == true && BotMiss[2] == true && BotMiss[3] == true) || SecondBotHit == true)
                    {
                        BotHit = false;
                        for (int x = 0; x != 4; x++)
                        {
                            BotMiss[x] = false;
                        }
                    }
                    if (SecondBotHit == false && BotHit == true)
                    {
                        if (Direction == 1)
                        {
                            BotY++; //Направляє координату правіше
                        }
                        else if (Direction == 2)
                        {
                            BotX++; //Направляє координату нижче
                        }
                        else if (Direction == 3)
                        {
                            BotY--; //Направляє координату ліворуч
                        }
                        else if (Direction == 4)
                        {
                            BotX--; //Спрямовує координату вище
                        }
                    }
                }
                SecondBotHit = false;
                Sleep(5500);
                tableShow();
            }
        } // *
    }

    cout << endl << endl << endl;

    system("pause");
    return 0;

}
