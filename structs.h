#ifndef STRUCTS
#define STRUCTS

typedef enum {green, red, dummy} Light_color;
typedef enum {PlusBus, Car, Bus} Lane_type;
typedef enum {Waiting, Driving, Done, HoldingForRed, Mock} State;

typedef struct  {
  Light_color color;
  double position;
  int timer;
  int timer_green;
  int timer_red;
} Traffic_light;

typedef struct {
  double speed;
  double breaks;
  double position;  /* så du ved hvor bilen er på broen */
  double length;
  double speed_limit;
  double speed_limit_time;
  double time_driving;
  double acceleration;
  double safe_distance;
  int ID;
  int lane;
  int secs_on_bridge;
  State state;
  Lane_type type;
  double avg_speed;
  double avg_speed_total;
  int time_waited_for_green_light;
} Vehicle;

typedef struct {
  double speed_limit;
  Lane_type lane_type; /* Type can be "PlusBuslane" or "Carlane*/
  double length; /* Length of road */
} Road;
#endif
