// 函数: sub_142c25760
// 地址: 0x142c25760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 6) != 0)
    uint16_t r9_1 = zx.w(*arg1)
    uint32_t r10_1 = zx.d(arg1[1])
    
    if (zx.w(arg1[2]) * 0x100 + zx.w(arg1[3]) u<= r9_1 * 0x100 + r10_1.w)
        int32_t rsi_2 = r10_1 + 1 + ((zx.d(r9_1.b) - zx.d(arg1[2])) << 8) - zx.d(arg1[3])
        
        if (sub_142bf7510(arg2, &arg1[4], 2) != 0
                && sub_142bf7510(arg2, arg3, (zx.d(arg1[4]) << 8) + zx.d(arg1[5])) != 0
                && rsi_2 u< 0x7fffffff
                && sub_142bf7510(arg2, zx.q(arg1[5]) + (zx.q(arg1[4]) << 8) + arg3, rsi_2 * 2)
                != 0)
            return 1

return 0
