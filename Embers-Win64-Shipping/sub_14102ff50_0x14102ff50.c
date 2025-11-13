// 函数: sub_14102ff50
// 地址: 0x14102ff50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0 && data_1439c7a34 u> 1)
    while (*(arg4 + 0x18) != *(arg1 + 0x138))
        arg4 = *(arg4 + 0x20)
        
        if (arg4 == 0)
            break

uint64_t result = zx.q(arg3)

if (*(arg1 + (result << 3) + 0x3178) != arg4)
    *(arg1 + (result << 3) + 0x3178) = arg4
    result = zx.q(*(arg1 + 0x2ef2)) | zx.q(1 << (arg3 u% 0x20))
    *(arg1 + 0x2ef2) = result.w

return result
