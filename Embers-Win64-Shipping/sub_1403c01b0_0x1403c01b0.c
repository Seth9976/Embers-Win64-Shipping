// 函数: sub_1403c01b0
// 地址: 0x1403c01b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0

if (arg4 != 0)
    if (arg2 == 0 || arg3 == 0)
        *arg1 = 0
        rsi = 1
    else
        double zmm0_1 = floor(float.d(arg3) * float.d(arg2) / float.d(arg4) + 0.5)
        
        if (not(2147483647.0 < zmm0_1) && not(zmm0_1 < -2147483648.0))
            *arg1 = int.d(zmm0_1)
            rsi = 1

return zx.q(rsi)
