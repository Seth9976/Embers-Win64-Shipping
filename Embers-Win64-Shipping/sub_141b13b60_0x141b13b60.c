// 函数: sub_141b13b60
// 地址: 0x141b13b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) == 0)
    *(arg3 + 8) = *(arg1 + 0x20)
    *arg3 = *(arg1 + 0x18)
    arg3[1].b = *(arg1 + 0x1c)
    *(arg3 + 0x18) = *(arg1 + 0x30)
    *(arg3 + 0x20) = *(arg1 + 0x38)
    int64_t rax_15
    rax_15.b = 1
    return rax_15

int32_t i = *(arg1 + 0x10)
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
    
    if (arg2 s>= *(*(arg1 + 8) + (sx.q(rax_4) << 2)))
        rbx = rax_4 + rcx_1

int32_t rax_5 = rbx - 1

if (rax_5 s<= 0)
    rax_5 = 0

int64_t rcx_5 = sx.q(rax_5) * 5
int64_t rax_7 = *(arg1 + 0x40)
int32_t* rdx_2 = rax_7 + (rcx_5 << 3)
*(arg3 + 8) = *(rax_7 + (rcx_5 << 3) + 8)
*arg3 = *rdx_2
arg3[1].b = rdx_2[1].b
*(arg3 + 0x18) = *(rdx_2 + 0x18)
*(arg3 + 0x20) = *(rdx_2 + 0x20)
int64_t rax_11
rax_11.b = 1
return rax_11
