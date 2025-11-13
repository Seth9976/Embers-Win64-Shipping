// 函数: sub_142601530
// 地址: 0x142601530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t result = __security_cookie ^ &var_108
int64_t result_1 = result

if (*(arg1 + 0x260) != 0)
    uint128_t zmm1
    zmm1.d = (*(arg2 + 0x10)).d f* *(arg2 + 0x1c)
    int32_t rax_1 = sub_141e8d410(arg1, zmm1.d, 0)
    int32_t rax_2 = sub_141e8d410(arg1, (*(arg2 + 0x20)).d, 0xffffffd3)
    int128_t zmm9 = *(arg2 + 0x24)
    uint128_t zmm7 = *(arg2 + 0x28)
    int32_t rax_3 = sub_141e8d410(arg1, (*(arg2 + 0x2c)).d, 0x3e8)
    float zmm6[0x4] = *(arg2 + 0x30)
    int32_t rax_4 = sub_141e8d410(arg1, (*(arg2 + 0x34)).d, 0x7d0)
    int128_t zmm8 = *(arg2 + 0x38)
    int128_t zmm10 = *(arg2 + 0x18)
    int128_t zmm13
    zmm13.d = (*(arg2 + 0x14)).d f* 100f
    int32_t var_cf_1 = 0x1b060605
    char var_cb_1 = 0x1b
    int32_t var_a8_1 = 0x42c80000
    char var_c7_1 = 4
    char var_c5_1 = 6
    uint128_t zmm0_1
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_1)).d f* 0.00999999978f
    int32_t var_c0_1 = zmm0_1.d
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f* 0.00999999978f
    int32_t var_bc_1 = zmm0_1.d
    uint128_t zmm0_2 = log10f(zmm7.d)
    
    if (zmm7.d f< 1f)
        zmm0_2.d = zmm0_2.d f* 4f
        char var_c8_4 = 8
        int32_t rcx_3 = int.d(zmm0_2.d)
        
        if (rcx_3 s< 0xfffffff8)
            rcx_3 = -8
        
        if (rcx_3 s>= 0)
            char var_c6_3 = 8
        else
            rcx_3.b += 8
            char var_c6_2 = rcx_3.b
        
        int32_t var_b0_2 = zmm9.d
    else
        zmm0_2.d = zmm0_2.d f* -4f
        int32_t rax_5 = int.d(zmm0_2.d)
        
        if (rax_5 s< 0xfffffff8)
            char var_c8_1 = 0
        else if (rax_5 s>= 0)
            char var_c8_3 = 8
        else
            rax_5.b += 8
            char var_c8_2 = rax_5.b
        
        zmm7.d = zmm7.d f* zmm9.d
        char var_c6_1 = 8
        int32_t var_b0_1 = zmm7.d
    
    zmm6[0] = zmm6[0] * 1000f
    
    if (zmm6[0] < 300f)
        zmm6 = __maxss_xmmss_memss(zmm6[0], 0x3f800000)
    else
        zmm6 = 0x43958000
    
    zmm8.d = zmm8.d f* 1000f
    int32_t var_d4_1 = (int.q(zmm6[0])).d
    
    if (not(zmm8.d f< 85f))
        zmm8 = 0x42a80000
    
    int64_t* rcx_4 = *(arg1 + 0x260)
    zmm10.d = zmm10.d f* 15f
    int32_t var_d8 = 0x42c80000
    int32_t var_e8_1 = 0
    int32_t var_ac_1 = zmm13.d
    char var_d0_1 = (int.d(zmm8.d)).b
    char rax_8 = (int.d(zmm10.d)).b
    char var_ca_1 = rax_8
    char var_c9_1 = rax_8
    int64_t* rax_9 = *(arg1 + 0x230)
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f* 0.00999999978f
    int32_t var_b8_1 = zmm0_2.d
    int32_t var_c4_1 = 0x44fa0000
    zmm1.d = _mm_cvtepi32_ps(zx.o(rax_4)).d f* 0.00999999978f
    int32_t var_b4_1 = zmm1.d
    int64_t rbx_2 = *rax_9
    int32_t rax_11 = (*(*rcx_4 + 0x30))(0x44fa0000, 0, &var_d8, 0x34, var_e8_1)
    result = (*(rbx_2 + 0xa8))(*(arg1 + 0x230), u"SetEffectParameters (Reverb)", zx.q(rax_11))

__security_check_cookie(result_1 ^ &var_108)
return result
