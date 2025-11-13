// 函数: sub_142bfa8b0
// 地址: 0x142bfa8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 8) != 0)
    int32_t rsi_3
    
    if ((zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18) + zx.d(arg1[3])
            != 0x73666e74)
        rsi_3 = 0
    else
        rsi_3 = zx.d(arg1[5]) + 1 + (zx.d(arg1[4]) << 8)
    
    if (sub_142bf7510(arg2, &arg1[6], 2) != 0
            && sub_142bf7510(arg2, arg3, (zx.d(arg1[6]) << 8) + zx.d(arg1[7])) != 0
            && sub_142bfa1d0(zx.q(arg1[7]) + (zx.q(arg1[6]) << 8) + arg3, arg2, zx.q(rsi_3), arg4)
            != 0)
        return 1

return 0
