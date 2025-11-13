// 函数: sub_142c265b0
// 地址: 0x142c265b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_10 = arg3
uint32_t var_18 =
    (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18) + zx.d(arg1[3])

if (sub_142bf7510(arg2, arg1, 6) != 0 && sub_142c294c0(&arg1[4], arg2, arg3) != 0)
    uint16_t rdx_2 = zx.w(arg1[4])
    uint64_t r8_1 = zx.q(arg1[5])
    
    if (0 == rdx_2 * 0x100 + r8_1.w)
        return true
    
    if (sub_142c283d0((zx.q(rdx_2.b) << 8) + arg3 + r8_1, arg2, &var_18) != 0)
        return true
    
    if (sub_142bf99e0(arg2, &arg1[4], 2) != 0)
        *(arg1 + 4) = 0
        return true

return false
