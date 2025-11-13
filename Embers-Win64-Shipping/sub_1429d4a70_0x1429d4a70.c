// 函数: sub_1429d4a70
// 地址: 0x1429d4a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx = *(arg1 + 0x10)
sub_1429cd3a0(&rcx[0x18], sx.q(*rcx))
int64_t result_1 = sx.q(*(arg1 + 0x40))
int64_t result = result_1
int64_t r11 = sx.q(*(arg1 + 0x28) + result_1.d)

if (result_1 s< r11)
    do
        *(result + *(*(arg1 + 0x10) + 0x60)) =
            *(sx.q(*(*(arg1 + 0x108) + (result << 2))) + *(*(arg1 + 8) + 0x60))
        result += 1
    while (result s< r11)

return result
