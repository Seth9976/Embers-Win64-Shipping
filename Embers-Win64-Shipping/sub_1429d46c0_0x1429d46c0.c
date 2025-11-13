// 函数: sub_1429d46c0
// 地址: 0x1429d46c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
sub_1429cd3a0(rcx + 0xf0, sx.q(*(rcx + 4)))
sub_1429d4760(arg1)
int64_t result_1 = sx.q(*(arg1 + 0x48))
int64_t result = result_1
int64_t r11 = sx.q(*(arg1 + 0x30) + result_1.d)

if (result_1 s< r11)
    do
        *(result + *(*(arg1 + 0x10) + 0xf0)) =
            *(sx.q(*(*(arg1 + 0x120) + (result << 2))) + *(*(arg1 + 8) + 0xf0))
        result += 1
    while (result s< r11)

return result
