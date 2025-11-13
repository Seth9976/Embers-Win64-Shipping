// 函数: sub_141914c30
// 地址: 0x141914c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14081d930(arg1 + 0x558, arg2)

if (data_143f0f224 != 0)
    EnterCriticalSection(arg1 + 0x14148)

sub_14081d930(arg1 + ((zx.q(*(arg1 + 0x14140)) + 0x118) << 3), arg2)
int32_t r8_1 = *(arg1 + 0x14140) + 1
*(arg1 + 0x14140) = r8_1 u% 0x2710

if (data_143f0f224 == 0)
    return r8_1 u/ 0x2710 * 0x2710

return LeaveCriticalSection(arg1 + 0x14148)
