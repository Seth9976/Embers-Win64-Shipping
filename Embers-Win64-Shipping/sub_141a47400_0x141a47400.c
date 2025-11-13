// 函数: sub_141a47400
// 地址: 0x141a47400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) == 0)
    if (*(arg1 + 0x40) == 0)
        int64_t rax
        rax.b = 0
        return rax
    
    *arg3 = sub_141a4ff70(arg1 + 0x30)
    uint64_t rax_8
    rax_8.b = 1
    return rax_8

int32_t i = *(arg1 + 0x18)
int32_t rbx = 0

while (i s> 0)
    int32_t rcx_1 = i & 0x80000001
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i)
    int32_t i_1 = (temp1_1 - temp0_1) s>> 1
    i = i_1
    int32_t rax_4 = i_1 + rbx
    
    if (arg2 s>= *(*(arg1 + 0x10) + (sx.q(rax_4) << 2)))
        rbx = rax_4 + rcx_1

int32_t rax_5 = rbx - 1

if (rax_5 s<= 0)
    rax_5 = 0

*arg3 = sub_141a4ff70(sx.q(rax_5) * 0x30 + *(arg1 + 0x20))
uint64_t rax_7
rax_7.b = 1
return rax_7
