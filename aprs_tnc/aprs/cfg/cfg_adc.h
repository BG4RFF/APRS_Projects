/**
 * \file
 * <!--
 * This file is part of BeRTOS.
 *
 * Bertos is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As a special exception, you may use this file as part of a free software
 * library without restriction.  Specifically, if other files instantiate
 * templates or use macros or inline functions from this file, or you compile
 * this file and link it with other files to produce an executable, this
 * file does not by itself cause the resulting executable to be covered by
 * the GNU General Public License.  This exception does not however
 * invalidate any other reasons why the executable file might be covered by
 * the GNU General Public License.
 *
 * Copyright 2008 Develer S.r.l. (http://www.develer.com/)
 *
 * -->
 *
 * \brief Configuration file for the ADC module.
 *
 * \version $Id: cfg_adc.h 2582 2009-04-20 12:33:48Z batt $
 * \author Daniele Basile <asterix@develer.com>
 */

#ifndef CFG_ADC_H
#define CFG_ADC_H

/**
 * Module logging level.
 *
 * $WIZ$ type = "enum"
 * $WIZ$ value_list = "log_level"
 */
#define ADC_LOG_LEVEL      LOG_LVL_INFO

/**
 * Module logging format.
 *
 * $WIZ$ type = "enum"
 * $WIZ$ value_list = "log_format"
 */
#define ADC_LOG_FORMAT     LOG_FMT_VERBOSE

/**
 * Clock Frequency for ADC conversion.
 *
 * $WIZ$ type = "int"
 * $WIZ$ supports = "at91"
 */
#define CONFIG_ADC_CLOCK        4800000UL

/**
 * Minimum time for starting up a conversion [us].
 *
 * $WIZ$ type = "int"
 * $WIZ$ min = 0
 * $WIZ$ supports = "at91"
 */
#define CONFIG_ADC_STARTUP_TIME 20

/**
 * Minimum time for sample and hold [us].
 *
 * $WIZ$ type = "int"
 * $WIZ$ min = 0
 * $WIZ$ supports = "at91"
 */
#define CONFIG_ADC_SHTIME       834

/**
 * ADC Voltage Reference.
 *
 * $WIZ$ type = "enum"
 * $WIZ$ value_list = "avr_adc_refs"
 * $WIZ$ supports = "avr"
 */
#define CONFIG_ADC_AVR_REF      ADC_AVR_AVCC

/**
 * ADC clock divisor from main crystal.
 *
 * $WIZ$ type = "int"
 * $WIZ$ min = 2
 * $WIZ$ max = 128
 * $WIZ$ supports = "avr"
 */
#define CONFIG_ADC_AVR_DIVISOR  2

/**
 * Enable ADC strobe for debugging ADC ISR.
 *
 * $WIZ$ type = "boolean"
 */
#define CONFIG_ADC_STROBE  0

#endif /* CFG_ADC_H */
