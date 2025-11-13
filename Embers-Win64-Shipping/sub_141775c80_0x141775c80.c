// 函数: sub_141775c80
// 地址: 0x141775c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
float zmm0[0x4] = *arg1
int128_t zmm6 = zx.o(0)
float zmm7[0x4] = 0x3f800000
float zmm4[0x4] = zx.o(0)
int32_t result_2 = (zx.o(0)).d
float zmm8[0x4] = zx.o(0)
float zmm9[0x4] = zx.o(0)
int128_t result_3 = zx.o(0)
float zmm11[0x4] = zx.o(0)
float zmm13[0x4] = zx.o(0)
float zmm14[0x4] = zx.o(0)
float zmm15[0x4] = arg6
float var_d8
float var_c8
float zmm1[0x4]

if (not(zmm0[0] <= 0f))
    zmm11 = 0x3f800000
    zmm11[0] = 1f / zmm0[0]
    zmm0 = 0x3f800000
    zmm1 = 0x3f800000
    zmm0[0] = 1f f/ *arg3
    zmm1[0] = 1f f/ arg3[1]
    var_c8 = zmm0[0]
    zmm0 = 0x3f800000
    float var_c4_1 = zmm1[0]
    zmm0[0] = 1f f/ arg3[2]
    float var_c0_1 = zmm0[0]
    int64_t* rax
    rax, zmm6, zmm7 = sub_141775b80(&var_d8, &var_c8, zmm15[0])
    zmm4 = zx.o(0)
    result_2 = (zx.o(0)).d
    zmm1 = zx.o(*rax)
    result = rax[1].d
    zmm9 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    result_3 = result
    var_c8.q = zmm1.q
    zmm8 = var_c8

int128_t zmm12 = *arg2

if (not(zmm12.d f<= zmm6.d))
    zmm7[0] = zmm7[0] f/ *arg4
    zmm14 = zmm7
    zmm7[0] = zmm7[0] f/ arg4[1]
    var_d8 = zmm7[0]
    float var_d4_1 = zmm7[0]
    zmm7[0] = zmm7[0] f/ arg4[2]
    zmm14[0] = zmm14[0] f/ zmm12.d
    float var_d0_1 = zmm7[0]
    int64_t var_b8[0x2]
    int64_t* rax_1
    rax_1, zmm6, zmm7 = sub_141775b80(&var_b8, &var_d8, zmm15[0])
    zmm1 = zx.o(*rax_1)
    result = rax_1[1].d
    zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    result_2 = result
    var_d8.q = zmm1.q
    zmm13 = var_d8

int32_t zmm3 = *arg1

if (not(zmm3 f<= zmm6.d))
    if (not(zmm12.d f<= zmm6.d))
        float zmm2[0x4] = arg5
        float result_1
        
        if (zmm2[0] f<= zmm6.d)
        label_141775ebd:
            var_d8 = zmm8[0]
            float var_d4_3 = zmm9[0]
            result_1 = result_3.d
        else
            if (not(zmm11[0] f<= zmm6.d) && not(zmm14[0] f<= zmm6.d))
                zmm11[0] = zmm11[0] / zmm14[0]
                
                if (not(zmm11[0] >= zmm2[0]))
                    zmm2[0] = zmm2[0] / zmm11[0]
                    zmm11[0] = zmm11[0] * zmm2[0]
            
            if (zmm8[0] <= zmm9[0] || zmm8[0] f<= result_3.d)
                zmm0 = _mm_max_ss(zmm9[0], result_3.d)
            else
                zmm0 = zmm8
            
            if (zmm13[0] <= zmm4[0] || zmm13[0] f<= result_2)
                zmm1 = _mm_max_ss(zmm4[0], result_2)
            else
                zmm1 = zmm13
            
            if (zmm0[0] f<= zmm6.d || zmm1[0] f<= zmm6.d)
                goto label_141775ebd
            
            zmm0[0] = zmm0[0] / zmm1[0]
            
            if (zmm0[0] >= zmm2[0])
                goto label_141775ebd
            
            zmm2[0] = zmm2[0] / zmm0[0]
            zmm2[0] = zmm2[0] * zmm8[0]
            zmm2[0] = zmm2[0] * zmm9[0]
            zmm2[0] = zmm2[0] f* result_3.d
            var_d8 = zmm2[0]
            float var_d4_2 = zmm2[0]
            result_1 = zmm2[0]
        
        zmm1 = zx.o(var_d8.q)
        result = result_1
        zmm9 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        result_3 = result
        var_c8.q = zmm1.q
        zmm8 = var_c8
    
    if (not(zmm3 f<= zmm6.d))
        zmm7[0] = zmm7[0] / zmm11[0]
        *arg1 = zmm7[0]
        zmm7[0] = zmm7[0] / zmm8[0]
        zmm7[0] = zmm7[0] / zmm9[0]
        zmm7[0] = zmm7[0] f/ result_3.d
        float temp0_6[0x4] = _mm_unpacklo_ps(zmm7, zmm7[0].q)
        result = zmm7[0]
        *arg3 = temp0_6.q
        arg3[2] = result

if (not(zmm6.d f>= *arg2))
    zmm7[0] = zmm7[0] / zmm14[0]
    zmm7[0] = zmm7[0] / zmm4[0]
    *arg2 = zmm7[0]
    zmm7[0] = zmm7[0] / zmm13[0]
    zmm7[0] = zmm7[0] f/ result_2
    float temp0_7[0x4] = _mm_unpacklo_ps(zmm7, zmm7[0].q)
    result = zmm7[0]
    *arg4 = temp0_7.q
    arg4[2] = result

return result
