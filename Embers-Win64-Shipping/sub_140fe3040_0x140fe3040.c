// 函数: sub_140fe3040
// 地址: 0x140fe3040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t rbx_1 = 0
int128_t zmm7
int128_t var_28_1 = zmm7

do
    uint32_t r10_1 = 0
    void* rcx = arg3
    float (* rdx_3)[0x4] = (zx.q(rbx_1 * arg1) << 4) + arg4
    float var_48[0x4]
    uint32_t zmm0[0x4]
    float zmm1[0x4]
    uint128_t zmm3
    
    if (arg1 u>= 4)
        zmm7 = *(arg5 + 0xc)
        float* r8 = &rdx_3[2]
        uint64_t rax_3 = zx.q(((arg1 - 4) u>> 2) + 1)
        int64_t var_40_1 = 0
        uint64_t i_3 = zx.q(rax_3.d)
        r10_1 = (rax_3 << 2).d
        uint64_t i
        
        do
            zmm1 = zx.o(0)
            uint64_t rax_6 = zx.q(*rcx) & 0xffffff
            zmm3 = _mm_cvtepi32_ps(zx.o(*(rcx + 3)))
            zmm1[0] = float.s(rax_6)
            zmm3.d = zmm3.d f* 0.00392156886f
            zmm1[0] = zmm1[0] * 5.96046448e-08f
            
            if (not(zmm1[0] <= 1f))
                zmm1 = 0x3f800000
            
            zmm1[0] = zmm1[0] * 0.100000001f
            zmm0 = 0x3f800000
            zmm1[0] = zmm1[0] - 0.100000001f
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm0[0] = 1f / zmm1[0]
            var_48[0] = _mm_min_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x3f800000)[0]
            float temp0_4[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
            temp0_4[0] = zmm3.d
            float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
            *rdx_3 = temp0_5
            zmm1 = zx.o(0)
            zmm3.d = float.s(zx.d(*(rcx + 7)))
            zmm1[0] = float.s(zx.q(*(rcx + 4)) & 0xffffff)
            zmm3.d = zmm3.d f* 0.00392156886f
            zmm1[0] = zmm1[0] * 5.96046448e-08f
            
            if (not(zmm1[0] <= 1f))
                zmm1 = 0x3f800000
            
            zmm1[0] = zmm1[0] * 0.100000001f
            zmm0 = 0x3f800000
            zmm1[0] = zmm1[0] - 0.100000001f
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm0[0] = 1f / zmm1[0]
            temp0_5[0] = _mm_min_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x3f800000)[0]
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
            temp0_8[0] = zmm3.d
            float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
            *(r8 - 0x10) = temp0_9
            zmm1 = zx.o(0)
            zmm3.d = float.s(zx.d(*(rcx + 0xb)))
            zmm1[0] = float.s(zx.q(*(rcx + 8)) & 0xffffff)
            zmm3.d = zmm3.d f* 0.00392156886f
            zmm1[0] = zmm1[0] * 5.96046448e-08f
            
            if (not(zmm1[0] <= 1f))
                zmm1 = 0x3f800000
            
            zmm1[0] = zmm1[0] * 0.100000001f
            zmm0 = 0x3f800000
            zmm1[0] = zmm1[0] - 0.100000001f
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm0[0] = 1f / zmm1[0]
            temp0_9[0] = _mm_min_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x3f800000)[0]
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xe1)
            temp0_12[0] = zmm3.d
            float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xe1)
            *r8 = temp0_13
            zmm1 = zx.o(0)
            zmm3.d = float.s(zx.d(*(rcx + 0xf)))
            zmm1[0] = float.s(zx.q(*(rcx + 0xc)) & 0xffffff)
            zmm3.d = zmm3.d f* 0.00392156886f
            zmm1[0] = zmm1[0] * 5.96046448e-08f
            
            if (not(zmm1[0] <= 1f))
                zmm1 = 0x3f800000
            
            zmm1[0] = zmm1[0] * 0.100000001f
            zmm0 = 0x3f800000
            rdx_3 = &rdx_3[4]
            rcx += 0x10
            zmm1[0] = zmm1[0] - 0.100000001f
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm0[0] = 1f / zmm1[0]
            temp0_13[0] = _mm_min_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x3f800000)[0]
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xe1)
            temp0_16[0] = zmm3.d
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xe1)
            *(r8 + 0x10) = temp0_17
            r8 = &r8[0x10]
            var_48 = temp0_17
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (r10_1 u< arg1)
        zmm7 = *(arg5 + 0xc)
        uint64_t i_2 = zx.q(arg1 - r10_1)
        int64_t var_40_2 = 0
        uint64_t i_1
        
        do
            zmm1 = zx.o(0)
            void* const* rax = zx.q(*rcx) & 0xffffff
            zmm3 = _mm_cvtepi32_ps(zx.o(*(rcx + 3)))
            zmm1[0] = float.s(rax)
            zmm3.d = zmm3.d f* 0.00392156886f
            zmm1[0] = zmm1[0] * 5.96046448e-08f
            
            if (not(zmm1[0] <= 1f))
                zmm1 = 0x3f800000
            
            zmm1[0] = zmm1[0] * 0.100000001f
            zmm0 = 0x3f800000
            rcx += 4
            zmm1[0] = zmm1[0] - 0.100000001f
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm0[0] = 1f / zmm1[0]
            var_48[0] = _mm_min_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x3f800000)[0]
            float temp0_21[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
            temp0_21[0] = zmm3.d
            float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xe1)
            *rdx_3 = temp0_22
            rdx_3 = &rdx_3[1]
            var_48 = temp0_22
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    rbx_1 += 1
while (rbx_1 u< arg2)
