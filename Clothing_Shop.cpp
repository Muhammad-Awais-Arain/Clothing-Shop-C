#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	//Switch cases that we are going to use
	int Shirt;//1
	int MenKurta=2500;//2
	int Coat=0;//3
	int Jeans=0;//4
	int Cheno=0;//5
	int WomenSuitLawn=7000;//6
	int WomenSuitCoton=5500;//7
	int WomenSuitLeelan=6500;//8
	int Lipstick=200;//9

	int choice;
	char cont;
	int total;
	int quantity;
	char gender;
	int result;
	int discount;
	int perc;
	int tax=0;
	int result1;
	
	int grossAmount1=0;
	int grossAmount2=0;
	int grossAmount3=0;
	int grossAmount4=0;
	int grossAmount5=0;
	int grossAmount6=0;
	int grossAmount7=0;
	int grossAmount8=0;
	int grossAmount9=0;
	int grossAmount10=0;
	int grossAmount11=0;
	int grossAmount12=0;
	int grossAmount13=0;
	
do{
	st:
		
cout <<"\n\t\t***    Arain'S CLOTHING SHOP      ***"<<endl;

cout <<"\n\t\t************************************"<<endl;		
cout << "\t\t**      Quantity Discount         **" << endl;
cout << "\t\t**Less than 5 Items = 20% off     ** " << endl;
cout << "\t\t**5 - 6 Items = 30% off           ** " << endl;
cout << "\t\t**7 - 8 or more Items = 40% off   ** " << endl;		
cout <<"\t\t************************************"<<endl;		
		
		
cout <<"\n\t\t************************************"<<endl;
cout <<" \t\t** Press 1 for Shirts             **"<< endl;
cout <<" \t\t** Press 2 for Kurta              **"<< endl;
cout <<" \t\t** Press 3 for Coats              **"<< endl;
cout <<" \t\t** Press 4 for Jeans              **"<< endl;
cout <<" \t\t** Press 5 for Chinos             **"<< endl;
cout <<" \t\t** Press 6 for Lawn Suit          ** "<< endl;
cout <<" \t\t** Press 7 for Coton Suit         **"<< endl;
cout <<" \t\t** Press 8 for Lelan Suit         ** "<< endl;
cout <<" \t\t** Press 9 for Lipstick           **"<< endl;
cout <<" \t\t** Press 10 for exit              **"<<endl;
cout <<"\t\t************************************"<<endl;
cout <<"\n\n\t\t***Please Make a Choice*** "<<endl;
cin >> choice;


cout <<"\n\n\t\tPlease Enter To Continue..."<<endl;
system("pause");
system("cls");

switch(choice){
	
	//case 1
	case 1:
	system("cls");
	char shirt;
		
	cout <<"\nDo You Want to Buy T-Shirt(Press T) or Full-Sleves Shirt(Press F)?"<<endl;
	cin >> shirt;		
	if(shirt == 'T' || shirt == 't'){
		cout <<"T-Shirt price is 799. "<< endl;
		int tShirt = 799;
		cout <<"How many T-shirts You want to Buy? "<< endl;
		cin >> quantity;
		
		result = tShirt*quantity;
		
		
		if (quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
		
	}
	
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}

		if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
			result1=discount+tax;
			
			cout <<"\nTax Inclusion is "<< tax << endl;
			cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount1 =result1;
		//grossAmount[x] = tShirt*quantity;
	}
	else if(shirt == 'f' || shirt == 'F'){
		cout <<"Full-Sleves Shirt price is 1199. "<< endl;
		int fullSlevesShirt = 1199;
		cout <<"How Many Full-Sleves Shirts you want to buy ?"<< endl;
		cin >> quantity;
		
		result = fullSlevesShirt*quantity;
		
		if (quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}

		if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount2=result1;
		
		//grossAmount[x] = fullSlevesShirt*quantity;
	}
	//cout <<"You total shoping so far "<< grossAmount[x] << endl;
	break;
	
	//case 2 
	case 2:
		system("cls");
		cout <<"Kurta Price is 2500."<<endl;
		cout <<"How Many Kurta's You want to Buy? "<<endl;
		cin >> quantity;
		result = MenKurta*quantity;
		
		if (quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}
	if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount3=result1;
		
		
	/*	grossAmount[x] = MenKurta*quantity;
		cout <<"Your Total Shopping So far "<< grossAmount[x] << endl;*/
		break;
		
	//case 3
	case 3:
		system("cls");
		cout <<"For which gender you want to buy coat [Press 'M' for Male and Press 'F' for Female] ?" << endl;
		cin >>gender;
		
		if(gender=='m' || gender == 'M'){
		cout <<"Men Coat Price is 6000."<<endl;
		int mencoat = 6000;
		cout <<"How Many Men Coats You want to buy ? "<< endl;
		cin >> quantity;
		result = mencoat*quantity;
		
		if ( quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}
		if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount4=result1;
		
		
		//grossAmount[x] = mencoat*quantity;
	}	
	else if(gender == 'f' || gender == 'F'){
		cout <<"Female Coat Price is 4500."<<endl;
		int femalecoat=4500;
		cout <<"Emter How Many Female Coat You want to buy ? "<<endl;
		cin >> quantity;
		result = femalecoat*quantity;
		
		if (quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}

			if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount5=result1;
		
		//grossAmount[x] = femalecoat*quantity;
	}
	//cout <<"Your Total Shopping So far "<< grossAmount[x] << endl;
	break;
	
	//case4
	case 4:
		system("cls");
		cout <<"For which gender you want to buy Jeans [Press 'M' for Male and Press 'F' for Female] ?" << endl;
		cin >>gender;
			
		if(gender=='m' || gender == 'M'){
		cout <<"Men Jeans Price is 1200."<<endl;
		int menjeans = 1200;
		cout <<"How Many Men Jeans You want to buy ? "<< endl;
		cin >> quantity;
		result = menjeans*quantity;
		if ( quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}
			if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount6=result1;
	
	
		
		//grossAmount[x] = menjeans*quantity;
	}
	else if(gender == 'f' || gender == 'F'){
		cout <<"Female Jeans Price is 1500."<<endl;
		int femalejeans=1500;
		cout <<"Emter How Many Female Jeans You want to buy ? "<<endl;
		cin >> quantity;
		result = femalejeans*quantity;
		if ( quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}
			if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount7=result1;
	
		
		//grossAmount[x] = femalejeans*quantity;
	}
	//cout <<"Your Total Shopping So far "<< grossAmount[x] << endl;
	break;
	
	//case 5	
	case 5:
		system("cls");
	cout <<"For which gender you want to buy Chinos Pents [Press 'M' for Male and Press 'F' for Female] ?" << endl;
	cin >>gender;
			
		if(gender=='m' || gender == 'M'){
		cout <<"Men Chino Pent Price is 1700."<<endl;
		int menchino = 1700;
		cout <<"How Many Men Chino Pent You want to buy ? "<< endl;
		cin >> quantity;
		result = menchino*quantity;
		if ( quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}

			if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount8=result1;
			
		
		//grossAmount[x] = menchino*quantity;
	}
	else if(gender == 'f' || gender == 'F'){
		cout <<"Female Chino Pent Price is 1400."<<endl;
		int femalechino=1400;
		cout <<"Emter How Many Female Chino Pent You want to buy ? "<<endl;
		cin >> quantity;
		result = femalechino*quantity;
		if (quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}

			if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount9=result1;
		
		//grossAmount[x] = femalechino*quantity;
	}
	//cout <<"\t\nYour Total Shopping So far "<< grossAmount[x] << endl;
	break;	
	
	//case 6
	case 6:
		system("cls");
		cout <<"Lawn Suit's price is 7000."<<endl;
		cout <<"How many Lawn Suits you want to Buy ? "<< endl;
		cin >> quantity;
		result = WomenSuitLawn*quantity;
		if ( quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}

			if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount10=result1;
		
		//grossAmount[x] = WomenSuitLawn*quantity;
		//cout <<"\t\nYour total Shoping so far is of "<< grossAmount[x] << endl;
		break;
		
	//case 7	
	case 7:
		system("cls");
		cout <<"Coton Suit's Price is 5500."<< endl;
		cout <<"How many Coton Suits you want to Buy ? "<< endl;
		cin >> quantity;
		result = WomenSuitCoton*quantity;
		if (quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}
			if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount11=result1;
	
		
		//grossAmount[x] = WomenSuitCoton*quantity;
		//cout <<"\t\nYour total Shoping so far is of "<< grossAmount[x] << endl;
		break;
		
	//case 8
	case 8:
		system("cls");
		cout <<"Leelan Suit's Price is 6500."<< endl;
		cout <<"How many Leelan Suits you want to Buy ? "<< endl;
		cin >> quantity;
		
		result = WomenSuitLeelan*quantity;
		if ( quantity <=4){

		cout << "\n\t\tYour quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"\n\t\tTotal Price was : "<< result << endl;
		cout << "\n\t\tTotal Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}
			if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);//20% tax 
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);//10% tax
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount12=result1;
	
	//	grossAmount[x] = WomenSuitLeelan*quantity;
	//	cout <<"\t\nYour total Shoping so far is of "<< grossAmount[x] << endl;
		break;
		
	//case 9
	case 9:
	system("cls");
	cout <<"Lipstick's Price is 200."<< endl;	
	cout <<"How Many Lipsticks You want to buy ? "<< endl;
	cin >> quantity;
	result = Lipstick*quantity;
	if ( quantity <=4){

		cout << "Your quantity is less than 5, discout reduced = 20% " << endl;
		perc = result * 20 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;
	}
		else if (quantity >= 5 && quantity <= 6){

		cout << "your quantity is equal to or more than 5 but less than 6, discout reduced = 30% " << endl;
		perc = result * 30 / 100;
		discount = result - perc;
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;}
		
		else if (quantity >= 7){

		cout << "your quantity is more than equals to 7, discout reduced = 40% " << endl;
		perc = result * 40 / 100;
		discount = result - perc;
		
		cout <<"Total Price was : "<< result << endl;
		cout << "Total Price After Discount Allowed : " << discount << endl;		
}

			if(discount >= 50000 && discount <= 100000)
			{
				tax = (discount*20/100);
			}
	
		else if(discount < 50000)
			{
				tax = (discount*10/100);
 			}
	
		else if(discount > 100000)
			{
				tax = (discount*25/100);
			}
		result1=discount+tax;
			
		cout <<"Tax Deduction is "<< tax << endl;
		cout <<"\nPrice After Tax Inclusion is : "<< result1 << endl;
		grossAmount13=result1;
		
	
	//grossAmount[x] = Lipstick*quantity;
	//cout <<"\t\nYour total Shoping so far is of "<< grossAmount << endl;
	break;
	
	//case 10
	case 10:
	goto exit;
	break;
	
	//default
	default:
		
		system("cls");
    	cout<<"\n\nInvalid Choice"<<endl;
    	cout<<"Please Select Right one"<<endl;		
			
}
	cout <<"\n\n\t\tDo you want to Continue [Y or N] ? "<<endl;
	cont = getch();
	system("cls");
	
	
}
while(cont == 'y' || cont == 'Y');
	system("cls");
	
exit:
total = grossAmount1+grossAmount2+grossAmount3+grossAmount4+grossAmount5+grossAmount6+grossAmount7+grossAmount8+grossAmount9+grossAmount10+grossAmount11+grossAmount12+grossAmount13;
cout <<"\n\t\tYour Total Purchasing is "<< total << endl;
cout <<"\n\n\t\tThanks For Buying Our Product <3.."<< endl;
_getch();

}
