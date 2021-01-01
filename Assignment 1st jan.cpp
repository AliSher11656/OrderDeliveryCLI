#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	char name[30];
	char restaurant[5][25] = {"Howdy", "Yum Chinese & Thai", "KFC", "Sub Way", "My Burger"};
	char howdymenu[5][15] = {"Lawa burger", "Son of a bun", "Mexicano", "Chicken Wings", "Lotus"};
	int price1[5] = {2000, 1800, 1500, 800, 400};
	char yummenu[5][25] = {"Khao Suey", "Chili bean prawns", "Fried Rice", "Noodle Soup", "Soft Drink"};
	int price2[5] = {800,1200,650,700,250};
	char kfcmenu[5][15] = {"Patty burger", "Zinger Burger", "Chicken Piece", "Bucket Fries", "Soft Drink"};
	int price3[5] = {900, 750, 350, 650, 250};
	char submenu[5][15] = {"Foot long Sub", "6 inch Sub", "Coleslaw", "Platter", "Cookie"};
	int price4[5] = {1300, 650, 150, 1100, 200};
	char mymenu[5][15] = {"Classic Beef", "Super Cheese", "Patty Burger", "Large Fries","Mutton Burger"};
	int price5[5] = {900, 800, 650, 400, 1000};
	int i, quantity=0,C1, C2, intial_price=0;
	double discount=0, final=0; 
	char gotostart;
	char a;
	int end=0;
	
	cout << "\t\t\t|   Welcome To Pink Panda   |" << '\n';
    cout << "Please Enter Your Name : ";
    cin.getline(name, 20);
	cout<<'\n';
	cout << "Welcome "<<name<< " To PINK PANDA "<<endl ;
	cout<<'\n';
	start:
	cout << "Select any resturant from the following list \n";
	

	for (i=0; i<5; i++)
	{
		cout<< i+1<<")  " << restaurant[i] << "\n";
	}
	cin >> C1;
		 if (C1>=6){
    cout << "Invalid Option Entered. Please Try Again." << '\n';
    cout << "Would you like to start again? Y / N : ";
    cin >> gotostart;
    if (gotostart=='Y'||gotostart=='y') {
      goto start;
    } else if (gotostart=='N'||gotostart=='n') {
      goto end;
    } else {
      cout << "Invalid Entry!!"<<"\n";
      goto end;
    }
  }
	switch(C1)
	{
		case 1:
			cout << "\nYou selected Howdy. Nice choice \n";
			cout<<'\n';
				cout << "What would you like to have: \n";
				for (i=0; i<5; i++)
				{
					cout << i+1<<") "<< howdymenu[i] << setw(15) << price1[i] << "\n";
				}
				cin >> C2;
				 if (C2>=6){
    cout << "Invalid Option Entered. Please Try Again." << '\n';
    cout << "Would you like to start again? Y / N : ";
    cin >> gotostart;
    if (gotostart=='Y'||gotostart=='y') {
      goto start;
    } else if (gotostart=='N'||gotostart=='n') {
      goto end;
    } else {
      cout << "Invalid Entry!!"<<"\n";
      goto end;
    }
  }
				switch(C2)
				{
					case 1:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price1[0] * quantity);
						break;
					case 2:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price1[1] * quantity);
						break;
					case 3:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price1[2] * quantity);
						break;
					case 4:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price1[3] * quantity);
						break;
					case 5:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price1[4] * quantity);
						break;
					default:
						cout << "Invalid Entry!!! \n";
						break;		
				}
			
			if(intial_price == 1000)
			{
				discount = intial_price * .10;
				final = intial_price - discount;
			}
			else if(intial_price > 1000 && intial_price <=3000)
			{
				discount = intial_price * .12;
				final = intial_price - discount;
			}
		    else if(intial_price > 3000 && intial_price <=5000)
			{
				discount = intial_price * .15;
				final = intial_price - discount;
			}
			else if(intial_price > 5000)
			{
				discount = intial_price * .25;
				final = intial_price - discount;
			}
			else
			{
				cout << "Your Order is less than 1000. Sorry Can't deliver. \n";
				end = 1;
			}

			break;
		
		case 2:
			cout << "\nYou selected Yum chinese and Thai. Nice choice \n";
			cout<<'\n';

		
				cout << "What would you like to have: \n";

				for (i=0; i<5; i++)
				{
					cout << i+1 <<")" << yummenu[i] << setw(7) << price2[i] << "\n";
				}
				cin >> C2;
					 if (C2>=6){
    cout << "Invalid Option Entered. Please Try Again." << '\n';
    cout << "Would you like to start again? Y / N : ";
    cin >> gotostart;
    if (gotostart=='Y'||gotostart=='y') {
      goto start;
    } else if (gotostart=='N'||gotostart=='n') {
      goto end;
    } else {
      cout << "Invalid Entry!!"<<"\n";
      goto end;
    }
  }
				switch(C2)
				{
					case 1:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price2[0] * quantity);
						break;
					case 2:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price2[1] * quantity);
						break;
					case 3:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price2[2] * quantity);
						break;
					case 4:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price2[3] * quantity);
						break;
					case 5:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price2[4] * quantity);
						break;
					default:
						cout << "Invalid Entry!!! \n";
						break;		
				}
			if(intial_price == 1000)
			{
				discount = intial_price * .10;
				final = intial_price - discount;
			}
			else if(intial_price > 1000 && intial_price <=3000)
			{
				discount = intial_price * .12;
				final = intial_price - discount;
			}
		    else if(intial_price > 3000 && intial_price <=5000)
			{
				discount = intial_price * .15;
				final = intial_price - discount;
			}
			else if(intial_price > 5000)
			{
				discount = intial_price * .25;
				final = intial_price - discount;
			}
			else
			{
				cout << "Your Order is less than 1000. Sorry Can't deliver. \n";
				end = 1;
			}

			break;
			
		case 3:
			cout << "\nYou Selected KFC. Nice Choice \n";
			cout<<'\n';
			
				cout << "What would you like to have: \n";

				for (i=0; i<5; i++)
				{
					cout << i+1 <<") "<< kfcmenu[i] << setw(7) << price3[i] << "\n";
				}
				cin >> C2;
					 if (C2>=6){
    cout << "Invalid Option Entered. Please Try Again." << '\n';
    cout << "Would you like to start again? Y / N : ";
    cin >> gotostart;
    if (gotostart=='Y'||gotostart=='y') {
      goto start;
    } else if (gotostart=='N'||gotostart=='n') {
      goto end;
    } else {
      cout << "Invalid Entry!!"<<"\n";
      goto end;
    }
  }
				switch(C2)
				{
					case 1:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price3[0] * quantity);
						break;
					case 2:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price3[1] * quantity);
						break;
					case 3:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price3[2] * quantity);
						break;
					case 4:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price3[3] * quantity);
						break;
					case 5:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price3[4] * quantity);
						break;
					default:
						cout << "Invalid Entry!!! \n";
						break;		
				}
			
			if(intial_price == 1000)
			{
				discount = intial_price * .10;
				final = intial_price - discount;
			}
			else if(intial_price > 1000 && intial_price <=3000)
			{
				discount = intial_price * .12;
				final = intial_price - discount;
			}
		    else if(intial_price > 3000 && intial_price <=5000)
			{
				discount = intial_price * .15;
				final = intial_price - discount;
			}
			else if(intial_price > 5000)
			{
				discount = intial_price * .25;
				final = intial_price - discount;
			}
			else
			{
				cout << "Your Order is less than 1000. Sorry Can't deliver. \n";
				end = 1;
			}

			break;
			
		case 4:
			cout << "\nYou Selected Subway. Nice choice \n";
				cout<<'\n';

				cout << "What would you like to have: \n";
				for (i=0; i<5; i++)
				{
					cout << i+1 << ") " << submenu[i] << setw(7) << price4[i] << "\n";
				}
				cin >> C2;
					 if (C2>=6){
    cout << "Invalid Option Entered. Please Try Again." << '\n';
    cout << "Would you like to start again? Y / N : ";
    cin >> gotostart;
    if (gotostart=='Y'||gotostart=='y') {
      goto start;
    } else if (gotostart=='N'||gotostart=='n') {
      goto end;
    } else {
      cout << "Invalid Entry!!"<<"\n";
      goto end;
    }
  }
				switch(C2)
				{
					case 1:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price4[0] * quantity);
						break;
					case 2:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price4[1] * quantity);
						break;
					case 3:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price4[2] * quantity);
						break;
					case 4:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price4[3] * quantity);
						break;
					case 5:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price4[4] * quantity);
						break;
					default:
						cout << "Invalid Entry!!! \n";
						break;		
				}
			
			if(intial_price == 1000)
			{
				discount = intial_price * .10;
				final = intial_price - discount;
			}
			else if(intial_price > 1000 && intial_price <=3000)
			{
				discount = intial_price * .12;
				final = intial_price - discount;
			}
		    else if(intial_price > 3000 && intial_price <=5000)
			{
				discount = intial_price * .15;
				final = intial_price - discount;
			}
			else if(intial_price > 5000)
			{
				discount = intial_price * .25;
				final = intial_price - discount;
			}
			else
			{
				cout << "Your Order is less than 1000. Sorry Can't deliver. \n";
				end = 1;
			}

			break;
			
		case 5:
			cout << "\nYou  Selected Gloria Jeans. Nice Choice \n";
				cout<<'\n';

				cout << "What would you like to have: \n";
				for (i=0; i<5; i++)
				{
					cout<< i+1 << " ) " << mymenu[i] << setw(7) << price5[i] << "\n";
				}
				cin >> C2;
					 if (C2>=6){
    cout << "Invalid Option Entered. Please Try Again." << '\n';
    cout << "Would you like to start again? Y / N : ";
    cin >> gotostart;
    if (gotostart=='Y'||gotostart=='y') {
      goto start;
    } else if (gotostart=='N'||gotostart=='n') {
      goto end;
    } else {
      cout << "Invalid Entry!!"<<"\n";
      goto end;
    }
  }
				switch(C2)
				{
					case 1:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price5[0] * quantity);
						break;
					case 2:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price5[1] * quantity);
						break;
					case 3:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price5[2] * quantity);
						break;
					case 4:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price5[3] * quantity);
						break;
					case 5:	
						cout << "Please Enter the quantity: ";
						cin >> quantity;
						intial_price = intial_price + (price5[4] * quantity);
						break;
					default:
						cout << "Invalid Entry!! \n";
						break;		
				}
			
			
			if(intial_price == 1000)
			{
				discount = intial_price * .10;
				final = intial_price - discount;
			}
			else if(intial_price > 1000 && intial_price <=3000)
			{
				discount = intial_price * .12;
				final = intial_price - discount;
			}
		    else if(intial_price > 3000 && intial_price <=5000)
			{
				discount = intial_price * .15;
				final = intial_price - discount;
			}
			else if(intial_price > 5000)
			{
				discount = intial_price * .25;
				final = intial_price - discount;
			}
			else
			{
				cout << "Your Order is less than 1000. Sorry Can't deliver. \n";
				end = 1;
			}

			break;
	}
	if(end != 1)
	{
		cout << "Intial Bill : " << intial_price << endl;
		cout << "Discount : " << discount << endl;
		cout << "Bill after discount : " << final << endl;
		cout << "Thanks For choosing Pink Panda.Your order will be delivered in 30 minutes.  \n";
	}

	cout<<"Would you like to Order something else.(Y or N) : ";
	cin >>a;
					 if ( a=='y' || a=='Y')
					 {
      goto start;

  }
  else {
  	goto end;
  }
	end:
	return 0;
}
