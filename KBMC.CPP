#include <iostream>
//#include<ostream>
//#include<istream>
//#include<dos.h>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
   //clrscr();
   //randomize();
   string name,feeling;
   int ok,e,b,c,code,Dial,ans,ques1,ques2,ques3,ques4,ques5,ques6,ques7,ques8,ques9,ques10,ques11,ques12,ques13,ques14;
   cout<<"\t\t---------KAUN BANEGA MAHA CROREPATI---------";
   exit:
   cout<<"\n\n\nEnter CODE::";
   cin>>code;
   if(code==1234)
   {
   cout<<"\n\t\tEnter name :";
   getline(cin,name);
   getline(cin,name);
   cout<<"\n\t\tHELLO "<<name<<", Welcome to KBC!";
   //sleep(1);
   cout<<"\n\t\tyou have 14 QUESTION for 7 CRORE $ ";
   //sleep(1);
   cout<<"\n\t\tGOOD LUCK!";
   //sleep(1);
   }
   else
   {
   cout<<"\n\nWrong CODE!"
       <<"\nIf You Don't Know or Forget CODE"
       <<"\nContact to Anurag !\n\n";
   system("PAUSE");
       goto exit;
   }
   system("PAUSE");
   srand(time(NULL));
   ques1=(rand()%4)+1;
   switch(ques1)
   {     case 1:cout<<"\n\n1.Who is 'father of nation' of INDIA?"
		    <<"\n\n1.Jawahar Lal Nehru"
		    <<"\n2.Mahatma Gandhi"
		    <<"\n3.Nathu Ram Godse"
		    <<"\n4.Narender Modi"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win nothing$)"
		    <<"\nRight Answer {2.Mahatma Gandhi}";
		goto label;
	 case 2:cout<<"\n\n1.How many player are in polo?"
		    <<"\n\n1.4"
		    <<"\n2.6"
		    <<"\n3.7"
		    <<"\n4.9"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win nothing$)"
		    <<"\nRight Answer {4}";
		goto label;
	 case 3:cout<<"\n\n1.What is full form of C.I.D.S?"
		    <<"\n\n1.Criminal Identefing Detective's"
		    <<"\n2.Criminal Integrated Detective's"
		    <<"\n3.Chief of Integrated Defence Staff"
		    <<"\n4.Cheif of Identefing Detective's"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win nothing$)"
		     <<"\nRight Answer {Chief of Integrated Defence Staff}";
		goto label;
	 case 4:cout<<"\n\n1.What is full form of P.A.N?"
		    <<"\n\n1.Permanent Account Number"
		    <<"\n2.Permanent Address Name"
		    <<"\n3.Personal Account Network"
		    <<"\n4.Personal Address Name"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win nothing$)"
		<<"\nRight Answer {Permanent Account Number}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 5,000 $";
   //sleep(1);
   ques2=(rand()%4)+1;
   switch(ques2)
   {     case 1:cout<<"\n\n2.Who is Iron Man of INDIA?"
		    <<"\n\n1.Sardar Balabh Bhai Patel"
		    <<"\n2.Mahatma Gandhi"
		    <<"\n3.Nathu Ram Godse"
		    <<"\n4.Narender Modi"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 5,000 $)"
		<<"\nRight Answer {Sardar Balabh Bhai Patel}";
		goto label;
	 case 2:cout<<"\n\n2.How many player are in Base ball team?"
		    <<"\n\n1.4"
		    <<"\n2.6"
		    <<"\n3.7"
		    <<"\n4.9"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==4)
		break;
		else
		cout<<"\n\nWrong Answer (You win 5,000 $)"
		<<"Right Answer {9}";
		goto label;
	 case 3:cout<<"\n\n2.What is full form of D.I.A?"
		    <<"\n\n1.Defence Interpol Agency"
		    <<"\n2.Dawn Interpol Agency"
		    <<"\n3.Defence Intelligence Agency"
		    <<"\n4.Dawn Interpol Agency"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 5,000 $)"
		<<"\nRight Answer {Defence Intelligence Agency}";
		goto label;
	 case 4:cout<<"\n\n2.Who is owner & founder of DISNEY?"
		    <<"\n\n1.Quart Disney"
		    <<"\n2.Joseph Disney"
		    <<"\n3.Walt Disney"
		    <<"\n4.Persue Disney"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 5,000 $)"
		<<"Right Answer {Walt Disney}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 10,000 $";
   //sleep(1);
   ques3=(rand()%4)+1;
   switch(ques3)
   {     case 1:cout<<"\n\n3.Who is the father of Computer?"
		    <<"\n\n1.Charles Babbage"
		    <<"\n2.Jaquard Loom"
		    <<"\n3.Abacus"
		    <<"\n4.John Atansoff"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 10,000 $)"
		<<"\nRight Answer {Charles Babbage}";
		goto label;
	 case 2:cout<<"\n\n3.Who is Owner of Microsoft?"
		    <<"\n\n1.Charles Babbage"
		    <<"\n2.Bill Gates"
		    <<"\n3.Mark Jukenberge"
		    <<"\n4.John Atansoff"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 10,000 $)"
		<<"\nRight Answer {Bill Gates}";
		goto label;
	 case 3:cout<<"\n\n3.Who is father of Screen Touch Phone technology?"
		    <<"\n\n1.Dr.Samuel Hurst"
		    <<"\n2.Bill Gates"
		    <<"\n3.Steve Jobs"
		    <<"\n4.John Atansoff"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 10,000 $)"
		<<"\nRight Answer {Steve Jobs}";
		goto label;
	 case 4:cout<<"\n\n3.Who invented Telephone?"
		    <<"\n\n1.Graham Bell"
		    <<"\n2.Marcony"
		    <<"\n3.Rutherford"
		    <<"\n4.cockrail"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 10,000 $)"
		<<"\nRight Answer {Graham Bell}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 20,000 $";
   //sleep(1);
   ques4=(rand()%4)+1;
   switch(ques4)
   {     case 1:cout<<"\n\n4.Who make fastest 100 in cricket?"
		    <<"\n\n1.A.B.Devillers"
		    <<"\n2.Corey Anderson"
		    <<"\n3.Chris Gayel"
		    <<"\n4.Rohit Sharma"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 20,000 $)"
		<<"\nRight Answer {A.B.Devillers}";
		goto label;
	 case 2:cout<<"\n\n4.Who is Winner of World Cup 2015?"
		    <<"\n\n1.India"
		    <<"\n2.Australia"
		    <<"\n3.West Indies"
		    <<"\n4.England"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 20,000 $)"
		    <<"\nRight Answer {Australia}";
		goto label;
	 case 3:cout<<"\n\n4.Who is Winner of T20 World Cup 2016?"
		    <<"\n\n1.India"
		    <<"\n2.Australia"
		    <<"\n3.West Indies"
		    <<"\n4.England"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 20,000 $)"<<"\nRight Answer {West Indies}";
		goto label;
	 case 4:cout<<"\n\n4.Who is Winner of 2016 Asia Cup?"
		    <<"\n\n1.Srilanka"
		    <<"\n2.India"
		    <<"\n3.Pakistan"
		    <<"\n4.Bangladesh"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 20,000 $)"<<"\nRight Answer {India}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 40,000 $";
   //sleep(1);
   ques5=(rand()%4)+1;
   switch(ques5)
   {     case 1:cout<<"\n\n5.Which country produce Banana Maximum?"
		    <<"\n\n1.Brazil"
		    <<"\n2.Africa"
		    <<"\n3.India"
		    <<"\n4.Australia"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 40,000 $)"<<"\nRight Answer {India}";
		goto label;
	 case 2:cout<<"\n\n5.Which state capital is Bhubaneshwar?"
		    <<"\n\n1.Karnatak"
		    <<"\n2.Andra Pradesh"
		    <<"\n3.Orrisa"
		    <<"\n4.West Bangal"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 40,000 $)"<<"\nRight Answer {Orrisa}";
		goto label;
	 case 3:cout<<"\n\n5.Which is most populated city of India?"
		    <<"\n\n1.Chennai"
		    <<"\n2.Kolkata"
		    <<"\n3.New Delhi"
		    <<"\n4.Mumbia"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 40,000 $)"<<"\nRight Answer {Mumbia}";
		goto label;
	 case 4:cout<<"\n\n5.Major populated state of India?"
		    <<"\n\n1.West Bangal"
		    <<"\n2.U.P"
		    <<"\n3.Rajasthan"
		    <<"\n4.Karnatak"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 40,000 $)"<<"\nRight Answer {U.P}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 80,000 $";
   //sleep(1);
   ques6=(rand()%4)+1;
   switch(ques6)
   {     case 1:cout<<"\n\n6.Who say's 'Delhi Chalo'.?"
		    <<"\n\n1.Subash Chandra Bose"
		    <<"\n2.Mahatma Gandhi"
		    <<"\n3.Jawahar Lal Nehru"
		    <<"\n4.Bhagat Singh"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 80,000 $)"<<"\nRight Answer {Subash Chandra Bose}";
		goto label;
	 case 2:cout<<"\n\n6.Who say's 'Karo ya Maro'?"
		    <<"\n\n1.Subash Chandra Bose"
		    <<"\n2.Mahatma Gandhi"
		    <<"\n3.Bhagat Singh"
		    <<"\n4.Ram Parsad Bismil"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 80,000 $)"<<"\nRight Answer {Mahatma Gandhi}";
		goto label;
	 case 3:cout<<"\n\n6.Who say's 'Inkalab Jindabad'?"
		    <<"\n\n1.Subash Chandra Bose"
		    <<"\n2.Mahatma Gandhi"
		    <<"\n3.Bhagat Singh"
		    <<"\n4.Ram Parsad Bismil"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 80,000 $)"<<"\nRight Answer {Bhagat Singh}";
		goto label;
	 case 4:cout<<"\n\n6.Who say 'Jai Hind'?"
		    <<"\n\n1.Subash Chandra Bose"
		    <<"\n2.Mahatma Gandhi"
		    <<"\n3.Bhagat Singh"
		    <<"\n4.Ram Parsad Bismil"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 80,000 $)"<<"\nRight Answer {Subash Chandra Bose}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 1,60,000 $";
   //sleep(1);
   ques7=(rand()%4)+1;
   switch(ques7)
   {     case 1:cout<<"\n\n7.What is the capital of France?"
		    <<"\n\n1.New York"
		    <<"\n2.Paris"
		    <<"\n3.Beigeng"
		    <<"\n4.Yen"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 160,000 $)"<<"\nRight Answer {Paris}";
		goto label;
	 case 2:cout<<"\n\n7.What is the capital of Canada?"
		    <<"\n\n1.Otawa"
		    <<"\n2.Thimpu"
		    <<"\n3.Thaipai"
		    <<"\n4.Madrid"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 160,000 $)"<<"\nRight Answer {Otawa}";
		goto label;
	 case 3:cout<<"\n\n\7.What is the currency of Japan?"
		    <<"\n\n1.Tiren"
		    <<"\n2.Ren"
		    <<"\n3.Jen"
		    <<"\n4.Yen"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==4)
		break;
		else
		cout<<"\n\nWrong Answer (You win 160,000 $)"<<"\nRight Answer {Yen}";
		goto label;
	 case 4:cout<<"\n\n7.What is the capital of Saudi Arabia?"
		    <<"\n\n1.Rijad"
		    <<"\n2.Siyamen"
		    <<"\n3.Risad"
		    <<"\n4.Riyad"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==4)
		break;
		else
		cout<<"\n\nWrong Answer (You win 160,000 $)"<<"\nRight Answer {Riyad}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 3,20,000 $";
   //sleep(1);
   ques8=(rand()%4)+1;
   switch(ques8)
   {     case 1:cout<<"\n\n8.Which is fastest running bird in the world?"
		    <<"\n\n1.Ostrich"
		    <<"\n2.Duck Hawk"
		    <<"\n3.Road Runner"
		    <<"\n4.Emu"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 3,20,000 $)"<<"\nRight Answer {Duck Hawk}";
		goto label;
	 case 2:cout<<"\n\n8.In which Indian film there are 72 song?"
		    <<"\n\n1.Sangit"
		    <<"\n2.Sanskrit"
		    <<"\n3.Indersabha"
		    <<"\n4.Saat Hindustani"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 3,20,000 $)"<<"\nRight Answer {Indersabha}";
		goto label;
	 case 3:cout<<"\n\n8.Which Indian player is caption of both cricket & Hockey?"
		    <<"\n\n1.Mansur Khan Pataudi"
		    <<"\n2.Mansur Ali Khan Pataudi"
		    <<"\n3.Mansur Jafar Khan"
		    <<"\n4.Mansur Khan"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 3,20,000 $)"<<"\nRight Answer {Mansur Ali Khan Pataudi}";
		goto label;
	 case 4:cout<<"\n\n8.Which is Amithabh Bachan first film?"
		    <<"\n\n1.Sangit"
		    <<"\n2.Saat Hindustani"
		    <<"\n3.Namak Halal"
		    <<"\n4.Parwan"
		   <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 3,20,000 $)"<<"\nRight Answer {Saat Hindustani}";
		goto label;
	 case 5:cout<<"\n\n8.Who wrote the famous book 'THE JUNGLE BOOK'?"
		  <<"\n\n1.Anne Therecher"
		  <<"\n2.Rudeard Kipling"
		  <<"\n3.Rollend Ferry"
		  <<"\n4.Vikaram Seth\n"
		  <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 3,20,000 $)"<<"\nRight Answer {Rudeard Kipling}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 6,40,000 $";
   //sleep(1);
   ques9=(rand()%4)+1;
   switch(ques9)
   {     case 1:cout<<"\n\n9.Which is most ancient religion in the world?"
		    <<"\n\n1.Jesus"
		    <<"\n2.Hindu"
		    <<"\n3.Muslim"
		    <<"\n4.Buddist"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 6,40,000 $)"<<"\nRight Answer {Hindu}";
		goto label;
	 case 2:cout<<"\n\n9.In which country there are maximum library?"
		    <<"\n\n1.France"
		    <<"\n2.America"
		    <<"\n3.India"
		    <<"\n4.Russia"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 6,40,000 $)"<<"\nRight Answer {India}";
		goto label;
	 case 3:cout<<"\n\n9.Which country's all citizen are soldier?"
		    <<"\n\n1.Vaitenam"
		    <<"\n2.Isarial"
		    <<"\n3.Den"
		    <<"\n4.Jordon"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 6,40,000 $)"<<"\nRight Answer {Den}";
		goto label;
	 case 4:cout<<"\n\n9.Which is biggest river in the world?"
		    <<"\n\n1.Nile"
		    <<"\n2.Amazon"
		    <<"\n3.Ganga"
		    <<"\n4.Brahmaputra"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 6,40,000 $)"<<"\nRight Answer {Amazon}";
		goto label;
	 case 5:cout<<"\n\n9.Which is biggest library of the world?"
		    <<"\n\n1.National Library(France)"
		    <<"\n2.National Library(India)"
		    <<"\n3.National Library(Brazil)"
		    <<"\n4.National Library(Russia)"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==4)
		break;
		else
		cout<<"\n\nWrong Answer (You win 6,40,000 $)"<<"\nRight Answer {National Library(Russia)}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 12,50,000 $";
   //sleep(1);
   ques10=(rand()%4)+1;
   switch(ques10)
   {     case 1:cout<<"\n\n10.Who invented Hovercraft?"
		    <<"\n\n1.Stefenson"
		    <<"\n2.Gutenberg"
		    <<"\n3.C.Soles"
		    <<"\n4.Kockrail"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==4)
		break;
		else
		cout<<"\n\nWrong Answer (You win 12,50,000 $)"<<"\nRight Answer {Kockrail}";
		goto label;
	  case 2:cout<<"\n\n10.Who invented Printing Press?"
		    <<"\n\n1.Stefenson"
		    <<"\n2.Gutenberg"
		    <<"\n3.C.Soles"
		    <<"\n4.Kockrail"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 12,50,000 $)"<<"\nRight Answer {Gutenberg}";
		goto label;
	   case 3:cout<<"\n\n10.Who invented Steam Engine?"
		    <<"\n\n1.Stefenson"
		    <<"\n2.Gutenberg"
		    <<"\n3.C.Soles"
		    <<"\n4.Kockrail"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 12,50,000 $)"<<"\nRight Answer {Stefenson}";
		goto label;
	     case 4:cout<<"\n\n10.Who invented Televison?"
		    <<"\n\n1.Stefenson"
		    <<"\n2.J.L.Board"
		    <<"\n3.C.Soles"
		    <<"\n4.Galeleo"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 12,50,000 $)"<<"\nRight Answer {J.L.Board}";
		goto label;
	     case 5:cout<<"\n\n10.Who invented Telescope?"
		    <<"\n\n1.J.L.Board"
		    <<"\n2.Z.Jhonson"
		    <<"\n3.C.Soles"
		    <<"\n4.Hales Liprase"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==4)
		break;
		else
		cout<<"\n\nWrong Answer (You win 12,50,000 $)"<<"\nRight Answer {Hales Liprase}";
		goto label;
	      case 6:cout<<"\n\n10.Who invented Microscope?"
		    <<"\n\n1.Stefenson"
		    <<"\n2.Z.Johnson"
		    <<"\n3.C.Soles"
		    <<"\n4.Kockrail"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 12,50,000 $)"<<"\nRight Answer {Z.Johnson}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 25,00,000 $";
   //sleep(1);
   ques11=(rand()%4)+1;
   switch(ques11)
   {     case 1:cout<<"\n11.Who is women first I.A.S of INDIA?"
		    <<"\n\n1.Kiran Bedi"
		    <<"\n2.Smt.Anna Jorge"
		    <<"\n3.Ashapurwa Devi"
		    <<"\n4.Rita Fariya\n"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 25,00,000 $)"<<"\nRight Answer {Smt.Anna Jorge}";
		goto label;
	 case 2: cout<<"\n\n11.The first women climb to Everest?"
		     <<"\n\n1.Anurima Singh"
		     <<"\n2.Temba Tsheri"
		     <<"\n3.Junko Taboye"
		     <<"\n4.Penba Dordge Sherepa\n"
		     <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 25,00,000 $)"<<"\nRight Answer {Junko Taboye}";
		goto label;
	 case 3:cout<<"\n\n11.Who invented loudspeaker?"
		    <<"\n\n1.Henry Zaferd"
		    <<"\n2.D.Bunel"
		    <<"\n3.Horres Sort"
		    <<"\n4.Advered Talor"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 25,00,000 $)"<<"\nRight Answer {Horres Sort}";
		goto label;
	 case 4:cout<<"\n\n11.Who invented ElectroMagnet?"
		    <<"\n\n1.William Sturjun"
		    <<"\n2.William colf"
		    <<"\n3.Horres Sort"
		    <<"\n4.Advered Talor"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 25,00,000 $)"<<"\nRight Answer {William Sturjun}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 50,00,000 $";
   //sleep(1);
   ques12=(rand()%4)+1;
   switch(ques12)
   {     case 1:cout<<"\n\n12.World fastest computer?"
		    <<"\n\n1.T-5R.a"
		    <<"\n2.T-2A"
		    <<"\n3.Sidharth"
		    <<"\n4.K-355P"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 50,00,000 $)"<<"\nRight Answer {T-3A}";
		goto label;
	 case 2:cout<<"\n\n12.First Digital computer?"
		    <<"\n\n1.Univek"
		    <<"\n2.C-DAC"
		    <<"\n3.Sidharth"
		    <<"\n4.9T-3A"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 50,00,000 $)"<<"\nRight Answer {Univek}";
		goto label;
	 case 3:cout<<"\n\n12.Where world's finest Painting 'Monalisa'?"
		    <<"\n\n1.(Lorbe Museum)PARIS"
		    <<"\n2.(Sintier Museum)UK"
		    <<"\n3.(Dukern Museum)USA"
		    <<"\n4.(National Museum)INDIA"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 50,00,000 $)"<<"\nRight Answer {(Lorbe Museum)PARIS}";
		goto label;
	 case 4:cout<<"\n\n12.In which country hanging underwear of lady & gents in a rope is illegal?"
		    <<"\n\n1.Ukaren"
		    <<"\n2.Minosota"
		    <<"\n3.Holand"
		    <<"\n4.Peru"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 50,00,000 $)"<<"\nRight Answer {Minosota}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 1 CRORE $";
   getch();
   cout<<"\n\nCongrajulation now you are a crorepati. How are you feeling? \n\nShare you feeling :";
   getline(cin,feeling);
   getline(cin,feeling);
   //sleep(3);
   cout<<"\n\n\tIts GREAT to play with you";
   //sleep(1);
   ques13=(rand()%4)+1;
   switch(ques13)
   {     case 1:cout<<"\n\n13.In which year SAARC is stabelised?"
		    <<"\n\n1.1989"
		    <<"\n2.1970"
		    <<"\n3.1985"
		    <<"\n4.1995"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 1 crore $)"<<"\nRight Answer {1985}";
		goto label;
	 case 2:cout<<"\n\n13.Where is INTERNATIONAL COURT ?"
		    <<"\n\n1.Heg,Poland"
		    <<"\n2.Heg,Japan"
		    <<"\n3.Heg,UK"
		    <<"\n4.Heg,Holand"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==4)
		break;
		else
		cout<<"\n\nWrong Answer (You win 1 crore $)"<<"\nRight Answer {Heg,Holand}";
		goto label;
	 case 3:cout<<"\n\n13.In which planet we see witout use of any gaget?"
		    <<"\n\n1.Jupiter"
		    <<"\n2.Mars"
		    <<"\n3.Uranus"
		    <<"\n4.Neptune"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 1 crore $)"<<"\nRight Answer {Uranus}";
		goto label;
	 case 4:cout<<"\n\n13.First person to print a book?"
		    <<"\n\n1.Koster"
		    <<"\n2.Goardge"
		    <<"\n3.Perkaer"
		    <<"\n4.Jonshon"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 1 crore $)"<<"\nRight Answer {Koster}";
		goto label;
   }
   cout<<"\n\n\t\tCongratulation! You won 3 CRORE $";
   //sleep(1);
   ques14=(rand()%4)+1;
   switch(ques14)
   {     case 1:cout<<"\n\n14.In which country Income Tax is not taken by Government?"
		    <<"\n\n1.Monako(Europe)"
		    <<"\n2.Besin(South Africa)"
		    <<"\n3.Natwell(UK)"
		    <<"\n4.Kango(Africa)"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==1)
		break;
		else
		cout<<"\n\nWrong Answer (You win 3 crore $)"<<"\nRight Answer {Monako(Europe)}";
		goto label;
	 case 2:cout<<"\n\n14.In which city there are day of two month?"
		    <<"\n\n1.chad(Norwe)"
		    <<"\n2.Hemafast(Norwe)"
		    <<"\n3.Italiya"
		    <<"\n4.Rasteif(Norwe)"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 3 crore $)"<<"\nRight Answer {Hemafast(Norwe)}";
		goto label;
	 case 3:cout<<"\n\n14.Which mountain change its colour?"
		    <<"\n\n1.Tinidad"
		    <<"\n2.Ayarus rock"
		    <<"\n3.Dartop Mountain"
		    <<"\n4.Chester hill"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==2)
		break;
		else
		cout<<"\n\nWrong Answer (You win 3 crore $)"<<"\nRight Answer {Ayarus rock}";
		goto label;
	 case 4:cout<<"\n\n14.First OLYMPIC played on which year(where)?"
		    <<"\n\n1.1856(Unan)"
		    <<"\n2.1904(UK)"
		    <<"\n3.1896(Unan)"
		    <<"\n4.1892(Beijing)"
		    <<"\n\nEnter Option:";
		cin>>ans;
		if(ans==3)
		break;
		else
		cout<<"\n\nWrong Answer (You win 3 crore $)"<<"\nRight Answer {1896(Unan)}";
		goto label;
   }
   //sleep(1);
   cout<<"\n\n\t\t$$$ Aap Maha crorpati Bangaye $$$";
   //sleep(1);
   cout<<"\n\n\n\t\tCongratulation! "<<name<<"\n\t\t, You won 7 CRORE $";
   //sleep(2);
   label:
   //sleep(2);
   cout<<"\n\n\n\t  Your Winning Money is transferd to "<<name<<"'s account @";
   getch();
}
