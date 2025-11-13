// 函数: sub_1422a6190
// 地址: 0x1422a6190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1b20)
void var_1b48
int64_t rax_1 = __security_cookie ^ &var_1b48
char* result = *arg1

if (*result != 0)
    void* i = arg1[2]
    int32_t zmm2 = data_143dbb1f8
    int32_t zmm3 = data_143dbb1fc
    int32_t zmm4 = data_143dbb200
    int128_t zmm8
    zmm8.d = (*arg2).d f- arg1[3].d
    int128_t zmm9
    zmm9.d = (*(arg2 + 4)).d f- *(arg1 + 0x1c)
    int32_t var_1b0c_1 = 0
    float var_1b18[0x4]
    float zmm0[0x4] = var_1b18
    zmm0[0] = zmm8.d
    int32_t var_1afc_1 = 0
    float var_1b08[0x4]
    var_1b08[0] = zmm2
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
    float temp0_2[0x4] = _mm_shuffle_ps(var_1b08, var_1b08, 0xe1)
    temp0_1[0] = zmm9.d
    temp0_2[0] = zmm3
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
    temp0_4[0] = zmm4
    int128_t zmm10
    zmm10.d = (*(arg2 + 8)).d f- arg1[4].d
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
    float var_19e8_1[0x4] = temp0_5
    temp0_3[0] = zmm10.d
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
    float var_19f8[0x4] = temp0_6
    var_1b18 = temp0_6
    float var_19c8_1[0x4] = *(i + 0x60)
    float var_19b8_1[0x4] = *(i + 0x70)
    int64_t var_d8_1 = 0
    int32_t var_c8_1 = 0
    int32_t var_b0_1 = 0
    float var_19a8_1[0x4] = *(i + 0x80)
    int32_t var_c4_1 = 0x63
    sub_1422a7cd0(&var_19f8)
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    int32_t zmm8_1
    result, zmm6_1, zmm7_1, zmm8_1 = sub_14228fab0(&var_19f8)
    
    if (i != 0)
        float var_58_1[0x4] = zmm7_1
        zmm7_1 = 0x3f800000
        float var_48_1[0x4] = zmm6_1
        
        do
            int64_t rsi_1 = sx.q(var_b0_1)
            float (* rdi_2)[0x4] = rsi_1 * 0xb0 + *i
            float zmm1_1[0x4] = *rdi_2
            float zmm2_1[0x4] = (*rdi_2)[1]
            zmm1_1[0] = zmm1_1[0] f- zmm8_1
            float zmm0_1 = (*rdi_2)[2]
            zmm2_1[0] = zmm2_1[0] f- zmm9.d
            float zmm3_1 = (*rdi_2)[3]
            zmm0_1 = zmm0_1 f- zmm10.d
            zmm3_1 = zmm3_1 * zmm3_1
            zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
            zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm0_1 * zmm0_1
            
            if (not(zmm2_1[0] >= zmm3_1))
                zmm7_1[0] = zmm7_1[0] / zmm3_1
                zmm7_1[0] = zmm7_1[0] - zmm7_1[0] * zmm2_1[0]
                zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                float var_1b28_1 = zmm7_1[0]
                float var_1a88[0x4]
                memset(&var_1a88, 0, 0x90)
                zmm2_1 = var_1b28_1
                float temp0_7[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                int64_t var_1ab8
                __builtin_memset(&var_1ab8, 0, 0x30)
                int64_t j_6 = 3
                void* rax_3 = &rdi_2[1]
                float zmm0_2[0x4]
                int64_t j
                
                do
                    zmm0_2 = *rax_3
                    rax_3 += 0x10
                    *(&var_1ab8 - &rdi_2[1] + rax_3 - 0x10) = _mm_mul_ps(zmm0_2, temp0_7)
                    j = j_6
                    j_6 -= 1
                while (j != 1)
                var_1a88 = var_1ab8.o
                __builtin_memset(&var_1b18, 0, 0x30)
                int64_t j_7 = 3
                float (* rax_4)[0x4] = &var_1b18
                int64_t var_1a98
                float var_1a68_1[0x4] = var_1a98.o
                int64_t var_1aa8
                float var_1a78_1[0x4] = var_1aa8.o
                int64_t j_1
                
                do
                    zmm0_2 = *(&rdi_2[1] - &var_1b18 + rax_4 + 0x30)
                    rax_4 = &rax_4[1]
                    rax_4[-1] = _mm_mul_ps(zmm0_2, temp0_7)
                    j_1 = j_7
                    j_7 -= 1
                while (j_1 != 1)
                float var_1a58[0x4] = var_1b18
                int64_t j_8 = 3
                int64_t var_1ae8
                __builtin_memset(&var_1ae8, 0, 0x30)
                int64_t* rax_5 = &var_1ae8
                int64_t var_1af8
                float var_1a38_1[0x4] = var_1af8.o
                float var_1a48_1[0x4] = temp0_5
                int64_t j_2
                
                do
                    zmm0_2 = *(&rdi_2[1] - &var_1ae8 + rax_5 + 0x60)
                    rax_5 = &rax_5[2]
                    *(rax_5 - 0x10) = _mm_mul_ps(zmm0_2, temp0_7)
                    j_2 = j_8
                    j_8 -= 1
                while (j_2 != 1)
                float (* rax_6)[0x4] = arg5
                float var_1a28[0x4] = var_1ae8.o
                int64_t j_9 = 3
                int64_t var_1ac8
                float var_1a08_1[0x4] = var_1ac8.o
                int64_t var_1ad8
                float var_1a18_1[0x4] = var_1ad8.o
                int64_t j_3
                
                do
                    *rax_6 = __addps_xmmps_memps(*(&var_1a88 - arg5 + rax_6), *rax_6)
                    rax_6 = &rax_6[1]
                    j_3 = j_9
                    j_9 -= 1
                while (j_3 != 1)
                float* rax_7 = &arg5[3]
                int64_t j_10 = 3
                void* rdx_4 = &var_1a58 - rax_7
                int64_t j_4
                
                do
                    *rax_7 = __addps_xmmps_memps(*(rdx_4 + rax_7), *rax_7)
                    rax_7 = &rax_7[4]
                    j_4 = j_10
                    j_10 -= 1
                while (j_4 != 1)
                float (* rax_8)[0x4] = &arg5[6]
                int64_t j_11 = 3
                void* rdx_5 = &var_1a28 - rax_8
                int64_t j_5
                
                do
                    *rax_8 = __addps_xmmps_memps(*(rax_8 + rdx_5), *rax_8)
                    rax_8 = &rax_8[1]
                    j_5 = j_11
                    j_11 -= 1
                while (j_5 != 1)
                zmm0_2 = zx.o(0)
                zmm1_1 = zx.o(0)
                zmm2_1 = zx.o(0)
                zmm0_2[0] = float.s(zx.d(*(rdi_2 + 0xa2)))
                zmm1_1[0] = float.s(zx.d(*(rdi_2 + 0xa1)))
                uint32_t rax_11 = zx.d(rdi_2[0xa][0].b)
                zmm0_2[0] = zmm0_2[0] * 0.00392156886f
                zmm2_1[0] = float.s(rax_11)
                zmm0_2[0] = zmm0_2[0] + zmm0_2[0]
                zmm1_1[0] = zmm1_1[0] * 0.00392156886f
                zmm2_1[0] = zmm2_1[0] * 0.00392156886f
                zmm1_1[0] = zmm1_1[0] + zmm1_1[0]
                zmm0_2[0] = zmm0_2[0] - zmm7_1[0]
                zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
                zmm1_1[0] = zmm1_1[0] - zmm7_1[0]
                zmm0_2[0] = zmm0_2[0] * zmm7_1[0]
                zmm2_1[0] = zmm2_1[0] - zmm7_1[0]
                zmm0_2[0] = zmm0_2[0] f+ *arg6
                zmm1_1[0] = zmm1_1[0] * zmm7_1[0]
                zmm2_1[0] = zmm2_1[0] * zmm7_1[0]
                zmm1_1[0] = zmm1_1[0] f+ arg6[1]
                *arg6 = zmm0_2[0]
                zmm2_1[0] = zmm2_1[0] f+ arg6[2]
                arg6[1] = zmm1_1[0]
                arg6[2] = zmm2_1[0]
                zmm7_1[0] = zmm7_1[0] * (*rdi_2)[0x29]
                zmm7_1[0] = zmm7_1[0] + *arg4
                *arg4 = zmm7_1[0]
                zmm7_1[0] = zmm7_1[0] + *arg3
                *arg3 = zmm7_1[0]
            
            var_b0_1 = rsi_1.d + 1
            result, zmm7_1, zmm8_1 = sub_14228fab0(&var_19f8)
        while (i != 0)
    
    if (var_d8_1 != 0)
        result = sub_140a74f90(var_d8_1)

__security_check_cookie(rax_1 ^ &var_1b48)
return result
