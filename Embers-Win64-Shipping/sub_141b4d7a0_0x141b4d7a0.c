// 函数: sub_141b4d7a0
// 地址: 0x141b4d7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg1 + 0x18)
void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rcx_2[5]

if (rax u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rcx_2[5]

*(arg2 + 0x30) = rax
void**** rax_1 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_1 = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
rcx_2[2].d = arg3
rcx_2[4].d = arg4 << 4
*rcx_2 = &data_142d56618
rcx_2[3] = r14
return &data_142d56618
