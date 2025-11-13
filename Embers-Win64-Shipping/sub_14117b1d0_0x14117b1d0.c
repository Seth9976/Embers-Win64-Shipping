// 函数: sub_14117b1d0
// 地址: 0x14117b1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg3
arg1[1] = arg2
arg1[2].d = arg4
int64_t r12 = *arg5
void*** r10_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &r10_2[5]

if (rax u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    r10_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r10_2[5]

*(arg2 + 0x30) = rax
int64_t* rax_1 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_1 = r10_2
*(arg2 + 8) = &r10_2[1]
r10_2[1] = 0
*r10_2 = &data_142da77d8
r10_2[2] = arg3
r10_2[3].d = arg4
r10_2[4] = r12
sub_1405d1550(arg5)
return arg1
