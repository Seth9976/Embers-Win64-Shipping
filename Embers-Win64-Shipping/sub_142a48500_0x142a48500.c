// 函数: sub_142a48500
// 地址: 0x142a48500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8_4 = *(arg2 + 8)
int32_t rax_1

if (r8_4 s< 0)
    rax_1 = *(arg2 + 0xc)
else
    rax_1 = sx.d(r8_4) s>> 5

int32_t r9 = 0

if (rax_1 == 0)
    return arg1

int32_t rcx_1

if (r8_4 s< 0)
    rcx_1 = *(arg2 + 0xc)
else
    rcx_1 = sx.d(r8_4) s>> 5

int32_t r10 = 0

if (rcx_1 s< 0)
    r10 = rcx_1

if (rax_1 s>= 0)
    int32_t rcx_2 = rcx_1 - r10
    r9 = rax_1
    
    if (rax_1 s> rcx_2)
        r9 = rcx_2

if ((r8_4.b & 2) == 0)
    return sub_142a48d70(arg1, *(arg2 + 0x18), r10, r9) __tailcall

return sub_142a48d70(arg1, arg2 + 0xa, r10, r9) __tailcall
