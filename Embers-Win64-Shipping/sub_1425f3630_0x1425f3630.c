// 函数: sub_1425f3630
// 地址: 0x1425f3630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x18)
int64_t* rdi = *(arg1 + 0x40)
int64_t rsi_1 = 0
void* result = &rdi[sx.q(*(arg1 + 0x48))]
uint64_t r14_1 = sx.q(*(arg1 + 0x48)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx_1 = *rdi
        result = (**rcx_1)(rcx_1, arg2)
        rsi_1 += 1
        rdi = &rdi[1]
    while (rsi_1 != r14_1)

if (arg1 == -0x18)
    return result

return LeaveCriticalSection(arg1 + 0x18)
