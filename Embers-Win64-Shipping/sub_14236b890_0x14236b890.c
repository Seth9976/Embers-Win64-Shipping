// 函数: sub_14236b890
// 地址: 0x14236b890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
sub_14236b800(arg1, rbp.d)
int32_t rsi = arg1[0xa].d
arg1[0xa].d = rsi + 1

if (rsi + 1 s> *(arg1 + 0x54))
    sub_1406105e0(&arg1[9])

int64_t rdx_2 = arg1[9] + (rbp << 2)
memmove(rdx_2 + 4, rdx_2, (rsi - rbp.d) << 2)
int64_t result = arg1[9]
*(result + (rbp << 2)) = 0x3f800000
return result
