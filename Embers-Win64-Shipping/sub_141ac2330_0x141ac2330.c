// 函数: sub_141ac2330
// 地址: 0x141ac2330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ea5640(arg1 + 0xc8, arg2)

if (*(arg1 + 0xf0) == 0)
    sub_141ea5640(arg1 + 0xf4, arg2)
    *(arg1 + 0x148) = -1
else
    int64_t rax_1 = sx.q(*(arg1 + 0x148))
    
    if (rax_1.d != 0xffffffff)
        *(arg1 + 0x14c) = *(arg2[0x10] + (sx.q(*(arg2[0xc] + (rax_1 << 2))) << 2))
    
    *(arg1 + 0xfc) |= 0x7fffffff
    *(arg1 + 0x100) = 0xffffffff

if (*(arg1 + 0x160) == 0)
    sub_141ea5640(arg1 + 0x164, arg2)
    *(arg1 + 0x1b8) = -1
else
    int64_t rax_4 = sx.q(*(arg1 + 0x1b8))
    
    if (rax_4.d != 0xffffffff)
        *(arg1 + 0x1bc) = *(arg2[0x10] + (sx.q(*(arg2[0xc] + (rax_4 << 2))) << 2))
    
    *(arg1 + 0x16c) |= 0x7fffffff
    *(arg1 + 0x170) = 0xffffffff

int32_t* result = zx.q(*(arg1 + 0xd0))
int32_t arg_8
int32_t rdx_4

if (result.d s>= 0)
    rdx_4 = *(arg1 + 0xd4)
    arg_8 = rdx_4
else
    int32_t rcx_7 = (result * 2).d
    result = zx.q(rcx_7) & 0xfffffffe
    
    if (result.d == 0xfffffffe)
        arg_8 = 0xffffffff
        rdx_4 = -1
    else
        result = arg2[0x10]
        rdx_4 = result[sx.q(rcx_7) s>> 1]
        arg_8 = rdx_4

*(arg1 + 0x15c) = 0xffffffff
*(arg1 + 0xec) = 0xffffffff

if (rdx_4 != 0xffffffff)
    void arg_18
    result = sub_141ea4020(arg2, &arg_18, &arg_8)
    int32_t rcx_11 = *result
    *(arg1 + 0x15c) = rcx_11
    
    if (rcx_11 != 0xffffffff)
        result = sub_141ea4020(arg2, &arg_18, arg1 + 0x15c)
        *(arg1 + 0xec) = *result

return result
