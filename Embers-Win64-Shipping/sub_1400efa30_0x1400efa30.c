// 函数: sub_1400efa30
// 地址: 0x1400efa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm6[0x2]
double var_18[0x2] = zmm6

if (arg4 s> 0)
    double zmm0[0x4]
    zmm0[0].o = _mm_permute_ps(arg3, 0)
    float zmm1[0x4] = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    uint64_t i_1 = zx.q(arg4)
    int64_t rax = 0x20
    arg3 = __vxorps_xmmdq_xmmdq_xmmdq(arg3, arg3)
    uint64_t i
    
    do
        float temp0_4[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + rax - 0x20))
        float zmm4[0x4] = *(arg2 + rax - 0x20)
        int32_t zmm5[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_4, zmm4)
        zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_pd(zmm5, 1))
        int32_t temp0_14[0x4] = __vpsrad_xmmdq_xmmdq_immb(
            __vpslld_xmmdq_xmmdq_immb(
                __vpmovzxwd_xmmdq_xmmq(__vpackssdw_xmmdq_xmmdq_xmmdq(
                    _mm_cmp_ps(arg3, __vaddps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(zmm5, 0x39)), 
                        2), 
                    zmm0[0].o)[0].q), 
                0x1f), 
            0x1f)
        float zmm3[0x4] = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(
            __vsubps_xmmdq_xmmdq_xmmdq(arg3, temp0_4), temp0_4, temp0_14)
        zmm5 = __vaddps_xmmdq_xmmdq_memdq(__vmulps_xmmdq_xmmdq_memdq(zmm1, *(arg1 + rax - 0x10)), 
            *(arg2 + rax - 0x10))
        zmm6 = __vmulps_xmmdq_xmmdq_memdq(zmm1, *(arg1 + rax))
        float temp0_20[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm3)
        float temp0_21[0x4] = __vaddps_xmmdq_xmmdq_memdq(zmm6, *(arg2 + rax))
        *(arg2 + rax - 0x20) = temp0_20
        *(arg2 + rax - 0x10) = zmm5
        *(arg2 + rax) = temp0_21
        rax += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

_mm256_zeroupper()
