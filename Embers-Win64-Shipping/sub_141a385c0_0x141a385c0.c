// 函数: sub_141a385c0
// 地址: 0x141a385c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 8)
double zmm1
int128_t zmm6

if (arg4 == 1)
    bool cond:0_1 = (arg2[1].b & 1) == 0
    zmm1 = _mm_cvtepi32_pd(zx.q(rsi)) f* fconvert.d(arg3.d)
    
    if (not(cond:0_1))
        zmm1 = zmm1 + *arg2
    
    *arg2 = zmm1
    arg2[1].d |= 1
    zmm6.d = arg3.d f+ arg2[2].d
    arg2[2].d = zmm6.d
else if (arg4 == 4)
    if (arg2[7].b == 0)
        arg2[6].d = 0
        arg2[7].b = 1
        sub_141a58cb0(sub_141a50d90(arg5), &arg2[5])
    
    bool cond:1_1 = (arg2[1].b & 1) == 0
    zmm1 = (_mm_cvtepi32_pd(zx.q(rsi)) + arg2[5]) f* fconvert.d(arg3.d)
    
    if (not(cond:1_1))
        zmm1 = zmm1 + *arg2
    
    *arg2 = zmm1
    arg2[1].d |= 1
    zmm6.d = arg3.d f+ arg2[2].d
    arg2[2].d = zmm6.d
else if (arg4 == 2)
    bool cond:2 = (arg2[4].b & 1) == 0
    zmm1 = _mm_cvtepi32_pd(zx.q(rsi)) f* fconvert.d(arg3.d)
    
    if (not(cond:2))
        zmm1 = zmm1 + arg2[3]
    
    arg2[3] = zmm1
    arg2[4].d |= 1
