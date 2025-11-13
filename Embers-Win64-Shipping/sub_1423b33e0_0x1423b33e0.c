// 函数: sub_1423b33e0
// 地址: 0x1423b33e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = 3.40282347e+38f

if (not(arg4[0] != 3.40282347e+38f))
    int32_t zmm1
    
    if (0f >= *arg3)
        zmm1 = *arg6
    else
        zmm1 = 0x7f7fffff
    
    *arg6 = zmm1
    
    if (not(0f < arg3[1]))
        zmm0 = *arg7
    
    *arg7 = zmm0
    return 

if (not(arg4[0] < 0f))
    *arg6 = __maxss_xmmss_memss(arg4[0] * *arg3, *arg6)
    arg4[0] = arg4[0] * arg3[1]
    *arg7 = __maxss_xmmss_memss(arg4[0], *arg7)[0]
    
    if (arg5 != 0 && (0f < *arg3 || not(0f >= arg3[1])))
        *arg6 = 0x7f7fffff
    
    return 

arg4 ^= data_142d3f780
float* r10_1 = arg6

if (arg2 != 0)
    int32_t rdx = int.d(arg4[0])
    
    if (*arg8 s>= rdx)
        rdx = *arg8
    
    *arg8 = rdx
else
    *r10_1 = _mm_max_ss(*r10_1, arg4[0])
    *arg7 = _mm_max_ss(*arg7, arg4[0])

if (arg5 != 0 && (0f < *arg3 || not(0f >= arg3[1])))
    *r10_1 = 3.40282347e+38f
    *arg7 = 0x7f7fffff
