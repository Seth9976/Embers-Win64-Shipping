// 函数: sub_14236b910
// 地址: 0x14236b910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
sub_14236b800(arg1, rbp.d)
int32_t rsi = arg1[0xa].d
arg1[0xa].d = rsi + 1

if (rsi + 1 s> *(arg1 + 0x54))
    sub_1405c4d20(&arg1[9])

int64_t rbx_1 = rbp * 5
int64_t rdx_2 = arg1[9] + (rbx_1 << 2)
memmove(rdx_2 + 0x14, rdx_2, (rsi - rbp.d) * 0x14)
int64_t rax_3 = arg1[9]
*(rax_3 + (rbx_1 << 2)) = 0
*(rax_3 + (rbx_1 << 2) + 8) = 0
*(rax_3 + (rbx_1 << 2) + 0x10) = 0
int64_t result = arg1[9]
*(result + (rbx_1 << 2) + 0x10) = 0x3f800000
return result
