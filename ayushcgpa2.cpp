#include<iostream>
#include<conio.h>
#include<fstream>
#include <iomanip>
#include<string.h>
using namespace std ;

void mmenu() ;
class temp
{
	public :
	char usrnm[20] ;	
}te;
class student
{
	public :
	char name[20];
	int regno ;
	int roll ;
		void getdata()
		{
			cout<<"Enter Name"<<endl ;
			fflush(stdin) ;
			cin.getline(name,20) ;
			cout<<"Enter Registration Number"<<endl ;
			cin>>regno ;
			cout<<"Roll Number"<<endl ;
			cin>>roll ;
		}
		int retroll() 
		{
			return roll ;
		}
};


class marks : public student
{
	public :
	float cse_101[20];
	int cse_104[20];
	float ece_131[20];
	int ece_132[20];
	float mec_107[20];
	float mth_165[20];
	float che_110[20];
	float pel_121[20];
	float attendance[8] ;
	float att[8] ;
	float cgpa;
		void getmarks() 
		{
			cout<<"************************************************** CSE 101 Marks ******************************************************"<<endl ;
			a:
			cout<<"Enter CBT 1  Marks In CSE101 (Max. Marks 30) - "<<endl ;
			cin>>cse_101[0] ;
			if(cse_101[0]>30 || cse_101[0]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto a ;
			}
			a1:
			cout<<"Enter Assignment Marks In CSE101 (Max. Marks 30) - "<<endl ;
			cin>>cse_101[1] ;
			if(cse_101[1]>30 || cse_101[1]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto a1 ;
			}
			a2:
			cout<<"Enter Hacker Earth Marks In CSE101 (Max. Marks 30) - "<<endl ;
			cin>>cse_101[2] ;
			if(cse_101[2]>30 || cse_101[2]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto a2 ;
			}
			a3:
			cout<<"Enter Mini Project Marks In CSE101 (Max. Marks 30)  - "<<endl ;
			cin>>cse_101[3] ;
			if(cse_101[3]>30 || cse_101[3]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto a3 ;
			}
			a4:
			cout<<"Enter MTE Marks In CSE101 (Max. Marks 40)  - "<<endl ;
			cin>>cse_101[4] ;
			if(cse_101[4]>40 || cse_101[4]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto a4 ;
			}
			a5:
			cout<<"Enter ETE Marks In CSE101 (Max. Marks 70) (Theory + MCQ)  - "<<endl ;
			cin>>cse_101[5] ;
			if(cse_101[5]>70 || cse_101[5]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto a5 ;
			}
			cout<<"Enter Attendance In CSE101"<<endl;
			cin>>attendance[0] ;
			if(attendance[0]>=95)
			{
				att[0] = 5 ;
			}
			else if(attendance[0]>=90 && attendance[0]<95)
			{
				att[0] = 4 ;
			}
			else if(attendance[0]>=85 && attendance[0]<90)
			{
				att[0] = 3 ;
			}
			else if(attendance[0]>=80 && attendance[0]<85)
			{
				att[0] = 2 ;
			}
			else if(attendance[0]>=75 && attendance[0]<80)
			{
				att[0] = 1 ;
			}
			else 
			{
				att[0] = 0 ;
			}
			cout<<"************************************************** CSE 104 Marks ******************************************************"<<endl ;
			b:
			cout<<"Enter Lab Evaluation 1  Marks In CSE104 (Max. Marks 50)  - "<<endl ;
			cin>>cse_104[0] ;
			if(cse_104[0]>50 || cse_104[0]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto b ;
			}
			b1:
			cout<<"Enter Lab Evaluation 2  Marks In CSE104 (Max. Marks 50) - "<<endl ;
			cin>>cse_104[1] ;
			if(cse_104[1]>50 || cse_104[1]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto b1 ;
			}
			b2:
			cout<<"Enter Lab Evaluation 3  Marks In CSE104 (Max. Marks 50) - "<<endl ;
			cin>>cse_104[2] ;
			if(cse_104[2]>50 || cse_104[2]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto b2 ;
			}
			b3:
			cout<<"Enter Lab Evaluation 4  Marks In CSE104 (Max. Marks 50) - "<<endl ;
			cin>>cse_104[3] ;
			if(cse_104[3]>50 || cse_104[3]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto b3 ;
			}
			b4:
			cout<<"Enter ETP Marks In CSE104 (Max. Marks 100) - "<<endl ;
			cin>>cse_104[4] ;
			if(cse_104[4]>100 || cse_104[4]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto b3 ;
			}
			cout<<"Enter Attendance In CSE104"<<endl;
			cin>>attendance[1] ;
			if(attendance[1]>=95)
			{
				att[1] = 5 ;
			}
			else if(attendance[1]>=90 && attendance[1]<95)
			{
				att[1] = 4 ;
			}
			else if(attendance[1]>=85 && attendance[1]<90)
			{
				att[1] = 3 ;
			}
			else if(attendance[1]>=80 && attendance[1]<85)
			{
				att[1] = 2 ;
			}
			else if(attendance[1]>=75 && attendance[1]<80)
			{
				att[1] = 1 ;
			}
			else 
			{
				att[1] = 0 ;
			}
			cout<<"************************************************** ECE 131 Marks ******************************************************"<<endl ;
			c:
			cout<<"Enter CA 1  Marks In ECE131 (Max. Marks 30) - "<<endl ;
			cin>>ece_131[0] ;
			
			if(ece_131[0]>30 || ece_131[0]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto c ;
			}
			
			c1:
			cout<<"Enter CA 2  Marks In ECE131 (Max. Marks 30)  - "<<endl ;
			cin>>ece_131[1] ;
			
			if(ece_131[1]>30 || ece_131[1]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto c1 ;
			}
			c2:
			cout<<"Enter Case Study Marks In ECE131 (Max. Marks 30)  - "<<endl ;
			cin>>ece_131[2] ;
			
			if(ece_131[2]>30 || ece_131[2]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto c2 ;
			}
			c3:
			cout<<"Enter CA 4  Marks In ECE131 (Max. Marks 30)  - "<<endl ;
			cin>>ece_131[3] ;
			
			if(ece_131[3]>30 || ece_131[3]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto c3 ;
			}
			c4:
			cout<<"Enter MTE Marks In ECE131 (Max. Marks 40)  - "<<endl ;
			cin>>ece_131[4] ;
			if(ece_131[4]>40 || ece_131[4]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto c4 ;
			}
			c5:
			cout<<"Enter ETE Marks In ECE131 (Max. Marks 70)(Theory + MCQ)  - "<<endl ;
			cin>>ece_131[5] ;
			
			if(ece_131[5]>70 || ece_131[5]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto c5 ;
			}
			cout<<"Enter Attendance In ECE131"<<endl;
			cin>>attendance[2] ;
			if(attendance[2]>=95)
			{
				att[2] = 5 ;
			}
			else if(attendance[2]>=90 && attendance[2]<95)
			{
				att[2] = 4 ;
			}
			else if(attendance[2]>=85 && attendance[2]<90)
			{
				att[2] = 3 ;
			}
			else if(attendance[2]>=80 && attendance[2]<85)
			{
				att[2] = 2 ;
			}
			else if(attendance[2]>=75 && attendance[2]<80)
			{
				att[2] = 1 ;
			}
			else 
			{
				att[2] = 0 ;
			}
			cout<<"************************************************** ECE 132 Marks ******************************************************"<<endl ;
			d10:
			cout<<"Enter Experiment 1 Marks In ECE132 (Max. Marks 50) - "<<endl ;
			cin>>ece_132[0] ;
			if(ece_132[0]>50 || ece_132[0]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto d10 ;
			}
			d3:
			cout<<"Enter Experiment 2 Marks In ECE132 (Max. Marks 50) - "<<endl ;
			cin>>ece_132[1] ;
			if(ece_132[1]>50 || ece_132[1]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto d3 ;
			}d4:
			cout<<"Enter Experiment 3 Marks In ECE132 (Max. Marks 50) - "<<endl ;
			cin>>ece_132[2] ;
			if(ece_132[2]>50 || ece_132[2]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto d4 ;
			}
			d5:
			cout<<"Enter Experiment 4 Marks In ECE132 (Max. Marks 50) - "<<endl ;
			cin>>ece_132[3] ;
			if(ece_132[3]>50 || ece_132[3]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto d5 ;
			}
			d6:
			cout<<"Enter Experiment 5 Marks In ECE132 (Max. Marks 50) - "<<endl ;
			cin>>ece_132[4] ;
			if(ece_132[4]>50 || ece_132[4]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto d6 ;
			}d7:
			cout<<"Enter Experiment 6 Marks In ECE132 (Max. Marks 50) - "<<endl ;
			cin>>ece_132[5] ;
			if(ece_132[5]>50 || ece_132[5]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto d7 ;
			}
			d8:
			cout<<"Enter Experiment 7 Marks In ECE132 (Max. Marks 50) - "<<endl ;
			cin>>ece_132[6] ;
			if(ece_132[6]>50 || ece_132[6]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto d8 ;
			}
			d9:
			cout<<"Enter Experiment 8 Marks In ECE132 (Max. Marks 50) - "<<endl ;
			cin>>ece_132[7] ;
			if(ece_132[7]>50 || ece_132[7]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto d9 ;
			}
			d:
			cout<<"Enter WTP 1 Marks In ECE132 (Max. Marks 30) - "<<endl ;
			cin>>ece_132[8] ;
			if(ece_132[8]>30 || ece_132[8]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto d ;
			}
			
			d1:
			cout<<"Enter WTP 2  Marks In ECE132 (Max. Marks 30) - "<<endl ;
			cin>>ece_132[9] ;
			if(ece_132[9]>30 || ece_132[9]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto d1 ;
			}
			d2:
			cout<<"Enter ETP Marks In ECE132 (Max. Marks 100) - "<<endl ;
			cin>>ece_132[10] ;
			if(ece_132[10]>100 || ece_132[10]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto d2 ;
			}
			cout<<"Enter Attendance In ECE132"<<endl;
			cin>>attendance[3] ;
			if(attendance[3]>=95)
			{
				att[3] = 5 ;
			}
			else if(attendance[3]>=90 && attendance[3]<95)
			{
				att[3] = 4 ;
			}
			else if(attendance[3]>=85 && attendance[3]<90)
			{
				att[3] = 3 ;
			}
			else if(attendance[3]>=80 && attendance[3]<85)
			{
				att[3] = 2 ;
			}
			else if(attendance[3]>=75 && attendance[3]<80)
			{
				att[3] = 1 ;
			}
			else 
			{
				att[3]=0 ;
			}
			cout<<"************************************************** MEC 107 Marks ******************************************************"<<endl ;
			e:
			cout<<"Enter CA 1  Marks In MEC107 (Max. Marks 30) - "<<endl ;
			cin>>mec_107[0] ;
			if(mec_107[0]>30 || mec_107[0]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto e ;
			}
			e1:
			cout<<"Enter CA 2  Marks In MEC107 (Max. Marks 30) - "<<endl ;
			cin>>mec_107[1] ;
			
			if(mec_107[1]>30 || mec_107[1]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto e1 ;
			}
			e2:
			cout<<"Enter CA 3  Marks In MEC107 (Max. Marks 30) - "<<endl ;
			cin>>mec_107[2] ;
			
			if(mec_107[2]>30 || mec_107[2]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto e2 ;
			}
			e3:
			cout<<"Enter MTE Marks In MEC107 (Max. Marks 40) - "<<endl ;
			cin>>mec_107[3] ;
			
			if(mec_107[3]>40 || mec_107[3]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto e3 ;
			}
			e4:
			cout<<"Enter ETE Marks In MEC107 (Max. Marks 70) (Theory + MCQ) - "<<endl ;
			cin>>mec_107[4] ;
			
			if(mec_107[4]>70 || mec_107[4]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto e4 ;
			}
			cout<<"Enter Attendance In MEC107"<<endl;
			cin>>attendance[4] ;
			if(attendance[4]>=95)
			{
				att[4] = 5 ;
			}
			else if(attendance[4]>=90 && attendance[4]<95)
			{
				att[4] = 4 ;
			}
			else if(attendance[4]>=85 && attendance[4]<90)
			{
				att[4] = 3 ;
			}
			else if(attendance[4]>=80 && attendance[4]<85)
			{
				att[4] = 2 ;
			}
			else if(attendance[4]>=75 && attendance[4]<80)
			{
				att[4] = 1 ;
			}
			else 
			{
				att[4] = 0 ;
			}
			cout<<"************************************************** MTH 165 Marks ******************************************************"<<endl ;
			f:
			cout<<"Enter CA 1  Marks In MTH165 (Max. Marks 30) - "<<endl ;
			cin>>mth_165[0] ;
			if(mth_165[0]>30 ||mth_165[0]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto f ;
			}
			f1:
			cout<<"Enter CA 2  Marks In MTH165 (Max. Marks 30) - "<<endl ;
			cin>>mth_165[1] ;
			if(mth_165[1]>30 ||mth_165[1]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto f1 ;
			}
			f2:
			cout<<"Enter CA 3  Marks In MTH165 (Max. Marks 30) - "<<endl ;
			cin>>mth_165[2] ;
			if(mth_165[2]>30 ||mth_165[2]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto f2 ;
			}	
			f3:
			cout<<"Enter MTE Marks In MTH165 (Max. Marks 40) - "<<endl ;
			cin>>mth_165[3] ;
			if(mth_165[3]>40 ||mth_165[3]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto f3 ;
			}
			f4:
			cout<<"Enter ETE Marks In MTH165 (Max. Marks 70) (MCQ) - "<<endl ;
			cin>>mth_165[4] ;
			if(mth_165[4]>70 ||mth_165[4]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto f4 ;
			}
			cout<<"Enter Attendance In MTH165"<<endl;
			cin>>attendance[5] ;
			if(attendance[5]>=95)
			{
				att[5] = 5 ;
			}
			else if(attendance[5]>=90 && attendance[5]<95)
			{
				att[5] = 4 ;
			}
			else if(attendance[5]>=85 && attendance[5]<90)
			{
				att[5] = 3 ;
			}
			else if(attendance[5]>=80 && attendance[5]<85)
			{
				att[5] = 2 ;
			}
			else if(attendance[5]>=75 && attendance[5]<80)
			{
				att[5] = 1 ;
			}
			else 
			{
				att[5] =  0 ;
			}	
			cout<<"************************************************** CHE 110 Marks ******************************************************"<<endl ;
			g1:
			cout<<"Enter Project Marks In CHE110 (Max. Marks 100) - "<<endl ;
			cin>>che_110[0] ;
			if(che_110[0]>100 || che_110[0]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto g1 ;
			}
			g:
			cout<<"Enter MTE Marks In CHE110 (Max. Marks 40) - "<<endl ;
			cin>>che_110[1] ;
			if(che_110[1]>40 || che_110[1]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto g ;
			}
			g2:
			cout<<"Enter ETE Marks In CHE110 (Max. Marks 70) (MCQ) - "<<endl ;
			cin>>che_110[2] ;
			if(che_110[2]>70 || che_110[2]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto g2 ;
			}
			cout<<"Enter Attendance In CHE110"<<endl;
			cin>>attendance[6] ;
			if(attendance[6]>=95)
			{
				att[6] = 5 ;
			}
			else if(attendance[6]>=90 && attendance[6]<95)
			{
				att[6] = 4 ;
			}
			else if(attendance[6]>=85 && attendance[6]<90)
			{
				att[6] = 3 ;
			}
			else if(attendance[6]>=80 && attendance[6]<85)
			{
				att[6] = 2 ;
			}
			else if(attendance[6]>=75 && attendance[6]<80)
			{
				att[6] = 1 ;
			}
			else 
			{
				att[6] = 0 ;
			}
			cout<<"************************************************** PEL 121 Marks ******************************************************"<<endl ;
			h:
			cout<<"Enter CA 1  Marks In PEL121 (Max. Marks 30) - "<<endl ;
			cin>>pel_121[0] ;
			if(pel_121[0]>30 || pel_121[0]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto h ;
			}
			h1:
			cout<<"Enter CA 2  Marks In PEL121 (Max. Marks 30) - "<<endl ;
			cin>>pel_121[1] ;
			if(pel_121[1]>30 || pel_121[1]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto h ;
			}
			h2:
			cout<<"Enter CA 3  Marks In PEL121 (Max. Marks 30) - "<<endl ;
			cin>>pel_121[2] ;
			if(pel_121[2]>30 || pel_121[2]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto h2 ;
			}
			h3:
			cout<<"Enter CA 4  Marks In PEL121 (Max. Marks 30) - "<<endl ;
			cin>>pel_121[3] ;
			if(pel_121[3]>30 || pel_121[3]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto h3 ;
			}
			h4:
			cout<<"Enter MTE Marks In PEL121 (Max. Marks 50) - "<<endl ;
			cin>>pel_121[4] ;
			if(pel_121[4]>50 || pel_121[4]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto h4 ;
			}
			h5:
			cout<<"Enter ETE  Marks In PEL121 (Max. Marks 100) (Theory + MCQ) - "<<endl ;
			cin>>pel_121[5] ;
			if(pel_121[5]>100 || pel_121[5]<0)
			{
				cout<<"Invalid Marks" ;
				getch() ;
				cout<<endl<<"Please Re-" ;
				goto h5 ;
			}
			cout<<"Enter Attendance In PEL121"<<endl;
			cin>>attendance[7] ;
			if(attendance[7]>=95)
			{
				att[7] = 15 ;
			}
			else if(attendance[7]>=90 && attendance[7]<95)
			{
				att[7] = 12 ;
			}
			else if(attendance[7]>=85 && attendance[7]<90)
			{
				att[7] = 9 ;
			}
			else if(attendance[7]>=80 && attendance[7]<85)
			{
				att[7] = 6 ;
			}
			else if(attendance[7]>=75 && attendance[7]<80)
			{
				att[7] = 3 ;
			}
			else 
			{
				att[7] = 0 ;
			}
		}
		float sum[9] ;
		void cse101() 
		{
			sum[0] = (cse_101[0]+cse_101[1]+cse_101[2]+cse_101[3])/6 + cse_101[4]/1.6 + cse_101[5]/1.4 + att[0] ;
		}
		void cse104() 
		{
			sum[1] = (cse_104[0]+cse_104[1]+cse_104[2]+cse_104[3])/5 + (cse_104[4]*100)/181 + att[1];
			
		}
		void ece131() 
		{
			sum[2] = (ece_131[0]+ece_131[1]+ece_131[2]+ece_131[3])/6 + ece_131[4]/1.6 +ece_131[5]/1.4 + att[2] ;
		}
		void ece132() 
		{
			sum[3] = ((ece_132[0]+ece_132[1]+ece_132[2]+ece_132[3]+ece_132[4]+ece_132[5]+ece_132[6]+ece_132[7]+ece_132[8]+ece_132[9])*50)/511 + ece_132[10]/2  + att[3];
		}
		void mec107() 
		{
			sum[4] = (mec_107[0]+mec_107[1]+mec_107[2])/4.5 + mec_107[3]/1.6 + mec_107[4]/1.4 + att[4] ;
		}
		void mth165() 
		{
			sum[5] = (mth_165[0]+mth_165[1]+mth_165[2])/4.5 + mth_165[3]/1.6 + mth_165[4]/1.4 + att[5] ;
		
		}
		void che110() 
		{
			sum[6] = (che_110[0])/2.5 + che_110[1]/2 + che_110[2]/2 + att[6];
		
		}
		void pel121() 
		{
			sum[7] = (pel_121[0]+pel_121[1]+pel_121[2]+pel_121[3])/4 + (pel_121[4]/3.3333333) + pel_121[5]/2.5  + att[7];
		}
		void calcgpa()
		{
			cgpa = ((sum[0]*3)+(sum[1]*1)+(sum[2]*4)+(sum[3]*1)+(sum[4]*4)+(sum[5]*4)+(sum[6]*4)+(sum[7]*3))/(24*9) ;
			if(cgpa >10)
			{
				cgpa = 10 ;
			}
		}
		void showdataa() 
{    
	cout<<"\t\tName Of Student - "<<name<<endl ;
	cout<<"\t\tRegistration Number - "<<regno<<endl ;
	cout<<"\t\tRoll number of student : "<<roll<<endl;
	cout<<"\t\tTotal Marks of student in CSE 101 : "<<sum[0]<<endl;
	cout<<"\t\tTotal Marks of student in CSE 104 : "<<sum[1]<<endl;
	cout<<"\t\tTotal Marks of student in ECE 131 : "<<sum[2]<<endl;
	cout<<"\t\tTotal Marks of student in ECE 132 : "<<sum[3]<<endl;
	cout<<"\t\tTotal Marks of student in MEC 107 : "<<sum[4]<<endl;
	cout<<"\t\tTotal Marks of student in MTH 165 : "<<sum[5]<<endl;
	cout<<"\t\tTotal Marks of student in CHE 110 : "<<sum[6]<<endl;
	cout<<"\t\tTotal Marks of student in PEL 121 : "<<sum[7]<<endl;
	cout<<"\t\tTotal TGPA : "<<cgpa<<endl;
}
} s;
void write()
{
	ofstream fout;
	fout.open("D://cgpa.txt",ios::app);
	fout.write((char*)&s,sizeof(s));
	cout<<endl<<"Records Added "<<endl<<endl ;
}

void read_student()
{
	int i ;
	cout<<"\n\n\t\t\tStudent's Name :-\t\t"<<s.name;
	cout<<"\n\t\t\tReg No. :-\t\t\t"<<s.regno;
	cout<<"\n\t\t\tRoll No. :-\t\t\t"<<s.roll<<endl;
	cout<<endl<<"****************************************** Theoretical Subjects Marks **************************************************"<<endl<<endl ;
	cout << setw(5) << "Subjects" << setw(15) << "CA 1"<< setw(15) << "CA 2" << setw(15) << "CA 3" <<  setw(15)<< "CA 4" <<  setw(15)<< "MTE"<<  setw(15)<< "ETE" <<  setw(15)<< "Attendance" <<setw(15)<<endl<< endl;
    cout << setw(5) << "CSE 101" << setw(15) << s.cse_101[0] << setw(15)<< s.cse_101[1] << setw(15)<< s.cse_101[2] << setw(15)<< s.cse_101[3] << setw(15) << s.cse_101[4]<< setw(15)<< s.cse_101[5] << setw(15)<<s.att[0] << endl;
	cout << setw(5) << "ECE 131" << setw(15) << s.ece_131[0] << setw(15)<< s.ece_131[1] << setw(15)<< s.ece_131[2] << setw(15)<< s.ece_131[3] << setw(15) << s.ece_131[4]<< setw(15)<< s.ece_131[5] << setw(15)<<s.att[2] << endl;    
	cout << setw(5) << "MTH 165" << setw(15) << s.mth_165[0] << setw(15)<< s.mth_165[1] << setw(15)<< s.mth_165[2] << setw(15)<< "Nil." << setw(15) << s.mth_165[3]<< setw(15)<< s.mth_165[4] << setw(15)<<s.att[5] << endl;
	cout << setw(5) << "MEC 107" << setw(15) << s.mec_107[0] << setw(15)<< s.mec_107[1] << setw(15)<< s.mec_107[2] << setw(15)<< "Nil." << setw(15) << s.mec_107[3]<< setw(15)<< s.mec_107[4] << setw(15)<<s.att[4] << endl;
	cout << setw(5) << "CHE 110" << setw(15) << "Nil." << setw(15)<< s.che_110[0] << setw(15)<< "Nil." << setw(15)<< "Nil." << setw(15) << s.che_110[1]<< setw(15)<< s.che_110[2] << setw(15)<<s.att[6] << endl;
	cout << setw(5) << "PEL 121" << setw(15) << s.pel_121[0] << setw(15)<< s.pel_121[1] << setw(15)<< s.pel_121[2] << setw(15)<< s.pel_121[3] << setw(15) << s.pel_121[4]<< setw(15)<< s.pel_121[5] << setw(15)<<s.att[7] << endl;
	cout<<endl<<endl ;
	cout<<endl<<"******************************************** Practical Subjects Marks **************************************************"<<endl<<endl ;
	cout << setw(5) << "Subjects" << setw(9) << "Pract 1"<< setw(9) << "Pract 2" << setw(9) << "Pract 3" <<  setw(9)<< "Pract 4" <<  setw(9)<< "Pract 5"<<  setw(9)<< "Pract 6" <<  setw(9)<< "Pract 7"<<  setw(9)<< "Pract 8"  <<  setw(9)<<"WTP 1"<< setw(9)<<"WTP 2"<< setw(9)<<"ETP   "<< setw(9)<< "Attendance" <<setw(9)<<endl<< endl;
    cout << setw(5) << "CSE 104" << setw(9) << s.cse_104[0]<< setw(9) <<s.cse_104[1] << setw(9) <<s.cse_104[2]<<  setw(9)<<s.cse_104[3]<<  setw(9)<< "Nil."<<  setw(9)<< "Nil." <<  setw(9)<< "Nil."<<  setw(9)<< "Nil."<<  setw(9)<<"Nil."<<setw(9)<<"Nil."<<setw(9) <<s.cse_104[4] <<  setw(9)<< s.att[2] <<setw(9)<<endl ;
    cout << setw(5) << "ECE 132" << setw(9) << s.ece_132[0]<< setw(9) <<s.ece_132[1] << setw(9) << s.ece_132[2] <<  setw(9)<< s.ece_132[3]<<  setw(9)<<s.ece_132[4]<<  setw(9)<<s.ece_132[5]<<  setw(9)<< s.ece_132[6]<<  setw(9)<<s.ece_132[7] <<  setw(9)<<s.ece_132[8]<<setw(9)<<s.ece_132[9]<<setw(9)<<s.ece_132[10]<<setw(9)<< s.att[3] <<setw(9)<<endl;
    cout<<endl<<"********************************************* TGPA For First Semester **************************************************"<<endl ;
	cout<<"\t\t\t\t\t\tStudent's CGPA    -\t"<<s.cgpa;	
}
void read()
{
	ifstream fin;
	fin.open("D://cgpa.txt",ios::in);
	while(1)
	{
		fin.read((char*)&s,sizeof(s));
		if(fin.eof())
		break;
		read_student();
		cout<<endl<<"Press Enter To View More Records "<<endl ;
		getch() ;
	}
}
void delay()
{
	int i,j;
	for(i=0;i<2000;i++)
	{
		for(j=0;j<2000;j++)
		{
			
		}
	}
}
void intro()
{
	char pass[20] ;
	asq:
	cout<<"\n\n\n\t\tLovely Professional University";
	cout<<"\n\n\t\tCGPA Calculator";
	cout<<"\n\n\t\tBy Ayush Srivastava";
	cout<<"\n\t\tReg. No. 11608648";
	cout<<endl<<endl<<endl ;
	cout<<"\t\tEnter Your Name - " ;
	fflush(stdin) ;
	cin.get(te.usrnm,20) ; 
	cout<<"\t\tEnter Password - " ;
	fflush(stdin) ;
	cin.get(pass,20) ;
	if(strcmp(pass,"passw")==0)
	{
	cout<<endl<<"\t\tPress ENTER To login" ;
	getch() ;
	delay() ;
	int i ;
	cout<<endl<<endl<<"Loading"<<endl ;
	for(i=0;i<120;i++)
	{
		delay();
		cout<<"*" ;
	}
	mmenu() ;
	}
	else 
	{
		cout<<"\n\nYou Are Not Authorised To Go Futher" ;
		getch() ;
		system("cls") ;
		goto asq ;
	}
}
void search(int n)
{
	ifstream inFile;
	inFile.open("D://cgpa.txt",ios::in);
	int flag;
	while(inFile.read((char*)&s,sizeof(s)))
	{
		if(s.retroll()==n)
		{
			flag = 0 ;
			cout<<endl ;
	  		s.showdataa();
		}
	}
	inFile.close();
	if(flag!=0)
		cout<<"\n\nRecord Not Exist\n\n";
	getch() ;
}

void delete_s(int n)
{
	ifstream inFile;
	inFile.open("D://cgpa.txt",ios::app);
	ofstream outFile;
	outFile.open("D://Temp.txt",ios::out);
	inFile.seekg(0,ios::beg);
	int flag =0;
	while(inFile.read((char*)&s,sizeof(s)))
	{
		if(s.retroll()!=n)
		{
			outFile.write((char*)&s,sizeof(s));
			
		}
		flag++ ;
	}
	if (flag!=0)
	{
		cout<<"\tRecord Deleted" ;
	}
	else 
	{
		cout<<"\tRecord Not Found" ;
	}
	outFile.close();
	inFile.close();
	remove("D://cgpa.txt");
	rename("D://temp.txt","D://cgpa.txt");
	getch()  ;
}
void mmenu()
{
	ag :
	char ch ;
	int num;
	system("cls");
	cout<<"************************************************************************************************************************" ;
	cout<<"\n\n\t\t\t\t\t\t  WELCOME "<<te.usrnm<<"\n\n\n" ;
	cout<<"************************************************************************************************************************" ;
	cout<<"\n\n\n\tMain Menu";
	cout<<"\n\n\t1.Add Students Record";
	cout<<"\n\n\t2.Display All Students Records";
	cout<<"\n\n\t3.Search Students Records";
	cout<<"\n\n\t4.Delete Students Records";
	cout<<"\n\n\t5.Logout";
	cout<<"\n\n\t6.Exit";
	cout<<"\n\n\tPlease Enter A Choice (1-6) ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
	case '1':	
	{
		s.getdata() ;
		s.getmarks() ;
		s.cse101() ;
		s.cse104() ;
		s.ece131() ;
		s.ece132() ;
		s.mec107() ;
		s.mth165() ;
		s.che110() ;
		s.pel121() ;
		s.calcgpa() ;
		write() ;
		getch() ;
		cout<<"Press Enter To Go Back To Main Menu"<<endl ;
		getch() ;
		mmenu() ;
	 } 
		break;
	case '2':	
	{
		read() ;
		getch() ;
		cout<<endl<<endl<<endl<<"Press Enter To Go Back To Main Menu"<<endl ;
		getch() ;
		mmenu() ;
	}
				break;
	case '3':	cout<<"\n\n\tPlease Enter The Roll Number "; 
				cin>>num;
				search(num); 
				getch() ;
		cout<<endl<<"Press Enter To Go Back To Main Menu"<<endl ;
		getch() ;
		mmenu() ;
				break;
	case '4':	cout<<"\n\n\tPlease Enter The Roll Number "; 
				cin>>num;
				delete_s(num);
				getch() ;
				cout<<endl<<"Press Enter To Go Back To Main Menu"<<endl ;
				getch() ;
				mmenu() ;
				break;
	case '5' : intro() ;
		
	case '6':	
	{
	cout<<"\a";
	char asaa ;
	int i;
	cout<<endl<<endl<<"Thank You For Using The Application\n\n"<<endl ;
	for(i=0;i<120;i++)
	{
		delay();
		cout<<"*" ;
	}
	system("exit");
	break;}
	default:{
		cout<<"\a";
		goto ag;
		break;
	}
				
	}
}
main()
{
	intro() ;	
}
