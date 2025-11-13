// 函数: sub_141cd1460
// 地址: 0x141cd1460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2) * 0x28
int32_t r8 = *(rsi + *(arg1 + 0xe0) + 8)
int32_t rax_2 = arg3[1].d

if (r8 s> rax_2)
    arg3[1].d = r8
    
    if (r8 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
else if (r8 s< rax_2 && r8 != rax_2)
    arg3[1].d = r8
    sub_1405dac90(arg3)

int64_t rax_3 = *(arg1 + 0xe0)
int32_t* r9 = *(rsi + rax_3)
int64_t result = 0
uint64_t r10_1 = sx.q(*(rsi + rax_3 + 8)) << 2 u>> 2

if (r9 u> &r9[sx.q(*(rsi + rax_3 + 8))])
    r10_1 = 0

if (r10_1 != 0)
    do
        int64_t rcx_3 = sx.q(*r9)
        r9 = &r9[1]
        *(*arg3 + (result << 2)) = *(*(arg1 + 0x38) + rcx_3 * 0x18)
        result += 1
    while (result != r10_1)

return result
