// 函数: sub_1425f5af0
// 地址: 0x1425f5af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[1].d
int64_t rbp = sx.q(arg3)
arg1[1].d = rsi + 1

if (rsi + 1 s> *(arg1 + 0xc))
    sub_1405c5060(arg1)

int64_t rbx_2 = rbp * 0x50
int64_t rdx_2 = *arg1 + rbx_2
memmove(rdx_2 + 0x50, rdx_2, (rsi - rbp.d) * 0x50)
int32_t* rcx_2 = *arg1 + rbx_2
*rcx_2 = *arg2
*(rcx_2 + 8) = *(arg2 + 8)
*(rcx_2 + 0x10) = *(arg2 + 0x10)
*(rcx_2 + 0x18) = *(arg2 + 0x18)
*(rcx_2 + 0x28) = 0
*(rcx_2 + 0x28) = *(arg2 + 0x28)
*(arg2 + 0x28) = 0
rcx_2[0xc] = arg2[0xc]
rcx_2[0xd] = arg2[0xd]
*(arg2 + 0x30) = 0
*(rcx_2 + 0x38) = *(arg2 + 0x38)
rcx_2[0x12] = arg2[0x12]
return zx.q(rbp.d)
