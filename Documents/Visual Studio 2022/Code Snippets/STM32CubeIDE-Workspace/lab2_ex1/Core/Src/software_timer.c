/*
 * software_timer.c
 *
 *  Created on: Jul 11, 2023
 *      Author: ADMIN
 */

#include "software_timer.h"
int timer1_flag;
int timer2_flag;
int timer1_count;
int timer2_count;
void setTimer1(int duration){
	timer1_count = duration;
	timer1_flag = 0;
}
void setTimer2(int duration){
	timer2_count = duration;
	timer2_flag = 0;
}

void timerRun(){
	if (timer1_count > 0){
		timer1_count--;
		if (timer1_count <=0){
			timer1_flag = 1;
		}
	}
	if (timer2_count > 0){
		timer2_count--;
		if (timer2_count <=0){
			timer2_flag = 1;
		}
	}
}
