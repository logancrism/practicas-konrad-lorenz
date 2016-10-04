#include <iostream>
#include <conio.h>

using namespace std;

main()
	{
		int n,ac=0,turnos=6;
		char secreta[30],mostrada[30],c;
		
		
		cout<<"TURNO DEL RETADOR\nDigite la palabra secreta, digite punto para terminar \n\n";
		for(int i=0;i<30;i++)
			{
				secreta[i]=getch();
				mostrada[i]='-';
				cout<<"*";
				if(secreta[i]=='.')
					{
						n=i;
						break;
					}
			}
		cout<<"PALABRA SECRETA GUARDADA\n\nTurno del jugador...";
		while(turnos>0)
			{
				while(ac<n) {
					system("cls");					
					for(int i=0;i<n;i++)
						cout<<mostrada[i];
					cout<<"\nIngrese una letra: ";
					c=getche();
						
					for(int i=0;i<n;i++)
					
						if(secreta[i]==c)
							{
								mostrada[i]=c;
								ac++;

							}
							
						if(ac == 0) {
							turnos--;
						}
						
						if(turnos == 0)
						{
							cout<<endl;
							cout<<"Haz Perdido"<<endl;
							cout<<"La parabra era: "<<endl;
								
							for(int i=0; i<n; i++)
							{
								cout<<secreta[i];
							};
							cout<<endl;
							break;
						}
				}

					
			}
			
			cout<<turnos;
		
	}
