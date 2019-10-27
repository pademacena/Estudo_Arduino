void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

int arr[] = {100, 200, 800, 300, 100, 500};
int arr2[] = {8, 9, 10};

int i, o = 0;

void loop()
{

  i = (rand()% 6);

  digitalWrite(arr2[o], HIGH);
  delay(250); 
  digitalWrite(arr2[o], LOW);
  delay(arr[i]); 

  if ( o == 3 ) {
    o = 0;
  } else {
    o = o + 1;
  }
}