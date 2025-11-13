// 函数: sub_142b9e470
// 地址: 0x142b9e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[0xf]
int64_t rsi_1 = sx.q(arg2) * 6
int32_t rax_2 = sub_142b91560(*arg1, arg1[1])
int32_t r10 = rax_2

if (rax_2 == 0xb40000)
    r10 = neg.d(0x5a0000 - arg2 * 0xb40000) * 2

uint64_t result =
    sub_142b9df50(&arg1[0x10 + rsi_1 * 2], &arg1[2], rbp, *arg1 + 0x5a0000 - arg2 * 0xb40000, r10)
arg1[rsi_1 * 2 + 0x16].b = 0
return result
