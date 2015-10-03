#pragma once

#ifndef WATCHDUINO_IMAGES_H
#define WATCHDUINO_IMAGES_H


#define watch_width 10
#define watch_height 10
static const unsigned char watch_img[] PROGMEM = {
   0x78, 0x00, 0x84, 0x00, 0x12, 0x01, 0x11, 0x02, 0x11, 0x02, 0x71, 0x02,
   0x01, 0x02, 0x02, 0x01, 0x84, 0x00, 0x78, 0x00 };

#define alarm_width 13
#define alarm_height 14
static const unsigned char alarm_img[] PROGMEM = {
   0x07, 0x1c, 0xf3, 0x19, 0x1d, 0x17, 0x46, 0x0c, 0x02, 0x08, 0x03, 0x19,
   0x81, 0x10, 0x45, 0x14, 0x81, 0x10, 0x03, 0x18, 0x02, 0x08, 0x46, 0x0c,
   0x1c, 0x07, 0xf2, 0x09 };

#define timer_width 9
#define timer_height 11
static const unsigned char timer_img[] PROGMEM = {
   0xff, 0x01, 0x82, 0x00, 0x82, 0x00, 0x7c, 0x00, 0x38, 0x00, 0x10, 0x00,
   0x28, 0x00, 0x44, 0x00, 0x82, 0x00, 0xfe, 0x00, 0xff, 0x01 };

#define weather_width 10
#define weather_height 10
static const unsigned char weather_img[] PROGMEM = {
   0x00, 0x00, 0xe0, 0x00, 0x10, 0x01, 0x18, 0x02, 0xe4, 0x02, 0x02, 0x01,
   0x01, 0x02, 0x01, 0x02, 0xfe, 0x01, 0x00, 0x00 };

#define sound_width 7
#define sound_height 8
static const unsigned char sound_img[] PROGMEM = { 0x30, 0x70, 0x10, 0x10, 0x10, 0x1e, 0x1f, 0x0e };

#define bluetooth_width 6
#define bluetooth_height 11
static const unsigned char bluetooth_img[] PROGMEM = { 0x04, 0x0c, 0x14, 0x25, 0x16, 0x0c, 0x16, 0x25, 0x14, 0x0c, 0x04 };

#define refresh_width 7
#define refresh_height 10
static const unsigned char refresh_img[] PROGMEM = { 0x10, 0x30, 0x78, 0x7e, 0x36, 0x13, 0x03, 0x66, 0x7e, 0x18 };

#define confirm_width 5
#define confirm_height 4
static const unsigned char confirm_img[] PROGMEM  = { 0x10, 0x08, 0x05, 0x02 };

#define cancel_width 5
#define cancel_height 5
static const unsigned char cancel_img[] PROGMEM = {0x11, 0x0a, 0x04, 0x0a, 0x11 };

   #define right_width 6
#define right_height 5
static const unsigned char right_img[] PROGMEM = {  0x08, 0x18, 0x3f, 0x18, 0x08 };

#define left_width 6
#define left_height 5
static const unsigned char left_img[] PROGMEM = {  0x04, 0x06, 0x3f, 0x06, 0x04 };

#define twitter_width 10
#define twitter_height 10
static const unsigned char twitter_img[] PROGMEM = {
   0x00, 0x00, 0xc0, 0x00, 0xe4, 0x01, 0xec, 0x03, 0xf9, 0x00, 0xff, 0x00,
   0x7e, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00 };

#define message_width 8
#define message_height 6
static const unsigned char message_img[] PROGMEM = {0xff, 0xc3, 0xa5, 0x99, 0x81, 0xff };

#define gear_width 10
#define gear_height 10
static const unsigned char gear_img[] PROGMEM = {
   0x30, 0x00, 0xb6, 0x01, 0xfe, 0x01, 0xfc, 0x00, 0xcf, 0x03, 0xcf, 0x03,
   0xfc, 0x00, 0xfe, 0x01, 0xb6, 0x01, 0x30, 0x00 };

#define warning_width 9
#define warning_height 9
static const unsigned char warning_img[] PROGMEM = {
   0x10, 0x00, 0x28, 0x00, 0x44, 0x00, 0x54, 0x00, 0x92, 0x00, 0x82, 0x00,
   0x11, 0x01, 0x01, 0x01, 0xfe, 0x00 };


#endif