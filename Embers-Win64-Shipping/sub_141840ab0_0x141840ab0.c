// 函数: sub_141840ab0
// 地址: 0x141840ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *arg2
int64_t result = 0

for (int64_t rsi_2 = (sx.q(arg2[1].d) << 4) + i; i != rsi_2; i += 0x10)
    int64_t r8_1 = *arg1
    int64_t rax_1 = (*(r8_1 + 0x68))(arg1, i, r8_1)
    
    if (rax_1 != 0)
        result += *(rax_1 + 0x58)

return result
