// 函数: sub_142204e20
// 地址: 0x142204e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x18)
uint64_t r13 = zx.q(arg3)
uint32_t rax_1
float (* rax_2)[0x4]

if ((*(rax + 0x433) & 8) == 0 && data_143de5480 != 0)
    rax_1.b = GetCurrentThreadId() == data_143de5470
    rax_2 = 0x620

if ((*(rax + 0x433) & 8) != 0 || data_143de5480 == 0 || rax_1.b != 0)
    rax_2 = 0x1c0

int64_t r14 = *(arg2 + 0xf0)
int32_t r15 = *(arg2 + 0x114)
int64_t r12 = *(arg2 + 0xf8)
int32_t rax_3 = *(arg2 + 0x118)
int32_t result = rax_3 - 1
int64_t result_1 = sx.q(result)

if (rax_3 - 1 s>= 0)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int64_t result_2
    
    do
        void* rbx_3 = zx.q(zx.d(*(r12 + (result_1 << 1))) * r15) + r14
        
        if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
            int32_t r9_1 = (*(arg2 + 0x18)).d
            float zmm2[0x4] = *(rbx_3 + 0xc)
            int64_t var_f0_1 = 0
            float zmm1[0x4]
            
            if ((*(*(*(arg2 + 0x28) + 0x30) + 0x59) & 1) == 0)
                int32_t var_e0
                int512_t zmm6_2
                int64_t zmm9_1
                zmm6_2, zmm9_1 = sub_141fe56b0(arg1 + 0x30, &var_e0, zmm2, arg5, r9_1, nullptr)
                float var_d8
                float zmm5_1[0x4] = _mm_unpacklo_ps(var_e0, var_d8[0].q)
                float zmm4_1[0x4] = *(rax_2 + rax)
                int32_t var_dc
                float zmm2_1[0x4] = _mm_unpacklo_ps(var_dc, zmm9_1)
                zmm1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                zmm5_1 =
                    __mulps_xmmps_memps(_mm_unpacklo_ps(zmm5_1, zmm2_1[0].q), *(rax_2 + rax + 0x20))
                zmm2_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                float zmm0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm2_1)
                float zmm3[0x4] =
                    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm1), zmm0_2)
                zmm3 = _mm_add_ps(zmm3, zmm3)
                zmm4_1 = _mm_mul_ps(zmm4_1, zmm3)
                float zmm7_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm1)
                zmm0_2 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                zmm4_1 = _mm_add_ps(zmm4_1, zmm5_1)
                zmm7_2 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(zmm7_2, _mm_mul_ps(zmm0_2, zmm2_1)), zmm4_1), 
                    *(rax_2 + rax + 0x10))
                zmm1 = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x55)
                zmm6_2.o = zmm1
                float var_b8_1 = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xaa)[0]
                var_e0.q = (_mm_unpacklo_ps(zmm7_2, zmm1[0].q)).q
                var_d8 = var_b8_1
            else
                void var_94
                int64_t* rax_6
                int512_t zmm7_1
                int512_t zmm8_1
                rax_6, zmm1, zmm7_1, zmm8_1 =
                    sub_141fe56b0(arg1 + 0x30, &var_94, zmm2, arg5, r9_1, nullptr)
                uint128_t zmm0_1 = zx.o(*rax_6)
                zmm8_1.o = rax_6[1].d
                zmm7_1.o = zmm0_1.d
                _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            
            int64_t var_f0_2 = 0
            int32_t var_b0
            float zmm9_2[0x4]
            float zmm10_1[0x4]
            zmm6, zmm7, zmm8, zmm9_2, zmm10_1 = sub_141fe56b0(arg1 + 0xc0, &var_b0, *(rbx_3 + 0xc), 
                zmm1, (*(arg2 + 0x18)).d, nullptr)
            bool cond:2_1 = arg4.d f<= zmm9_2[0]
            zmm7[0] = zmm7[0] f+ *(r13 + rbx_3)
            float zmm0_3[0x4] = var_b0
            zmm6.d = zmm6.d f+ *(r13 + rbx_3 + 4)
            zmm8.d = zmm8.d f+ *(r13 + rbx_3 + 8)
            zmm10_1[0] = zmm10_1[0] - zmm0_3[0]
            zmm7[0] = zmm7[0] f- *(rbx_3 + 0x10)
            zmm6.d = zmm6.d f- *(rbx_3 + 0x14)
            zmm8.d = zmm8.d f- *(rbx_3 + 0x18)
            arg5 = zmm7
            float zmm3_1 = zmm10_1[0] * zmm7[0]
            arg5[0] = arg5[0] * zmm0_3[0]
            zmm10_1[0] = zmm10_1[0] f* zmm6.d
            int64_t zmm4_2
            zmm4_2.d = zmm6.q.d f* zmm0_3[0]
            float zmm5_2 = zmm8.d * zmm0_3[0]
            zmm10_1[0] = zmm10_1[0] f* zmm8.d
            
            if (cond:2_1)
                zmm0_3 = zmm9_2
            else
                zmm0_3 = zmm10_1
                zmm0_3[0] = zmm0_3[0] f/ arg4.d
            
            zmm5_2 = zmm5_2 * zmm0_3[0]
            arg5[0] = arg5[0] * zmm0_3[0]
            zmm4_2.d = zmm4_2.d f* zmm0_3[0]
            *(rbx_3 + 0x30) = (_mm_unpacklo_ps(arg5, zmm4_2)).q
            zmm0_3 = zx.o(0)
            *(rbx_3 + 0x38) = zmm5_2
            zmm3_1 = zmm3_1 f+ *(rbx_3 + 0x10)
            zmm10_1[0] = zmm10_1[0] f+ *(rbx_3 + 0x14)
            zmm10_1[0] = zmm10_1[0] f+ *(rbx_3 + 0x18)
            zmm0_3[0].q = fconvert.d(zmm3_1)
            *(rbx_3 + 0x10) = zmm3_1
            *(rbx_3 + 0x14) = zmm10_1[0]
            *(rbx_3 + 0x18) = zmm10_1[0]
            result = _finite(zmm0_3[0].q)
            
            if (result != 0)
                result = _finite(_mm_cvtps_pd((*(rbx_3 + 0x14))[0].q)[0].q)
                
                if (result != 0)
                    result = _finite(_mm_cvtps_pd((*(rbx_3 + 0x18))[0].q)[0].q)
        
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)

return result
