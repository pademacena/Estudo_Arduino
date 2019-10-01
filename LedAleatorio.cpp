void setup()
{
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
}

int arr[] = {8, 9, 10};

int i;

void loop()
{
    //setando valor aleatorio entre 0 e 3
    i = (rand()% 3);
    //liga o led alocado no array
    digitalWrite(arr[i], HIGH);
    delay(1000); // espera por 1000 milisegundos
    digitalWrite(arr[i], LOW);
    delay(1000); // espera por 1000 milisegundos
}