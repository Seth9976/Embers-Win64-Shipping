// 函数: sub_142828d00
// 地址: 0x142828d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_142827844(arg1)

if (arg1[0xf] != 0)
    result = sub_1428272a0(*(arg1[0xc] + (((arg1[0xd] - 1) & arg1[0xe]) << 3)))
    int64_t temp0_1 = arg1[0xf]
    arg1[0xf] -= 1
    
    if (temp0_1 != 1)
        arg1[0xe] += 1
    else
        arg1[0xe] = 0

return result
