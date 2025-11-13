// 函数: sub_14271c700
// 地址: 0x14271c700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_18 = zmm6
uint128_t zmm7
uint128_t var_28 = zmm7
uint128_t zmm8
uint128_t var_38 = zmm8
uint128_t zmm9
uint128_t var_48 = zmm9
int32_t result

if (arg2 == 0 || arg1[0x14] == 0)
    result.b = 0
else
    void* rax = *(arg2 + 0x130)
    float var_78
    float var_74
    float var_70
    int64_t var_68
    int32_t var_60
    int32_t* rax_1
    float zmm0[0x4]
    float zmm1[0x4]
    
    if (rax == 0)
        zmm0 = zx.o(data_143dbb1f8.q)
        var_60 = data_143dbb200
        rax_1 = &var_68
        var_68 = zmm0.q
    else
        zmm1 = *(rax + 0x1d0)
        rax_1 = &var_78
        var_78 = zmm1[0]
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_70 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_74 = zmm0[0]
    
    zmm6 = zx.o(*rax_1)
    int32_t rax_3 = rax_1[2]
    (*(*arg1 + 0x438))(zmm0, &var_78)
    uint64_t var_58 = zmm6.q
    zmm8.d = _mm_shuffle_ps(zmm6, zmm6, 0x55).d f- var_74
    zmm7.d = zmm6.d f- var_78
    zmm6.d = rax_3.d f- var_70
    zmm0 = zmm7
    zmm9.d = zmm8.d f* zmm8.d
    zmm0[0] = zmm0[0] f* zmm7.d
    zmm1 = zmm6
    zmm1[0] = zmm1[0] f* zmm6.d
    zmm9.d = zmm9.d f+ zmm0[0]
    zmm0 = arg1[0x17].d
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm9.d = zmm9.d f+ zmm1[0]
    
    if (zmm9.d f> zmm0[0])
        result.b = 0
    else
        float temp0_4[0x4]
        
        if (arg3 != 0)
            result = rand()
            zmm0 = arg1[0x17].d
            zmm0[0] = zmm0[0] * zmm0[0]
            temp0_4 = _mm_cvtepi32_ps(zx.o(result))
            zmm0[0] = zmm0[0] * 0.160000011f
            temp0_4[0] = temp0_4[0] * temp0_4[0]
            temp0_4[0] = temp0_4[0] * 9.31379418e-10f
            temp0_4[0] = temp0_4[0] f* zmm9.d
        
        if (arg3 != 0 && temp0_4[0] > zmm0[0])
            result.b = 0
        else
            if (not(zmm9.d f== 1f))
                if (zmm9.d f>= 9.99999994e-09f)
                    arg4 = zx.o(0)
                    arg4[0] = zmm9[0]
                    float temp0_5[0x4] = _mm_rsqrt_ss(arg4[0], arg4[0])
                    arg4[0] = arg4[0] * 0.5f
                    temp0_5[0] = temp0_5[0] * temp0_5[0]
                    arg4[0] = arg4[0] * temp0_5[0]
                    arg5 = 0.5f - arg4[0]
                    temp0_5[0] = temp0_5[0] * arg5
                    temp0_5[0] = temp0_5[0] + temp0_5[0]
                    temp0_5[0] = temp0_5[0] * temp0_5[0]
                    arg4[0] = arg4[0] * temp0_5[0]
                    temp0_5[0] = temp0_5[0] * (0.5f - arg4[0])
                    temp0_5[0] = temp0_5[0] + temp0_5[0]
                    zmm7.d = zmm7.d f* temp0_5[0]
                    zmm8.d = zmm8.d f* temp0_5[0]
                    zmm6.d = zmm6.d f* temp0_5[0]
                else
                    data_143dbb1f8
                    data_143dbb1fc
                    data_143dbb200
            
            result, zmm6, zmm7, zmm8 =
                sub_140ae4210((*(*arg1 + 0x440))(arg1, &var_58, arg5, arg4), &var_68)
            zmm7.d = zmm7.d f* var_68.d
            zmm8.d = zmm8.d f* var_68:4.d
            zmm6.d = zmm6.d f* var_60
            zmm7.d = zmm7.d f+ zmm8.d
            zmm7.d = zmm7.d f+ zmm6.d
            result.b = zmm7.d f>= *(arg1 + 0xf4)

return result
