// 函数: sub_14278a440
// 地址: 0x14278a440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x80))
int32_t i_1 = arg2
void* rdi = arg1
int32_t rax = rsi.d + arg2
*(arg1 + 0x80) = rax

if (rax s> *(arg1 + 0x84))
    sub_142795cf0(arg1, rsi.d)

void* rax_1 = *(rdi + 0x78)

if (rax_1 != 0)
    rdi = rax_1

void* rcx_1 = rdi + rsi * 0x28

if (i_1 != 0)
    int32_t i
    
    do
        *(rcx_1 + 8) = 0xffffffff
        *(rcx_1 + 0xc) = 4
        *(rcx_1 + 0x10) = 0
        *rcx_1 = &data_1434ad558
        *(rcx_1 + 0x20) = 0
        rcx_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rsi.d)
