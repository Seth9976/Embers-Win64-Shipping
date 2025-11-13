// 函数: sub_142c29430
// 地址: 0x142c29430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2) != 0)
    uint16_t r8_1 = zx.w(*arg1)
    uint32_t r9_1 = zx.d(arg1[1])
    
    if (r8_1 * 0x100 == neg.w(r9_1.w))
        return 1
    
    int32_t r8_3 = r9_1 - 1 + (zx.d(r8_1.b) << 8)
    
    if (r8_3 u< 0x7fffffff && sub_142bf7510(arg2, &arg1[2], r8_3 * 2) != 0)
        return 1

return 0
