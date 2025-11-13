// 函数: __sse2_expf4@@16
// 地址: 0x142c982f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm7[0x4] = data_144280d00 & arg1
float zmm2[0x4] = data_144280d20
float temp0[0x4] = _mm_mul_ps(data_144280d10, arg1)
float zmm3[0x4] = data_144280d30
float temp0_1[0x4] = _mm_add_ps(temp0, zmm2)
float temp0_2[0x4] = _mm_sub_ps(zmm2, temp0_1)
float zmm1[0x4] = temp0_1 & data_144280d40
int32_t temp0_3[0x4] = __pcmpgtd_xmmdq_memdq(zmm7, data_144280d50)
float temp0_4[0x4] = _mm_mul_ps(zmm3, temp0_2)
uint64_t rax = zx.q(zmm1[0])
zmm1 = _mm_shuffle_epi32(zmm1, 0x39)
float temp0_6[0x4] = __mulps_xmmps_memps(temp0_2, data_144280d60)
float var_38[0x4] = arg1
float temp0_7[0x4] = _mm_add_ps(arg1, temp0_4)
float zmm5[0x4] = __paddd_xmmdq_memdq(temp0_1, data_144280d70)
uint64_t rdx = zx.q(zmm1[0])
zmm1 = _mm_shuffle_epi32(zmm1, 0x39)
float temp0_10[0x4] = _mm_add_ps(temp0_7, temp0_6)
float temp0_11[0x4] = _mm_mul_ps(data_144280d80, temp0_10)
uint64_t rcx = zx.q(zmm1[0])
zmm1 = _mm_shuffle_epi32(zmm1, 0x39)
zmm3 = zx.o(*(&data_144280b00 + (rax << 3)))
uint64_t rax_1 = zx.q(zmm1[0])
uint128_t zmm4 = zx.o(*(&data_144280b00 + (rdx << 3)))
float temp0_13[0x4] = __addps_xmmps_memps(temp0_11, data_144280d90)
zmm2 = zx.o(*(&data_144280b00 + (rcx << 3)))
float temp0_14[0x4] = _mm_unpacklo_ps(zmm3, zmm4.q)
zmm1 = zx.o(*(&data_144280b00 + (rax_1 << 3)))
zmm5 = _mm_slli_epi32(zmm5, 0x11)
float temp0_16[0x4] = _mm_mul_ps(temp0_13, temp0_10)
zmm5 &= data_144280da0
float temp0_17[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
float temp0_19[0x4] = _mm_add_ps(_mm_mul_ps(temp0_16, temp0_10), temp0_10)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_14, temp0_17, 0x44)
zmm4 = _mm_shuffle_ps(temp0_14, temp0_17, 0xee)
float temp0_23[0x4] = _mm_mul_ps(temp0_19, _mm_add_ps(temp0_20, zmm4))
uint32_t temp0_24 = _mm_movemask_ps(temp0_3)
float temp0_26[0x4] = _mm_add_ps(temp0_20, _mm_add_ps(temp0_23, zmm4))

if ((temp0_24 & 0xf) == 0)
    return _mm_mul_ps(temp0_26, zmm5)

float var_48[0x4] = temp0_26
arg1 = _mm_mul_ps(temp0_26, zmm5)
float var_58[0x4]
float* rcx_1 = &var_58
uint32_t rax_3 = temp0_24 ^ _mm_movemask_ps(_mm_cmpeq_ps(zx.o(0), var_38, 3))

if (rax_3 != 0)
    zmm3 = arg1
    float temp0_31[0x4] = _mm_cmpeq_ps(data_144280db0, var_38, 2)
    arg1 = data_144280da0 & temp0_31
    uint32_t rax_4 = rax_3 ^ _mm_movemask_ps(temp0_31)
    arg1 |= temp0_31 & not.o(zmm3)
    
    if (rax_4 != 0)
        float temp0_33[0x4] = _mm_cmpeq_ps(var_38, data_144280dc0, 2)
        arg1 = temp0_33 & not.o(arg1)
        uint32_t i = rax_4 ^ _mm_movemask_ps(temp0_33)
        
        if (i != 0)
            uint32_t rdx_4 = _mm_movemask_ps(var_38)
            var_58 = arg1
            
            do
                if ((i & 1) != 0)
                    float temp0_37[0x4] = __addps_xmmps_memps(
                        __mulps_xmmps_memps(rcx_1[8], data_144280d10), data_144280d20)
                    float zmm6[0x4]
                    
                    if ((rdx_4 & 1) != 0)
                        arg1 = __paddd_xmmdq_memdq(temp0_37, data_144280d70)
                        zmm5 = data_144280df0
                        arg1 = __paddd_xmmdq_memdq(arg1, data_144280d70)
                        zmm6 = zmm5
                    else
                        arg1 = __paddd_xmmdq_memdq(temp0_37, data_144280dd0)
                        zmm5 = data_144280de0
                        zmm6 = zx.o(0)
                    
                    arg1 = _mm_sub_epi32(_mm_slli_epi32(arg1, 0x11) & data_144280da0, zmm6)
                    arg1[0] = arg1[0] * rcx_1[4]
                    arg1[0] = arg1[0] * zmm5[0]
                    *rcx_1 = arg1[0]
                
                rdx_4 u>>= 1
                rcx_1 = &rcx_1[1]
                i u>>= 1
            while (i != 0)
            
            return var_58

return arg1
