// 函数: sub_1412e89e0
// 地址: 0x1412e89e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg6
int32_t i = 0

if (rdi[1].d s<= 0)
    return 

int64_t r10_1 = 0

do
    int64_t rdx = *rdi
    int64_t rax_1 = sx.q(*(r10_1 + rdx + 0x14))
    int64_t* r9
    
    if (rax_1.d s< 0)
        r9 = &data_143dbb1f8
    else
        r9 = *arg5 + rax_1 * 0x28
    
    int32_t rax_3 = r9[1].d
    uint64_t var_48_1 = *r9
    uint128_t zmm0
    float zmm1[0x4]
    float zmm2[0x4]
    
    if (arg1 != 0)
        zmm0 = var_48_1.d
        
        if (arg1 != 2)
            int32_t var_2c_1 = 0x3f800000
            float var_38[0x4]
            var_38[0] = zmm0.d
            int32_t var_20_1 = 0
            float temp0_2[0x4] = _mm_shuffle_ps(var_38, var_38, 0xe1)
            temp0_2[0] = var_48_1:4.d[0]
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
            temp0_3[0] = rax_3[0]
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
            var_38 = temp0_4
            float temp0_6[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xff), arg4[3])
            float temp0_8[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0x55), arg4[1])
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xaa), arg4[2])
            float temp0_12[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0), *arg4)
            float temp0_15[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_6, zmm0), _mm_add_ps(temp0_8, temp0_12))
            arg6.d = _mm_shuffle_ps(temp0_15, temp0_15, 0xaa)[0]
        else
            zmm2 = var_48_1:4.d
            zmm2[0] = zmm2[0] f- arg3[1]
            zmm0.d = zmm0.d f- *arg3
            zmm1 = rax_3
            zmm1[0] = zmm1[0] f- arg3[2]
            zmm2[0] = zmm2[0] f* arg2[1]
            zmm0.d = zmm0.d f* *arg2
            zmm1[0] = zmm1[0] f* arg2[2]
            zmm2[0] = zmm2[0] f+ zmm0.d
            zmm2[0] = zmm2[0] + zmm1[0]
            arg6.d = zmm2[0]
    else
        zmm0.d = rax_3.d f- arg3[2]
        zmm1 = var_48_1.d
        zmm2 = var_48_1:4.d
        zmm2[0] = zmm2[0] f- arg3[1]
        zmm1[0] = zmm1[0] f- *arg3
        zmm0.d = zmm0.d f* zmm0.d
        zmm2[0] = zmm2[0] * zmm2[0]
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm2[0] = zmm2[0] + zmm1[0]
        zmm2[0] = zmm2[0] f+ zmm0.d
        arg6.d = _mm_sqrt_ss(0, zmm2[0]).d
    int32_t rax_4 = arg6.d
    i += 1
    *(r10_1 + rdx + 8) &= 0xffff00000000ffff
    *(r10_1 + rdx + 8) |= zx.q(not.d(rax_4 ^ (neg.d(rax_4 u>> 0x1f) | 0x80000000))) << 0x10
    r10_1 += 0x28
while (i s< rdi[1].d)
