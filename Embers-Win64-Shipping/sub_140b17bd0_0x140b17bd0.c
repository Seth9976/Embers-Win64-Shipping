// 函数: sub_140b17bd0
// 地址: 0x140b17bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3)
int64_t r10

if (arg4 == 0)
    r10 = arg1[2]
else
    r10 = *(arg4 + 8)

int64_t r8 = *arg1

if (r10 u< r8 || r10 u> arg1[1] - rax * 2)
    *(arg2 + 0x18) = 0
    return arg2

int32_t var_14 = ((r10 - r8) s>> 1).d
int64_t rax_6 = r10 + (rax << 1)
int64_t var_20 = rax_6

if (arg4 != 0 && rax_6 u> *(arg4 + 8))
    *(arg4 + 8) = rax_6

*arg2 = r10.o
arg2[1].q = 0.q
*(arg2 + 0x18) = 1
return arg2
