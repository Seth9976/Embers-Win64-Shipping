// 函数: sub_140cad510
// 地址: 0x140cad510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e9f270
EnterCriticalSection(&arg1[0x1d])
sub_140ccda70(arg1)
sub_140cb9250(&arg1[0x13], 0)

if (arg1 != -0xe8)
    LeaveCriticalSection(&arg1[0x1d])

DeleteCriticalSection(&arg1[0x1d])
sub_1405ae100(&arg1[0x13])
*arg1 = &data_142e9f258
sub_140ccda70(arg1)
DeleteCriticalSection(&arg1[0xb])
sub_1405ae100(&arg1[1])
*arg1 = &data_142d56fa0
return &data_142d56fa0
