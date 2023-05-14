#include "common.h"
void showMainMenu()
{
    system("cls");
    cout << "---------------------------" << endl;
    cout << "|========Welcome!=========|" << endl;
    cout << "          1.Bookkeeping    " << endl;
    cout << "          2.Query          " << endl;
    cout << "          3.Quit           " << endl;
    cout << "---------------------------" << endl;
    cout << "Please choose:(1~3)" << endl;
}
void showAccountingMenu()
{
    cout << "-------------------------------------------------" << endl;
    cout << "|========Please choose bookkeeping type=========|" << endl;
    cout << "          1.Income                               " << endl;
    cout << "          2.Expense                              " << endl;
    cout << "          3.Back to Menu                         " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Please choose:(1~3)" << endl;
}
void showQueryMenu()
{
    cout << "-------------------------------------------------" << endl;
    cout << "|===========Please choose Query type============|" << endl;
    cout << "          1.Counting of all accounts             " << endl;
    cout << "          2.Counting incomes                     " << endl;
    cout << "          3.Counting expenses                    " << endl;
    cout << "          4.Back to Menu                         " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Please choose:(1~4)" << endl;
}