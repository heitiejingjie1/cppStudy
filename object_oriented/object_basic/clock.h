#ifndef _CLOCK_H_
#define _CLOCK_H_

class Clock {
public:
  void display();
  void update();
  void init(int hour, int minute, int second);

public:
  int get_hour();
  int get_minute();
  int get_second();
  void set_hour(int hour);
  void set_minute(int minute);
  void set_second(int second);

private:
  int hour_;
  int minute_;
  int second_;
};

#endif // !_CLOCK_H_
