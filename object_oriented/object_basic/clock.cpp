#include "clock.h"
#include <iomanip> // 设置格式头文件
#include <iostream>

using namespace std;

void Clock::display() {
  cout << setfill('0') << setw(2) << hour_ << ":" << setw(2) << minute_ << ":"
       << setw(2) << second_ << endl;
}

void Clock::init(int hour, int minute, int second) {
  hour_ = hour;
  minute_ = minute;
  second_ = second;
}

void Clock::update() {
  ++second_;
  if (second_ == 60) {
    second_ = 0;
    minute_ += 1;
  }
  if (minute_ == 60) {
    minute_ = 0;
    hour_ += 1;
  }
  if (hour_ == 24) {
    hour_ = 0;
  }
}

int Clock::get_hour() { return hour_; }

int Clock::get_minute() { return minute_; }

int Clock::get_second() { return second_; }

void Clock::set_hour(int hour) { hour_ = hour; }

void Clock::set_minute(int minute) { minute_ = minute; }

void Clock::set_second(int second) { second_ = second; }
