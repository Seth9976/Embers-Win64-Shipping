// 函数: sub_142bd7e30
// 地址: 0x142bd7e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *(arg1 + 0x18)
int32_t* result

if (r9 != *(arg1 + 0x10) + (zx.q(*(arg1 + 0x20)) << 3))
    *r9 = arg2
    result = *(arg1 + 0x18)
    result[1] = 0
    *(arg1 + 0x18) += 8
else
    result = *(arg1 + 8)
    
    if (result != 0 && *result == 0)
        *result = 0x82

return result
