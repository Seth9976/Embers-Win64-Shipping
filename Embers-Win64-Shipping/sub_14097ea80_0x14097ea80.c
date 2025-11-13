// 函数: sub_14097ea80
// 地址: 0x14097ea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = data_143ced2c8

if (rsi == 0)
    *(arg1 + 0x300) = 0
    return 

EnterCriticalSection(rsi + 0x60)
void* rdx = arg1 + 0x10

if (arg1 == 0)
    rdx = nullptr

sub_1409740e0(rsi + 0x10, rdx)

if (rsi != -0x60)
    LeaveCriticalSection(rsi + 0x60)

*(arg1 + 0x300) = 0
