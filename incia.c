
#pragma config(Sensor, S1, esquerda, sensorEV3_IRSensor)
#pragma config (Sensor, S2, frente, sensorEV3_IRSensor)
#pragma config (Sensor, S3, direito, sensorEV3_IRSensor)

#pragma config (Motor, motorB, esquerda, tmotorNXT, PIDControl, reversed, encoder)
#pragma config (Motor, motorA, centro, tmotorNXT, PIDControl, encoder)
#pragma config (Motor, motorC, direita, tmotorNXT, PIDControl, encoder)


task main()
{
    while (true)
    {
         
   motor[esquerda] = 100;
   motor[centro] = 100;
   motor[direita] = 100;

wait1Msec(1000);

motor[esquerda] = 100;
motor[centro] = 100;
motor[direita] = -100;

wait1Msec(500);

int sonar1 = SensorValue[esquerda];
int sonar2 = SensorValue[centro];
int sonar3 = SensorValue[direita];

if(sonar1 < 30 && sonar2 < 30 &&sonar3 < 30)
{
motor[esquerda] = 100;
motor[centro] = 100;
motor[direita] = 100;
}

    }
   
  break;
 
}


