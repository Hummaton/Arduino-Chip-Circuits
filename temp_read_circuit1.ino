// Sensor reading to celsius conversions from https://www.makerguides.com 

void setup()
{
  pinMode(A0, INPUT); //declaring pin as input data to read 
  Serial.begin(9600); 
}

void loop()
{
  float sensor_reading,voltage,celsius,farenheit;  //declaring variables
  
sensor_reading=analogRead(A0);          //reading data from sensor
voltage= sensor_reading*(5000/1024.0);      
celsius=(voltage-500)/10;    		  	//converting readings to a temperature 
farenheit=(celsius * 9.0/5.0) + 32;

Serial.print(celsius); Serial.print(" degrees C");  
Serial.println();                      //print temp values to serial moniter
Serial.print(farenheit); Serial.print(" degrees F");
Serial.println();Serial.println();  
delay(1500);

}  
                                  
