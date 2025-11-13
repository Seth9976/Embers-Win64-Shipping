// 函数: sub_14094a460
// 地址: 0x14094a460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421385c0(arg1, arg2)
int64_t rsi = 0
*arg1 = &data_142e29dc0
arg1[0x346] = 0
arg1[5] = &data_142e2a128
arg1[0x347] = 0
InitializeCriticalSection(&arg1[0x348])
SetCriticalSectionSpinCount(&arg1[0x348], 0xfa0)
__builtin_memset(&arg1[0x34d], 0, 0x18)
arg1[0x350].d = 0x40a00000
__builtin_memset(&arg1[0x351], 0, 0x45)
int64_t rbx = data_143ced0e0

if (data_143de5480 != 0)
    rsi.b = GetCurrentThreadId() != data_143de5470

if (*(rbx + (rsi << 2)) != 0)
    *(arg1 + 0x1acc) = 1

return arg1
