// 函数: sub_14105c0e0
// 地址: 0x14105c0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t rcx_1

if (arg2 s<= 0)
    int64_t rax_6
    int32_t rdx_2
    rdx_2:rax_6 = sx.o((0x3ff - arg2) & 0xfffffffffffffc00)
    rcx_1 = (neg.q(((zx.q(rdx_2) & 0x3ff) + rax_6) s>> 0xa)).d
else
    int64_t rax_3
    int32_t rdx
    rdx:rax_3 = sx.o((arg2 + 0x3ff) & 0xfffffffffffffc00)
    rcx_1 = (((zx.q(rdx) & 0x3ff) + rax_3) s>> 0xa).d

if (((*(arg1 + 0x30)).b & 7) == 0)
    data_143f0f1f8
    data_143f0f1f8 += rcx_1
    return 

data_143f0f1fc
data_143f0f1fc += rcx_1
