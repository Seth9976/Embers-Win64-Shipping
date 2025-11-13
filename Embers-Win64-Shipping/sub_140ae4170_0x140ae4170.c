// 函数: sub_140ae4170
// 地址: 0x140ae4170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm2 = (zx.o(0)).d
int128_t zmm6 = arg5
float zmm5 = arg4

if (not(zmm6.d f<= 0f))
    int64_t zmm4
    zmm4.d = (*arg3).d f- *arg2
    arg4 = *(arg3 + 4) f- arg2[1]
    int64_t zmm0
    zmm0.d = zmm4.d f* zmm4.d
    
    if (not(arg4 * arg4 f+ zmm0.d < 9.99999975e-05f))
        zmm5 = zmm5 f* zmm6.d
        
        if (not(zmm5 < 0f))
            zmm2 = __minss_xmmss_memss(zmm5, 0x3f800000)
        
        zmm4.d = zmm4.d f* zmm2
        zmm4.d = zmm4.d f+ *arg2
        arg4 = arg4 f* zmm2 f+ arg2[1]
        *arg1 = zmm4.d
        arg1[1] = arg4
        return arg1

*arg1 = *arg3
return arg1
