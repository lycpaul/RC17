/*
 * udc_objectlist.h
 *
 *  Created on: 9 Oct, 2015
 *      Author: u564
 */

#ifndef ROBOT_UDC_OBJECTLIST_H_
#define ROBOT_UDC_OBJECTLIST_H_

#define ID_SYNC 0
#define ID_END -1

extern void motor_setAlive(volatile void * arg);
extern void servo_setAlive(volatile void * arg);
extern void encoder_setAlive(volatile void * arg);
extern void linesensor_setAlive(volatile void * arg);

UDC_Obj_t udc_objectlist[32] =
{
    {ID_SYNC, NULL, 0, NULL, 0, NULL, NULL},
#if USE_MOTOR_0
    {ID_M0_VMODE, (udc_tx_data_t)&M[0].SetPoint, 2, (udc_rx_data_t)&M[0].Feedback, 2, motor_setAlive, &M[0]},
#endif
#if USE_MOTOR_1
    {ID_M1_VMODE, (udc_tx_data_t)&M[1].SetPoint, 2, (udc_rx_data_t)&M[1].Feedback, 2, motor_setAlive, &M[1]},
#endif
#if USE_MOTOR_2
    {ID_M2_VMODE, (udc_tx_data_t)&M[2].SetPoint, 2, (udc_rx_data_t)&M[2].Feedback, 2, motor_setAlive, &M[2]},
#endif
#if USE_MOTOR_3
    {ID_M3_VMODE, (udc_tx_data_t)&M[3].SetPoint, 2, (udc_rx_data_t)&M[3].Feedback, 2, motor_setAlive, &M[3]},
#endif
#if USE_MOTOR_4
    {ID_M4_VMODE, (udc_tx_data_t)&M[4].SetPoint, 2, (udc_rx_data_t)&M[4].Feedback, 2, motor_setAlive, &M[4]},
#endif
#if USE_MOTOR_5
    {ID_M5_VMODE, (udc_tx_data_t)&M[5].SetPoint, 2, (udc_rx_data_t)&M[5].Feedback, 2, motor_setAlive, &M[5]},
#endif
#if USE_MOTOR_6
    {ID_M6_VMODE, (udc_tx_data_t)&M[6].SetPoint, 2, (udc_rx_data_t)&M[6].Feedback, 2, motor_setAlive, &M[6]},
#endif
#if USE_MOTOR_7
    {ID_M7_VMODE, (udc_tx_data_t)&M[7].SetPoint, 2, (udc_rx_data_t)&M[7].Feedback, 2, motor_setAlive, &M[7]},
#endif
#if USE_SERVO && SERVO_NUMBER > 0
    {ID_SERVO1, (udc_tx_data_t)&Servo1.command, 16, (udc_rx_data_t)&Servo1.current, 2, servo_setAlive, &Servo1},
#endif
#if USE_SERVO && SERVO_NUMBER > 8
    {ID_SERVO2, (udc_tx_data_t)&Servo2.command, 16, (udc_rx_data_t)&Servo2.current, 2, servo_setAlive, &Servo2},
#endif
#if USE_ENCODER && ENCODER_NUMBER > 0
    {ID_ENCODER1_2, NULL, 0, (udc_rx_data_t)&encoder1_2.count, 4, encoder_setAlive, &encoder1_2},
#endif
#if USE_ENCODER && ENCODER_NUMBER > 2
    {ID_ENCODER3_4, NULL, 0, (udc_rx_data_t)&encoder3_4.count, 4, encoder_setAlive, &encoder3_4},
#endif
#if USE_LINESENSOR_0
    {ID_L0_POS, NULL, 0, (udc_rx_data_t) &LineSensor[0].Position, 8, linesensor_setAlive, &LineSensor[0]},
#endif
#if USE_LINESENSOR_1
    {ID_L1_POS, NULL, 0, (udc_rx_data_t) &LineSensor[1].Position, 8, linesensor_setAlive, &LineSensor[1]},
#endif
#if USE_LINESENSOR_2
    {ID_L2_POS, NULL, 0, (udc_rx_data_t) &LineSensor[2].Position, 8, linesensor_setAlive, &LineSensor[2]},
#endif
#if USE_LINESENSOR_3
    {ID_L3_POS, NULL, 0, (udc_rx_data_t) &LineSensor[3].Position, 8, linesensor_setAlive, &LineSensor[3]},
#endif
    {ID_END, NULL, 0, NULL, 0, NULL, NULL}
};

#endif /* ROBOT_UDC_OBJECTLIST_H_ */
