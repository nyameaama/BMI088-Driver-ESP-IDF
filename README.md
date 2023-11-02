# BMI088-Driver-ESP-IDF
Basic ESP-IDF Driver for Bosch Sensortech BMI088 Series IMU

This BMI088 I2C driver mainly interfaces the registers needed to retrieve: 
- accel_x
- accel_x
- accel_y
- gyro_x
- gyro_y
- gyro_z

The raw LSB and MSB from the accelerometer and gyroscope are read and converted to meters per second and degree per second respectively.
There are also additional functions to calculate pitch, roll and yaw. 