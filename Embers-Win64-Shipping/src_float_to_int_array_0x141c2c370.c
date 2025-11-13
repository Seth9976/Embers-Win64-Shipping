// 函数: src_float_to_int_array
// 地址: 0x141c2c370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t* r9_1 = arg2 + (sx.q(arg3) << 2)

do
    float zmm0[0x2] = *(arg1 - arg2 + r9_1 - 4)
    r9_1 = &r9_1[-1]
    arg3 -= 1
    zmm0 = _mm_cvtps_pd(zmm0) f* 2147483648.0
    int32_t rax
    
    if (zmm0 f< 0x41dfffffffc00000)
        rax = -0x80000000
        
        if (not(zmm0 f<= -2147483648.0))
            rax = int.d(zmm0)
    else
        rax = 0x7fffffff
    
    *r9_1 = rax
while (arg3 != 0)
