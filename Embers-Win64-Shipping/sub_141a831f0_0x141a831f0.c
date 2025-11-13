// 函数: sub_141a831f0
// 地址: 0x141a831f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = *(arg1 + 8)
float zmm5[0x4] = 0x322bcc77
float zmm7[0x4] = zx.o(0)
uint128_t zmm8 = arg8
uint128_t zmm13 = *arg1
uint128_t zmm0 = zx.o(*arg5)
float zmm14[0x4] = *(arg1 + 4)
int32_t rdi = arg5[1].d
uint64_t arg_10 = zmm0.q
uint128_t zmm10
zmm10.d = zmm0.d f- zmm13.d
int64_t var_c8 = zmm0.q
uint128_t zmm9
zmm9.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f- zmm14[0]
float zmm11[0x4] = rdi
zmm0.d = zmm10.d f* zmm10.d
zmm11[0] = zmm11[0] f- zmm3.d
arg5.d = zmm3.d
uint128_t zmm2
zmm2.d = zmm9.d f* zmm9.d
zmm11[0] = zmm11[0] * zmm11[0]
zmm2.d = zmm2.d f+ zmm0.d
zmm0.d = zmm8.d f+ arg9
zmm2.d = zmm2.d f+ zmm11[0]
arg8 = zmm0.d
float zmm6[0x4] = _mm_sqrt_ss(0, zmm2.d)
int32_t var_e8
float var_e4
float var_e0
float zmm1[0x4]

if (zmm6[0] >= 9.99999975e-05f)
    if (zmm2.d f== 1f)
        goto label_141a833cc
    
    float var_e0_1
    
    if (zmm2.d f>= 9.99999994e-09f)
        zmm3.d = zmm2.d
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = temp0_2.d f* temp0_2[0]
        zmm1 = zmm3
        zmm1[0] = zmm1[0] f* zmm0.d
        zmm2.d = 0.5f - zmm1[0]
        zmm0.d = temp0_2.d f* zmm2.d
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm3.d = zmm3.d f* temp0_2[0]
        float zmm4 = 0.5f f- zmm3.d
        zmm3 = arg5.d
        zmm0.d = temp0_2.d f* zmm4
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        zmm10.d = zmm10.d f* temp0_2[0]
        zmm9.d = zmm9.d f* temp0_2[0]
        zmm11[0] = zmm11[0] * temp0_2[0]
        zmm5 = 0x322bcc77
    label_141a833cc:
        var_e0_1 = zmm11[0]
        var_e4 = zmm9.d
        var_e8 = zmm10.d
    else
        zmm1 = data_143dbb1fc
        var_e8 = data_143dbb1f8.d
        var_e0_1 = data_143dbb200.d
        var_e4 = zmm1[0]
    
    zmm1 = zx.o(var_e8.q)
    zmm0 = zmm1
    var_e0 = var_e0_1
    zmm11 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm9 = var_e0
    var_e8.q = zmm1.q
    zmm10 = var_e8
else
    zmm11 = zx.o(0)
    var_e8 = 0x3f800000
    zmm9 = zx.o(0)
    var_e4 = zmm11[0]
    var_e0 = zmm9.d
    zmm6 = 0x38d1b717
    zmm10 = 0x3f800000

uint128_t zmm12
zmm12.d = (*arg4).d f- zmm13.d
zmm13.d = (*(arg4 + 4)).d f- zmm14[0]
zmm14 = *(arg4 + 8)
zmm14[0] = zmm14[0] f- zmm3.d
zmm0.d = zmm12.d f* zmm12.d
zmm2.d = zmm13.d f* zmm13.d
zmm14[0] = zmm14[0] * zmm14[0]
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm14[0]

if (zmm2.d f>= 9.99999905e-09f)
    zmm0.d = zmm9.d f* zmm13.d
    zmm3.d = zmm9.d f* zmm12.d
    zmm1 = zmm10
    zmm2.d = zmm11.d f* zmm14[0]
    zmm1[0] = zmm1[0] f* zmm13.d
    zmm2.d = zmm2.d f- zmm0.d
    zmm0.d = zmm10.d f* zmm14[0]
    zmm3.d = zmm3.d f- zmm0.d
    int32_t var_d8 = zmm2.d
    zmm2.d = zmm2.d f* zmm2.d
    zmm0.d = zmm11.d f* zmm12.d
    int32_t var_d4_1 = zmm3.d
    zmm3.d = zmm3.d f* zmm3.d
    zmm1[0] = zmm1[0] f- zmm0.d
    zmm3.d = zmm3.d f+ zmm2.d
    float var_d0_1 = zmm1[0]
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm3.d = zmm3.d f+ zmm1[0]
    
    if (zmm3.d f>= 9.99999905e-09f)
        if (not(zmm3.d f<= zmm5[0]))
            zmm5 = 0x322bcc77
        
        zmm0.d = zmm10.d f* zmm12.d
        zmm1 = zmm9
        zmm2.d = zmm11.d f* zmm13.d
        zmm1[0] = zmm1[0] * zmm14[0]
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1[0]
        zmm0.d = zmm10.d f* zmm2.d
        zmm12.d = zmm12.d f- zmm0.d
        zmm0.d = zmm11.d f* zmm2.d
        zmm13.d = zmm13.d f- zmm0.d
        zmm0.d = zmm9.d f* zmm2.d
        zmm14[0] = zmm14[0] f- zmm0.d
        zmm2.d = zmm13.d f* zmm13.d
        zmm0.d = zmm12.d f* zmm12.d
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm14[0]
        
        if (not(zmm2.d f<= zmm5[0]))
            float temp0_4[0x4] = _mm_rsqrt_ss(zmm2[0], zmm2.d)
            zmm3.d = zmm2.d f* 0.5f
            zmm0.d = temp0_4.d f* temp0_4[0]
            zmm1 = zmm3
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm2.d = 0.5f - zmm1[0]
            zmm0.d = temp0_4.d f* zmm2.d
            temp0_4[0] = temp0_4[0] f+ zmm0.d
            temp0_4[0] = temp0_4[0] * temp0_4[0]
            zmm3.d = zmm3.d f* temp0_4[0]
            zmm0.d = temp0_4.d f* (0.5f f- zmm3.d)
            temp0_4[0] = temp0_4[0] f+ zmm0.d
            zmm12.d = zmm12.d f* temp0_4[0]
            zmm13.d = zmm13.d f* temp0_4[0]
            zmm14[0] = zmm14[0] * temp0_4[0]
    else
        zmm6, zmm7, zmm8 = sub_140ad6430(&var_e8, &var_d8, &var_c8)
        zmm9 = var_e0
        zmm11 = var_e4
        zmm10 = var_e8
        zmm14 = rdi
        zmm13 = var_c8:4.d
        zmm12 = var_c8.d
else
    zmm12 = zx.o(0)
    zmm13 = 0x3f800000
    zmm14 = zx.o(0)

zmm3 = arg8

if (arg10 != 0)
    zmm0 = arg12
    zmm5 = arg11
    zmm2.d = zmm0.d f- zmm5[0]

if (arg10 == 0 || zmm2.d f<= 9.99999975e-05f || zmm3.d f<= 9.99999975e-05f)
    zmm2 = arg9
else
    zmm6[0] = zmm6[0] f/ zmm3.d
    zmm6[0] = zmm6[0] - zmm5[0]
    zmm6[0] = zmm6[0] f/ zmm2.d
    
    if (zmm6[0] >= zmm7[0])
        zmm1 = _mm_min_ss(zmm6[0], 0x3f800000)
    else
        zmm1 = zx.o(0)
    
    zmm2 = arg9
    zmm0.d = zmm0.d f- 1f
    zmm0.d = zmm0.d f* zmm1[0]
    
    if (not(zmm0.d f<= 9.99999975e-05f))
        zmm0.d = zmm0.d f+ 1f
        zmm2.d = zmm2.d f* zmm0.d
        zmm8.d = zmm8.d f* zmm0.d
        zmm3.d = zmm3.d f* zmm0.d

bool cond:1 = zmm6[0] f< zmm3.d
*arg7 = arg_10
arg7[1].d = rdi
*arg6 = *arg2
arg6[1].d = arg2[1].d

if (cond:1)
    zmm1 = zmm8
    zmm1[0] = zmm1[0] f+ zmm8.d
    zmm1[0] = zmm1[0] * zmm6[0]
    
    if (zmm1[0] == zmm7[0])
        zmm6 = zx.o(0)
    else
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm0.d = zmm8.d f* zmm8.d
        zmm2.d = zmm2.d f* zmm2.d
        zmm6[0] = zmm6[0] f+ zmm0.d
        zmm6[0] = zmm6[0] f- zmm2.d
        zmm6[0] = zmm6[0] / zmm1[0]
    
    zmm0 = 0xbf800000
    zmm6[0] - zmm7[0]
    int64_t* rsi
    rsi.b = zmm6[0] < zmm7[0]
    
    if (not(zmm6[0] < -1f))
        zmm0 = _mm_min_ss(zmm6[0], 0x3f800000)
    
    zmm0.d = sinf(acosf(zmm0.d)).d f* zmm8.d
    zmm8.d = zmm8.d f* zmm8.d
    zmm1 = zmm0
    zmm1[0] = zmm1[0] f* zmm0.d
    zmm8.d = zmm8.d f- zmm1[0]
    
    if (not(zmm8.d f<= zmm7[0]))
        zmm7 = _mm_sqrt_ss(zx.o(0)[0], zmm8.d)
    
    if (rsi.b != 0)
        zmm7 ^= data_142d3f780
    
    zmm10.d = zmm10.d f* zmm7[0]
    zmm11[0] = zmm11[0] * zmm7[0]
    zmm10.d = zmm10.d f+ *arg1
    zmm9.d = zmm9.d f* zmm7[0]
    zmm11[0] = zmm11[0] f+ *(arg1 + 4)
    zmm12.d = zmm12.d f* zmm0.d
    zmm9.d = zmm9.d f+ *(arg1 + 8)
    zmm13.d = zmm13.d f* zmm0.d
    zmm14[0] = zmm14[0] f* zmm0.d
    zmm10.d = zmm10.d f+ zmm12.d
    zmm11[0] = zmm11[0] f+ zmm13.d
    zmm9.d = zmm9.d f+ zmm14[0]
else
    zmm0.d = zmm9.d f* zmm3.d
    zmm2.d = zmm10.d f* zmm3.d
    zmm0.d = zmm0.d f+ *(arg1 + 8)
    zmm11[0] = zmm11[0] f* zmm3.d
    zmm2.d = zmm2.d f+ *arg1
    zmm10.d = zmm10.d f* zmm8.d
    zmm11[0] = zmm11[0] f+ *(arg1 + 4)
    int32_t var_c0_1 = zmm0.d
    zmm11[0] = zmm11[0] f* zmm8.d
    zmm9.d = zmm9.d f* zmm8.d
    *arg7 = (_mm_unpacklo_ps(zmm2, zmm11[0].q)).q
    arg7[1].d = var_c0_1
    zmm10.d = zmm10.d f+ *arg1
    zmm11[0] = zmm11[0] f+ *(arg1 + 4)
    zmm9.d = zmm9.d f+ *(arg1 + 8)

int32_t result = zmm9.d
*arg6 = (_mm_unpacklo_ps(zmm10, zmm11[0].q)).q
arg6[1].d = result
return result
