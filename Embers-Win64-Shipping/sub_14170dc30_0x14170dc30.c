// 函数: sub_14170dc30
// 地址: 0x14170dc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int32_t* var_58 = __security_cookie ^ &var_148
int32_t* rdx = *arg1
float* rdi = arg3
int32_t* result

if (0f f!= *rdx)
    int32_t zmm5 = *(arg3 + 8)
    float zmm2[0x4] = *arg4
    float (* rcx)[0x4] = arg1[1]
    int32_t var_f0_1 = 0
    int128_t zmm6 = *(arg3 + 4)
    int64_t zmm1
    zmm1.d = (*(arg4 + 4)).d f- zmm6.d
    int128_t zmm7 = *arg3
    float zmm4[0x4] = *arg5
    zmm2[0] = zmm2[0] f- zmm7.d
    float zmm0[0x4] = *(arg5 + 8)
    zmm4[0] = zmm4[0] f- zmm7.d
    float zmm3[0x4] = *(arg5 + 4)
    zmm0[0] = zmm0[0] f- zmm5
    zmm3[0] = zmm3[0] f- zmm6.d
    int32_t var_d0_1 = 0
    int32_t var_a8_1 = 0
    float var_e0_1 = zmm0[0]
    zmm0 = *(arg4 + 8)
    zmm0[0] = zmm0[0] f- zmm5
    float var_b8_1 = zmm0[0]
    float var_9c_1 = var_b8_1
    float var_90_1 = var_e0_1
    int64_t var_b0 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int64_t var_a4_1 = (_mm_unpacklo_ps(zmm2, zmm1)).q
    int32_t var_e8
    int32_t* var_f8_1 = &var_e8
    int64_t var_98_1 = (_mm_unpacklo_ps(zmm4, zmm3[0].q)).q
    zmm4 = *(rdx + 0x40)
    float var_88[0x4] = *(rdx + 0x30)
    zmm4[0] = zmm4[0] f- zmm7.d
    zmm0 = data_14399f670
    float temp0_4[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    temp0_4[0] = temp0_4[0] f- zmm6.d
    float temp0_5[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
    temp0_5[0] = temp0_5[0] f- zmm5
    int64_t var_e4_1 = 0
    float temp0_6[0x4] = _mm_unpacklo_ps(temp0_4, 0)
    float temp0_8[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, temp0_5[0].q), temp0_6[0].q)
    zmm2 = data_14399f66c
    float var_78_1[0x4] = temp0_8
    float temp0_9[0x4] = _mm_unpacklo_ps(data_14399f668, zmm0[0].q)
    var_e8 = 0x3f800000
    float var_68_1[0x4] = _mm_unpacklo_ps(temp0_9, _mm_unpacklo_ps(zmm2, 0)[0].q)
    int64_t var_d8
    float var_c8
    int32_t var_c0
    float zmm8_1
    result, zmm8_1 = sub_1416752a0(&var_b0, *(rdx + 0x60), &var_88, *(rdx + 0x68), (*rcx)[0], 
        &var_c8, &var_c0, &var_d8, rdx[0x1c][0].b, rdx[0x1d].b)
    
    if (result.b == 0)
        result.b = 1
    else
        int32_t* r8_1 = *arg1
        float zmm3_1 = var_c8
        
        if (zmm3_1 f>= *r8_1)
            result.b = 1
        else
            int32_t temp0_12
            int32_t temp1_1
            temp0_12:temp1_1 = sx.q(arg2)
            int32_t rax_7 = (temp1_1 - temp0_12) s>> 1
            int64_t rcx_2 = sx.q(rax_7)
            void* rax_8
            
            if (rax_7 s>= 0)
                rax_8 = *(r8_1 + 0x20)
            
            if (rax_7 s< 0 || rcx_2.d s>= *(rax_8 + 0x18) || *(rcx_2 + *(rax_8 + 0x10)) != 0xff)
                uint128_t zmm2_1 = var_c0
                *(r8_1 + 0x10) = var_d8
                r8_1[6] = var_d0_1
                uint128_t zmm0_1
                zmm0_1.d = var_b8_1.d f+ rdi[2]
                zmm2_1.d = zmm2_1.d f+ *rdi
                int32_t var_bc
                int64_t zmm1_1
                zmm1_1.d = var_bc.d f+ rdi[1]
                void* rcx_3 = *arg1
                int32_t var_d0_2 = zmm0_1.d
                *(rcx_3 + 4) = (_mm_unpacklo_ps(zmm2_1, zmm1_1)).q
                *(rcx_3 + 0xc) = var_d0_2
                **arg1 = zmm3_1
                *(*arg1 + 0x1c) = arg2
                
                if (zmm3_1 > zmm8_1)
                    *arg1[1] = zmm3_1
                    result.b = 1
                else
                    uint128_t zmm5_1
                    zmm5_1.d = (*(arg5 + 4)).d f- rdi[1]
                    zmm2_1.d = (*(arg5 + 8)).d f- rdi[2]
                    zmm3_1 = *(arg4 + 8) - rdi[2]
                    int64_t zmm6_1
                    zmm6_1.d = (*arg5).d f- *rdi
                    float zmm7_1 = *(arg4 + 4) - rdi[1]
                    zmm8_1 = *arg4 - *rdi
                    zmm0_1.d = zmm5_1.d f* zmm3_1
                    uint128_t zmm4_1
                    zmm4_1.d = zmm2_1.d f* zmm7_1
                    zmm1_1.d = zmm6_1.d f* zmm3_1
                    zmm4_1.d = zmm4_1.d f- zmm0_1.d
                    zmm2_1.d = zmm2_1.d f* zmm8_1
                    zmm5_1.d = zmm5_1.d f* zmm8_1
                    zmm1_1.d = zmm1_1.d f- zmm2_1.d
                    zmm6_1.d = zmm6_1.d f* zmm7_1
                    zmm5_1.d = zmm5_1.d f- zmm6_1.d
                    var_e8.q = (_mm_unpacklo_ps(zmm4_1, zmm1_1)).q
                    int32_t var_d0_3 = zmm5_1.d
                    sub_141750780(&var_e8)
                    void* rcx_5 = *arg1
                    *(rcx_5 + 0x10) = var_e8.q
                    *(rcx_5 + 0x18) = var_d0_3
                    *arg1[1] = 0
                    result.b = 0
            else
                result.b = 1
else
    result.b = 0

__security_check_cookie(var_58 ^ &var_148)
return result
