// int rightIR=2;// purple wire
// int leftIR=3;// black wire
// 5th pin 3 and 4th mototr red
//9th pin 1 and 2 motor dark green
char input;     // to store input character received via BT.

void setup()
{
  Serial.begin(9600);  
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  // pinMode(2,INPUT);
  // pinMode(3,INPUT);
}

void loop()
{

  while(Serial.available())
  {
    input =Serial.read();
    Serial.println(input);
    if(input == 'F')
    {
      forward();
    }

    else if (input== 'R')
    {
      right();

    }

    else if (input== 'L')
    {
      left();    
    }  

    else if (input== 'G')
    {
      backward();

    }  
    else if (input== 'S')
    {
      stop();
    
    }  
  }

}  
void forward()
  {
  digitalWrite(6, LOW  );
  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}

void stop()
  {
  digitalWrite(6, LOW );
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

void backward()
  {
  digitalWrite(6, HIGH  );
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}

void right()
  {
    digitalWrite(6, LOW );
  digitalWrite(4, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  
}

void left()
  {
  
  digitalWrite(6, HIGH  );
  digitalWrite(4, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}
