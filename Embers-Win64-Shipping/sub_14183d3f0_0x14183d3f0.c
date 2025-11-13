// 函数: sub_14183d3f0
// 地址: 0x14183d3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *arg2
int64_t result = 0

for (int64_t rbp_2 = (sx.q(arg2[1].d) << 4) + i; i != rbp_2; i += 0x10)
    int64_t r8_1 = *arg1
    result += (*(r8_1 + 0xa0))(arg1, i, r8_1)

return result
