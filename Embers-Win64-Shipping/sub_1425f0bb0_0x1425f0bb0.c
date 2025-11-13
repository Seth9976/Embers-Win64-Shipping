// 函数: sub_1425f0bb0
// 地址: 0x1425f0bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int64_t* rdi = *(arg1 + 0x30)
int64_t rsi_1 = 0
void* result = &rdi[sx.q(*(arg1 + 0x38))]
uint64_t r14_1 = sx.q(*(arg1 + 0x38)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx_1 = *rdi
        result = (**rcx_1)(rcx_1, arg2, *arg3)
        rsi_1 += 1
        rdi = &rdi[1]
    while (rsi_1 != r14_1)

if (arg1 != -8)
    result = LeaveCriticalSection(arg1 + 8)

int64_t* rcx_3 = *arg3

if (rcx_3 == 0)
    return result

return (**rcx_3)(rcx_3, 1)
