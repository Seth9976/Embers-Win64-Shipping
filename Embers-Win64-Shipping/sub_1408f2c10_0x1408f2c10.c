// 函数: sub_1408f2c10
// 地址: 0x1408f2c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142e14f08
arg1[3].d = 0
InitializeCriticalSection(&arg1[4])
SetCriticalSectionSpinCount(&arg1[4], 0xfa0)
arg1[9] = 0
arg1[0xa].b = 0
*(arg1 + 0x54) = 0
sub_140af3c10(data_143ddb400, u"BackChannel", u"SendBufferSize", &data_1439866e0, &data_143de5780)
sub_140af3c10(data_143ddb400, u"BackChannel", u"RecvBufferSize", &data_1439866e4, &data_143de5780)
return arg1
