// 函数: sub_140e16630
// 地址: 0x140e16630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rdi << 3)) = arg1 + 8
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_2 = (rdi_1 + 1).d
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rdi_1 << 3)) = arg1 + 0x90
int64_t rdi_2 = sx.q(arg2[1].d)
int32_t rax_4 = (rdi_2 + 1).d
arg2[1].d = rax_4

if (rax_4 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rdi_2 << 3)) = arg1 + 0x118
return result
