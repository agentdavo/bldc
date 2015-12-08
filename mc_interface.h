/*
	Copyright 2015 Benjamin Vedder	benjamin@vedder.se

	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * mc_interface.h
 *
 *  Created on: 10 okt 2015
 *      Author: benjamin
 */

#ifndef MC_INTERFACE_H_
#define MC_INTERFACE_H_

#include "conf_general.h"

// Functions
void mc_interface_init(mc_configuration *configuration);
const volatile mc_configuration* mc_interface_get_configuration(void);
void mc_interface_set_configuration(mc_configuration *configuration);
void mc_interface_set_pwm_callback(void (*p_func)(void));
void mc_interface_lock(void);
void mc_interface_unlock(void);
void mc_interface_lock_override_once(void);
mc_fault_code mc_interface_get_fault(void);
const char* mc_interface_fault_to_string(mc_fault_code fault);
mc_state mc_interface_get_state(void);
void mc_interface_set_duty(float dutyCycle);
void mc_interface_set_duty_noramp(float dutyCycle);
void mc_interface_set_pid_speed(float rpm);
void mc_interface_set_pid_pos(float pos);
void mc_interface_set_current(float current);
void mc_interface_set_brake_current(float current);
void mc_interface_brake_now(void);
void mc_interface_release_motor(void);
float mc_interface_get_duty_cycle_set(void);
float mc_interface_get_duty_cycle_now(void);
float mc_interface_get_switching_frequency_now(void);
float mc_interface_get_rpm(void);
float mc_interface_get_amp_hours(bool reset);
float mc_interface_get_amp_hours_charged(bool reset);
float mc_interface_get_watt_hours(bool reset);
float mc_interface_get_watt_hours_charged(bool reset);
float mc_interface_get_tot_current(void);
float mc_interface_get_tot_current_filtered(void);
float mc_interface_get_tot_current_directional(void);
float mc_interface_get_tot_current_directional_filtered(void);
float mc_interface_get_tot_current_in(void);
float mc_interface_get_tot_current_in_filtered(void);
int mc_interface_get_tachometer_value(bool reset);
int mc_interface_get_tachometer_abs_value(bool reset);
float mc_interface_read_reset_avg_motor_current(void);
float mc_interface_read_reset_avg_input_current(void);

// MC implementation functions
void mc_interface_fault_stop(mc_fault_code fault);
int mc_interface_try_input(void);
void mc_interface_mc_timer_isr(void);

// Interrupt handlers
void mc_interface_adc_inj_int_handler(void);

// External variables
extern volatile uint16_t ADC_Value[];
extern volatile int ADC_curr_norm_value[];

// Common fixed parameters
#define MCPWM_DEAD_TIME_CYCLES			60		// Dead time


#endif /* MC_INTERFACE_H_ */