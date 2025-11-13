// 函数: sub_142b11790
// 地址: 0x142b11790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
(*(*rcx + 0x20))(rcx)
int32_t r14 = *(arg1 + 0x18)
int32_t rbx_1 = *(arg2 + 0x6c) + r14
int64_t rbp = *(arg1 + 0x28)

if (sub_142b11270(arg2, rbx_1) != 0)
    int32_t rax_3 = arg2[0xd].d - rbx_1
    *(arg2 + 0x6c) = rbx_1
    sub_142a8bca0(arg2[0xc] + (sx.q(rax_3) << 1), rbp, r14)

int64_t rbx_2 = *arg2
int32_t rax_5 = (*(rbx_2 + 0x58))(arg2)
int32_t result = (*(rbx_2 + 0x88))(arg2, zx.q(*(arg1 + 0x10)), zx.q(*(arg1 + 0x14)), 
    zx.q(*(arg1 + 0x18) - 1 + rax_5))
*(arg1 + 0xc) = result
return result
