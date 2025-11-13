// 函数: sub_14104ac50
// 地址: 0x14104ac50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = *arg3

if (result[0xa].b != 0)
    int32_t i = 0
    
    if (arg3[1].d s> 0)
        do
            int64_t rdx_1 = sx.q(i) * 0x88 + *arg3
            result = (*(*arg1 + 0x750))(arg1, rdx_1, rdx_1 + 0x48)
            i += 1
        while (i s< arg3[1].d)
    
    return result

void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_3[6]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_3[6]

*(arg2 + 0x30) = rax_2
void**** rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_3 = rcx_3
*(arg2 + 8) = &rcx_3[1]
return sub_14103ef30(rcx_3, arg3)
