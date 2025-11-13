// 函数: sub_1409c3d60
// 地址: 0x1409c3d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x28)
int64_t rcx = sx.q(arg2) * 5
int64_t rsi = rcx << 3
int32_t rcx_1 = *(*(rdi + 0xe0) + (rcx << 3) + 8)
int32_t rax_2 = arg3[1].d

if (rcx_1 s> rax_2)
    arg3[1].d = rcx_1
    
    if (rcx_1 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
else if (rcx_1 s< rax_2 && rcx_1 != rax_2)
    arg3[1].d = rcx_1
    sub_1405dac90(arg3)

int64_t rax_3 = *(rdi + 0xe0)
int32_t* r9 = *(rsi + rax_3)
int64_t result = 0
uint64_t r10_1 = sx.q(*(rsi + rax_3 + 8)) << 2 u>> 2

if (r9 u> &r9[sx.q(*(rsi + rax_3 + 8))])
    r10_1 = 0

if (r10_1 != 0)
    do
        int64_t rcx_5 = sx.q(*r9)
        r9 = &r9[1]
        *(*arg3 + (result << 2)) = *(*(rdi + 0x38) + rcx_5 * 0x18)
        result += 1
    while (result != r10_1)

return result
