#include<iostream>
#include<conio.h>
using namespace std;
/////////////////////////////PROJECT///////////////////////////////////////
////////////////////////MSSU ASSOCIATION GROUP////////////////////////////

///////////////////////20 INFORMATION TECHNOLOGY//////////////////////////

////////////////////BANK ACCOUNT MANAGEMENT SYSTEM///////////////////////////

class Bank
{
	private:
		int AccNumber=0, AccNumber2=0;
		char name[30];
		char Name[30];
		char type[20];
		int Totalbalance=0;
		int depo;
		int with;
		int trans;
		int Brcode;
		
		public:
			void menu();
			void menu2();
			void get();
			void deposite();
			void check();
			void withdraw();
			void transfer();
			void info();
};
void Bank::menu()
{
	int me;
	system("cls");
	cout<<"\n\n\n\t\t BANK ACCOUNT MANAGEMENT SYSTEM\n\n\n";
	
	cout<<"\n\t\t----------------------------------------------\n";
	cout<<"\t\t**********************************************";
	
	cout<<"\n\n\n\t\t*\t Choose Your Option from 1-to-7\t     *\n\n";
	
	cout<<"\t\t*\t 1. Create a new Account\t     *\n\n";
	
	cout<<"\t\t*\t 2. Deposite Your Money\t\t     *\n\n";
	
	cout<<"\t\t*\t 3. Balance Enquiry\t\t     *\n\n";
	
	cout<<"\t\t*\t 4. Withdraw Amount\t\t     *\n\n";
	
	cout<<"\t\t*\t 5. Transfer Amount\t\t     *\n\n";
	
	cout<<"\t\t*\t 6. Your Account All info\t     *\n\n";
	
	cout<<"\t\t*\t 7. Exit\t\t\t     *\n\n";
	
	cout<<"\t\t**********************************************";
	cout<<"\n\t\t----------------------------------------------\n";
	
	cout<<"\n\t\t";
	cin>>me;
	
	cout<<"\n\n\n\t\t<<---- WELCOME TO YOUR BANK ---->>\n\n\t\t__________________________________\n\n";
	
	switch(me)
	{
		case 1:
			get();
			break;
			
			case 2:
				deposite();
				break;
				
				case 3:
					check();
					break;
					
					case 4:
						withdraw();
						break;
						
						case 5:
							transfer();
							break;
							
						case 6:
							info();
							break;
							
	}
}

void Bank::get()
{
int go;

cout<<"\n\n\t\t****************************************************";

cout<<"\n\t\t----------------------------------------------------\n";

cout<<"\n\n\n\t\t Enter Your Name\t\t\t : ";
cin>>name;

cout<<"\n\t\t Enter Your Account Number\t\t : ";
cin>>AccNumber;

cout<<"\n\t\t Enter The Type of Account\t\t : ";
cin>>type;

cout<<"\n\t\t How much money you want to Deposite?.   : ";
cin>>Totalbalance;

cout<<"\n\n\t\t****************************************************";

cout<<"\n\t\t----------------------------------------------------\n";

cout<<"\n\n\n\n\t\t\t<<---- YOUR ACCOUNT IS CREATED---->>\n\n\t\t\t\t<<--- THANK YOU--->>";
 
 cout<<"\n\n\n\t\t Press '0' For GoTo MainMenu : ";
cin>>go;

if(go==0)
{
	menu();
}

}
void Bank::deposite()
{
	int go;
	cout<<"\n\n\t\t How much money you want to Deposite ? : ";
	cin>>depo;
	
	Totalbalance+=depo;
	
	cout<<"\n\n\t\t YOUR CURRENT BALANCE \t\t: "<<Totalbalance;
	
	cout<<"\n\n\n\t\t    <<----TRANSACTION SUCCESSFULLY DONE---->>\n\n\t\t\t\t<<--- THANK YOU--->>";
	
	cout<<"\n\n\t\t Press '0' For GoTo MainMenu : ";
	cin>>go;
	
	if(go==0)
	{
		menu();
	}
}
void Bank::check()
{
	int go;
	cout<<"\n\n\t\t Your Current Balance \t: "<<Totalbalance<<"\n";
	
	cout<<"\n\n\n\t\t Press '1' For Transaction";
	
	cout<<"\n\n\n\t\t Press '0' For GoTo MainMenu : ";
	
	cin>>go;
	switch(go)
	{
		case 1:
			 menu2();
		     break;
		   
		    case 0:
		   	
			   menu();
			   break;
	}
}
void Bank::withdraw()
{
	int go;
	cout<<"\n\t\t How much money you want to Withdraw ? : ";
	cin>>with;
	if(with<=Totalbalance)
	{
	Totalbalance-=with;
	
	cout<<"\n\n\n\n\t\t    <<----TRANSACTION SUCCESSFULLY DONE---->>\n\n\t\t\t <<---THANK YOU SO MUCH--->>\n";
	
	cout<<"\n\n\n\t\t After withdrawing Your Balance : "<<Totalbalance<<"\n\t";
}
else
{
	cout<<"\n\n\t\t\tSORRY YOUR CURRENT BALANCE IS LESS\n";
}
	cout<<"\n\t\t Press '0' For GoTo MainMenu : ";
	
	cin>>go;
	if(go==0)
	{ menu();
	}
}
void Bank::transfer()
{
	int go;
	cout<<"\t\t Enter Receiver's Name \t\t\t : ";
	cin>>Name;
	
	cout<<"\n\n\t\t Enter Receiver's Account Number\t : ";
	cin>>AccNumber2;
	
	cout<<"\n\n\t\t Enter Branch Code \t\t\t : ";
	cin>>Brcode;
	
	cout<<"\n\n\t\t How much money you want to Transfer ?.  : ";
	cin>>trans;
	
	if(trans<=Totalbalance)
	{
		Totalbalance-=trans;
		cout<<"\n\n\n\t\t\t<<----Transaction Successfully Done---->>";
		cout<<"\n\n\t\t\t\t <<---THANK YOU--->>";
		cout<<"\n\n\n\t\t YOUR CURRENT BALANCE : "<<Totalbalance;
	}
	else
	{
		cout<<"\n\n\t\t SORRY YOUR CURRENT BALANCE IS LESS";
	}
	cout<<"\n\n\t\t Press '0' For GoTo MainMenu :  ";
	cin>>go;
	if(go==0)
	{
		menu();
	}
}
void Bank::info()
{
	int go;
	system("cls");
	cout<<"\n\n\n\n\t\t <<<------ACCOUNT ALL INFORMATION------>>>\n\t\t__________________________________________\n\n\n";
	
	cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	
	cout<<"\n\t\t Account Holder Name\t\t : "<<name<<"\n\n";
	
	cout<<"\t\t Account Number\t\t\t :  "<<AccNumber<<"\n\n";
	
	cout<<"\t\t Type of Account      \t\t : "<<type<<"\n\n";
	
	cout<<"\t\t Total Amount in your Account \t : "<<Totalbalance;
	
	cout<<"\n\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	
	cout<<"\n\n\t\t Press '0' For GoTo MainMenu:";
	
	cout<<"\n";
	
	cin>>go;
	if(go==0)
	{
		menu();
	}
}
void Bank::menu2()
{
	int choice;
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\t  @@=========================================@@\n";
	
	cout<<"\t  ||\t\t\t\t\t     ||";
	
	cout<<"\n\t  ||\t\t\t\t\t     ||";
	
	cout<<"\n\t  ||\t Choose Your Option from 1-to-4\t     ||\n";
	
	cout<<"\t  ||\t\t\t\t\t     ||";
	
	cout<<"\n\t  ||\t 1. Deposite Your Money\t\t     ||\n";
	
	cout<<"\t  ||\t\t\t\t\t     ||";
	
	cout<<"\n\t  ||\t 2. Withdraw Amount\t\t     ||\n";
	
	cout<<"\t  ||\t\t\t\t\t     ||";
	
	cout<<"\n\t  ||\t 3. Transfer Amount\t\t     ||\n";
	
	cout<<"\t  ||\t\t\t\t\t     ||";
	
	cout<<"\n\t  ||\t 4. For GoTo MainMenu\t\t     ||";
	
	cout<<"\n\t  ||\t\t\t\t\t     ||";
	
	cout<<"\n\t  ||\t\t\t\t\t     ||";
	
	cout<<"\n\t  ||\t\t\t\t\t     ||";
	
	cout<<"\n\t  @@=========================================@@\n";
	
	cin>>choice;
	switch(choice)
	{
		case 1:
			deposite();
			break;
			
			case 2:
				withdraw();
				break;
				
				case 3:
					transfer();
					break;
					
					case 4:
						menu();
							break;
							
					default:
					{
					
						cout<<"\n\n\n\t\t\tInvalid Choice";
						break;
					}
			
	}
	
}
int main()
{
	Bank obj;
	obj.menu();
	getch();
	return 0;
}
