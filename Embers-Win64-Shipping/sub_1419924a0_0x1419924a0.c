// 函数: sub_1419924a0
// 地址: 0x1419924a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
*arg1 = &data_143009e28
arg1[4] = 0
void* rax = j_sub_140a82f30(0x40)
void* const rsi = rax

if (rax == 0)
    rsi = nullptr
else
    __builtin_memset(rax, 0, 0x18)
    InitializeCriticalSection(rax + 0x18)
    SetCriticalSectionSpinCount(rsi + 0x18, 0xfa0)

arg1[2] = rsi
void* rax_1 = j_sub_140a82f30(0x40)

if (rax_1 == 0)
    arg1[3] = 0
else
    __builtin_memset(rax_1, 0, 0x18)
    InitializeCriticalSection(rax_1 + 0x18)
    SetCriticalSectionSpinCount(rax_1 + 0x18, 0xfa0)
    arg1[3] = rax_1

return arg1
