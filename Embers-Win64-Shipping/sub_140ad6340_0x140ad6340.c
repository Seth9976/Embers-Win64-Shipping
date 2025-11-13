// 函数: sub_140ad6340
// 地址: 0x140ad6340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg1
arg1 = zx.o(0)

if (not(arg4 f<= 0f))
    float zmm5 = arg2[0] - zmm6[0]
    
    if (not(zmm5 * zmm5 < 9.99999994e-09f))
        arg3[0] = arg3[0] f* arg4
        
        if (not(arg3[0] < 0f))
            arg1 = __minss_xmmss_memss(arg3[0], 0x3f800000)
        
        arg1[0] = arg1[0] * zmm5
        arg1[0] = arg1[0] + zmm6[0]
        return arg1

return arg2
