//Caleb Brock, COP 2000, HW3 V5, 10/10/17, Calculating the membership fees of three different levels of membership
#include <iostream>
#include <iomanip>
using namespace std;

//Function used to calculate membership fees with corresponding membership level
void Membership_Calculation(double Base_Year_Fee, int Year, double Membership_Level, double Calculated_Year)
{
	while (Year <= 10)
	{
		Calculated_Year = Base_Year_Fee + (Base_Year_Fee * Membership_Level);
		cout << "Year	" << Year << "	$" << fixed << setprecision(2) << Calculated_Year << endl;
		Year++;
		Base_Year_Fee = Calculated_Year;
	}
}

int main()
{
    float Menu_Item_Input;
    double Gold_Fee, Silver_Fee, Bronze_Fee;
    Gold_Fee = .01;
    Silver_Fee = .02;
    Bronze_Fee = .04;
    cout << "Welcome to Ronda's Strikeforce gym!!" << endl;
    cout << "X------------------------------------X" << endl;
    cout << "1. Gold" << endl;
    cout << "2. Silver" << endl;
    cout << "3. Bronze" << endl;
    cout << "4. Quit" << endl << endl;
    input :
    cout << "Please enter a your membership level (1-3 Enter 4 to Quit) > ";
    cin >> Menu_Item_Input;
    if (Menu_Item_Input == 1)//Gold Membership
    {
        cout << "Yearly Gold Membership Fee" << endl;
		Membership_Calculation(1200, 1, Gold_Fee, 0);
		goto input;
    }
    if (Menu_Item_Input == 2)//Silver Membership
    {
        cout << "Yearly Silver Membership Fee" << endl;
        Membership_Calculation(1200, 1, Silver_Fee, 0);
		goto input;
    }
    if (Menu_Item_Input == 3)//Bronze Membership
    {
        cout << "Yearly Bronze Membership Fee" << endl;
        Membership_Calculation(1200, 1, Bronze_Fee, 0);
		goto input;
    }
    if (Menu_Item_Input == 4)//Quit
    {
        cout << "Thank you for using Rhonda's Fee Calculator!";
        getchar();
        return 0;
    }
    else//Invalid Input
        cout << "Invalid input..." << endl;
        cout << "Please choose correct menu item." << endl;
        goto input;
}