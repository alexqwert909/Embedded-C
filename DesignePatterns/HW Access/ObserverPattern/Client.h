#ifndef _CLIENT_H_
#define _CLIENT_H_

uint8_t clientData1,clientData2;

void accept1(uint8_t data)
{
    clientData1 = data;
    printf("Client 1 received new data %i\n",clientData1);
}

void accept2(uint8_t data)
{
    clientData2 = data;
    printf("Client 2 received new data %i\n",clientData2);
}
#endif