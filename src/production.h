/*
 * production.h
 *
 *  Created on: January 16, 2019
 *      Author: Therese Smith
 *      Student: Tom Graham
 */

#ifndef PRODUCTION_H_
#define PRODUCTION_H_
bool production(int argc, char* argv[]);
int calculate_days_in_month(int year, int month);
int is_leap_year(int year);
int calculate_day_of_week(int day, //first day of month is 1
		int month, //uses 0 for January
		int year);

#endif /* PRODUCTION_H_ */
