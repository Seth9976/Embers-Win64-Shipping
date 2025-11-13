// 函数: sub_1422df440
// 地址: 0x1422df440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= *(arg1 + 0x30))
    return 

int64_t rdi_2 = sx.q(arg2) << 4
int64_t r10_1 = sx.q(sub_140758d90(*(arg1 + 0x28) + rdi_2, arg3))

if (r10_1.d == 0xffffffff)
    return 

int64_t* rbx_2 = *(arg1 + 0x28) + rdi_2
int32_t rax_1 = rbx_2[1].d
int32_t rcx_3 = rax_1 - r10_1.d

if (rcx_3 != 1)
    memmove((r10_1 << 4) + *rbx_2, (sx.q((r10_1 + 1).d) << 4) + *rbx_2, (rcx_3 - 1) << 4)
    rax_1 = rbx_2[1].d

rbx_2[1].d = rax_1 - 1
sub_1405a5010(rbx_2)
