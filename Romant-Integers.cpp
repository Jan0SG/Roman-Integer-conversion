#include<iostream>
#include<string.h>//bilbioteca para el string


using namespace std;

int n;//variable global para el menu

class ROMANOS{//clase ROMANOS
	
	private://atributos
		int num;
		int rom;
		int mil, cen, dec, uni;
		string m;
		string c;
		string d;
		string u;

	
	public://metodos
		int enterosaromanos(){//metodo para transformar enteros a romanos
			cout<<"\nEnter the number you wish to convert: ";
			cin>>num;
			
			uni=num%10; num = num/10;//divisiones para encontrar el numero de unidades y eliminarlas del numero
			dec=num%10; num = num/10;//divisiones para encontrar el numero de decenas y eliminarlas del numero
			cen=num%10; num = num/10;//divisiones para encontrar el numero de centenas y eliminarlas del numero
			mil=num%10; num = num/10;//divisiones para encontrar el numero de millares y eliminarlas del numero
			
			cout<<"\nYour number in Roman is: ";//Impresion del numero romano
			
			switch(mil){//Impresion de millares
				case 1:cout<<"M"; break;
				case 2:cout<<"MM"; break;
				case 3:cout<<"MMM"; break;
			}
			switch(cen){//Impresion de centenas
				case 1:cout<<"C"; break;
				case 2:cout<<"CC"; break;
				case 3:cout<<"CCC"; break;
				case 4:cout<<"CD"; break;
				case 5:cout<<"D"; break;
				case 6:cout<<"DC"; break;
				case 7:cout<<"DCC"; break;
				case 8:cout<<"DCC"; break;
				case 9:cout<<"CM"; break;
			}
			switch(dec){//impresion de decenas
				case 1:cout<<"X"; break;
				case 2:cout<<"XX"; break;
				case 3:cout<<"XXX"; break;
				case 4:cout<<"XL"; break;
				case 5:cout<<"L"; break;
				case 6:cout<<"LX"; break;
				case 7:cout<<"LXX"; break;
				case 8:cout<<"LXXX"; break;
				case 9:cout<<"XC"; break;
			}
			switch(uni){//impresion de unidades
				case 1:cout<<"I"; break;
				case 2:cout<<"II"; break;
				case 3:cout<<"III"; break;
				case 4:cout<<"IV"; break;
				case 5:cout<<"V"; break;
				case 6:cout<<"VI"; break;
				case 7:cout<<"VII"; break;
				case 8:cout<<"VIII"; break;
				case 9:cout<<"IX"; break;
			}
		}
		
		int romanosaenteros(){//metodo para transformar de romanos a enteros
			rom=0;
			cout<<"\nYou will be asked the Roman number by their values: ";//Se piden de manera individual para ingresarlos a los strings correspondientes
			cout<<"\nThousands: ";cin>>m;
			cout<<"\nHundreds: ";cin>>c;
			cout<<"\nTens: ";cin>>d;
			cout<<"\nUnits: ";cin>>u;
		
			cout<<"\nYour number in Roman is: "<<m<<c<<d<<u;//impresion del numero completo
			//Millares
			if(string(m)=="M"){	rom+=1000;}
			if(string(m)=="MM"){rom+=2000;}
			if(string(m)=="MMM"){rom+=3000;}
			//Centenas
			if(string(c)=="C"){rom+=100;}
			if(string(c)=="CC"){rom+=200;}
			if(string(c)=="CCC"){rom+=300;}
			if(string(c)=="CD"){rom+=400;}
			if(string(c)=="D"){rom+=500;}
			if(string(c)=="DC"){rom+=600;}
			if(string(c)=="DCC"){rom+=700;}
			if(string(c)=="DCCC"){rom+=800;}
			if(string(c)=="CM"){rom+=900;}
			//Decena
			if(string(d)=="X"){rom+=10;}
			if(string(d)=="XX"){rom+=20;}
			if(string(d)=="XXX"){rom+=30;}
			if(string(d)=="XL"){rom+=40;}
			if(string(d)=="L"){rom+=50;}
			if(string(d)=="LX"){rom+=60;}
			if(string(d)=="LXX"){rom+=70;}
			if(string(d)=="LXXX"){rom+=80;}
			if(string(d)=="XC"){rom+=90;}
			//Unidades
			if(string(u)=="I"){rom+=1;}
			if(string(u)=="II"){rom+=2;}
			if(string(u)=="III"){rom+=3;}
			if(string(u)=="IV"){rom+=4;}
			if(string(u)=="V"){rom+=5;}
			if(string(u)=="VI"){rom+=6;}
			if(string(u)=="VII"){rom+=7;}
			if(string(u)=="VIII"){rom+=8;}
			if(string(u)=="IX"){rom+=9;}
			
			cout<<"\n\nThe number in integers is: "<<rom;//impresion del numero transformado a enteros
			}
		
		void menuromanos(){//menu para repetir las operaciones hasta que se salga el usuario
		cout<<"\nPlease choose something from the menu: ";
		cout<<"\n1- Integer number to Roman number.";
		cout<<"\n2- Roman number to Integer number.";
		cout<<"\n3- Exit the program.";
		cout<<"\n\nYour choice: ";
		cin>>n;
		cout<<"\n";
	
		}
		
};

int main(){
	
	ROMANOS conversion;//objeto
	do{//do para repetir el menu
	cout<<"-----------------------------------------------------------------------------------------------------------------------";	
	cout<<"\n\n				     Welcome, this program has the next function";
	cout<<"\n\n			      Transform integer numbers to roman numbers and vice versa\n";
	conversion.menuromanos();
	
	switch(n){
			case 1:
				conversion.enterosaromanos();
				cout<<"\n\nThanks for using this program! Use it the as long as you want!\n\n";
				break;
			case 2:
				conversion.romanosaenteros();
				cout<<"\n\nThanks for using this program! Use it the as long as you want!\n\n";
				break;
			case 3:
				cout<<"Thanks for using this program! Come back whenever you want!";
				return 0;
			
		}
	}while(n<4);
	
	return 0;
}
