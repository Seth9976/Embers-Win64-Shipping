// 函数: sub_141743010
// 地址: 0x141743010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* rbx = *arg1
int32_t var_238 = arg2.d

if (rbx[0x11].b != 0)
    sub_14175a890(rbx, 0)

void* var_230 = &rbx[0x3c]
int64_t* var_228
__builtin_memset(&var_228, 0, 0x15)
int32_t var_210 = 0
int64_t result = sub_141750820(&var_230)
void* i_1
void* i = i_1

if (i != 0)
    int32_t var_218
    int32_t rdi_1 = var_218
    int64_t* r14_1 = var_228
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    uint128_t zmm7
    uint128_t var_48_1 = zmm7
    uint128_t zmm8
    uint128_t var_58_1 = zmm8
    uint128_t zmm9
    uint128_t var_68_1 = zmm9
    uint128_t zmm10
    uint128_t var_78_1 = zmm10
    uint128_t zmm11
    uint128_t var_88_1 = zmm11
    uint128_t zmm12
    uint128_t var_98_1 = zmm12
    int128_t zmm15
    int128_t var_c8_1 = zmm15
    
    do
        result = *(i + 0x398)
        int64_t r15_1 = sx.q(rdi_1)
        
        if (*(r15_1 + result) == 4)
            int64_t rax_3 = *(i + 0x1b8)
            int64_t rsi_1 = r15_1 * 3
            int64_t rcx_2 = *(i + 0x3f8)
            int64_t r13_2 = r15_1 * 2
            *(rcx_2 + (rsi_1 << 2)) = *(rax_3 + (rsi_1 << 2))
            *(rcx_2 + (rsi_1 << 2) + 8) = *(rax_3 + (rsi_1 << 2) + 8)
            int64_t rax_5 = *(i + 0x1d0)
            int64_t rcx_3 = *(i + 0x410)
            *(rcx_3 + (rsi_1 << 2)) = *(rax_5 + (rsi_1 << 2))
            *(rcx_3 + (rsi_1 << 2) + 8) = *(rax_5 + (rsi_1 << 2) + 8)
            int64_t rcx_4 = *(i + 0x68)
            int64_t rax_7 = *(i + 0x200)
            zmm8 = *(rcx_4 + (r13_2 << 3) + 4)
            arg2 = zx.o(*(rax_7 + (rsi_1 << 2)))
            zmm12 = *(rcx_4 + (r13_2 << 3) + 8)
            zmm11 = *(rcx_4 + (r13_2 << 3))
            float zmm4[0x4] = zmm11
            float zmm3[0x4] = *(rcx_4 + (r13_2 << 3) + 0xc)
            zmm10 = zmm8
            uint128_t zmm2 = arg2.d
            zmm9 = *(rax_7 + (rsi_1 << 2) + 8)
            int64_t rax_9 = *(i + 0x28)
            zmm6 = _mm_shuffle_ps(arg2, arg2, 0x55)
            uint128_t zmm0_1
            zmm0_1.d = zmm12.d f* zmm6.d
            zmm4[0] = zmm4[0] f* zmm6.d
            uint128_t zmm5
            zmm5.d = zmm12.d f* zmm2.d
            zmm7.d = zmm8.d f* zmm9.d
            zmm7.d = zmm7.d f- zmm0_1.d
            zmm0_1.d = zmm11.d f* zmm9.d
            zmm5.d = zmm5.d f- zmm0_1.d
            zmm0_1.d = zmm8.d f* zmm2.d
            zmm7.d = zmm7.d f+ zmm7.d
            zmm4[0] = zmm4[0] f- zmm0_1.d
            zmm0_1 = zmm12
            arg2.d = zmm3.d f* zmm7.d
            zmm5.d = zmm5.d f+ zmm5.d
            zmm12.d = zmm12.d f* zmm7.d
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm8.d = zmm8.d f* zmm7.d
            zmm0_1.d = zmm0_1.d f* zmm5.d
            arg2.d = arg2.d f+ zmm2.d
            zmm10.d = zmm10.d f* zmm4[0]
            zmm10.d = zmm10.d f- zmm0_1.d
            zmm0_1.d = zmm11.d f* zmm4[0]
            zmm11.d = zmm11.d f* zmm5.d
            zmm10.d = zmm10.d f+ arg2.d
            zmm3[0] = zmm3[0] * zmm4[0]
            zmm12.d = zmm12.d f- zmm0_1.d
            zmm11.d = zmm11.d f- zmm8.d
            arg2.d = zmm3.d f* zmm5.d
            zmm10.d = zmm10.d f+ *(rax_9 + (rsi_1 << 2))
            zmm3[0] = zmm3[0] f+ zmm9.d
            arg2.d = arg2.d f+ zmm6.d
            zmm11.d = zmm11.d f+ zmm3[0]
            zmm3 = *(rcx_4 + (r13_2 << 3))
            zmm12.d = zmm12.d f+ arg2.d
            float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm11.d = zmm11.d f+ *(rax_9 + (rsi_1 << 2) + 8)
            zmm12.d = zmm12.d f+ *(rax_9 + (rsi_1 << 2) + 4)
            zmm2 = *(*(i + 0x218) + (r13_2 << 3))
            float temp0_4[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(zmm2, zmm2, 0x1b))
            zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            arg2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            float temp0_7[0x4] = __mulps_xmmps_memps(temp0_4, data_143ef72e0)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm2)
            float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            float temp0_10[0x4] = _mm_add_ps(temp0_7, zmm0_1)
            arg2 = _mm_mul_ps(arg2, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            float temp0_14[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            arg2 = __mulps_xmmps_memps(arg2, data_143ef72d0)
            float temp0_16[0x4] = __mulps_xmmps_memps(temp0_14, data_143ef72c0)
            float temp0_18[0x4] = _mm_add_ps(_mm_add_ps(temp0_10, arg2), temp0_16)
            float var_1d8 = temp0_18[0]
            zmm0_1 = _mm_shuffle_ps(temp0_18, temp0_18, 0x55)
            arg2 = _mm_shuffle_ps(temp0_18, temp0_18, 0xaa)
            float var_1cc_1 = _mm_shuffle_ps(temp0_18, temp0_18, 0xff)[0]
            int32_t var_1d4_1 = zmm0_1.d
            int32_t var_1d0_1 = arg2.d
            int32_t var_118
            uint128_t zmm13_1
            float zmm14_1[0x4]
            zmm10, zmm11, zmm12, zmm13_1, zmm14_1 =
                sub_1417349b0(&var_118, &var_1d8, (r15_1 << 6) + *(i + 0x2a8))
            int64_t rax_11 = *(i + 0x230)
            int64_t rcx_6 = *(i + 0x260)
            zmm4 = zmm13_1
            arg2.d = zmm13_1.d f* *(rax_11 + (rsi_1 << 2))
            zmm9.d = zmm13_1.d f* *(rax_11 + (rsi_1 << 2) + 4)
            zmm3 = zmm13_1
            arg2.d = arg2.d f+ *(rcx_6 + (rsi_1 << 2))
            zmm6.d = zmm13_1.d f* *(rax_11 + (rsi_1 << 2) + 8)
            zmm9.d = zmm9.d f+ *(rcx_6 + (rsi_1 << 2) + 4)
            zmm6.d = zmm6.d f+ *(rcx_6 + (rsi_1 << 2) + 8)
            zmm0_1 = *(*(i + 0x2d8) + (r15_1 << 2))
            int64_t rax_13 = *(i + 0x248)
            zmm8 = zmm0_1
            int64_t rcx_7 = *(i + 0x278)
            zmm9.d = zmm9.d f* zmm0_1.d
            zmm4[0] = zmm4[0] f* *(rax_13 + (rsi_1 << 2))
            zmm2.d = zmm13_1.d f* *(rax_13 + (rsi_1 << 2) + 4)
            zmm4[0] = zmm4[0] f+ *(rcx_7 + (rsi_1 << 2))
            zmm3[0] = zmm3[0] f* *(rax_13 + (rsi_1 << 2) + 8)
            zmm2.d = zmm2.d f+ *(rcx_7 + (rsi_1 << 2) + 4)
            zmm6.d = zmm6.d f* zmm0_1.d
            zmm0_1 = var_118
            zmm3[0] = zmm3[0] f+ *(rcx_7 + (rsi_1 << 2) + 8)
            zmm0_1.d = zmm0_1.d f* zmm4[0]
            zmm8.d = zmm8.d f* arg2.d
            int32_t var_110
            arg2.d = var_110.d f* zmm3[0]
            int32_t var_114
            zmm7.d = var_114.d f* zmm2.d
            int32_t var_104
            zmm15.d = var_104.d f* zmm2.d
            zmm7.d = zmm7.d f+ zmm0_1.d
            int32_t var_f4
            zmm5.d = var_f4.d f* zmm2.d
            int32_t var_108
            zmm0_1.d = var_108.d f* zmm4[0]
            zmm7.d = zmm7.d f+ arg2.d
            int32_t var_100
            arg2.d = var_100.d f* zmm3[0]
            zmm15.d = zmm15.d f+ zmm0_1.d
            int32_t var_f8
            zmm0_1.d = var_f8.d f* zmm4[0]
            zmm15.d = zmm15.d f+ arg2.d
            zmm5.d = zmm5.d f+ zmm0_1.d
            int32_t var_f0
            arg2.d = var_f0.d f* zmm3[0]
            int32_t var_17c_1 = 0
            zmm0_1.d = zmm13_1.d f* *(*(i + 0x2f0) + (r15_1 << 2))
            zmm5.d = zmm5.d f+ arg2.d
            arg2.d = 1f f- zmm0_1.d
            zmm0_1.d = zmm13_1.d f* *(*(i + 0x308) + (r15_1 << 2))
            int64_t rax_16 = *(i + 0x1b8)
            zmm2.d = 1f f- zmm0_1.d
            zmm9.d = zmm9.d f+ *(rax_16 + (rsi_1 << 2) + 4)
            zmm6.d = zmm6.d f+ *(rax_16 + (rsi_1 << 2) + 8)
            zmm8.d = zmm8.d f+ *(rax_16 + (rsi_1 << 2))
            int64_t rax_17 = *(i + 0x1d0)
            arg2 = _mm_max_ss(arg2.d, 0)
            zmm2 = _mm_max_ss(zmm2.d, 0)
            zmm7.d = zmm7.d f+ *(rax_17 + (rsi_1 << 2))
            zmm15.d = zmm15.d f+ *(rax_17 + (rsi_1 << 2) + 4)
            zmm5.d = zmm5.d f+ *(rax_17 + (rsi_1 << 2) + 8)
            zmm6.d = zmm6.d f* arg2.d
            zmm7.d = zmm7.d f* zmm2.d
            zmm5.d = zmm5.d f* zmm2.d
            zmm15.d = zmm15.d f* zmm2.d
            zmm8.d = zmm8.d f* arg2.d
            zmm2.d = zmm7.d
            zmm9.d = zmm9.d f* arg2.d
            _mm_shuffle_ps(zmm2, zmm2, 0xe1)
            zmm0_1.d = zmm8.d f* zmm13_1.d
            zmm2.d = zmm15.d
            _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            arg2.d = zmm9.d f* zmm13_1.d
            zmm2.d = zmm5.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            zmm10.d = zmm10.d f+ zmm0_1.d
            int32_t var_150_1 = zmm6.d
            float temp0_27[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm12.d = zmm12.d f+ arg2.d
            zmm6.d = zmm6.d f* zmm13_1.d
            arg2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            uint128_t var_188 = zmm2
            zmm11.d = zmm11.d f+ zmm6.d
            int32_t var_1e8_1 = zmm9.d
            zmm6 = var_1d8.o
            zmm9 = data_143ef72c0
            float temp0_30[0x4] = _mm_mul_ps(temp0_27, _mm_shuffle_ps(zmm6, zmm6, 0x1b))
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            float temp0_33[0x4] = __mulps_xmmps_memps(temp0_30, data_143ef72e0)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            int32_t var_1ec_1 = zmm8.d
            int32_t var_1e4_1 = zmm7.d
            float temp0_35[0x4] = _mm_add_ps(temp0_33, zmm0_1)
            int32_t var_140_1 = zmm5.d
            int32_t var_1f8_1 = zmm10.d
            arg2 = _mm_mul_ps(arg2, _mm_shuffle_ps(zmm6, zmm6, 0x4e))
            zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm6, zmm6, 0xb1))
            arg2 = __mulps_xmmps_memps(arg2, data_143ef72d0)
            int32_t var_1f4_1 = zmm12.d
            zmm2 = _mm_mul_ps(zmm2, zmm9)
            int32_t var_1f0_1 = zmm11.d
            float temp0_43[0x4] = _mm_add_ps(_mm_add_ps(temp0_35, arg2), zmm2)
            int64_t rax_18 = *(i + 0x218)
            int32_t var_200_1 = 0x322bcc77
            float temp0_44[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0x55)
            zmm0_1.d = zmm13_1.d f* 0.5f
            zmm2 = _mm_shuffle_ps(temp0_43, temp0_43, 0xaa)
            float temp0_46[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xff)
            temp0_44[0] = temp0_44[0] f* zmm0_1.d
            arg2.d = temp0_43.d f* zmm0_1.d
            zmm2.d = zmm2.d f* zmm0_1.d
            temp0_46[0] = temp0_46[0] f* zmm0_1.d
            zmm5.d = zmm6.d f+ arg2.d
            zmm0_1.d = _mm_shuffle_ps(zmm6, zmm6, 0x55).d f+ temp0_44[0]
            arg2.d = _mm_shuffle_ps(zmm6, zmm6, 0xaa).d f+ zmm2.d
            zmm6.d = _mm_shuffle_ps(zmm6, zmm6, 0xff).d f+ temp0_46[0]
            _mm_shuffle_ps(zmm5, zmm5, 0xe1)
            zmm5.d = zmm0_1.d
            _mm_shuffle_ps(zmm5, zmm5, 0xc6)
            zmm5.d = arg2.d
            _mm_shuffle_ps(zmm5, zmm5, 0x27)
            zmm5.d = zmm6.d
            zmm6 = data_143ef72b0
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x39)
            float var_258[0x4] = zmm5
            arg2 = _mm_mul_ps(zmm5, zmm5)
            arg2 = _mm_add_ps(arg2, _mm_shuffle_ps(arg2, arg2, 0x4e))
            float temp0_58[0x4] = _mm_add_ps(_mm_shuffle_ps(arg2, arg2, 0x39), arg2)
            arg2 = _mm_rsqrt_ps(temp0_58)
            float temp0_60[0x4] = _mm_mul_ps(temp0_58, zmm6)
            zmm2 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(arg2, arg2), temp0_60)), arg2), 
                arg2)
            arg2 = *(rax_18 + (r13_2 << 3) + 8) ^ zmm14_1
            zmm0_1 = _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), temp0_60)
            zmm3 = *(rax_18 + (r13_2 << 3)) ^ zmm14_1
            float temp0_68[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm6 = _mm_sub_ps(zmm6, zmm0_1)
            zmm0_1 = var_200_1
            zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0), temp0_58, 2)
            zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2), zmm2)
            zmm2 = *(rax_18 + (r13_2 << 3) + 0xc)
            zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm5) ^ data_143ef72a0, zmm0_1) ^ data_143ef72a0
            temp0_68[0] = (*(rax_18 + (r13_2 << 3) + 4) ^ zmm14_1).d
            float temp0_76[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xc6)
            temp0_76[0] = arg2.d
            float temp0_77[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0x27)
            temp0_77[0] = zmm2.d
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0x39)
            var_258 = temp0_78
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x1b)
            int64_t rax_19 = *(i + 0x200)
            arg2 = _mm_shuffle_ps(temp0_78, temp0_78, 0x4e)
            float temp0_82[0x4] = _mm_mul_ps(temp0_79, _mm_shuffle_ps(zmm6, zmm6, 0))
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), temp0_78)
            float temp0_85[0x4] = __mulps_xmmps_memps(temp0_82, data_143ef72e0)
            float temp0_86[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0xb1)
            float temp0_87[0x4] = _mm_add_ps(temp0_85, zmm0_1)
            arg2 = _mm_mul_ps(arg2, _mm_shuffle_ps(zmm6, zmm6, 0x55))
            zmm0_1 = zx.o(*(rax_19 + (rsi_1 << 2)))
            int32_t rax_20 = *(rax_19 + (rsi_1 << 2) + 8)
            uint32_t var_1bc_1 = zmm0_1.d
            arg2 = __mulps_xmmps_memps(arg2, data_143ef72d0)
            zmm10 = rax_20
            zmm8 = var_1bc_1
            float temp0_92[0x4] = _mm_mul_ps(temp0_86, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
            float temp0_93[0x4] = _mm_add_ps(temp0_87, arg2)
            float temp0_94[0x4] = _mm_mul_ps(temp0_92, zmm9)
            zmm9 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            zmm4 = zmm9
            float temp0_96[0x4] = _mm_add_ps(temp0_93, temp0_94)
            zmm4[0] = zmm4[0] * temp0_96[0]
            zmm11 = _mm_shuffle_ps(temp0_96, temp0_96, 0x55)
            zmm12 = _mm_shuffle_ps(temp0_96, temp0_96, 0xaa)
            zmm0_1.d = zmm9.d f* zmm12.d
            zmm2.d = zmm8.d f* zmm12.d
            zmm7.d = zmm10.d f* zmm11.d
            zmm13_1 = _mm_shuffle_ps(temp0_96, temp0_96, 0xff)
            zmm7.d = zmm7.d f- zmm0_1.d
            zmm0_1.d = zmm10.d f* temp0_96[0]
            zmm2.d = zmm2.d f- zmm0_1.d
            zmm0_1.d = zmm8.d f* zmm11.d
            zmm7.d = zmm7.d f+ zmm7.d
            zmm4[0] = zmm4[0] f- zmm0_1.d
            zmm2.d = zmm2.d f+ zmm2.d
            zmm5.d = zmm12.d f* zmm7.d
            arg2.d = zmm13_1.d f* zmm7.d
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm0_1.d = zmm12.d f* zmm2.d
            temp0_96[0] = temp0_96[0] f* zmm2.d
            zmm8.d = zmm8.d f+ arg2.d
            zmm6.d = zmm11.d f* zmm4[0]
            zmm6.d = zmm6.d f- zmm0_1.d
            zmm0_1.d = temp0_96.d f* zmm4[0]
            zmm5.d = zmm5.d f- zmm0_1.d
            zmm0_1.d = zmm11.d f* zmm7.d
            zmm6.d = zmm6.d f+ zmm8.d
            temp0_96[0] = temp0_96[0] f- zmm0_1.d
            zmm0_1.d = zmm13_1.d f* zmm2.d
            zmm2.d = zmm13_1.d f* zmm4[0]
            zmm9.d = zmm9.d f+ zmm0_1.d
            zmm10.d = zmm10.d f+ zmm2.d
            zmm5.d = zmm5.d f+ zmm9.d
            temp0_96[0] = temp0_96[0] f+ zmm10.d
            int64_t rcx_8 = *(i + 0x3c8)
            zmm0_1.d = var_1f8_1.d f- zmm6.d
            arg2.d = var_1f0_1.d f- temp0_96[0]
            float temp0_100[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0xe1)
            zmm2.d = var_1f4_1.d f- zmm5.d
            temp0_100[0] = zmm11.d
            int32_t var_130_1 = 0
            float temp0_101[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0xc6)
            temp0_101[0] = zmm12.d
            int32_t var_124_1 = 0
            int32_t var_160_1 = arg2.d
            *(rcx_8 + (rsi_1 << 2)) = (_mm_unpacklo_ps(zmm0_1, zmm2.q)).q
            *(rcx_8 + (rsi_1 << 2) + 8) = var_160_1
            int64_t rax_22 = *(i + 0x3e0)
            zmm0_1 = _mm_unpacklo_ps(var_1ec_1, var_1e8_1.q)
            float temp0_104[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0x27)
            temp0_104[0] = zmm13_1.d
            float temp0_105[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0x39)
            *(rax_22 + (r13_2 << 3)) = temp0_105
            int64_t rcx_9 = *(i + 0x1b8)
            var_258 = temp0_105
            *(rcx_9 + (rsi_1 << 2)) = zmm0_1.q
            *(rcx_9 + (rsi_1 << 2) + 8) = var_150_1
            int64_t rcx_10 = *(i + 0x1d0)
            *(rcx_10 + (rsi_1 << 2)) = (_mm_unpacklo_ps(var_1e4_1, zmm15.q)).q
            *(rcx_10 + (rsi_1 << 2) + 8) = var_140_1
            int64_t rcx_11 = *(i + 0x260)
            *(rcx_11 + (rsi_1 << 2)) = (_mm_unpacklo_ps(zx.o(0), 0)).q
            *(rcx_11 + (rsi_1 << 2) + 8) = var_130_1
            int64_t rcx_12 = *(i + 0x278)
            *(rcx_12 + (rsi_1 << 2)) = (_mm_unpacklo_ps(zx.o(0), 0)).q
            *(rcx_12 + (rsi_1 << 2) + 8) = var_124_1
            result = *(i + 0x158)
            
            if (*(r15_1 + result) != 0)
                int32_t* rdx_2 = *(i + 0x128) + r15_1 * 0x18
                int64_t rcx_14 = *(i + 0x3c8)
                var_118.o = *(*(i + 0x3e0) + (r13_2 << 3))
                zmm0_1 = *(rcx_14 + (rsi_1 << 2) + 4)
                float temp0_109[0x4] =
                    _mm_unpacklo_ps(*(rcx_14 + (rsi_1 << 2)), (*(rcx_14 + (rsi_1 << 2) + 8)).q)
                zmm0_1 = _mm_unpacklo_ps(zmm0_1, 0)
                zmm2 = data_14399f66c
                var_108.o = _mm_unpacklo_ps(temp0_109, zmm0_1.q)
                var_f8.o = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670.q), 
                    _mm_unpacklo_ps(zmm2, 0).q)
                float var_1b0
                int32_t var_1a0
                int32_t zmm13_2 = sub_14003bce0(&var_118, rdx_2, &rdx_2[3], &var_1a0, &var_1b0)
                float zmm0_2 = arg1[7].d
                int64_t rax_29 = *(i + 0x28)
                int64_t rcx_16 = *(i + 0x3c8)
                uint32_t zmm11_1[0x4] = var_1b0
                int32_t zmm4_1 = var_1a0
                int32_t var_1ac
                uint32_t zmm12_1[0x4] = var_1ac
                zmm11_1[0] = zmm11_1[0] f- zmm4_1
                int32_t var_1a8
                uint32_t zmm10_1[0x4] = var_1a8
                float var_19c
                zmm12_1[0] = zmm12_1[0] f- var_19c
                float zmm1 = *(rax_29 + (rsi_1 << 2))
                float var_198
                zmm10_1[0] = zmm10_1[0] f- var_198
                zmm1 = zmm1 f- *(rcx_16 + (rsi_1 << 2))
                float zmm3_1 = *(rax_29 + (rsi_1 << 2) + 4) f- *(rcx_16 + (rsi_1 << 2) + 4)
                float zmm6_1 = *(rax_29 + (rsi_1 << 2) + 8) f- *(rcx_16 + (rsi_1 << 2) + 8)
                zmm11_1[0] = zmm11_1[0] f* zmm0_2
                zmm12_1[0] = zmm12_1[0] f* zmm0_2
                zmm10_1[0] = zmm10_1[0] f* zmm0_2
                float temp0_115 = _mm_min_ss(zmm1, zmm13_2)
                uint32_t temp0_116[0x4] = _mm_and_ps(zmm11_1, 0x7fffffff)
                uint32_t temp0_117[0x4] = _mm_and_ps(zmm12_1, 0x7fffffff)
                zmm4_1 = zmm4_1 f- temp0_116[0]
                uint32_t temp0_118[0x4] = _mm_and_ps(zmm10_1, 0x7fffffff)
                float zmm5_1 = var_19c f- temp0_117[0]
                float zmm2_1 = var_198 f- temp0_118[0]
                zmm11_1[0] = zmm11_1[0] f+ temp0_116[0]
                float temp0_119 = _mm_max_ss(zmm1, zmm13_2)
                float temp0_120 = _mm_min_ss(zmm3_1, zmm13_2)
                zmm12_1[0] = zmm12_1[0] f+ temp0_117[0]
                float temp0_121 = _mm_max_ss(zmm3_1, zmm13_2)
                zmm11_1[0] = zmm11_1[0] f+ temp0_119
                var_258[0] = zmm4_1 f+ temp0_115
                zmm10_1[0] = zmm10_1[0] f+ temp0_118[0]
                float temp0_122 = _mm_min_ss(zmm6_1, zmm13_2)
                zmm12_1[0] = zmm12_1[0] f+ temp0_121
                var_258[3] = zmm11_1[0]
                var_258[1] = zmm5_1 + temp0_120
                uint32_t var_248_1 = zmm12_1[0]
                var_258[2] = zmm2_1 + temp0_122
                float temp0_123 = _mm_max_ss(zmm6_1, zmm13_2)
                zmm10_1[0] = zmm10_1[0] f+ temp0_123
                uint32_t var_244_1 = zmm10_1[0]
                result = sub_141756120(i, rdi_1, &var_258)
        
        if (r14_1 != 0)
            int32_t var_208
            int32_t rax_31 = var_208 + 1
            var_208 = rax_31
            
            if (rax_31 s>= r14_1[1].d)
            label_141743b42:
                var_210 += 1
                result = sub_141750820(&var_230)
                r14_1 = var_228
                rdi_1 = var_218
                i = i_1
            else
                void** rdx_4 = *(*r14_1 + (sx.q(rax_31) << 3))
                void* rcx_22 = *rdx_4
                int32_t var_170_1 = rdx_4[1].d
                
                if (rcx_22 == 0)
                    result = 0
                else
                    result = zx.q(*(rcx_22 + 0x40))
                
                char var_16c_1 = result.b
                i_1.o = rcx_22.o
                rdi_1 = var_218
                i = i_1
        else
            rdi_1 += 1
            var_218 = rdi_1
            int32_t var_20c
            
            if (rdi_1 s>= var_20c)
                goto label_141743b42
    while (i != 0)

__security_check_cookie(rax_1 ^ &var_288)
return result
