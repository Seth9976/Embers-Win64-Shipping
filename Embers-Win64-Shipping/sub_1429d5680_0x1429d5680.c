// 函数: sub_1429d5680
// 地址: 0x1429d5680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_1 = sx.q(*(arg1 + 0x54))
int64_t result = result_1
int64_t r11 = sx.q(*(arg1 + 0x3c) + result_1.d)

if (result_1 s< r11)
    do
        *(*(*(arg1 + 0x10) + 0x1b0) + (result << 1)) =
            *(*(*(arg1 + 8) + 0x1b0) + (sx.q(*(*(arg1 + 0x138) + (result << 2))) << 1))
        result += 1
    while (result s< r11)

return result
