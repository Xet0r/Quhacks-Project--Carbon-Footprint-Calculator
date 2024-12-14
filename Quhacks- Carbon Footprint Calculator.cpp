/* Carbon Footprint Calculator
Date : 14-12-2024
Mikhail Sadatierov [Xet0r]
*/

#include <iostream>
using namespace std;
int main(){
	
	//-----------------------------Part for Variables
	int choice;
	string opinion;
	//----------------------------------Usage variables
	double car;
	double phone;
	double computer;
	double wood;
	double food;
	double trash;
	//-----------------------------------Grams Variables
	double phone_g=10;
	double car_g=11040;
	double laptop_g=60;
	double wood_g=917.5;
	double trash_g=400;
	double food_g=4250;
	//--------------------------------Total
	
	long total;
	
	
	//-------------------------------------Hints
	string good[5];
	good[0]="Try Limiting your driving time.";
	good[1]="Buy objects with biodegradable or recycale packages";
	good[2]="Try to limit your screen time intake to smaller amounts, to minimial if possible.";
	good[3]="Try to cook foods yourself, don't buy preprocessed foods because they have more effect than greenhouse gases.";
	good[4]="If you are buying wood for burning, try to not buy them and use branches in your backyard to limit the amount of CO2 emitted from burning.";
	
	
	
	
	
	
	//---------------------------------Main loop starts
	cout<<"--------      --     --    -            -        --------      -  -   -------"<<endl;
	cout<<"|      |      |       |    |           | |       |             | -    |      "<<endl;
	cout<<"|      |      |       |    |          |---|      |             |-     |      "<<endl;
	cout<<"|      |      |       |    |----     |     |     |             | -     -------"<<endl;
	cout<<"|      |      |       |    |   |    |       |    |             |  -          |"<<endl;
	cout<<"-----|-|      |_______|    |   |   |         |   |------       |   -   ----- |"<<endl;
	cout<<"     |";
	
	cout<<"\n\nPlease go fullscreen for best experience!"<<endl;
	
	
	do{
		cout<<"\n\n\n\n\n"<<endl;
		cout<<"======================================================================================="<<endl;
	cout<<"Hey there! You have entered the carbon Footprint Calculator. This was made by Mikhail Sadatierov [Xet0r]. You have 3 choices:\n\n1)The Carbon Footprint Calculator\n2) See what would happen if humanity persisted to do the same thing\n3) Quit the program"<<endl<<endl;
	
	cin>>choice;
	
	
	//-----------------------------------------If user chose to do the calculator
	if(choice==1){
		cout<<"You have chosen to do the calculator. You will be given a total of how much grams of CO2 you emit daily based on your inputs. Please be honest. Here you go:"<<endl<<endl;
		
		
		//-----------------------------------------Questions Start. First Question
		cout<<"How many hours a day you drive? Enter in hours, like 1.5 or 2. Don't do minutes. After you entered your hours, click ENTER."<<endl;
		cin>>car;
		cout<<"\n\n\n"<<endl;
		
		//--------------------------------------------Question about car
		cout<<"Don't know if that was good or not, we'll see at the end. Now, Enter how much times a day you charge you phone. Enter in hours."<<endl;
		cin>>phone;
		

		//-----------------------------Question about Laptop/PC
		cout<<"Nice! Enter how much you use your laptop/PC per day in hours:"<<endl;
		cin>>computer;
		
		
		
		
		//----------------------------Question about Fireplace
		
		cout<<"This may seem like not a serious question to ask, but how much wood do you burn per day? Give an estimate in kilograms. "<<endl;
		
		cin>>wood;
		
		
		
		//-----------------------------------------------------Question about processed foods
		
		cout<<"Did you know that processed foods hold the blame for more CO2 in the atmosphere than greenhouse gases? As a matter of fact, how much processed foods do you eat per day in kilograms?"<<endl;
		cin>>food;
		
		
		
		
		//--------------------------------------------------------------Question about waste and trash
		
		cout<<"Trash also has a significant effect on the amount of CO2 in the air/atmosphere. How much kilograms of trash do you throw out per day? "<<endl;
		
		cin>>trash;
		
		
		
		
		
		cout<<"\n\n Okay! I think that's enough questions for the day. Let's see what you got:"<<endl<<endl;
		//-------------------------------------Calculations
		phone_g=phone_g*phone;
		car_g=car_g*car;
		laptop_g=laptop_g*computer;
		wood_g=wood_g*wood;
		trash_g=trash_g*trash;
		food_g=food_g*food;
		
		total=phone_g+car_g+laptop_g+wood_g+trash_g+food_g;
		
		
		//-----------------Displaying Totals
		cout<<"===================================================================================="<<endl;
		cout<<"(Drum intro) Your total amount of CO2 emmission per day is: "<<total<<" grams."<<endl;
		cout<<"Heres some tips for you:"<<endl<<endl;
		
		
		
		//--------------------------If amount of CO2 is good
		if(total<=5000){
			cout<<"Great Job! Keed doing the same thing! Definetly better than me. But if you want to improve yourself, follow these steps:"<<endl<<endl;
			cout<<"I can't say it's really bad, but it's definetly not the best. Here are some strategies for have a more positive impact on the planet:"<<endl<<endl;
			cout<<"Try Limiting your driving time."<<endl<<endl;
			cout<<"Buy objects with biodegradable or recycable packages"<<endl<<endl;
			cout<<"Try to limit your screen time intake to smaller amounts, to minimial if possible."<<endl<<endl;
			cout<<"Try to cook foods yourself, don't buy preprocessed foods because they have more effect than greenhouse gases."<<endl<<endl;
			cout<<"If you are buying wood for burning, try to not buy them and use branches in your backyard to limit the amount of CO2 emitted from burning."<<endl<<endl;
			cout<<"--------      --     --    -            -        --------      -  -   -------"<<endl;
			cout<<"|      |      |       |    |           | |       |             | -    |      "<<endl;
			cout<<"|      |      |       |    |          |---|      |             |-     |      "<<endl;
			cout<<"|      |      |       |    |----     |     |     |             | -     -------"<<endl;
			cout<<"|      |      |       |    |   |    |       |    |             |  -          |"<<endl;
			cout<<"|----|-|      |_______|    |   |   |         |   |------       |   -   ----- |"<<endl;
			cout<<"     |"<<endl;
			
			
			
			
			
			//------------------------------------If amount of CO2 is not good
			}else if(total>5000){
		cout<<"I can't say it's really bad, but it's definetly not the best, but at least you're doing better than me. Here are some strategies for have a more positive impact on the planet:"<<endl<<endl;
		cout<<"Try Limiting your driving time."<<endl<<endl;
		cout<<"Buy objects with biodegradable or recycale packages"<<endl<<endl;
		cout<<"Try to limit your screen time intake to smaller amounts, to minimial if possible."<<endl<<endl;
		cout<<"Try to cook foods yourself, don't buy preprocessed foods because they have more effect than greenhouse gases."<<endl<<endl;
		cout<<"If you are buying wood for burning, try to not buy them and use branches in your backyard to limit the amount of CO2 emitted from burning."<<endl<<endl;
		cout<<"--------      --     --    -            -        --------      -  -   -------"<<endl;
		cout<<"|      |      |       |    |           | |       |             | -    |      "<<endl;
		cout<<"|      |      |       |    |          |---|      |             |-     |      "<<endl;
		cout<<"|      |      |       |    |----     |     |     |             | -     -------"<<endl;
		cout<<"|      |      |       |    |   |    |       |    |             |  -          |"<<endl;
		cout<<"|----|-|      |_______|    |   |   |         |   |------       |   -   ----- |"<<endl;
		cout<<"     |"<<endl;		
				
				

			}
			
	
			
			

			
			
		
		
		
		
		
		
		
		
		//---------------------------------------------Quitting the program itself 
	}else if(choice==3){
		
		cout<<"You have chosen to quit the program. See you later!"<<endl;
		
	cout<<"--------      --     --    -            -        --------      -  -   -------"<<endl;
	cout<<"|      |      |       |    |           | |       |             | -    |      "<<endl;
	cout<<"|      |      |       |    |          |---|      |             |-     |      "<<endl;
	cout<<"|      |      |       |    |----     |     |     |             | -     -------"<<endl;
	cout<<"|      |      |       |    |   |    |       |    |             |  -          |"<<endl;
	cout<<"|----|-|      |_______|    |   |   |         |   |------       |   -   ----- |"<<endl;
	cout<<"     |"<<endl;
		return 0;
		
		//----------------------------------Choice to see what would happen if humanity persisted to keep their CO2 emission levels the same
	}else if(choice==2){
		
		cout<<"You have chosen to find out what would happen to humanity and the Earth if the emmission levels are kept the same:"<<endl<<endl;
		
		cout<<"\n\n\n\n"<<endl;
		cout<<"First of all, this would cause heat from the Sun to be trapped even more inside the Earth's atmosphere.\n This would cause climate to change drastically. Ice caps would evaporate, causing water levels to rise. This could cause cetain animals we use for food be more challenged to survive, possibly leading to a food scarce on the planet.\n The climate change could lead to severe droughts in areas where that hasn't happened before, massive Hurricanes and Cyclones to happen. "<<endl;
		cout<<"\n\n What's your opinion on why people just don't care much about the enviroment sometimes?"<<endl;
		cin.ignore();
		getline(cin, opinion);
		cout<<"\n\n I don't know, but I think that people think that if they recycle or do something good for the planet, it won't matter. Please don't be that person"<<endl;




	
	cout<<"--------      --     --    -            -        --------      -  -   -------"<<endl;
	cout<<"|      |      |       |    |           | |       |             | -    |      "<<endl;
	cout<<"|      |      |       |    |          |---|      |             |-     |      "<<endl;
	cout<<"|      |      |       |    |----     |     |     |             | -     -------"<<endl;
	cout<<"|      |      |       |    |   |    |       |    |             |  -          |"<<endl;
	cout<<"-----|-|      |_______|    |   |   |         |   |------       |   -   ----- |"<<endl;
		
	}
	
	
	
	





	}while (choice!=3);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}