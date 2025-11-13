// 函数: sub_140b9a940
// 地址: 0x140b9a940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = arg1
arg2[1].d = arg4
*(arg2 + 0xc) = arg3
void* r10 = *(arg1 + 0x1d8)
int64_t rax = _mm_bsrli_si128(*arg2, 8).q
int32_t temp0_1 = rax.d
void* rax_3

if (temp0_1 != 0)
    int32_t rcx_4
    
    if (temp0_1 s>= 0)
        rcx_4 = (rax u>> 0x20).d + *(arg1 + 0x564) + (rax * 3).d - 3
    else
        rcx_4 = (rax u>> 0x20).d - ((rax << 1) + 2).d + *(arg1 + 0x560)
    
    rax_3 = *(arg1 + 0x548) + sx.q(rcx_4) * 0x18
else
    rax_3 = arg1 + 0x500 + sx.q((rax u>> 0x20).d) * 0x18

*(rax_3 + 0x15) = 1
*(arg1 + 0x554) += 1
int32_t arg_18[0x4]

if (*(arg1 + 0x554) == 1)
    sub_140b91690(r10 + 0x340, &arg_18, arg2, nullptr)
uint32_t r8_1 = zx.d(arg5)
int32_t r8_2 = r8_1 + arg6

if (r8_1 != neg.d(arg6))
    int64_t rdx_2 = _mm_bsrli_si128(*arg2, 8).q
    int32_t temp3_1 = rdx_2.d
    
    if (temp3_1 == 0)
        int64_t rcx_8 = sx.q((rdx_2 u>> 0x20).d) * 3
        *(arg1 + 0x500 + (rcx_8 << 3) + 0x10) += r8_2
        return arg2
    
    int32_t rdx_6
    
    if (temp3_1 s>= 0)
        rdx_6 = *(arg1 + 0x564) - 3 + (rdx_2 u>> 0x20).d + (rdx_2 * 3).d
    else
        rdx_6 = (rdx_2 u>> 0x20).d - ((rdx_2 << 1) + 2).d + *(arg1 + 0x560)
    
    int64_t rcx_12 = sx.q(rdx_6) * 3
    int64_t rax_14 = *(arg1 + 0x548)
    *(rax_14 + (rcx_12 << 3) + 0x10) += r8_2

return arg2
