// 函数: sub_14091eae0
// 地址: 0x14091eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x2e8)
int64_t rsi = sx.q(*(arg1 + 0x318))
int32_t rax = (rsi + 1).d
*(arg1 + 0x318) = rax

if (rax s> *(arg1 + 0x31c))
    sub_14092f860(arg1 + 0x310)

int64_t rsi_1 = rsi * 0xe8
void*** result = rsi_1 + *(arg1 + 0x310)

if (rsi_1 == neg.q(*(arg1 + 0x310)))
    result = nullptr
else
    *result = &data_142e20cf8
    __builtin_memset(&result[1], 0, 0x20)
    sub_140919960(&result[5], arg3)
    result[0x13] = 0
    result[0x14] = 0
    *result = &data_142e20d00
    result[0x15] = 0
    result[0x16] = arg2
    result[0x17].d = 0xffffffff
    *(result + 0xbc) = 0
    __builtin_memset(&result[0x18], 0, 0x24)

if (arg1 != -0x2e8)
    LeaveCriticalSection(arg1 + 0x2e8)

return result
