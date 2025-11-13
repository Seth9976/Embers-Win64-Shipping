// 函数: sub_14207da00
// 地址: 0x14207da00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
uint64_t var_e8 = __security_cookie ^ &var_198
int64_t r12 = sx.q(arg2)
int128_t* rdi = arg4
uint64_t result

if (arg2 s>= 0)
    result = zx.q(arg1[0x94].d)

if (arg2 s< 0 || r12.d s>= result.d || arg3 - 1 + r12.d s< 0 || arg3 - 1 + r12.d s>= result.d)
    result.b = 0
else
    int64_t i_1 = sx.q(arg3)
    
    if (arg3 s> 0)
        int32_t rsi_1 = r12.d
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int128_t zmm8
        int128_t var_68_1 = zmm8
        int128_t zmm9
        int128_t var_78_1 = zmm9
        int128_t zmm10
        int128_t var_88_1 = zmm10
        int128_t zmm11
        int128_t var_98_1 = zmm11
        int128_t zmm12
        int128_t var_a8_1 = zmm12
        int128_t zmm13
        int128_t var_b8_1 = zmm13
        int128_t zmm14
        int128_t var_c8_1 = zmm14
        int128_t zmm15
        int128_t var_d8_1 = zmm15
        int64_t i
        
        do
            void* rdx_2 = arg1[0x93] + (r12 << 6) - arg4 + rdi
            *rdx_2 = *rdi
            *(rdx_2 + 0x10) = rdi[1]
            *(rdx_2 + 0x20) = rdi[2]
            *(rdx_2 + 0x30) = rdi[3]
            
            if ((arg1[0x11].b & 4) != 0)
                float var_178[0x4]
                sub_1407c8dd0(&var_178, rdx_2)
                float zmm13_1[0x4] = data_143f47560
                float zmm7_1[0x4] = *(arg1 + 0x1e0)
                float zmm14_1[0x4] = data_143f47880
                uint32_t zmm15_1[0x4] = data_143f47570
                float zmm6_1[0x4] = *(arg1 + 0x1c0)
                zmm13_1[0].q = zx.o(0) u>> 0x40
                float var_118[0x4] = _mm_shuffle_ps(zx.o(0), zmm13_1, 0xc4)
                int128_t var_108_1 = zx.o(0)
                float var_f8_1[0x4] = _mm_and_ps(zmm13_1, zmm15_1)
                float var_158[0x4]
                float var_168[0x4]
                float zmm0_1[0x4]
                float zmm1_1[0x4]
                float zmm2_1[0x4]
                float zmm3_1[0x4]
                float zmm4_1[0x4]
                float zmm5_1[0x4]
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_158, zmm7_1), zmm14_1, 1)) == 0)
                    zmm2_1 = var_178
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), 
                        _mm_shuffle_ps(zmm6_1, zmm6_1, 0))
                    zmm0_1 = zmm2_1
                    zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
                    zmm4_1 = _mm_mul_ps(var_168, zmm7_1)
                    zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f47840)
                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
                    zmm5_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm5_1)
                    float zmm12_1[0x4] = _mm_mul_ps(var_158, zmm7_1)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
                    zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55))
                    zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa))
                    zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f47830)
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                    zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f47820)
                    float var_f8_3[0x4] = zmm12_1
                    zmm3_1 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_1), zmm2_1)
                    zmm2_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm2_1)
                    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
                    var_118 = zmm3_1
                    zmm3_1 =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2), zmm6_1), zmm0_1)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm3_1)
                    zmm1_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
                    zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm6_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm2_1)
                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm5_1)
                    float var_108_3[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(zmm1_1, zmm0_1), _mm_add_ps(zmm3_1, zmm4_1)), 
                        *(arg1 + 0x1d0))
                else
                    float zmm8_1[0x4] = *(arg1 + 0x1d0)
                    zmm1_1 = _mm_add_ps(zmm6_1, zmm6_1)
                    zmm3_1 = zmm6_1
                    zmm2_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
                    zmm4_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
                    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm1_1)
                    zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                    zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a)
                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm1_1)
                    zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                    zmm5_1 = _mm_shuffle_ps(var_158, var_158, 0xc9)
                    _mm_mul_ps(zmm7_1, var_158)
                    float zmm10_1[0x4] = _mm_add_ps(zmm6_1, zmm2_1)
                    zmm1_1 = _mm_sub_ps(zmm13_1, zmm0_1)
                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm6_1)
                    zmm10_1 = _mm_mul_ps(zmm10_1, zmm7_1)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm2_1)
                    zmm1_1 = _mm_and_ps(_mm_mul_ps(zmm1_1, zmm7_1), zmm15_1)
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm1_1, 0x32)
                    float zmm9_1[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm1_1, 0), zmm0_1, 0x82)
                    zmm0_1 = _mm_shuffle_ps(zmm10_1, zmm1_1, 0x31)
                    zmm7_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_1, 0x10), zmm0_1, 0x88)
                    zmm10_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm4_1, 0x12), zmm1_1, 0xe8)
                    zmm1_1 = var_178
                    zmm13_1[0].q = zmm8_1 u>> 0x40
                    zmm3_1 = _mm_add_ps(zmm1_1, zmm1_1)
                    zmm8_1 = _mm_shuffle_ps(zmm8_1, zmm13_1, 0xc4)
                    zmm4_1 = zmm1_1
                    zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm3_1)
                    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x29), zmm0_1)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x12), zmm1_1)
                    zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), 
                        _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                    zmm6_1 = _mm_add_ps(zmm3_1, zmm2_1)
                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm3_1)
                    zmm1_1 = _mm_sub_ps(zmm13_1, zmm0_1)
                    zmm6_1 = _mm_mul_ps(zmm6_1, var_158)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                    zmm1_1 = _mm_and_ps(_mm_mul_ps(zmm1_1, var_158), zmm15_1)
                    zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm1_1, 0x32)
                    zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm1_1, 0), zmm0_1, 0x82)
                    zmm4_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_1, 0x10), 
                        _mm_shuffle_ps(zmm6_1, zmm1_1, 0x31), 0x88)
                    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), zmm7_1)
                    zmm6_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm5_1, 0x12), zmm1_1, 0xe8)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), zmm10_1)
                    zmm13_1[0].q = var_168 u>> 0x40
                    zmm5_1 = _mm_shuffle_ps(var_168, zmm13_1, 0xc4)
                    zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm8_1)
                    zmm2_1 = _mm_add_ps(zmm2_1, _mm_mul_ps(zmm0_1, zmm9_1))
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm9_1)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm10_1)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm3_1)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm7_1)
                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                    var_178 = zmm2_1
                    zmm2_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm7_1)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm8_1)
                    zmm0_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm9_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm10_1)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm4_1)
                    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_1)
                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm8_1)
                    zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                    var_168 = zmm3_1
                    zmm3_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm7_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm10_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm9_1)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm6_1)
                    zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm8_1)
                    var_158 = zmm2_1
                    int96_t var_148_1 =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3_1, zmm0_1), zmm1_1), zmm5_1)[0].12
                    float zmm11_2[0x4]
                    int128_t zmm13_2
                    float zmm14_2[0x4]
                    zmm11_2, zmm13_2, zmm14_2 = sub_1407740e0(&var_178, 0x322bcc77)
                    float zmm2_2[0x4] = var_178[0]
                    float zmm1_2 = var_178[1]
                    zmm14_2 =
                        _mm_and_ps(_mm_cmpeq_ps(zmm14_2, zmm11_2, 2), data_143f47870 ^ zmm13_2)
                    uint32_t zmm0_2[0x4] = var_178[2]
                    zmm14_2 ^= data_143f47870
                    zmm2_2[0] = zmm2_2[0] * zmm14_2[0]
                    zmm1_2 = zmm1_2 * zmm14_2[0]
                    float zmm3_2 = var_168[0]
                    zmm0_2[0] = zmm0_2[0] f* zmm14_2[0]
                    var_178[0] = zmm2_2[0]
                    zmm2_2 = _mm_shuffle_ps(zmm14_2, zmm14_2, 0x55)
                    var_178[2] = zmm0_2[0]
                    zmm0_2 = var_168[2]
                    zmm0_2[0] = zmm0_2[0] f* zmm2_2[0]
                    var_178[1] = zmm1_2
                    zmm1_2 = var_168[1] * zmm2_2[0]
                    zmm3_2 = zmm3_2 * zmm2_2[0]
                    zmm2_2 = var_158[0]
                    var_168[2] = zmm0_2[0]
                    zmm0_2 = var_158[2]
                    var_168[1] = zmm1_2
                    zmm1_2 = var_158[1]
                    zmm14_2 = _mm_shuffle_ps(zmm14_2, zmm14_2, 0xaa)
                    zmm0_2[0] = zmm0_2[0] f* zmm14_2[0]
                    zmm2_2[0] = zmm2_2[0] * zmm14_2[0]
                    zmm1_2 = zmm1_2 * zmm14_2[0]
                    var_158[2] = zmm0_2[0]
                    var_168[0] = zmm3_2
                    var_158[0] = zmm2_2[0]
                    var_158[1] = zmm1_2
                    uint32_t var_128[0x4]
                    sub_14077e4a0(&var_128, &var_178)
                    float zmm5_2[0x4] = var_128
                    float zmm6_2[0x4] = data_143f47860
                    float zmm1_3[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                    float var_f8_2[0x4] = zmm11_2
                    zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
                    float zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
                    zmm1_3 = _mm_rsqrt_ps(zmm4_2)
                    float zmm3_3[0x4] = _mm_mul_ps(zmm4_2, zmm6_2)
                    float zmm2_3[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), zmm3_3)), 
                            zmm1_3), 
                        zmm1_3)
                    zmm6_2 = _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(zmm2_3, zmm2_3), zmm3_3))
                    uint32_t zmm0_3[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
                    zmm6_2 = _mm_add_ps(_mm_mul_ps(zmm6_2, zmm2_3), zmm2_3)
                    zmm2_3 = _mm_unpacklo_ps(var_148_1:4.d, 0)
                    zmm6_2 = _mm_and_ps(_mm_mul_ps(zmm6_2, zmm5_2) ^ data_143f47850, zmm0_3)
                        ^ data_143f47850
                    float var_108_2[0x4] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps(var_148_1.d, var_148_1:8.d[0].q), zmm2_3[0].q)
                    var_128 = zmm6_2
                    var_118 = zmm6_2
                sub_1420aac20(arg1, rsi_1, &var_118, arg6)
            
            rsi_1 += 1
            rdi = &rdi[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    (*(*arg1 + 0x968))(arg1, zx.q(r12.d))
    *(arg1 + 0x50c) += 1
    
    if (arg5 != 0)
        sub_141ee8490(arg1)
    
    result.b = 1

__security_check_cookie(var_e8 ^ &var_198)
return result
