// 函数: sub_142240000
// 地址: 0x142240000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = *(arg1 + 0x10)
void** result_1 = nullptr

if (*(result + 0xc) u>= 2)
    result_1 = result

if (result_1 != 0)
    int64_t r8_1 = sx.q(result_1[1].d) * 3
    result = *result_1
    int64_t rcx = result[0x46]
    *(rcx + (r8_1 << 2)) = *(rcx + (r8_1 << 2)) + *arg2
    *(rcx + (r8_1 << 2) + 4) = arg2[1] f+ *(rcx + (r8_1 << 2) + 4)
    *(rcx + (r8_1 << 2) + 8) = arg2[2] f+ *(rcx + (r8_1 << 2) + 8)

return result
