void move_horse(int num)
{
//	int i;
	switch(num){
		case 1:
			switch(horse_point){
				case 0:
					PORTD |= red_array[++horse_point]; //table 1
					//horse_point++;
					break;
				case 1:
					LED_RED_OFF();
					PORTD |= red_array[++horse_point];
					//horse_point++;
					break;
				case 2:
					LED_RED_OFF();
					PORTD |= red_array[++horse_point];
					//horse_point++;
					break;
				case 3:
					LED_RED_OFF();
					PORTD |= red_array[++horse_point];
					//horse_point++;
					break;
				case 4:
					LED_RED_OFF();
					PORTE |= red_array[++horse_point];
					//horse_point++;
					break;
				case 5:
					LED_RED_OFF();
					PORTE |= red_array[++horse_point];
					//horse_point++;
					break;
				case 6:
					LED_RED_OFF();
					PORTE |= red_array[++horse_point];
					//horse_point++;
					break;
				case 7:
					LED_RED_OFF();
					PORTF |= red_array[++horse_point];
					//horse_point++;
					break;
				case 8:
					LED_RED_OFF();
					PORTE |= red_array[++horse_point];
					//horse_point++;
					break;
				case 9:
					LED_RED_OFF();
					PORTE |= red_array[++horse_point];
					//horse_point++;
					break;
				case 10:
					LED_RED_OFF();
					PORTE |= red_array[++horse_point];
					//horse_point++;
					break;
				case 11:
					LED_RED_OFF();
					PORTF |= red_array[++horse_point];
					//horse_point++;
					break;
				case 12:
					LED_RED_OFF();
					PORTF |= red_array[++horse_point];
					//horse_point++;
					break;
				case 13:
					LED_RED_OFF();
					PORTF |= red_array[++horse_point];
					//horse_point++;
					break;
				case 14:
					LED_RED_OFF();
					PORTF |= red_array[++horse_point];
					//horse_point++;
					break;
				case 15:
					LED_RED_OFF();
					PORTF |= red_array[++horse_point];
					//horse_point++;
					break;
				case 16:
					LED_RED_OFF();
					PORTF |= red_array[++horse_point];
					//horse_point++;
					break;
				case 17:
					LED_RED_OFF();
					PORTF |= red_array[++horse_point];
					//horse_point++;
					break;
				case 18:
					LED_RED_OFF();
					PORTG |= red_array[++horse_point];
					//horse_point++;
					break;
				case 19:
					LED_RED_OFF();
					PORTG |= red_array[++horse_point];
					//horse_point++;
					break;
				case 20:
					LED_RED_OFF();
					PORTG |= red_array[++horse_point];
					//horse_point++;
					break;
				case 21:
					LED_RED_OFF();
					PORTG |= red_array[++horse_point];
					//horse_point++;
					break;
				case 22:
					horse_point = 1;
					LED_RED_OFF();
					PORTD |= red_array[horse_point];
					break;
				default:
					break;
				}

			break;
		case 2:
			switch(horse_point){
				case 0:
					//PORTD |= red_array[++horse_point]; //table 1
					//horse_point++;
					while(1)
					{
						if(horse_point == 2)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 1:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 3)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 2:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 3:
					LED_RED_OFF();
					PORTD = red_array[++horse_point];
					_delay_ms(500);
					PORTE = red_array[++horse_point];

					//PORTD |= red_array[++horse_point];
					//horse_point++;
					break;
				case 4:
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					PORTE = red_array[++horse_point];
					//horse_point++;
					break;
				case 5:
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					PORTE = red_array[++horse_point];
					break;
				case 6:
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					break;
				case 7:
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					break;
				case 8:
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					break;
				case 9:
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					break;
				case 10:
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					break;
				case 11:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 13)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 12:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 14)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 13:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 15)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 14:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 16)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 15:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 17)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 16:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 17:
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTG = red_array[++horse_point];
					break;
				case 18:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 20)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 19:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 21)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 20:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 21:
					LED_RED_OFF();
					PORTG = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					horse_point = 1;
					PORTD = red_array[horse_point];
					break;
				case 22:
					horse_point = 1;
					LED_RED_OFF();
					PORTD = red_array[horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTD = red_array[++horse_point];
					break;
				default:
					break;
				}
			break;
		case 3:
			switch(horse_point){
				case 0:
					while(1)
					{
						if(horse_point == 3)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 1:
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 2:
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					break;
				case 3:
					LED_RED_OFF();
					PORTD = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 6)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 4:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 5:
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					break;
				case 6:
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					//_delay_ms(500);
					break;
				case 7:
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 10)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 8:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 9:
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					break;
				case 10:
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 13)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 11:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 14)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 12:
					while(1)
					{
						if(horse_point == 15)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 13:
					while(1)
					{
						if(horse_point == 16)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 14:
					while(1)
					{
						if(horse_point == 17)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 15:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 16:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTG = red_array[++horse_point];
					break;
				case 17:
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 20)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 18:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 21)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 19:
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 20:
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 1;
					PORTD = red_array[horse_point];
					break;
				case 21:
					PORTG = red_array[++horse_point];
					_delay_ms(500);
					horse_point = 1;
					LED_RED_OFF();
					PORTD = red_array[horse_point];
					_delay_ms(500);
					PORTD = red_array[++horse_point];
					_delay_ms(500);
					break;
				case 22:
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 3)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				}
			break;
		case 4:
			switch(horse_point){
				case 0:
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 1:
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					break;
				case 2:
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 6)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 3:
					PORTD = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 4:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					break;
				case 5:
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					break;
				case 6:
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 10)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 7:
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 8:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					break;
				case 9:
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 13)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 10:
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 14)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 11:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 15)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 12:
					while(1)
					{
						if(horse_point == 16)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 13:
					while(1)
					{
						if(horse_point == 17)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 14:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 15:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTG = red_array[++horse_point];
					break;
				case 16:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 20)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 17:
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 21)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 18:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 19:
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 0;
					PORTD = red_array[++horse_point];
					break;
				case 20:
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 2)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 21:
					PORTG = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 3)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 22:
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				}
			break;
		case 5:
			switch(horse_point){
				case 0:
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					break;
				case 1:
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 6)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 2:
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 3:
					PORTD = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					break;
				case 4:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					break;
				case 5:
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 10)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 6:
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 7:
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					break;
				case 8:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 13)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 9:
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 14)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 10:
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 15)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 11:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 16)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 12:
					while(1)
					{
						if(horse_point == 17)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 13:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 14:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTG = red_array[++horse_point];
					break;
				case 15:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 20)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 16:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 21)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 17:
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 18:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 0;
					PORTD = red_array[++horse_point];
					break;
				case 19:
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 2)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 20:
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 3)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 21:
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 22:
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					break;
				}
			break;
		case 6:
			switch(horse_point){
				case 0:
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 6)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 1:
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 2:
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					break;
				case 3:
					PORTD = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					break;
				case 4:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 10)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 5:
					while(1)
					{
						if(horse_point == 7)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 6:
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					break;
				case 7:
					LED_RED_OFF();
					PORTF = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 13)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 8:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 14)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 9:
					while(1)
					{
						if(horse_point == 11)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 15)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 10:
					PORTE = red_array[++horse_point];
					_delay_ms(500);
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 16)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 11:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 17)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 12:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 13:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTG = red_array[++horse_point];
					break;
				case 14:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 20)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 15:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 21)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 16:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 17:
					while(1)
					{
						if(horse_point == 18)
							break;
						PORTF = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 0;
					PORTD = red_array[++horse_point];
					break;
				case 18:
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 2)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 19:
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 3)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 20:
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				case 21:
					while(1)
					{
						if(horse_point == 22)
							break;
						PORTG = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					PORTE = red_array[++horse_point];
					break;
				case 22:
					LED_RED_OFF();
					horse_point = 0;
					while(1)
					{
						if(horse_point == 4)
							break;
						PORTD = red_array[++horse_point];
						_delay_ms(500);
					}
					LED_RED_OFF();
					while(1)
					{
						if(horse_point == 6)
							break;
						PORTE = red_array[++horse_point];
						_delay_ms(500);
					}
					break;
				}
			break;
		default:
			break;
		}
}
