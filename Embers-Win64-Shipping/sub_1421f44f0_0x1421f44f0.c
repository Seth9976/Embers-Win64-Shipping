// 函数: sub_1421f44f0
// 地址: 0x1421f44f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
zmm1.o = *(arg2 + 0x12c)
int64_t rbp
rbp.b = 0
float* rsi = nullptr
arg5.d = sub_141fe5610(arg1 + 0x40, zmm1, *(arg2 + 0x18), nullptr, arg6, arg5, arg4, arg3).d f/
    *(arg1 + 0x38)

if (arg5.d f< 0f)
    *arg8 = 0
    *arg9 = 0
else
    arg6 = zx.o(0)
    int128_t* rax_1 = sub_1421b7c40(arg2, arg1)
    
    if (rax_1 != 0)
        arg6 = *rax_1
        rsi = rax_1
    
    char rax_2 = *(arg1 + 0x74)
    uint128_t zmm0
    zmm0.d = (*(arg2 + 0x50)).d f- *(arg2 + 0x134)
    float zmm1_1 = *(arg2 + 0x54) f- *(arg2 + 0x138)
    float zmm2_1 = *(arg2 + 0x58) f- *(arg2 + 0x13c)
    
    if ((rax_2 & 8) != 0)
        zmm2_1 = (zx.o(0)).d
    
    if ((rax_2 & 4) != 0)
        zmm1_1 = (zx.o(0)).d
    
    if ((rax_2 & 2) != 0)
        zmm0 = zx.o(0)
    
    zmm0.d = zmm0.d f* zmm0.d
    zmm1_1 = zmm1_1 * zmm1_1 f+ zmm0.d
    zmm0 = *(arg1 + 0x70)
    float temp0_1 = _mm_sqrt_ss(0, zmm1_1 + zmm2_1 * zmm2_1)
    
    if (not(zmm0.d f<= 0f) && not(temp0_1 f<= zmm0.d))
        if (rsi != 0)
            *rsi = 0f
        
        *arg8 = 0
        *arg9 = 0
    else if (temp0_1 <= 0f)
        *arg8 = 0
        *arg9 = 0
    else
        zmm0.d = (*(arg1 + 0x3c)).d f* *(arg1 + 0x38)
        bool cond:1_1 = temp0_1 f> zmm0.d
        zmm0 = arg7
        float zmm6 = temp0_1 f+ arg6.d
        rbp.b = cond:1_1
        zmm1_1 = zmm6 f* arg5.d
        int32_t rax_5 = int.d(zmm1_1 + zmm1_1 - 0.5f) s>> 1
        *arg8 = rax_5
        
        if (zmm0.d f<= 0f)
            zmm1_1 = (zx.o(0)).d
        else
            zmm1_1 = 1f f/ zmm0.d
        
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_5)).d f* zmm1_1
        *arg9 = zmm0.d
        
        if (rsi != 0)
            zmm0.d = _mm_cvtepi32_ps(zx.o(*arg8)).d f* *(arg1 + 0x38)
            *rsi = _mm_max_ss(zmm6 f- zmm0.d, 0)

if ((*(arg1 + 0x74) & 1) == 0)
    return *(arg1 + 0x30) & 1

int32_t* result
result.b = rbp.b != 1
return result
