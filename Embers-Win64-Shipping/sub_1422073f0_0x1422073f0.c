// 函数: sub_1422073f0
// 地址: 0x1422073f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x118)
int64_t r9 = *(arg2 + 0xf0)
uint64_t result = zx.q(rax - 1)
int32_t r10 = *(arg2 + 0x114)
int64_t rbx = *(arg2 + 0xf8)
uint32_t zmm7[0x4] = *(arg1 + 0x30)
uint32_t zmm8[0x4] = *(arg1 + 0x34)
int128_t zmm9 = *(arg1 + 0x38)
int128_t zmm10 = *(arg1 + 0x3c)
int64_t r8 = sx.q(result.d)

if (rax - 1 s>= 0)
    uint32_t zmm0[0x4]
    uint32_t zmm1[0x4]
    uint32_t zmm2[0x4]
    
    if (r8 s>= 3)
        uint64_t i_1 = (r8 + 1) u>> 2
        void* rcx_1 = rbx - 4 + (r8 << 1)
        result = neg.q(i_1)
        r8 += result << 2
        uint64_t i
        
        do
            void* rdx_2 = zx.q(zx.d(*(rcx_1 + 4)) * r10) + r9
            
            if ((*(rdx_2 + 0x5c) & 0x4000000) == 0)
                zmm0 = *(rdx_2 + 0x34)
                zmm2 = *(rdx_2 + 0x30)
                zmm1 = *(rdx_2 + 0x38)
                zmm0[0] = zmm0[0] f* zmm0[0]
                zmm2[0] = zmm2[0] f* zmm2[0]
                zmm1[0] = zmm1[0] f* zmm1[0]
                zmm2[0] = zmm2[0] f+ zmm0[0]
                zmm2[0] = zmm2[0] f+ zmm1[0]
                zmm1 = _mm_and_ps(*(rdx_2 + 0x40), 0x7fffffff)
                int32_t temp0_2 = _mm_sqrt_ss((zx.o(0)).d, zmm2[0])
                zmm2 = *(rdx_2 + 0x44)
                zmm7[0] = zmm7[0] f* temp0_2
                zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
                zmm0 = _mm_min_ss(_mm_max_ss(zmm7[0], 0x3f800000)[0], zmm9.d)
                zmm1[0] = zmm1[0] f* zmm0[0]
                zmm8[0] = zmm8[0] f* temp0_2
                zmm0 = _mm_min_ss(_mm_max_ss(zmm8[0], 0x3f800000)[0], zmm10.d)
                zmm2[0] = zmm2[0] f* zmm0[0]
                zmm0 = _mm_and_ps(*(rdx_2 + 0x48), 0x7fffffff)
                zmm1 = _mm_unpacklo_ps(zmm1, zmm2[0].q)
                result = zx.q(zmm0[0])
                *(rdx_2 + 0x50) = zmm1.q
                *(rdx_2 + 0x58) = result.d
            
            void* rdx_5 = zx.q(zx.d(*(rcx_1 + 2)) * r10) + r9
            
            if ((*(rdx_5 + 0x5c) & 0x4000000) == 0)
                zmm0 = *(rdx_5 + 0x34)
                zmm2 = *(rdx_5 + 0x30)
                zmm1 = *(rdx_5 + 0x38)
                zmm0[0] = zmm0[0] f* zmm0[0]
                zmm2[0] = zmm2[0] f* zmm2[0]
                zmm1[0] = zmm1[0] f* zmm1[0]
                zmm2[0] = zmm2[0] f+ zmm0[0]
                zmm2[0] = zmm2[0] f+ zmm1[0]
                zmm1 = _mm_and_ps(*(rdx_5 + 0x40), 0x7fffffff)
                int32_t temp0_11 = _mm_sqrt_ss((zx.o(0)).d, zmm2[0])
                zmm2 = *(rdx_5 + 0x44)
                zmm7[0] = zmm7[0] f* temp0_11
                zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
                zmm0 = _mm_min_ss(_mm_max_ss(zmm7[0], 0x3f800000)[0], zmm9.d)
                zmm1[0] = zmm1[0] f* zmm0[0]
                zmm8[0] = zmm8[0] f* temp0_11
                zmm0 = _mm_min_ss(_mm_max_ss(zmm8[0], 0x3f800000)[0], zmm10.d)
                zmm2[0] = zmm2[0] f* zmm0[0]
                zmm0 = _mm_and_ps(*(rdx_5 + 0x48), 0x7fffffff)
                zmm1 = _mm_unpacklo_ps(zmm1, zmm2[0].q)
                result = zx.q(zmm0[0])
                *(rdx_5 + 0x50) = zmm1.q
                *(rdx_5 + 0x58) = result.d
            
            void* rdx_8 = zx.q(zx.d(*rcx_1) * r10) + r9
            
            if ((*(rdx_8 + 0x5c) & 0x4000000) == 0)
                zmm0 = *(rdx_8 + 0x34)
                zmm2 = *(rdx_8 + 0x30)
                zmm1 = *(rdx_8 + 0x38)
                zmm0[0] = zmm0[0] f* zmm0[0]
                zmm2[0] = zmm2[0] f* zmm2[0]
                zmm1[0] = zmm1[0] f* zmm1[0]
                zmm2[0] = zmm2[0] f+ zmm0[0]
                zmm2[0] = zmm2[0] f+ zmm1[0]
                zmm1 = _mm_and_ps(*(rdx_8 + 0x40), 0x7fffffff)
                int32_t temp0_20 = _mm_sqrt_ss((zx.o(0)).d, zmm2[0])
                zmm2 = *(rdx_8 + 0x44)
                zmm7[0] = zmm7[0] f* temp0_20
                zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
                zmm0 = _mm_min_ss(_mm_max_ss(zmm7[0], 0x3f800000)[0], zmm9.d)
                zmm1[0] = zmm1[0] f* zmm0[0]
                zmm8[0] = zmm8[0] f* temp0_20
                zmm0 = _mm_min_ss(_mm_max_ss(zmm8[0], 0x3f800000)[0], zmm10.d)
                zmm2[0] = zmm2[0] f* zmm0[0]
                zmm0 = _mm_and_ps(*(rdx_8 + 0x48), 0x7fffffff)
                zmm1 = _mm_unpacklo_ps(zmm1, zmm2[0].q)
                result = zx.q(zmm0[0])
                *(rdx_8 + 0x50) = zmm1.q
                *(rdx_8 + 0x58) = result.d
            
            void* rdx_11 = zx.q(zx.d(*(rcx_1 - 2)) * r10) + r9
            
            if ((*(rdx_11 + 0x5c) & 0x4000000) == 0)
                zmm0 = *(rdx_11 + 0x34)
                zmm2 = *(rdx_11 + 0x30)
                zmm1 = *(rdx_11 + 0x38)
                zmm0[0] = zmm0[0] f* zmm0[0]
                zmm2[0] = zmm2[0] f* zmm2[0]
                zmm1[0] = zmm1[0] f* zmm1[0]
                zmm2[0] = zmm2[0] f+ zmm0[0]
                zmm2[0] = zmm2[0] f+ zmm1[0]
                zmm1 = _mm_and_ps(*(rdx_11 + 0x40), 0x7fffffff)
                int32_t temp0_29 = _mm_sqrt_ss((zx.o(0)).d, zmm2[0])
                zmm2 = *(rdx_11 + 0x44)
                zmm7[0] = zmm7[0] f* temp0_29
                zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
                zmm0 = _mm_min_ss(_mm_max_ss(zmm7[0], 0x3f800000)[0], zmm9.d)
                zmm1[0] = zmm1[0] f* zmm0[0]
                zmm8[0] = zmm8[0] f* temp0_29
                zmm0 = _mm_min_ss(_mm_max_ss(zmm8[0], 0x3f800000)[0], zmm10.d)
                zmm2[0] = zmm2[0] f* zmm0[0]
                zmm0 = _mm_and_ps(*(rdx_11 + 0x48), 0x7fffffff)
                zmm1 = _mm_unpacklo_ps(zmm1, zmm2[0].q)
                result = zx.q(zmm0[0])
                *(rdx_11 + 0x50) = zmm1.q
                *(rdx_11 + 0x58) = result.d
            
            rcx_1 -= 8
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (r8 s>= 0)
        int64_t temp1_1
        
        do
            void* rcx_4 = zx.q(zx.d(*(rbx + (r8 << 1))) * r10) + r9
            
            if ((*(rcx_4 + 0x5c) & 0x4000000) == 0)
                zmm0 = *(rcx_4 + 0x34)
                zmm2 = *(rcx_4 + 0x30)
                zmm1 = *(rcx_4 + 0x38)
                zmm0[0] = zmm0[0] f* zmm0[0]
                zmm2[0] = zmm2[0] f* zmm2[0]
                zmm1[0] = zmm1[0] f* zmm1[0]
                zmm2[0] = zmm2[0] f+ zmm0[0]
                zmm2[0] = zmm2[0] f+ zmm1[0]
                zmm1 = _mm_and_ps(*(rcx_4 + 0x40), 0x7fffffff)
                int32_t temp0_38 = _mm_sqrt_ss((zx.o(0)).d, zmm2[0])
                zmm2 = *(rcx_4 + 0x44)
                zmm7[0] = zmm7[0] f* temp0_38
                zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
                zmm0 = _mm_min_ss(_mm_max_ss(zmm7[0], 0x3f800000)[0], zmm9.d)
                zmm1[0] = zmm1[0] f* zmm0[0]
                zmm8[0] = zmm8[0] f* temp0_38
                zmm0 = _mm_min_ss(_mm_max_ss(zmm8[0], 0x3f800000)[0], zmm10.d)
                zmm2[0] = zmm2[0] f* zmm0[0]
                zmm0 = _mm_and_ps(*(rcx_4 + 0x48), 0x7fffffff)
                zmm1 = _mm_unpacklo_ps(zmm1, zmm2[0].q)
                result = zx.q(zmm0[0])
                *(rcx_4 + 0x50) = zmm1.q
                *(rcx_4 + 0x58) = result.d
            
            temp1_1 = r8
            r8 -= 1
        while (temp1_1 - 1 s>= 0)

return result
