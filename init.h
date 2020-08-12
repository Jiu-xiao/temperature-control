#include "Arduino.h"
class NTC {
public:
    NTC(void);
    ~NTC(void);
     void  Init(void);
     float GetData(void);
};
