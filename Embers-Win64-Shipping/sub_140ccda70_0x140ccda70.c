// 函数: sub_140ccda70
// 地址: 0x140ccda70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)
*(arg1 + 0x80) = 0
int64_t var_10 = 0
*(arg1 + 0x88) = 0.o
int32_t rsi = *(arg1 + 0x10)
int32_t rdi = *(arg1 + 0x3c)
int64_t* result = sub_1405b8750(arg1 + 8, 0)

if (rsi - rdi s> 0)
    result = sub_140d2af80(&data_143e1d990, arg1)

if (arg1 == -0x58)
    return result

return LeaveCriticalSection(arg1 + 0x58)
