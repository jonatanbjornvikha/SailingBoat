#ifndef SAILINGBOAT_INCLUDE_CMPS12_DATA_REGISTRY_H_
#define SAILINGBOAT_INCLUDE_CMPS12_DATA_REGISTRY_H_

typedef enum {
  DATA_SET_COMMAND_REGISTER_SOFTWARE_READ_8 = 0x00,
  DATA_SET_COMPASS_BEARING_8 = 0x01,
  DATA_SET_COMPASS_BEARING_16 = 0x02,
  DATA_SET_PITCH_ANGLE_8 = 0x03,
  DATA_SET_ROLL_ANGLE_8 = 0x04,
  DATA_SET_MAGNETOMETER_X_RAW_16 = 0x05,
  DATA_SET_MAGNETOMETER_Y_RAW_16 = 0x06,
  DATA_SET_MAGNETOMETER_Z_RAW_16 = 0x07,
  DATA_SET_ACCELEROMETER_X_RAW_16 = 0x08,
  DATA_SET_ACCELEROMETER_Y_RAW_16 = 0x09,
  DATA_SET_ACCELEROMETER_Z_RAW_16 = 0x0A,
  DATA_SET_GYRO_X_RAW_16 = 0x0B,
  DATA_SET_GYRO_Y_RAW_16 = 0x0C,
  DATA_SET_GYRO_Z_RAW_16 = 0x0D,
  DATA_SET_COMPASS_TEMPERATURE_16 = 0x0E,
  DATA_SET_COMPASS_BEARING_DEGREES_16 = 0x0F,
  DATA_SET_PITCH_ANGLE_16 = 0x10,
  DATA_SET_CALIBRATION_STATE_8 = 0x11
} CMPS12DataSetRegistry;

#endif // SAILINGBOAT_INCLUDE_CMPS12_DATA_REGISTRY_H_