#include <iostream>
#include <ctime>
#include <conio.h>
#include <unistd.h>

using namespace std;

class FootballClub
{
	private:
		
		string name;
		string nationality;
		string league;
		string competition;
		static int user;

	public:
		
		FootballClub()
		{
			user++;
		}
		
		static int totalUsers()
		{
			return user;
		}
		
		void getData()
		{
			cout << "\n Enter Club's Name : " << endl;

			fflush(stdin);
			getline(cin,name);
			fflush(stdin);			
			
			cout << endl;

			cout << "Which Country's Club is this : " << endl;

			fflush(stdin);
			getline(cin,nationality);
			fflush(stdin);

			cout << endl;

			cout << "Enter League in which Club play : " << endl;

			fflush(stdin);
			getline(cin,league);
			fflush(stdin);
			
			cout << endl;

			cout << "Mention Club's current competition : " << endl;

			fflush(stdin);
			getline(cin,competition);
			fflush(stdin);

			cout << endl;
						
		}
		
		void showData()
		{
			cout << "\n \t Club Name is " << name << endl;
			cout << "\n \t" << name << " is the Club of " << nationality << endl;
			cout << "\n \t" << name << " plays in " << league << " league" << endl;
			cout << "\n \t" << name << " plays in Europe in " << competition << endl;
			
		}
};


class Players
{
	private:
		
		int totalSquad;
		int squadValue;
		string captain;
		string bestPlayer;
		FootballClub f1;

	
	public:
		
		void getData()
		{
			f1.getData();
			cout << "\n Enter numbers of players in squad : " << endl;
			cin >> totalSquad;
			cout << endl;

			cout << " Enter total market value of players in squad : " << endl;
			cin >> squadValue;
			cout << endl;

			cout << " Insert Name of the Club's Captain : " << endl;

			fflush(stdin);
			getline(cin,captain);
			fflush(stdin);

			cout << endl;

			cout << " Insert Name of the Club's Best Perfomer : " << endl;

			fflush(stdin);
			getline(cin,bestPlayer);
			fflush(stdin);				
			
			cout << endl;

			
		}
		
		void showData()
		{
			f1.showData();
			cout << "\n \t Total Players in Club are " << totalSquad << " players"<< endl;
			cout << "\n \t Total Market Value of Club's Player is " << squadValue << " $" << endl;
			cout << "\n \t Football Club Captain is " << captain << endl;
			cout << "\n \t Current Best Performer is " << bestPlayer << endl;
			
		}
};


class Tactics
{
	private:		
		string style;
		string formation;
		Players po;
	public:		
		void getData()
		{
			po.getData();
			cout << "\n Enter Tactical Style of Play : " << endl;
			fflush(stdin);
			getline(cin,style);
			fflush(stdin);
			
			cout << "\n Enter Default Formation in Starting Line-up : " << endl;
			fflush(stdin);
			getline(cin,formation);
			fflush(stdin);

		}


		void showData()
		{
			po.showData();
			cout << "\n \t Club's Tactical Approach is " << style << endl;
			cout << "\n \t Standard Formation of Club : " << formation << endl;
		}
};


class Management
{
	private:
		
		string manager;
		string national;
		int totalStaff;
		float experience;
		FootballClub f1;

	
	public:
		
		void getData()
		{
			f1.getData();
			cout << "\n Enter Current Manager of club : " << endl;

			fflush(stdin);
			getline(cin,manager);
			fflush(stdin);
						

			cout << "\n Enter Current Manager's Nationality : " << endl;

			fflush(stdin);
			getline(cin,national);
			fflush(stdin);
						
	
			cout << "\n Enter Total Coaching & Management Staff members : " << endl;
			cin >> totalStaff;
			
			cout << "\n Enter Experience : " << endl;
			cin >> experience;
				
		}
		
		void showData()
		{
			f1.showData();
			cout << "\n \t Club Manager is " << manager << endl;
			cout << "\n \t Club Manager is " << national << " National" << endl;
			cout << "\n \t Total Staff Members are " << totalStaff << endl;
			cout << "\n \t Average Experience of Coaching Staff is " << experience/2 << " years" << endl;
			
		}
};

class Budget
{
	private:
		
		float Invest;
		float totalWealth;
		int sponsor;
		float spMoney;
		FootballClub f1;

	
	public:
		
		void getData()
		{
			f1.getData();
			cout << "\n Enter amount of money invested by Club in Transfer Market : " << endl;
			cin >> Invest;
			
			cout << "\n Mention Club's Current Net wealth : " << endl;
			cin >> totalWealth;
			
			cout << "\n Insert Total sponsors of Club : " << endl;
			cin >> sponsor;
			
			cout << "\n Enter Money earned from Sponsorships : " << endl;
			cin >> spMoney;
						
		}
		
		void showData()
		{
			f1.showData();
			cout << "\n \t Club invested " << Invest << " $ in Transfer Market" << endl;
			cout << "\n \t Club's net wealth is " << totalWealth << " $" << endl;
			cout << "\n \t Club is sponsored by " << sponsor << " sponsors this season" << endl;
			cout << "\n \t Club Seasonal Budget is " << (totalWealth + (sponsor * spMoney) - Invest) << " $" << endl;
		}
};

class Ground
{
	private:
		
		string homeGround;
		string construct;
		int capacity;
		FootballClub f1;
	
	public:
		
		void getData()
		{
			f1.getData();
			cout << "\n Enter Ground Name : " << endl;

			fflush(stdin);
			getline(cin,homeGround);
			fflush(stdin);
			
			cout << "\n Insert the Construction year of ground : " << endl;

			fflush(stdin);
			getline(cin,construct);
			fflush(stdin);
			
			cout << "\n Enter Ground Capacity : " << endl;
			cin >> capacity;
			 
		}
		
		void showData()
		{
			f1.showData();
			cout << "\n \t Homeground of Club is " << homeGround << endl;
			cout << "\n \t" << homeGround << " is constructed in " << construct << endl;
			cout << "\n \t" << capacity << " amount of people can watch match at " << homeGround << " at once!" << endl;
		}
};

int FootballClub :: user = 0;

int main()
{
	system("cls");
	system("color 4f");

	cout << "\n \t --------------------------WELCOME TO FOOTBALL CLUB -------------------------- " << endl;

	time_t now = time(0);
   
   	char* dt = ctime(&now);

   cout << "\n Local Date and Time : " << dt << endl;
	
	Tactics*ptr1[100];
	Management*ptr2[100];
	Budget*ptr3[100];
	Ground*ptr4[100];
	
	int x = 0;
	char choice;
	int p = 0;
	int m = 0;
	int b = 0;
	int g = 0;
	
	do
	{
		
		cout << "\n \t SELECT WHICH FIELD AREA YOU WANT TO VISIT \n \t\t -> P for Players Locker Room \n \t\t -> M for Managment Locker Room \n \t\t -> B for Income and Budget Information \n \t\t -> G for Home Ground Stats" << endl;
		cin >> choice;
		
		if ( choice == 'P' || choice == 'p')
		{
			system("cls");
			system("color 3f");
			ptr1[x] = new Tactics;
			ptr1[x] -> getData();
			system("cls");	
			ptr1[x] -> showData();
			p++;		
		}
		
		else if ( choice == 'M' || choice == 'm')
		{
			system("cls");
			system("color 2f");
			ptr2[x] = new Management;
			ptr2[x] -> getData();
			system("cls");
			ptr2[x] -> showData();
			m++;			
		}
		
		else if ( choice == 'B' || choice == 'b')
		{
			system("cls");
			system("color 5f");
			ptr3[x] = new Budget;
			ptr3[x] -> getData();
			system("cls");			
			ptr3[x] -> showData();
			b++;
		}
		
		else if ( choice == 'G' || choice == 'g')
		{
			system("cls");
			system("color 6f");
			ptr4[x] = new Ground;
			ptr4[x] -> getData();
			system("cls");
			ptr4[x] -> showData();
			g++;
		}
		
		else
		{
			cout << "\n Sorry Invalid entry" << endl;
		}
		
		cout << "\n If you wanna continue press Y otherwise N " << endl;
		cin >> choice;	
	}
	
	while ( choice == 'Y' || choice == 'y');
	
	system("cls");
	system("color 0A");	
	cout << "\n This System is operated " << FootballClub :: totalUsers() << " times." << endl;
	cout<<"Loading Individual Visits";
		 for (int j=0;j<5;j++)
		    {
			 	cout<<".";
		     	sleep(1);
		    } 
	cout <<"\n Users visit \n -> PLAYERS LOCKEROOM : " << p << "\n -> STAFF LOCKEROOM : " << m << "\n -> ACCOUNTS SECTION : " << b << "\n -> GROUND INFORMATION AREA : " << g;
	cout << endl;
	for (int j=0;j<5;j++)
		    {
			 	cout<<".";
		     	sleep(1);
		    } 
	cout << "\n\t ------------------------- THANK YOU FOR VISITING!!! ------------------------- "<< endl;
	return 0;
	
}
