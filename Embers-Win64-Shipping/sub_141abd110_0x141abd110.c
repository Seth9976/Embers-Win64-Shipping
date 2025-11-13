// 函数: sub_141abd110
// 地址: 0x141abd110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = arg1

if (zmm2.d f< 0f)
    return zx.o(0)

uint32_t rcx = zx.d(arg3)

if (arg3 == 0)
    if (arg4 != 0)
        zmm2.d = zmm2.d f* zmm2.d
        return expf((zmm2 ^ data_142d3f780).d) __tailcall
    
    arg1.d = 2f f/ arg2.d
    arg1.d = arg1.d f* zmm2.d
    arg1.d = arg1.d f* arg1.d
    arg1.d = arg1.d f* -0.5f
    return expf(arg1.d) __tailcall

if (rcx == 1)
    if (arg4 != 0)
        arg2.d = 1f / expf(arg1.d)
        return arg2.d
    
    zmm2.d = zmm2.d f* -2f
    zmm2.d = zmm2.d f/ arg2.d
    return expf(zmm2.d) __tailcall

if (rcx == 3)
    zmm2.d = zmm2.d f/ arg2.d
    arg2.d = zmm2.d f* zmm2.d
    arg2.d = arg2.d f* zmm2.d
    arg1.d = 1f f- arg2.d
    return _mm_max_ss(arg1.d, 0)

if (rcx != 4)
    arg1.d = arg2.d f- _mm_min_ss(zmm2.d, arg2.d).d
    arg1.d = arg1.d f/ arg2.d
    return arg1

zmm2.d = zmm2.d f/ arg2.d
arg2.d = zmm2.d f* zmm2.d
arg2.d = arg2.d f* arg2.d
arg2.d = arg2.d f* zmm2.d
arg1.d = 1f f- arg2.d
return _mm_max_ss(arg1.d, 0)
