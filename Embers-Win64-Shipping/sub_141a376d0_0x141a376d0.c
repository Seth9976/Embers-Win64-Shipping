// 函数: sub_141a376d0
// 地址: 0x141a376d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *arg1
int32_t rsi = 0
int32_t i_2 = r14[1].d
int32_t i = i_2

if (i_2 s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + rsi
        
        if (arg2 s>= *(*r14 + (sx.q(rax_4) << 2)))
            rsi = rax_4 + rcx_1
    while (i s> 0)

r14[1].d = i_2 + 1

if (i_2 + 1 s> *(r14 + 0xc))
    sub_1405a4cf0(r14)

int64_t rdi = sx.q(rsi) << 2
int64_t rdx_4 = *r14 + rdi
memmove(rdx_4 + 4, rdx_4, (i_2 - rsi) << 2)
*(rdi + *r14) = arg2
int64_t* rcx_8 = arg1[1]
void arg_10

if (rcx_8 != 0)
    sub_141f80ba0(rcx_8, &arg_10, rsi)
return zx.q(rsi)
