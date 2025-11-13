// 函数: sub_1411813e0
// 地址: 0x1411813e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_608
int64_t rax_1 = __security_cookie ^ &var_608
int32_t r13 = 0
char var_5e8 = arg3
void* var_5d8 = arg2
int32_t* var_5b8 = arg1

if (arg4 == 0)
    r13 = 2

uint64_t result = zx.q(arg7[7].d)
int32_t var_5c8 = result.d

if (result.d != 0)
    result = sx.q(arg6)
    
    if (result.d s>= 0 && result.d s< arg7[4].d && result.d s< arg7[6].d)
        int64_t rcx
        uint64_t result_1
        
        if (arg4 != 0)
            rcx = arg7[3]
            result_1 = result
        label_1411814a6:
            int64_t r14_1 = result_1 * 0x58
            
            if (*(rcx + r14_1 + 0x20) != 0 && *(rcx + r14_1 + 0x28) != 0
                    && *(rcx + r14_1 + 0x30) != 0)
                result = arg7[5]
                int64_t r15_1 = result_1 * 0x38
                
                if (*(result + r15_1 + 0x10) != 0 && *(result + r15_1 + 0x18) != 0
                        && *(result + r15_1 + 0x20) != 0)
                    int64_t* rdx = *(arg1 + 8)
                    uint128_t zmm8 = *(arg2 + 0x1598)
                    int64_t rax_2 = zmm8.q
                    int64_t rcx_1 = _mm_bsrli_si128(zmm8, 8).q
                    int32_t rbx_2 = rcx_1.d - rax_2.d
                    uint32_t var_5a4_1 = (rcx_1 u>> 0x20).d - (rax_2 u>> 0x20).d
                    int32_t* rax_4 = sub_14081d830(0x130, rdx, 1, 0)
                    int32_t* rdi_1 = rax_4
                    
                    if (rax_4 == 0)
                        rdi_1 = nullptr
                    else
                        __builtin_memset(&rdi_1[0x14], 0, 0x50)
                        sub_14117af20(&rdi_1[0x28])
                    
                    memset(&rdi_1[2], 0, 0x128)
                    int64_t rbx_3 = rbx_2.q
                    *rdi_1 = _mm_cvtepi32_ps(zx.o(rbx_2)).d
                    rdi_1[1] = _mm_cvtepi32_ps(zx.o((rbx_3 u>> 0x20).d))[0]
                    rdi_1[2] = arg7[7].d
                    uint128_t zmm1_1 = *(arg7 + 0x40)
                    uint128_t zmm3 = _mm_add_ps(zmm1_1, zmm1_1)
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                    int32_t rax_8
                    rax_8.b = arg5 == 1
                    uint128_t zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), temp0_5)
                    uint128_t zmm4_1 = _mm_mul_ps(zmm3, zmm1_1)
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1_1)
                    zmm1_1 = *(arg7 + 0x60)
                    float temp0_12[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a)
                    uint128_t zmm5_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
                    float temp0_15[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                    zmm4_1 = data_143e6c860
                    float temp0_16[0x4] = _mm_add_ps(zmm3, zmm2)
                    zmm2 = _mm_sub_ps(zmm2, zmm3)
                    float temp0_18[0x4] = _mm_mul_ps(temp0_16, zmm1_1)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                    zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4_1, temp0_15), zmm1_1), 
                        data_143e6c870)
                    float temp0_23[0x4] = _mm_shuffle_ps(zmm5_1, zmm2, 0x32)
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm2, 0), temp0_23, 0x82)
                    float temp0_26[0x4] = _mm_shuffle_ps(temp0_18, zmm2, 0x31)
                    zmm1_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm2, 0x10), temp0_26, 0x88)
                    float zmm0_1[0x4] = *(arg7 + 0x50)
                    zmm4_1.q = zmm0_1 u>> 0x40
                    float temp0_30[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm5_1, 0x12), zmm2, 0xe8)
                    float temp0_31[0x4] = _mm_shuffle_ps(zmm0_1, zmm4_1, 0xc4)
                    rdi_1[3] = rax_8
                    *(rdi_1 + 0x10) = zmm3
                    *(rdi_1 + 0x20) = zmm1_1
                    *(rdi_1 + 0x30) = temp0_30
                    *(rdi_1 + 0x40) = temp0_31
                    
                    if (arg4 == 0)
                        *(rdi_1 + 0x80) = *arg7
                        *(rdi_1 + 0x88) = arg7[1]
                        *(rdi_1 + 0x90) = *(*(arg7[3] + r14_1 + 0x18) + 0x10)
                    
                    *(rdi_1 + 0x50) = *(*(arg7[3] + r14_1 + 0x20) + 0x10)
                    *(rdi_1 + 0x58) = *(*(arg7[3] + r14_1 + 0x28) + 0x10)
                    *(rdi_1 + 0x60) = *(*(arg7[3] + r14_1 + 0x30) + 0x10)
                    *(rdi_1 + 0x68) = *(*(arg7[5] + r15_1 + 0x10) + 0x10)
                    *(rdi_1 + 0x70) = *(*(arg7[5] + r15_1 + 0x18) + 0x10)
                    void* rsi_1 = var_5d8
                    *(rdi_1 + 0x78) = *(*(arg7[5] + r15_1 + 0x20) + 0x10)
                    sub_1405d16e0(&rdi_1[0x26], *(rsi_1 + 0x10))
                    var_5d8 = arg8
                    int16_t var_5d0_1 = 1
                    char var_5ce_1 = 0
                    int32_t var_5cc_1 = 0xffffffff
                    int128_t zmm0_2 = var_5d8.o
                    var_5d8 = arg9
                    char rax_27 = var_5e8
                    *(rdi_1 + 0xa0) = zmm0_2
                    var_5d0_1.b = rax_27 + 1
                    var_5d0_1 = 0
                    int32_t var_5cc_2 = 2
                    int32_t r9_1
                    r9_1.b = arg4 != 0
                    *(rdi_1 + 0x120) = var_5d8.o
                    sub_1419a2ec0(*(rsi_1 + 0x5150), &var_5d8, &data_143e6c880, r9_1)
                    uint128_t zmm7 = var_5d8.o
                    sub_1419a2ec0(*(rsi_1 + 0x5150), &var_5d8, &data_143e6c980, 0)
                    int512_t zmm6_2
                    zmm6_2.o = var_5d8.o
                    int128_t var_158
                    __builtin_memset(&var_158, 0, 0x50)
                    void var_108
                    sub_14117af20(&var_108)
                    void var_1a8
                    sub_14117b8b0(&var_1a8, rdi_1)
                    int128_t var_288
                    __builtin_memset(&var_288, 0, 0x50)
                    void var_238
                    sub_14117af20(&var_238)
                    void var_2d8
                    int128_t zmm6_3 = sub_14117b8b0(&var_2d8, rdi_1)
                    void var_588
                    sub_14117a570(&var_588, &var_1a8)
                    void var_458
                    sub_14117a570(&var_458, &var_2d8)
                    int32_t* rsi_2 = var_5b8
                    void*** rax_29
                    char rcx_22
                    rax_29, rcx_22 = sub_14081d830(0x300, *(rsi_2 + 8), 1, 0)
                    void*** rbx_4 = rax_29
                    
                    if (rax_29 == 0)
                        rbx_4 = nullptr
                    else
                        var_5b8 = rdi_1
                        sub_14118cee0(rcx_22)
                        void* var_5b0_1 = &data_143e73af0
                        var_5b8.o = var_5b8.o
                        sub_141992bd0(rbx_4, &var_5e8, &var_5b8, 1)
                        *rbx_4 = &data_142f2c998
                        rbx_4[8] = rdi_1
                        sub_14117a440(&rbx_4[0xa], &var_588)
                        sub_14117a440(&rbx_4[0x30], &var_458)
                        rbx_4[0x5c] = rbx_3
                        rbx_4[0x5d] = rsi_1
                        *(rbx_4 + 0x2b0) = zmm7
                        rbx_4[0x5e].d = var_5c8
                        *(rbx_4 + 0x2f4) = r13
                        *(rbx_4 + 0x2c0) = zmm6_3
                        *(rbx_4 + 0x2d0) = zmm8
                    
                    sub_1419968d0(rsi_2, rbx_4)
                    void var_3c0
                    sub_1405d1550(&var_3c0)
                    void var_4f0
                    sub_1405d1550(&var_4f0)
                    int128_t var_248
                    sub_1405d1550(&var_248:8)
                    int128_t var_118
                    result = sub_1405d1550(&var_118:8)
        else if (*arg7 != 0 && arg7[1] != 0)
            rcx = arg7[3]
            result_1 = result
            result *= 0x58
            
            if (*(result + rcx + 0x18) != 0)
                goto label_1411814a6

__security_check_cookie(rax_1 ^ &var_608)
return result
