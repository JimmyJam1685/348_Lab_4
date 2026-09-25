//task2.c

# include <studio.h>


int main() {
int user_val;
char user_scale;
char target_scale;

printf("Enter temperature value: ");
scanf("%d",%user_val);

printf("Enter original scale(F,C,K): ");
scanf("%c",%user_scale);

printf("Enter scale to convert to(F,C,K): ");
scandf(" %c",%target_scale);

float new_temp = temp_convert(user_val,user_scale,target_scale);
printf("Converted temp: %f %c",%new_temp,%target_scale);

float cel_temp = temp_convert(user_val,user_scale,"C");
if (cel_temp < 0){ printf("Temp category: Freezing"); printf("Advisory: Wear a thick coat");}
else if (cel_temp >= 10 and cel_temp < 25){ printf("Temp category: Comfortable"); printf("Advisory: Enjoy!");}
else if (cel_temp >= 25 and cel_temp <= 35){ printf("Temp category: Hot"); printf("Advisory: Carry water with you");}
else if (cel_temp > 35){ printf("Temp category: Extreme Heat"); printf("Advisory: Do not go outdoors");}
return 0;

}

float temp_convert(float temp, char user_scale, char target_scale){
	float final;
	if (user_scale == "F"){
		if (target_scale == "C"){
			final = (temp - 32)/1.8;
			return final;}
		else if (target_scale == "K"){
			final = (temp - 32)/1.8 + 273.15;
			return final;}
	} else if (user_scale == "C"){
		if (target_scale == "F"){
			final = (temp * 1.8)+ 32;
			return final; }
		else if (target_scale == "K"){
			final = temp + 273.15;
			return final; }
	} else if (user_scale == "K"){
		if (target_scale == "F"){
			final = (temp-273.15)*1.8 +32;
			return final;}
		else if (target_scale == "C"){
			final = temp - 273.15;
			return final; }
	} else if (user_scale == target_scale){ return temp; }
}

 
}
