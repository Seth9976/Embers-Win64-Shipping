// 函数: sub_142c29160
// 地址: 0x142c29160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2) != 0 && sub_142bf7510(arg2, &arg1[2], 2) != 0)
    uint16_t rdx_2 = zx.w(*arg1)
    uint32_t r8_1 = zx.d(arg1[1])
    int32_t rdx_3
    
    if (rdx_2 * 0x100 == neg.w(r8_1.w))
        rdx_3 = 0
    else
        rdx_3 = ((zx.q((zx.d(rdx_2.b) << 8) + r8_1) << 1) + -fffffffffffffffe).d
    
    if (sub_142bf7510(arg2, &arg1[4], rdx_3 + (((zx.d(arg1[2]) << 8) + zx.d(arg1[3])) << 2)) != 0)
        return 1

return 0
