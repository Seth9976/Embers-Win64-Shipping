// 函数: src_float_to_short_array
// 地址: 0x141c2c3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t rax_1 = sx.q(arg3)
int16_t* rdx = arg2 + (rax_1 << 1)
void* rcx = arg1 + (rax_1 << 2)

do
    float zmm0[0x2] = *(rcx - 4)
    rcx -= 4
    arg3 -= 1
    rdx = &rdx[-1]
    zmm0 = _mm_cvtps_pd(zmm0) f* 2147483648.0
    int16_t rax
    
    if (not(zmm0 f< 0x41dfffffffc00000))
        rax = 0x7fff
    else if (zmm0 f> -0x3e20000000000000)
        rax = (int.d(zmm0) s>> 0x10).w
    else
        rax = -0x8000
    
    *rdx = rax
while (arg3 != 0)
