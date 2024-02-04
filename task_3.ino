int led1=3;
int led2=5;
int led3=6;
int led4=9;
int led5=10;
int led6=11;
int bu1=13;
int bu2=4;
void setup() {
  pinMode(13,INPUT);
  pinMode(8,INPUT);
 for(int i=2;i<=7;i++){
     pinMode(i,OUTPUT);}
}

void loop() {
  if(digitalRead(bu1)==1){ analogWrite(led1,255/2);
                           analogWrite(led2,255);}
                           
                     else{    analogWrite(led1,0);
                              analogWrite(led2,0);}
                              

 if(digitalRead(bu2)==1){ analogWrite(led4,255);
                           analogWrite(led6,255/2);
                           }
                     else{    analogWrite(led4,0);
                              analogWrite(led6,0);}
                                                                          
 }
