// 函数: sub_141abbed0
// 地址: 0x141abbed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg4 + 8)
int32_t rdx

if (rcx s>= 0)
    rdx = *(arg4 + 0xc)
else
    int32_t rcx_1 = rcx * 2
    
    if ((rcx_1 & 0xfffffffe) == 0xfffffffe)
        rdx = -1
    else
        rdx = *(*(arg3[2] + 0x80) + (sx.q(rcx_1) s>> 1 << 2))

int64_t rsi = sx.q(rdx)

if (*(rsi + arg3[3]) == 0)
    sub_141a98300(arg3, rdx)

int64_t rax_5 = *arg3
int64_t rcx_5 = rsi * 6
int128_t zmm1 = *(rax_5 + (rcx_5 << 3) + 0x10)
int128_t var_38 = *(rax_5 + (rcx_5 << 3))
int128_t var_18 = *(rax_5 + (rcx_5 << 3) + 0x20)
int128_t var_28 = zmm1
sub_141abcfa0(arg4 + 0x10, arg2, &var_38)
return arg2
