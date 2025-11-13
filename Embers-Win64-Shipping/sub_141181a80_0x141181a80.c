// 函数: sub_141181a80
// 地址: 0x141181a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5b8
int64_t rax_1 = __security_cookie ^ &var_5b8
char var_598 = arg4
bool cond:0 = arg5[3].q == 0
float (* result)[0x4] = arg5[4].q
float (* result_1)[0x4] = result

if (not(cond:0))
    int32_t r12_1 = arg5[5].d
    
    if (r12_1 != 0)
        uint128_t zmm8 = *(arg2 + 0x1598)
        int64_t* rdx = *(arg1 + 8)
        int64_t rax_2 = zmm8.q
        int64_t rcx = _mm_bsrli_si128(zmm8, 8).q
        int32_t rbx_2 = rcx.d - rax_2.d
        uint32_t var_584_1 = (rcx u>> 0x20).d - (rax_2 u>> 0x20).d
        float (* result_3)[0x4] = sub_14081d830(0x120, rdx, 1, 0)
        float (* result_2)[0x4] = result_3
        
        if (result_3 == 0)
            result_2 = nullptr
        else
            __builtin_memset(&result_3[7], 0, 0x20)
            sub_14117af20(&result_3[9])
        
        memset(result_2, 0, 0x120)
        float zmm1_1[0x4] = *arg5
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
        float temp0_3[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
        float temp0_4[0x4] = _mm_mul_ps(temp0_3, zmm1_1)
        float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x29), temp0_2)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
        float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x12), temp0_7)
        zmm1_1 = arg5[2]
        float temp0_12[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_4, temp0_4, 1))
        float temp0_13[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
        float zmm4_1[0x4] = data_143e6c860
        float temp0_14[0x4] = _mm_add_ps(temp0_10, temp0_6)
        float temp0_15[0x4] = _mm_sub_ps(temp0_6, temp0_10)
        float temp0_16[0x4] = _mm_mul_ps(temp0_14, zmm1_1)
        float temp0_17[0x4] = _mm_mul_ps(temp0_13, temp0_15)
        float zmm2[0x4] =
            __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4_1, temp0_12), zmm1_1), data_143e6c870)
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, zmm2, 0x32)
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_17, zmm2, 0x10)
        float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2, 0), temp0_21, 0x82)
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_22, _mm_shuffle_ps(temp0_16, zmm2, 0x31), 0x88)
        float zmm0_1[0x4] = arg5[1]
        *result_2 = temp0_24
        result_2[1] = temp0_26
        zmm4_1[0].q = zmm0_1 u>> 0x40
        float temp0_27[0x4] = _mm_shuffle_ps(zmm0_1, zmm4_1, 0xc4)
        int64_t rbx_3 = rbx_2.q
        result_2[2] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, temp0_17, 0x12), zmm2, 0xe8)
        result_2[3] = temp0_27
        (*result_2)[0x17] = arg3
        float temp0_30[0x4] = _mm_cvtepi32_ps(zx.o((rbx_3 u>> 0x20).d))
        float temp0_31[0x4] = _mm_cvtepi32_ps(zx.o(rbx_2))
        (*result_2)[0x1b] = temp0_30[0]
        (*result_2)[0x1a] = temp0_31[0]
        float rax_7
        rax_7.b = data_143e6a69c != 0
        (*result_2)[0x16] = rax_7
        result_2[4][0] = *(arg5 + 0x54)
        (*result_2)[0x11] = *(arg5 + 0x58)
        (*result_2)[0x12] = arg5[6].d
        (*result_2)[0x13] = *(arg5 + 0x5c)
        result_2[5][0] = *(arg5 + 0x4c)
        (*result_2)[0x15] = *(arg5 + 0x48)
        result_2[7][0].q = arg5[4].q
        *(result_2 + 0x78) = arg5[3].q
        result_2[8][0].q = *(arg5 + 0x38)
        result_2[6][0] = *(arg5 + 0x64)
        sub_1405d16e0(&(*result_2)[0x22], *(arg2 + 0x10))
        int16_t var_580_1 = 1
        char var_57e_1 = 0
        int32_t var_57c_1 = 0xffffffff
        int32_t var_588_1
        var_588_1.q = *arg6
        result_2[9] = var_588_1.o
        var_588_1.q = *arg7
        var_580_1.b = var_598 + 1
        var_580_1 = 0
        int32_t r9
        r9.b = result_1 != 0
        int32_t var_57c_2 = 2
        result_2[0x11] = var_588_1.o
        sub_1419a2ec0(*(arg2 + 0x5150), &result_1, &data_143e6c660, r9)
        uint128_t zmm7 = result_1.o
        sub_1419a2ec0(*(arg2 + 0x5150), &result_1, &data_143e6c760, 0)
        int512_t zmm6_2
        zmm6_2.o = result_1.o
        int128_t var_128
        __builtin_memset(&var_128, 0, 0x20)
        void var_108
        sub_14117af20(&var_108)
        void var_198
        sub_14117b9f0(&var_198, result_2)
        int128_t var_248
        __builtin_memset(&var_248, 0, 0x20)
        void var_228
        sub_14117af20(&var_228)
        void var_2b8
        int128_t zmm6_3 = sub_14117b9f0(&var_2b8, result_2)
        void var_548
        sub_14117a7c0(&var_548, &var_198)
        void var_428
        sub_14117a7c0(&var_428, &var_2b8)
        int32_t var_2c4_1 = 0
        void*** rax_21
        char rcx_16
        rax_21, rcx_16 = sub_14081d830(0x2e0, *(arg1 + 8), 1, 0)
        void*** rbx_4 = rax_21
        
        if (rax_21 == 0)
            rbx_4 = nullptr
        else
            result_1 = result_2
            sub_14118d050(rcx_16)
            void* var_570_1 = &data_143e73980
            result_1.o = result_1.o
            sub_141992bd0(rbx_4, &var_598, &result_1, 1)
            *rbx_4 = &data_142f2c988
            rbx_4[8] = result_2
            sub_14117a6a0(&rbx_4[0xa], &var_548)
            sub_14117a6a0(&rbx_4[0x2e], &var_428)
            rbx_4[0x58] = rbx_3
            rbx_4[0x59] = arg2
            *(rbx_4 + 0x290) = zmm7
            rbx_4[0x5a].d = r12_1
            *(rbx_4 + 0x2d4) = var_2c4_1
            *(rbx_4 + 0x2a0) = zmm6_3
            *(rbx_4 + 0x2b0) = zmm8
        
        sub_1419968d0(arg1, rbx_4)
        void var_3a0
        sub_1405d1550(&var_3a0)
        void var_4c0
        sub_1405d1550(&var_4c0)
        int128_t var_238
        sub_1405d1550(&var_238:8)
        int128_t var_118
        result = sub_1405d1550(&var_118:8)

__security_check_cookie(rax_1 ^ &var_5b8)
return result
