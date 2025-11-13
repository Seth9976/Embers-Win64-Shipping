// 函数: sub_1420d6e70
// 地址: 0x1420d6e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
uint128_t zmm14 = arg7
int32_t rax_1 = arg2[1].d
uint64_t var_78 = *arg3
uint128_t zmm0 = zx.o(*arg2)
uint64_t var_88 = zmm0.q

if (not(zmm14.d f<= 9.99999994e-09f))
    uint128_t zmm2 = arg8
    
    if (__andps_xmmxud_memxud(zmm2, data_142d3f770).d f<= 9.99999994e-09f)
        zmm0 = zx.o(*arg3)
        rax_1 = arg3[1].d
    else
        uint128_t zmm6
        zmm6.d = rax.d f- rax_1
        uint128_t zmm7 = arg5
        uint128_t zmm8
        zmm8.d = var_78:4.d.d f- var_88:4.d
        zmm0.d = zmm7.d f* zmm2.d
        float zmm5 = 1f f/ zmm2.d
        float temp0_2[0x4] = _mm_sqrt_ss(0, zmm0.d)
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        uint128_t zmm10
        zmm10.d = var_78.d.d f- var_88.d
        int32_t var_70_1 = zmm6.d
        zmm2.d = zmm8.d f* zmm7.d
        temp0_2[0] = temp0_2[0] f* arg6
        int64_t zmm1
        zmm1.d = zmm10.q.d f- *arg4
        zmm2.d = zmm2.d f* zmm14.d
        zmm0.d = zmm10.d f* zmm7.d
        zmm1.d = zmm1.d f* temp0_2[0]
        zmm0.d = zmm0.d f* zmm14.d
        zmm1.d = zmm1.d f+ zmm0.d
        zmm1.d = zmm1.d f* zmm5
        zmm1.d = zmm1.d f+ *(arg4 + 0xc)
        *(arg4 + 0xc) = zmm1.d
        zmm1 = zmm14.q
        zmm0.d = zmm8.d f- *(arg4 + 4)
        zmm0.d = zmm0.d f* temp0_2[0]
        zmm2.d = zmm2.d f+ zmm0.d
        zmm0.d = zmm6.d f* zmm7.d
        zmm0.d = zmm0.d f* zmm14.d
        zmm2.d = zmm2.d f* zmm5
        zmm2.d = zmm2.d f+ arg4[2].d
        arg4[2].d = zmm2.d
        zmm6.d = zmm6.d f- arg4[1].d
        zmm6.d = zmm6.d f* temp0_2[0]
        zmm0.d = zmm0.d f+ zmm6.d
        zmm0.d = zmm0.d f* zmm5
        zmm0.d = zmm0.d f+ *(arg4 + 0x14)
        *(arg4 + 0x14) = zmm0.d
        *arg4 = (_mm_unpacklo_ps(zmm10, zmm8.q)).q
        arg4[1].d = var_70_1
        zmm0.d = zmm14.d f* *(arg4 + 0xc)
        zmm14.d = zmm14.d f* *(arg4 + 0x14)
        zmm1.d = zmm1.d f* arg4[2].d
        zmm14.d = zmm14.d f+ rax_1
        zmm0.d = zmm0.d f+ var_88.d
        zmm1.d = zmm1.d f+ var_88:4.d
        rax_1 = zmm14.d
        zmm0 = _mm_unpacklo_ps(zmm0, zmm1)

*arg1 = zmm0.q
arg1[1].d = rax_1
return arg1
