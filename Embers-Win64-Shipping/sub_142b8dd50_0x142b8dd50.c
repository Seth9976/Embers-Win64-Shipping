// 函数: sub_142b8dd50
// 地址: 0x142b8dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x1c20)
char rax_1

if (rdx + 1 s< 0 || *(arg1 + 0x1c24) s< rdx + 1)
    rax_1 = sub_142aeb240(arg1 + 0x1c18, rdx + 1, arg5)

if ((rdx + 1 s>= 0 && *(arg1 + 0x1c24) s>= rdx + 1) || rax_1 != 0)
    *(*(arg1 + 0x1c30) + (sx.q(*(arg1 + 0x1c20)) << 3)) = sx.q(arg2)
    *(arg1 + 0x1c20) += 1

int32_t rdx_2 = *(arg1 + 0x1c20)
char rax_3

if (rdx_2 + 1 s< 0 || *(arg1 + 0x1c24) s< rdx_2 + 1)
    rax_3 = sub_142aeb240(arg1 + 0x1c18, rdx_2 + 1, arg5)

if ((rdx_2 + 1 s>= 0 && *(arg1 + 0x1c24) s>= rdx_2 + 1) || rax_3 != 0)
    *(*(arg1 + 0x1c30) + (sx.q(*(arg1 + 0x1c20)) << 3)) = arg3
    *(arg1 + 0x1c20) += 1

int32_t rdx_4 = *(arg1 + 0x1c20)
char rax_5

if (rdx_4 + 1 s< 0 || *(arg1 + 0x1c24) s< rdx_4 + 1)
    rax_5 = sub_142aeb240(arg1 + 0x1c18, rdx_4 + 1, arg5)

if ((rdx_4 + 1 s>= 0 && *(arg1 + 0x1c24) s>= rdx_4 + 1) || rax_5 != 0)
    *(*(arg1 + 0x1c30) + (sx.q(*(arg1 + 0x1c20)) << 3)) = arg4
    *(arg1 + 0x1c20) += 1

sub_142b8de40(arg1, arg3, arg5)
return sub_142b8de40(arg1, arg4, arg5) __tailcall
