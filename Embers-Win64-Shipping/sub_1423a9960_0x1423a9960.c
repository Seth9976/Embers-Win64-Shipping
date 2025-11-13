// 函数: sub_1423a9960
// 地址: 0x1423a9960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x238))
int32_t i_1 = arg2
void* rdi = arg1
int32_t rax = rsi.d + arg2
*(arg1 + 0x238) = rax

if (rax s> *(arg1 + 0x23c))
    sub_1423b4e90(arg1, rsi.d)

void* rax_1 = *(rdi + 0x230)

if (rax_1 != 0)
    rdi = rax_1

void* rcx_1 = rdi + rsi * 0x28

if (i_1 != 0)
    int32_t i
    
    do
        __builtin_memset(rcx_1, 0, 0x24)
        *(rcx_1 + 0x24) = 6
        rcx_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rsi.d)
