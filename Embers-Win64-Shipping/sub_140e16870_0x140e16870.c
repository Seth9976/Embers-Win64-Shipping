// 函数: sub_140e16870
// 地址: 0x140e16870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*(arg1 + 8) + 8))(arg1 + 8)
int64_t rdi = sx.q(arg2[1].d)
int32_t rax_1 = (rdi + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rdi << 3)) = arg1 + 0x848
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_3 = (rdi_1 + 1).d
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rdi_1 << 3)) = arg1 + 0x8d0
int64_t rdi_2 = sx.q(arg2[1].d)
int32_t rax_5 = (rdi_2 + 1).d
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rdi_2 << 3)) = arg1 + 0x958
int64_t rdi_3 = sx.q(arg2[1].d)
int32_t rax_7 = (rdi_3 + 1).d
arg2[1].d = rax_7

if (rax_7 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rdi_3 << 3)) = arg1 + 0x9e0
return result
