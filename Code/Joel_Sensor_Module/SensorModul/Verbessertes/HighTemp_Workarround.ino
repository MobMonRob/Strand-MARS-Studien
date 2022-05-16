#include "High_Temp.h"

HighTemp ht(A1, A0);

void setup()

{
    Serial.begin(115200);
    ht.begin();

}

void loop()
{
    Serial.println(ht.getThmc());
    delay(100);
}
