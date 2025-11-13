// 函数: sub_140fe3350
// 地址: 0x140fe3350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t r10_1 = 0

do
    uint32_t r9 = 0
    float (* rdx_3)[0x4] = (zx.q(r10_1 * arg1) << 4) + arg5
    int32_t* rcx_2 = zx.q(r10_1 * arg4) + arg3
    float var_38[0x4]
    uint32_t rax
    float zmm0
    uint32_t zmm2[0x4]
    float zmm5
    
    if (arg1 u>= 4)
        zmm5 = *(arg6 + 0xc)
        uint64_t rax_3 = zx.q(((arg1 - 4) u>> 2) + 1)
        int64_t var_30_1 = 0
        uint64_t i_2 = zx.q(rax_3.d)
        r9 = (rax_3 << 2).d
        uint64_t i
        
        do
            zmm0 = *rcx_2
            
            if (not(zmm0 <= 1f))
                zmm0 = 1f
            
            uint32_t rax_4 = zx.d(rcx_2[1].b)
            zmm2 = 0x3f800000
            zmm2[0] = 1f / ((zmm0 * 0.100000001f - 0.100000001f) * zmm5)
            var_38[0] = _mm_min_ss(_mm_and_ps(zmm2, 0x7fffffff)[0], 0x3f800000)[0]
            float temp0_3[0x4] = _mm_shuffle_ps(var_38, var_38, 0xe1)
            temp0_3[0] = float.s(rax_4) * 0.00392156886f
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
            *rdx_3 = temp0_4
            zmm0 = rcx_2[2]
            
            if (not(zmm0 <= 1f))
                zmm0 = 1f
            
            uint32_t rax_5 = zx.d(rcx_2[3].b)
            zmm2 = 0x3f800000
            zmm2[0] = 1f / ((zmm0 * 0.100000001f - 0.100000001f) * zmm5)
            temp0_4[0] = _mm_min_ss(_mm_and_ps(zmm2, 0x7fffffff)[0], 0x3f800000)[0]
            float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
            temp0_7[0] = float.s(rax_5) * 0.00392156886f
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xe1)
            *rdx_3 = temp0_8
            zmm0 = rcx_2[4]
            
            if (not(zmm0 <= 1f))
                zmm0 = 1f
            
            uint32_t rax_6 = zx.d(rcx_2[5].b)
            zmm2 = 0x3f800000
            zmm2[0] = 1f / ((zmm0 * 0.100000001f - 0.100000001f) * zmm5)
            temp0_8[0] = _mm_min_ss(_mm_and_ps(zmm2, 0x7fffffff)[0], 0x3f800000)[0]
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
            temp0_11[0] = float.s(rax_6) * 0.00392156886f
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xe1)
            *rdx_3 = temp0_12
            zmm0 = rcx_2[6]
            
            if (not(zmm0 <= 1f))
                zmm0 = 1f
            
            rax = zx.d(rcx_2[7].b)
            zmm2 = 0x3f800000
            rcx_2 = &rcx_2[8]
            zmm2[0] = 1f / ((zmm0 * 0.100000001f - 0.100000001f) * zmm5)
            temp0_12[0] = _mm_min_ss(_mm_and_ps(zmm2, 0x7fffffff)[0], 0x3f800000)[0]
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xe1)
            temp0_15[0] = float.s(rax) * 0.00392156886f
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xe1)
            var_38 = temp0_16
            *rdx_3 = temp0_16
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (r9 u< arg1)
        zmm5 = *(arg6 + 0xc)
        uint64_t i_3 = zx.q(arg1 - r9)
        int64_t var_30_2 = 0
        uint64_t i_1
        
        do
            zmm0 = *rcx_2
            
            if (not(zmm0 <= 1f))
                zmm0 = 1f
            
            rax = zx.d(rcx_2[1].b)
            zmm2 = 0x3f800000
            rcx_2 = &rcx_2[2]
            zmm2[0] = 1f / ((zmm0 * 0.100000001f - 0.100000001f) * zmm5)
            var_38[0] = _mm_min_ss(_mm_and_ps(zmm2, 0x7fffffff)[0], 0x3f800000)[0]
            float temp0_19[0x4] = _mm_shuffle_ps(var_38, var_38, 0xe1)
            temp0_19[0] = float.s(rax) * 0.00392156886f
            float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xe1)
            var_38 = temp0_20
            *rdx_3 = temp0_20
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    r10_1 += 1
while (r10_1 u< arg2)
