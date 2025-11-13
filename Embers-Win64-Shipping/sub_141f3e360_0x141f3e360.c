// 函数: sub_141f3e360
// 地址: 0x141f3e360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(*(arg2 + 0x28))
uint128_t zmm6
uint128_t var_18 = zmm6
uint128_t zmm7
uint128_t var_28 = zmm7
uint128_t zmm8
uint128_t var_38 = zmm8
int32_t var_b0 = *(arg2 + 0x30)
int64_t rax_1 = *arg1
uint64_t var_b8 = zmm0.q
int32_t var_c8
(*(rax_1 + 0x4f0))(zmm0, &var_c8, &var_b8)
float zmm5[0x4] = 0x3f000000
int32_t var_c0
uint128_t zmm9 = var_c0
int32_t var_c4
uint128_t zmm10 = var_c4
uint128_t zmm11 = var_c8
char rcx
char rdx_1
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4_1

if (1f f<= *(arg1 + 0xfc) || 9.99999975e-05f f< *(arg2 + 8))
    rdx_1 = 0
label_141f3e54d:
    zmm8 = arg1[0x19].d
    zmm6 = *(arg1 + 0xc4)
    zmm7 = *(arg1 + 0xcc)
    zmm2.d = zmm6.d f* zmm6.d
    zmm0.d = zmm8.d f* zmm8.d
    zmm1.d = zmm7.d f* zmm7.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm1.d
    
    if (not(zmm2.d f!= 1f))
        zmm0 = zx.o(*(arg1 + 0xc4))
        zmm7 = *(arg1 + 0xcc)
        var_b8 = zmm0.q
        zmm6 = var_b8.d
        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    else if (zmm2.d f>= 9.99999994e-09f)
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm2[0], zmm2.d)
        zmm3.d = zmm2.d f* 0.5f
        zmm0.d = temp0_2.d f* temp0_2[0]
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = temp0_2.d f* zmm2.d
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        zmm1.d = temp0_2.d f* temp0_2[0]
        zmm3.d = zmm3.d f* zmm1.d
        zmm4_1.d = 0.5f f- zmm3.d
        zmm0.d = temp0_2.d f* zmm4_1.d
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        zmm8.d = zmm8.d f* temp0_2[0]
        zmm6.d = zmm6.d f* temp0_2[0]
        zmm7.d = zmm7.d f* temp0_2[0]
        zmm1 = zmm8
        zmm5 = 0x3f000000
    else
        zmm6 = data_143dbb1f8
        zmm1 = data_143dbb1fc
        zmm7 = data_143dbb200
    
    zmm6.d = zmm6.d f* zmm11.d
    zmm1.d = zmm1.d f* zmm10.d
    zmm7.d = zmm7.d f* zmm9.d
    zmm6.d = zmm6.d f+ zmm1.d
    zmm6.d = zmm6.d f+ zmm7.d
    
    rcx = zmm6.d f<= 0.00999999978f ? 2 : 0
else
    zmm2.d = zmm10.d f* *(arg1 + 0x104)
    rdx_1 = 1
    zmm0.d = zmm11.d f* arg1[0x20].d
    zmm1.d = zmm9.d f* arg1[0x21].d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm1.d
    
    if (zmm2.d f< 0.999845028f)
        goto label_141f3e54d
    
    rcx = 2

uint32_t result
result.b = *(arg1 + 0xf9) & 0xfd
result.b |= rcx
*(arg1 + 0xf9) = result.b

if ((result.b & 2) == 0)
    result.b = 1
else
    int128_t zmm14
    int128_t var_88_1 = zmm14
    
    if (rdx_1 != 0)
        zmm6 = *(arg1 + 0x104)
        zmm4_1 = arg1[0x20].d
        zmm3 = arg1[0x21].d
        zmm2.d = zmm4_1.d f* zmm11.d
        zmm0.d = zmm6.d f* zmm10.d
        zmm1.d = zmm3.d f* zmm9.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
    
    int32_t* var_d8
    void* var_d0
    int64_t* rax_6
    void* rdi_1
    
    if (rdx_1 == 0 || zmm2.d f> 0f)
        rdi_1 = arg1 + 0xc4
        var_d0 = arg2
        var_d8 = &var_c8
        rax_6 = (*(*arg1 + 0x490))(zmm0, zmm1, zmm2, 0x3f800000, var_d8, var_d0)
    else
        zmm0.d = zmm6.d f* zmm9.d
        zmm7.d = zmm3.d f* zmm10.d
        zmm8.d = zmm4_1.d f* zmm9.d
        zmm7.d = zmm7.d f- zmm0.d
        zmm6.d = zmm6.d f* zmm11.d
        zmm3.d = zmm3.d f* zmm11.d
        zmm4_1.d = zmm4_1.d f* zmm10.d
        zmm8.d = zmm8.d f- zmm3.d
        zmm0.d = zmm7.d f* zmm7.d
        zmm6.d = zmm6.d f- zmm4_1.d
        zmm2.d = zmm8.d f* zmm8.d
        zmm1.d = zmm6.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (not(zmm2.d f== 1f))
            if (zmm2.d f>= 9.99999994e-09f)
                zmm4_1 = zmm5
                float temp0_3[0x4] = _mm_rsqrt_ss(zmm2[0], zmm2.d)
                zmm3.d = zmm2.d f* zmm4_1.d
                zmm0.d = temp0_3.d f* temp0_3[0]
                zmm1.d = zmm3.d f* zmm0.d
                zmm2.d = zmm4_1.d f- zmm1.d
                zmm0.d = temp0_3.d f* zmm2.d
                temp0_3[0] = temp0_3[0] f+ zmm0.d
                zmm1.d = temp0_3.d f* temp0_3[0]
                zmm3.d = zmm3.d f* zmm1.d
                zmm4_1.d = zmm4_1.d f- zmm3.d
                zmm0.d = temp0_3.d f* zmm4_1.d
                temp0_3[0] = temp0_3[0] f+ zmm0.d
                zmm0.d = temp0_3.d f* zmm7.d
                zmm1.d = temp0_3.d f* zmm8.d
                temp0_3[0] = temp0_3[0] f* zmm6.d
                zmm7 = zmm0
                zmm8 = zmm1
                zmm6 = temp0_3
            else
                zmm7 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                zmm6 = data_143dbb200
        
        rdi_1 = arg1 + 0xc4
        zmm2.d = zmm8.d f* *(rdi_1 + 4)
        zmm0.d = zmm7.d f* *rdi_1
        zmm1.d = zmm6.d f* *(rdi_1 + 8)
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        zmm7.d = zmm7.d f* zmm2.d
        zmm8.d = zmm8.d f* zmm2.d
        zmm6.d = zmm6.d f* zmm2.d
        *rdi_1 = (_mm_unpacklo_ps(zmm7, zmm8.q)).q
        *(rdi_1 + 8) = zmm6.d
        zmm3 = *rdi_1
        zmm2.d = (*(rdi_1 + 4)).d f* arg3[1]
        zmm0.d = zmm3.d f* *arg3
        zmm1.d = (*(rdi_1 + 8)).d f* arg3[2]
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (not(zmm2.d f>= 0f))
            zmm2 = 0x80000000
            zmm3 ^= 0x80000000
            zmm0 = *(rdi_1 + 4) ^ 0x80000000
            zmm1 = *(rdi_1 + 8) ^ 0x80000000
            *rdi_1 = zmm3.d
            *(rdi_1 + 4) = zmm0.d
            *(rdi_1 + 8) = zmm1.d
        
        int32_t var_b0_3 = *(rdi_1 + 8)
        int64_t rax_5 = *arg1
        var_b8 = *rdi_1
        void var_a8
        rax_6 = (*(rax_5 + 0x4e0))(arg1, &var_a8, zmm2, zmm3)
    
    zmm3 = *(arg1 + 0x11c)
    *rdi_1 = *rax_6
    *(rdi_1 + 8) = rax_6[1].d
    zmm0 = *(rdi_1 + 4)
    zmm2 = *rdi_1
    zmm1 = *(rdi_1 + 8)
    zmm2.d = zmm2.d f* zmm2.d
    zmm0.d = zmm0.d f* zmm0.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm3.d = zmm3.d f* zmm3.d
    zmm2.d = zmm2.d f+ zmm1.d
    
    if (not(zmm2.d f>= zmm3.d))
        (*(*arg1 + 0x520))(arg1, arg2, zmm2, zmm3, var_d8, var_d0)
        result.b = 0
    else if (9.99999975e-05f f>= *arg4)
        result.b = 1
    else if ((*(*arg1 + 0x558))(arg1, arg2, arg4, zmm3, var_d8, var_d0).b == 0)
        result.b = 0
    else
        result.b = 1

return result
