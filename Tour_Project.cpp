#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<fstream>
using namespace std;
class Person{
	public:
		int id;
		string name;
		string sex;
		string tel;
	//protected:
		
		void input_Person(){	
		
			cout<<"Enter ID=";cin>>id;
			cout<<"Enter Name=";cin>>name;
			cout<<"Enter Gender=";cin>>sex;
			cout<<"Enter Telephone=";cin>>tel;
		
		}
		void header(){
			
			cout<<setw(10)<<"ID"<<setw(10)<<"NAME"<<setw(10)<<"SEX"<<setw(10)<<"TELEPHONE"<<endl;
		}
		void output_Person(){
			
			cout<<setw(10)<<id<<setw(10)<<name<<setw(10)<<sex<<setw(10)<<tel<<endl;
		}
		void Welcome(){
		cout<<"Welcome To SLS Tour!\n";
		cout<<"Press Enter to continus........\n";
		
		}
		void Province(){
		cout<<"------------View The Province----------------\n";
		cout<<"[1].Phnompenh To kampot"<<endl;
		cout<<"[2].Phnompenh To Kep"<<endl;
		cout<<"[3].Phnompenh To Koh Kong"<<endl;
		cout<<"[4].Phnompenh To Kompong Cham"<<endl;
		cout<<"[5].Phnompenh To Kratie"<<endl;
		cout<<"[6].Phnompenh To Battambong"<<endl;
		cout<<"[7].Phnompenh To Moundoulkiri"<<endl;
		cout<<"[8].Phnompenh To Rothanakiri"<<endl;
		cout<<"[9].Phnompenh To Takeo"<<endl;
		cout<<"[10].Phnompenh To Banteaymeanchey"<<endl;
		cout<<"[11].Phnompenh To Pursat"<<endl;
		cout<<"[12].Phnompenh To Preahsihanouk"<<endl;
		cout<<"[13].Phnompenh To SiemReap"<<endl;
		cout<<"[14].Phnompenh To Preahvihear"<<endl;
		cout<<"[15].Phnompenh To kandal"<<endl;
		}
		
};
class Schedule{
	public:
	string kh,dri,sname;
		int sid,d,m,y,i,n,day,da,mo,ye,did,tid;
		string sexd;
	//public:
		void k(){
		    cout<<"Enter Province=";cin>>kh;	
		}
		void ou(){
			
		}
		void Tran_id(){
			cout<<"Enter Transportation ID=";cin>>tid;
		}
		void driver(){
		cout<<"Enter Name=";cin>>dri;
		cout<<"Enter Gender=";cin>>sexd;
		cout<<"Enter Id=";cin>>did;	
		}
		void schedule(){
		cout<<"--------------------------"<<endl;
		cout<<"Input number of day for traveling=";cin>>day;
		cout<<"Enter Schedule Id=";cin>>sid;
		cout<<"Enter Day=";cin>>d;
		cout<<"Enter Month=";cin>>m;
		cout<<"Enter Year=";cin>>y;
		cout<<"--------Back day------"<<endl;
		cout<<"Enter Day=";cin>>da;
		cout<<"Enter Month=";cin>>mo;
		cout<<"Enter Year=";cin>>ye;
		}
		void out_schedule(){
			cout<<"Travel From PhnomPenh To : "<<kh<<endl;
		cout<<"Transportation ID: "<<tid<<endl;
		cout<<"Drive By Mrr:"<<dri<<endl;
		cout<<"Gender: "<<sexd<<endl;
		cout<<"ID Driver:"<<did<<endl;
		cout<<"-------------Date-------------"<<endl;
		cout<<"Day for tour:"<<day<<endl;
		cout<<setw(10)<<"ID_Schedule"<<setw(10)<<"Day"<<setw(10)<<"Month"<<setw(10)<<"Year"<<endl;
		cout<<setw(10)<<sid<<setw(10)<<d<<setw(10)<<m<<setw(10)<<y<<endl;
		cout<<"\t\t------Back day------"<<endl;
		cout<<setw(10)<<""<<setw(10)<<da<<setw(10)<<mo<<setw(10)<<ye<<endl;
		}	
		
};
int main(){
	int op,i,n,j,ch,ch2,ch3,ch4,ch5,op2,op3,op4,op5;;
	Person per[200];
	Schedule sche[200];
	per[i].Welcome();
	getch();
	system("cls");
	per[i].Province();
	getch();
	system("cls");
	
	fstream train;
	int suport;
	do{
	cout<<"+===Transportation===+"<<endl;
	cout<<"|[1].Trains          |"<<endl;
	cout<<"|[2].Buses           |"<<endl;
	cout<<"|[3].Vans            |"<<endl;
	cout<<"|[4].Flights         |"<<endl; 
	cout<<"|[5].Exit            |"<<endl;
	cout<<"+====================+"<<endl;
	cout<<"Plase Choose Option: ";cin>>op;
	system("cls");
	switch(op){
		case 1:{
			do{
	    	cout<<"+--------------MENU----------------+"<<endl;
	    	cout<<"|[1].Input Province                |"<<endl;
			cout<<"|[2].Input Customer's Information  |"<<endl;
			cout<<"|[3].Input Schedule                |"<<endl;
			cout<<"|[4].Transportation ID|Drivers     |"<<endl;
			cout<<"|[5].Show Province|Schedule|Drivers|"<<endl;
			cout<<"|[6].Show Information To Customers |"<<endl; 
			cout<<"|[7].Edit Information Customer     |"<<endl;
			cout<<"|[8].Edit Province|Schedule|Drivers|"<<endl;
			cout<<"|[9].Ticket                        |"<<endl;
			cout<<"+----------------------------------+"<<endl;
			cout<<"Plase Choose Option: ";cin>>ch;
			system("cls");
			switch(ch){
				case 1:{
					cout<<"------------View The Province----------------\n";
					cout<<"Phnompenh To kampot"<<endl;
					cout<<"Phnompenh To Kep"<<endl;
					cout<<"Phnompenh To Takeo"<<endl;
					cout<<"Phnompenh To Battambong"<<endl;
					sche[i].k();
					system("cls");
					break;
				}
				case 2:{
					cout<<"=========Info_Costumers========"<<endl;
					cout<<"Input Number of Customers=";cin>>n;
					for(i=0;i<n;i++){
						cout<<"----------["<<i+1<<"]-----------"<<endl;
						per[i].input_Person();
					}
					system("cls");
					break;
				}
				case 3:{
					sche[i].schedule();
					
					system("cls");
					break;
				}
				case 4:{
					int in;
					do{
						cout<<"---------------------------"<<endl;
						cout<<"|1.Input Transportation ID|"<<endl;
						cout<<"|2.Input Driver           |"<<endl;
						cout<<"|3.Back                   |"<<endl;
						cout<<"---------------------------"<<endl;
						cout<<"choose Option= ";cin>>op3;
						switch(op3){
						case 1:{
							sche[i].Tran_id();
							break;
						}
						case 2:{
							sche[i].driver();
							break;
						}	
						}
						
					}while(op3!=3);
					
					
					system("cls");
					break;
				}
				case 5:{
					cout<<"=========Schedule========"<<endl;
					sche[i].ou();
					sche[i].out_schedule();
					getch();
					system("cls");
					break;
				}
				case 6:{
					cout<<"=========Show info_Costumer========"<<endl;
					per[i].header();
					for(i=0;i<n;i++){
						per[i].output_Person();
					}
					
						getch();
					system("cls");
					break;
				}
				case 7:{
					do{
					
						cout<<"===Edit Province|Schedule|Drivers==|"<<endl;
						cout<<"|1.Search                          |"<<endl;
						cout<<"|2.Update                          |"<<endl;
						cout<<"|3.Delete                          |"<<endl;
						cout<<"|4.Add                             |"<<endl;
						cout<<"|5.Back                            |"<<endl;
						cout<<"==================================="<<endl;
						cout<<"Choose option : ";cin>>ch3;
						system("cls");
						switch(ch3){
							case 1:{
								do{
								cout<<" _________________"<<endl;
								cout<<"|1.Search by Id   |"<<endl;
								cout<<"|2.Search by Name |"<<endl;
								cout<<"|3.Back           |"<<endl;
								cout<<" _________________"<<endl;
								cout<<"Choose Option For Search=";cin>>ch4;
								system("cls");
									switch(ch4){
										case 1:{
											int search,x;
											cout<<"Enter id Number For Search=";cin>>search;
												for(i=0;i<n;i++){
													if(search==per[i].id){
														per[i].header();
														per[i].output_Person();
														cout<<"Search Success!"<<endl;
														}else {
															cout<<"Not Found!"<<endl;
													}
												}
													getch();
											break;
										}
										case 2:{
											int x;
											string txtsearch;
											cout<<"Enter Name For Search=";cin>>txtsearch;
												for(i=0;i<n;i++){
													if(txtsearch == per[i].name){
														per[i].header();
														per[i].output_Person();
														cout<<"Search Success!"<<endl;
														}else {
															cout<<"Not Found!"<<endl;
													}
															
														}
													getch();	
											break;
										}
									}
								}while(ch4!=3);
								break;
							}
							case 2:{
								int up;
								cout<<"Enter id For Update=";cin>>up;
									for(i=0;i<n;i++){
											if(up==per[i].id){
											per[i].input_Person();
											cout<<"Update Success!"<<endl;
											}else {
											cout<<"Not Found!"<<endl;
											}
											
									}
								
								break;
							}
							case 3:{
								int del,x;
								cout<<"Enter ID Number for Delete=";cin>>del;
									for(i=0;i<n;i++){
											if(del==per[i].id){
												for(j=i;j<n;j++){
												per[j]=per[j+1];
												
												}
												cout<<"Delete Success!"<<endl;	
												n=n-1;
											}else{
										cout<<"Delete not Success!"<<endl;	
										}
												
											
										
										}
										getch();
										
								break;
							}
							case 4:{
								int add;
								cout<<"Enter Number of Customer for Add=";cin>>add;
								for(i=n;i<n+add;i++){
									per[i].input_Person();
									cout<<"Add Success!"<<endl;
								}
								
								n=n+add;
								
								break;
							}
						}
					}while(ch3!=5);
					break;
				}
				case 8:{
					do{
								cout<<"| _________________________|"<<endl;
								cout<<"|1.Update Province         |"<<endl;
								cout<<"|2.Update Schedule         |"<<endl;
								cout<<"|3.Update Driver           |"<<endl;
								cout<<"|4.Update Transportation ID|"<<endl;
								cout<<"|5.Back                    |"<<endl;
								cout<<"|__________________________|"<<endl;
								cout<<"Choose Option For Update=";cin>>op2;
								system("cls");
								switch(op2){
									case 1:{
										string txtkhet;
										cout<<"Enter Province for Update=";cin>>txtkhet;
										if(txtkhet==sche[i].kh){
											sche[i].k();
										}
										system("cls");
										break;
									}
									case 2:{
										int up;
										cout<<"Enter Id Schedule for Update=";cin>>up;
										if(up==sche[i].sid){
											sche[i].schedule();
										}
										system("cls");
										break;
									}
									case 3:{
										string txtdriver;
										cout<<"Enter Name Driver for Update=";cin>>txtdriver;
										if(txtdriver==sche[i].dri){
											sche[i].driver();
											system("cls");
										}
										
										break;
									}
									case 4:{
										int taid;
										cout<<"Enter Id Schedule for Update=";cin>>taid;
										if(taid==sche[i].tid){
											sche[i].Tran_id();
										}
										system("cls");
										break;
									}
								}	
						
					}while(op2!=5);
					break;
				}
				case 9:{
					cout<<"=========Ticket========"<<endl;
					if(op==1){
						cout<<"Travel by Train."<<endl;
					}
					sche[i].ou();
					sche[i].out_schedule();
					per[i].header();
					for(i=0;i<n;i++){
					per[i].output_Person();
					}
					getch();
					system("cls");
					break;
				}
			}
				
			}while(op!=22);
			
			break;
		}
		case 2:{
				do{
	    	cout<<"+--------------MENU----------------+"<<endl;
	    	cout<<"|[1].Input Province                |"<<endl;
			cout<<"|[2].Input Customer's Information  |"<<endl;
			cout<<"|[3].Input Schedule                |"<<endl;
			cout<<"|[4].Transportation ID|Drivers     |"<<endl;
			cout<<"|[5].Show Province|Schedule|Drivers|"<<endl;
			cout<<"|[6].Show Information To Customers |"<<endl; 
			cout<<"|[7].Edit Information Customer     |"<<endl;
			cout<<"|[8].Edit Province|Schedule|Drivers|"<<endl;
			cout<<"|[9].Ticket                        |"<<endl;
			cout<<"+----------------------------------+"<<endl;
			cout<<"Plase Choose Option: ";cin>>ch;
			system("cls");
			switch(ch){
				case 1:{
					cout<<"------------View The Province----------------\n";
		            cout<<"[1].Phnompenh To kampot"<<endl;
					cout<<"[2].Phnompenh To Kep"<<endl;
					cout<<"[3].Phnompenh To Koh Kong"<<endl;
					cout<<"[4].Phnompenh To Kompong Cham"<<endl;
					cout<<"[5].Phnompenh To Kratie"<<endl;
					cout<<"[6].Phnompenh To Battambong"<<endl;
					cout<<"[7].Phnompenh To Moundoulkiri"<<endl;
					cout<<"[8].Phnompenh To Rothanakiri"<<endl;
					cout<<"[9].Phnompenh To Takeo"<<endl;
					cout<<"[10].Phnompenh To Banteaymeanchey"<<endl;
					cout<<"[11].Phnompenh To Pursat"<<endl;
					cout<<"[12].Phnompenh To Preahsihanouk"<<endl;
					cout<<"[13].Phnompenh To SiemReap"<<endl;
					cout<<"[14].Phnompenh To Preahvihear"<<endl;
					cout<<"[15].Phnompenh To kandal"<<endl;
					sche[i].k();
					system("cls");
					break;
				}
				case 2:{
					cout<<"=========Info_Costumers========"<<endl;
					cout<<"Input Number of Customers=";cin>>n;
					for(i=0;i<n;i++){
						cout<<"----------["<<i+1<<"]-----------"<<endl;
						per[i].input_Person();
					}
					system("cls");
					break;
				}
				case 3:{
					sche[i].schedule();
					
					system("cls");
					break;
				}
				case 4:{
					int in;
					do{
						cout<<"---------------------------"<<endl;
						cout<<"|1.Input Transportation ID|"<<endl;
						cout<<"|2.Input Driver           |"<<endl;
						cout<<"|3.Back                   |"<<endl;
						cout<<"---------------------------"<<endl;
						cout<<"choose Option= ";cin>>op3;
						switch(op3){
						case 1:{
							sche[i].Tran_id();
							break;
						}
						case 2:{
							sche[i].driver();
							break;
						}	
						}
						
					}while(op3!=3);
					
					
					system("cls");
					break;
				}
				case 5:{
					cout<<"=========Schedule========"<<endl;
					sche[i].ou();
					sche[i].out_schedule();
					getch();
					system("cls");
					break;
				}
				case 6:{
					cout<<"=========Show info_Costumer========"<<endl;
					per[i].header();
					for(i=0;i<n;i++){
						per[i].output_Person();
					}
					
						getch();
					system("cls");
					break;
				}
				case 7:{
					do{
					
						cout<<"===Edit Province|Schedule|Drivers==|"<<endl;
						cout<<"|1.Search                          |"<<endl;
						cout<<"|2.Update                          |"<<endl;
						cout<<"|3.Delete                          |"<<endl;
						cout<<"|4.Add                             |"<<endl;
						cout<<"|5.Back                            |"<<endl;
						cout<<"==================================="<<endl;
						cout<<"Choose option : ";cin>>ch3;
						system("cls");
						switch(ch3){
							case 1:{
								do{
								cout<<" _________________"<<endl;
								cout<<"|1.Search by Id   |"<<endl;
								cout<<"|2.Search by Name |"<<endl;
								cout<<"|3.Back           |"<<endl;
								cout<<" _________________"<<endl;
								cout<<"Choose Option For Search=";cin>>ch4;
								system("cls");
									switch(ch4){
										case 1:{
											int search,x;
											cout<<"Enter id Number For Search=";cin>>search;
												for(i=0;i<n;i++){
													if(search==per[i].id){
														per[i].header();
														per[i].output_Person();
														cout<<"Search Success!"<<endl;
														}else {
															cout<<"Not Found!"<<endl;
													}
												}
													getch();
											break;
										}
										case 2:{
											int x;
											string txtsearch;
											cout<<"Enter Name For Search=";cin>>txtsearch;
												for(i=0;i<n;i++){
													if(txtsearch == per[i].name){
														per[i].header();
														per[i].output_Person();
														cout<<"Search Success!"<<endl;
														}else {
															cout<<"Not Found!"<<endl;
													}
															
														}
													getch();	
											break;
										}
									}
								}while(ch4!=3);
								break;
							}
							case 2:{
								int up;
								cout<<"Enter id For Update=";cin>>up;
									for(i=0;i<n;i++){
											if(up==per[i].id){
											per[i].input_Person();
											cout<<"Update Success!"<<endl;
											}else {
											cout<<"Not Found!"<<endl;
											}
											
									}
								
								break;
							}
							case 3:{
								int del,x;
								cout<<"Enter ID Number for Delete=";cin>>del;
									for(i=0;i<n;i++){
											if(del==per[i].id){
												for(j=i;j<n;j++){
												per[j]=per[j+1];
												
												}
												cout<<"Delete Success!"<<endl;	
												n=n-1;
											}else{
										cout<<"Delete not Success!"<<endl;	
										}
												
											
										
										}
										getch();
										
								break;
							}
							case 4:{
								int add;
								cout<<"Enter Number of Customer for Add=";cin>>add;
								for(i=n;i<n+add;i++){
									per[i].input_Person();
									cout<<"Add Success!"<<endl;
								}
								
								n=n+add;
								
								break;
							}
						}
					}while(ch3!=5);
					break;
				}
				case 8:{
					do{
								cout<<"| _________________________|"<<endl;
								cout<<"|1.Update Province         |"<<endl;
								cout<<"|2.Update Schedule         |"<<endl;
								cout<<"|3.Update Driver           |"<<endl;
								cout<<"|4.Update Transportation ID|"<<endl;
								cout<<"|5.Back                    |"<<endl;
								cout<<"|__________________________|"<<endl;
								cout<<"Choose Option For Update=";cin>>op2;
								system("cls");
								switch(op2){
									case 1:{
										string txtkhet;
										cout<<"Enter Province for Update=";cin>>txtkhet;
										if(txtkhet==sche[i].kh){
											sche[i].k();
										}
										system("cls");
										break;
									}
									case 2:{
										int up;
										cout<<"Enter Id Schedule for Update=";cin>>up;
										if(up==sche[i].sid){
											sche[i].schedule();
										}
										system("cls");
										break;
									}
									case 3:{
										string txtdriver;
										cout<<"Enter Name Driver for Update=";cin>>txtdriver;
										if(txtdriver==sche[i].dri){
											sche[i].driver();
											system("cls");
										}
										
										break;
									}
									case 4:{
										int taid;
										cout<<"Enter Id Schedule for Update=";cin>>taid;
										if(taid==sche[i].tid){
											sche[i].Tran_id();
										}
										system("cls");
										break;
									}
								}	
						
					}while(op2!=5);
					break;
				}
				case 9:{
					cout<<"=========Ticket========"<<endl;
					if(op==2){
						cout<<"Travel by Buses."<<endl;
					}
					sche[i].ou();
					sche[i].out_schedule();
					per[i].header();
					for(i=0;i<n;i++){
					per[i].output_Person();
					}
					getch();
					system("cls");
					break;
				}
			}
				
			}while(op!=22);
			break;
		}
		case 3:{
						do{
	    	cout<<"+--------------MENU----------------+"<<endl;
	    	cout<<"|[1].Input Province                |"<<endl;
			cout<<"|[2].Input Customer's Information  |"<<endl;
			cout<<"|[3].Input Schedule                |"<<endl;
			cout<<"|[4].Transportation ID|Drivers     |"<<endl;
			cout<<"|[5].Show Province|Schedule|Drivers|"<<endl;
			cout<<"|[6].Show Information To Customers |"<<endl; 
			cout<<"|[7].Edit Information Customer     |"<<endl;
			cout<<"|[8].Edit Province|Schedule|Drivers|"<<endl;
			cout<<"|[9].Ticket                        |"<<endl;
			cout<<"+----------------------------------+"<<endl;
			cout<<"Plase Choose Option: ";cin>>ch;
			system("cls");
			switch(ch){
				case 1:{
					cout<<"------------View The Province----------------\n";
		            cout<<"[1].Phnompenh To kampot"<<endl;
					cout<<"[2].Phnompenh To Kep"<<endl;
					cout<<"[3].Phnompenh To Koh Kong"<<endl;
					cout<<"[4].Phnompenh To Kompong Cham"<<endl;
					cout<<"[5].Phnompenh To Kratie"<<endl;
					cout<<"[6].Phnompenh To Battambong"<<endl;
					cout<<"[7].Phnompenh To Moundoulkiri"<<endl;
					cout<<"[8].Phnompenh To Rothanakiri"<<endl;
					cout<<"[9].Phnompenh To Takeo"<<endl;
					cout<<"[10].Phnompenh To Banteaymeanchey"<<endl;
					cout<<"[11].Phnompenh To Pursat"<<endl;
					cout<<"[12].Phnompenh To Preahsihanouk"<<endl;
					cout<<"[13].Phnompenh To SiemReap"<<endl;
					cout<<"[14].Phnompenh To Preahvihear"<<endl;
					cout<<"[15].Phnompenh To kandal"<<endl;
					sche[i].k();
					system("cls");
					break;
				}
				case 2:{
					cout<<"=========Info_Costumers========"<<endl;
					cout<<"Input Number of Customers=";cin>>n;
					for(i=0;i<n;i++){
						cout<<"----------["<<i+1<<"]-----------"<<endl;
						per[i].input_Person();
					}
					system("cls");
					break;
				}
				case 3:{
					sche[i].schedule();
					
					system("cls");
					break;
				}
				case 4:{
					int in;
					do{
						cout<<"---------------------------"<<endl;
						cout<<"|1.Input Transportation ID|"<<endl;
						cout<<"|2.Input Driver           |"<<endl;
						cout<<"|3.Back                   |"<<endl;
						cout<<"---------------------------"<<endl;
						cout<<"choose Option= ";cin>>op3;
						switch(op3){
						case 1:{
							sche[i].Tran_id();
							break;
						}
						case 2:{
							sche[i].driver();
							break;
						}	
						}
						
					}while(op3!=3);
					
					
					system("cls");
					break;
				}
				case 5:{
					cout<<"=========Schedule========"<<endl;
					sche[i].ou();
					sche[i].out_schedule();
					getch();
					system("cls");
					break;
				}
				case 6:{
					cout<<"=========Show info_Costumer========"<<endl;
					per[i].header();
					for(i=0;i<n;i++){
						per[i].output_Person();
					}
					
						getch();
					system("cls");
					break;
				}
				case 7:{
					do{
					
						cout<<"===Edit Province|Schedule|Drivers==|"<<endl;
						cout<<"|1.Search                          |"<<endl;
						cout<<"|2.Update                          |"<<endl;
						cout<<"|3.Delete                          |"<<endl;
						cout<<"|4.Add                             |"<<endl;
						cout<<"|5.Back                            |"<<endl;
						cout<<"==================================="<<endl;
						cout<<"Choose option : ";cin>>ch3;
						system("cls");
						switch(ch3){
							case 1:{
								do{
								cout<<" _________________"<<endl;
								cout<<"|1.Search by Id   |"<<endl;
								cout<<"|2.Search by Name |"<<endl;
								cout<<"|3.Back           |"<<endl;
								cout<<" _________________"<<endl;
								cout<<"Choose Option For Search=";cin>>ch4;
								system("cls");
									switch(ch4){
										case 1:{
											int search,x;
											cout<<"Enter id Number For Search=";cin>>search;
												for(i=0;i<n;i++){
													if(search==per[i].id){
														per[i].header();
														per[i].output_Person();
														cout<<"Search Success!"<<endl;
														}else {
															cout<<"Not Found!"<<endl;
													}
												}
													getch();
											break;
										}
										case 2:{
											int x;
											string txtsearch;
											cout<<"Enter Name For Search=";cin>>txtsearch;
												for(i=0;i<n;i++){
													if(txtsearch == per[i].name){
														per[i].header();
														per[i].output_Person();
														cout<<"Search Success!"<<endl;
														}else {
															cout<<"Not Found!"<<endl;
													}
															
														}
													getch();	
											break;
										}
									}
								}while(ch4!=3);
								break;
							}
							case 2:{
								int up;
								cout<<"Enter id For Update=";cin>>up;
									for(i=0;i<n;i++){
											if(up==per[i].id){
											per[i].input_Person();
											cout<<"Update Success!"<<endl;
											}else {
											cout<<"Not Found!"<<endl;
											}
											
									}
								
								break;
							}
							case 3:{
								int del,x;
								cout<<"Enter ID Number for Delete=";cin>>del;
									for(i=0;i<n;i++){
											if(del==per[i].id){
												for(j=i;j<n;j++){
												per[j]=per[j+1];
												
												}
												cout<<"Delete Success!"<<endl;	
												n=n-1;
											}else{
										cout<<"Delete not Success!"<<endl;	
										}
												
											
										
										}
										getch();
										
								break;
							}
							case 4:{
								int add;
								cout<<"Enter Number of Customer for Add=";cin>>add;
								for(i=n;i<n+add;i++){
									per[i].input_Person();
									cout<<"Add Success!"<<endl;
								}
								
								n=n+add;
								
								break;
							}
						}
					}while(ch3!=5);
					break;
				}
				case 8:{
					do{
								cout<<"| _________________________|"<<endl;
								cout<<"|1.Update Province         |"<<endl;
								cout<<"|2.Update Schedule         |"<<endl;
								cout<<"|3.Update Driver           |"<<endl;
								cout<<"|4.Update Transportation ID|"<<endl;
								cout<<"|5.Back                    |"<<endl;
								cout<<"|__________________________|"<<endl;
								cout<<"Choose Option For Update=";cin>>op2;
								system("cls");
								switch(op2){
									case 1:{
										string txtkhet;
										cout<<"Enter Province for Update=";cin>>txtkhet;
										if(txtkhet==sche[i].kh){
											sche[i].k();
										}
										system("cls");
										break;
									}
									case 2:{
										int up;
										cout<<"Enter Id Schedule for Update=";cin>>up;
										if(up==sche[i].sid){
											sche[i].schedule();
										}
										system("cls");
										break;
									}
									case 3:{
										string txtdriver;
										cout<<"Enter Name Driver for Update=";cin>>txtdriver;
										if(txtdriver==sche[i].dri){
											sche[i].driver();
											system("cls");
										}
										
										break;
									}
									case 4:{
										int taid;
										cout<<"Enter Id Schedule for Update=";cin>>taid;
										if(taid==sche[i].tid){
											sche[i].Tran_id();
										}
										system("cls");
										break;
									}
								}	
						
					}while(op2!=5);
					break;
				}
				case 9:{
					cout<<"=========Ticket========"<<endl;
					if(op==3){
						cout<<"Travel by Vans."<<endl;
					}
					sche[i].ou();
					sche[i].out_schedule();
					per[i].header();
					for(i=0;i<n;i++){
					per[i].output_Person();
					}
					getch();
					system("cls");
					break;
				}
			}
				
			}while(op!=22);
			break;
		}
		case 4:{
						do{
	    	cout<<"+--------------MENU----------------+"<<endl;
	    	cout<<"|[1].Input Province                |"<<endl;
			cout<<"|[2].Input Customer's Information  |"<<endl;
			cout<<"|[3].Input Schedule                |"<<endl;
			cout<<"|[4].Transportation ID|Drivers     |"<<endl;
			cout<<"|[5].Show Province|Schedule|Drivers|"<<endl;
			cout<<"|[6].Show Information To Customers |"<<endl; 
			cout<<"|[7].Edit Information Customer     |"<<endl;
			cout<<"|[8].Edit Province|Schedule|Drivers|"<<endl;
			cout<<"|[9].Ticket                        |"<<endl;
			cout<<"+----------------------------------+"<<endl;
			cout<<"Plase Choose Option: ";cin>>ch;
			system("cls");
			switch(ch){
				case 1:{
					cout<<"------------View The Province----------------\n";
					cout<<"[1].Phnompenh To Koh Kong"<<endl;
					cout<<"[2].Phnompenh To Preahsihanouk"<<endl;
					cout<<"[3].Phnompenh To SiemReap"<<endl;
					sche[i].k();
					system("cls");
					break;
				}
				case 2:{
					cout<<"=========Info_Costumers========"<<endl;
					cout<<"Input Number of Customers=";cin>>n;
					for(i=0;i<n;i++){
						cout<<"----------["<<i+1<<"]-----------"<<endl;
						per[i].input_Person();
					}
					system("cls");
					break;
				}
				case 3:{
					sche[i].schedule();
					
					system("cls");
					break;
				}
				case 4:{
					int in;
					do{
						cout<<"---------------------------"<<endl;
						cout<<"|1.Input Transportation ID|"<<endl;
						cout<<"|2.Input Driver           |"<<endl;
						cout<<"|3.Back                   |"<<endl;
						cout<<"---------------------------"<<endl;
						cout<<"choose Option= ";cin>>op3;
						switch(op3){
						case 1:{
							sche[i].Tran_id();
							break;
						}
						case 2:{
							sche[i].driver();
							break;
						}	
						}
						
					}while(op3!=3);
					
					
					system("cls");
					break;
				}
				case 5:{
					cout<<"=========Schedule========"<<endl;
					sche[i].ou();
					sche[i].out_schedule();
					getch();
					system("cls");
					break;
				}
				case 6:{
					cout<<"=========Show info_Costumer========"<<endl;
					per[i].header();
					for(i=0;i<n;i++){
						per[i].output_Person();
					}
					
						getch();
					system("cls");
					break;
				}
				case 7:{
					do{
					
						cout<<"===Edit Province|Schedule|Drivers==|"<<endl;
						cout<<"|1.Search                          |"<<endl;
						cout<<"|2.Update                          |"<<endl;
						cout<<"|3.Delete                          |"<<endl;
						cout<<"|4.Add                             |"<<endl;
						cout<<"|5.Back                            |"<<endl;
						cout<<"==================================="<<endl;
						cout<<"Choose option : ";cin>>ch3;
						system("cls");
						switch(ch3){
							case 1:{
								do{
								cout<<" _________________"<<endl;
								cout<<"|1.Search by Id   |"<<endl;
								cout<<"|2.Search by Name |"<<endl;
								cout<<"|3.Back           |"<<endl;
								cout<<" _________________"<<endl;
								cout<<"Choose Option For Search=";cin>>ch4;
								system("cls");
									switch(ch4){
										case 1:{
											int search,x;
											cout<<"Enter id Number For Search=";cin>>search;
												for(i=0;i<n;i++){
													if(search==per[i].id){
														per[i].header();
														per[i].output_Person();
														cout<<"Search Success!"<<endl;
														}else {
															cout<<"Not Found!"<<endl;
													}
												}
													getch();
											break;
										}
										case 2:{
											int x;
											string txtsearch;
											cout<<"Enter Name For Search=";cin>>txtsearch;
												for(i=0;i<n;i++){
													if(txtsearch == per[i].name){
														per[i].header();
														per[i].output_Person();
														cout<<"Search Success!"<<endl;
														}else {
															cout<<"Not Found!"<<endl;
													}
															
														}
													getch();	
											break;
										}
									}
								}while(ch4!=3);
								break;
							}
							case 2:{
								int up;
								cout<<"Enter id For Update=";cin>>up;
									for(i=0;i<n;i++){
											if(up==per[i].id){
											per[i].input_Person();
											cout<<"Update Success!"<<endl;
											}else {
											cout<<"Not Found!"<<endl;
											}
											
									}
								
								break;
							}
							case 3:{
								int del,x;
								cout<<"Enter ID Number for Delete=";cin>>del;
									for(i=0;i<n;i++){
											if(del==per[i].id){
												for(j=i;j<n;j++){
												per[j]=per[j+1];
												
												}
												cout<<"Delete Success!"<<endl;	
												n=n-1;
											}else{
										cout<<"Delete not Success!"<<endl;	
										}
												
											
										
										}
										getch();
										
								break;
							}
							case 4:{
								int add;
								cout<<"Enter Number of Customer for Add=";cin>>add;
								for(i=n;i<n+add;i++){
									per[i].input_Person();
									cout<<"Add Success!"<<endl;
								}
								
								n=n+add;
								
								break;
							}
						}
					}while(ch3!=5);
					break;
				}
				case 8:{
					do{
								cout<<"| _________________________|"<<endl;
								cout<<"|1.Update Province         |"<<endl;
								cout<<"|2.Update Schedule         |"<<endl;
								cout<<"|3.Update Driver           |"<<endl;
								cout<<"|4.Update Transportation ID|"<<endl;
								cout<<"|5.Back                    |"<<endl;
								cout<<"|__________________________|"<<endl;
								cout<<"Choose Option For Update=";cin>>op2;
								system("cls");
								switch(op2){
									case 1:{
										string txtkhet;
										cout<<"Enter Province for Update=";cin>>txtkhet;
										if(txtkhet==sche[i].kh){
											sche[i].k();
										}
										system("cls");
										break;
									}
									case 2:{
										int up;
										cout<<"Enter Id Schedule for Update=";cin>>up;
										if(up==sche[i].sid){
											sche[i].schedule();
										}
										system("cls");
										break;
									}
									case 3:{
										string txtdriver;
										cout<<"Enter Name Driver for Update=";cin>>txtdriver;
										if(txtdriver==sche[i].dri){
											sche[i].driver();
											system("cls");
										}
										
										break;
									}
									case 4:{
										int taid;
										cout<<"Enter Id Schedule for Update=";cin>>taid;
										if(taid==sche[i].tid){
											sche[i].Tran_id();
										}
										system("cls");
										break;
									}
								}	
						
					}while(op2!=5);
					break;
				}
				case 9:{
					cout<<"=========Ticket========"<<endl;
					if(op==4){
						cout<<"Travel by Plane."<<endl;
					}
					sche[i].ou();
					sche[i].out_schedule();
					per[i].header();
					for(i=0;i<n;i++){
					per[i].output_Person();
					}
					getch();
					system("cls");
					break;
				}
			}
				
			}while(op!=22);
			break;
		}

		}
	}while(getch()==13);
}
