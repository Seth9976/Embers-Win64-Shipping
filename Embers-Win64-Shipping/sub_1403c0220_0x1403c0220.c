// 函数: sub_1403c0220
// 地址: 0x1403c0220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    if (arg2 == 0 || arg3 == 0)
        return 0
    
    arg5 = float.d(arg4)
    double zmm0_1 = floor(float.d(arg3) * float.d(arg2) / arg5 + 0.5)
    
    if (not(2147483647.0 < zmm0_1) && not(zmm0_1 < -2147483648.0))
        return zx.q(int.d(zmm0_1))

png_warning(arg1, "fixed point overflow ignored", arg5)
return 0
