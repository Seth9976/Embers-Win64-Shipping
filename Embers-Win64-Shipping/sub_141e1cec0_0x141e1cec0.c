// 函数: sub_141e1cec0
// 地址: 0x141e1cec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = 0x3f800000
int32_t i_3 = 0
zmm0[0] = 1f f- *(arg3 + 4)
float zmm7[0x4] = *(arg3 + 4)
float zmm6[0x4] = zmm0[0]
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float zmm2[0x4]

if (*(arg3 + 0xb8) == 0)
    int32_t i_6 = arg2[2].d
    
    if (i_6 != 0)
        float (* rdx_2)[0x4] = nullptr
        uint64_t i_4 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t rax_8 = *(arg4 + 8)
            zmm2 = *(rdx_2 + rax_8)
            zmm0 = *(rdx_2 + rax_8 + 0x20)
            int64_t rax_9 = arg2[1]
            float temp0_21[0x4] = _mm_mul_ps(*(rdx_2 + rax_8 + 0x10), temp0)
            float temp0_22[0x4] = _mm_mul_ps(zmm0, temp0)
            float temp0_23[0x4] = _mm_mul_ps(zmm2, temp0)
            *(rdx_2 + rax_9 + 0x10) = temp0_21
            *(rdx_2 + rax_9 + 0x20) = temp0_22
            *(rdx_2 + rax_9) = temp0_23
            int64_t rcx_4 = arg2[1]
            int64_t rax_10 = *(arg5 + 8)
            float temp0_24[0x4] = __mulps_xmmps_memps(temp0_1, *(rdx_2 + rax_10))
            float temp0_25[0x4] = _mm_sub_ps(zx.o(0), temp0_24)
            float temp0_26[0x4] = __mulps_xmmps_memps(temp0_24, *(rdx_2 + rcx_4))
            float temp0_28[0x4] = _mm_add_ps(temp0_26, _mm_shuffle_ps(temp0_26, temp0_26, 0x4e))
            *(rdx_2 + rcx_4) = __addps_xmmps_memps(
                _mm_and_ps(
                    _mm_cmpeq_ps(zx.o(0), 
                        _mm_add_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x39), temp0_28), 2), 
                    temp0_25 ^ temp0_24) ^ temp0_25, 
                *(rdx_2 + rcx_4))
            *(rdx_2 + rcx_4 + 0x10) = __addps_xmmps_memps(
                _mm_mul_ps(*(rdx_2 + rax_10 + 0x10), temp0_1), *(rdx_2 + rcx_4 + 0x10))
            *(rdx_2 + rcx_4 + 0x20) = __addps_xmmps_memps(
                _mm_mul_ps(*(rdx_2 + rax_10 + 0x20), temp0_1), *(rdx_2 + rcx_4 + 0x20))
            rdx_2 = &rdx_2[3]
            i = i_4
            i_4 -= 1
        while (i != 1)
else
    int32_t rdi_1 = arg2[2].d
    int32_t rbx_1 = 0
    
    if (rdi_1 != 0)
        int128_t* r12_1 = nullptr
        
        do
            int64_t* rcx_1 = *(arg3 + 0xb8) + 0x28
            int32_t rax_2 = (**rcx_1)(rcx_1, zx.q(rbx_1), *arg2 + 0x4a0)
            float zmm3[0x4]
            float zmm5_1[0x4]
            
            if (rax_2 == 0xffffffff)
                zmm3 = temp0
                zmm5_1 = temp0_1
            else
                void* rcx_2 = *(arg3 + 0x58)
                int64_t rdx_1 = sx.q(rax_2)
                zmm3 = *(*(rcx_2 + 0x70) + (rdx_1 << 2))
                int64_t rax_4 = *(rcx_2 + 0x30)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                zmm5_1 = *(rax_4 + (rdx_1 << 2))
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
            
            int64_t rax_5 = *(arg4 + 8)
            rbx_1 += 1
            zmm2 = *(r12_1 + rax_5)
            zmm0 = *(r12_1 + rax_5 + 0x20)
            int64_t rax_6 = arg2[1]
            float temp0_4[0x4] = _mm_mul_ps(*(r12_1 + rax_5 + 0x10), zmm3)
            float temp0_5[0x4] = _mm_mul_ps(zmm0, zmm3)
            float temp0_6[0x4] = _mm_mul_ps(zmm2, zmm3)
            *(r12_1 + rax_6 + 0x10) = temp0_4
            *(r12_1 + rax_6 + 0x20) = temp0_5
            *(r12_1 + rax_6) = temp0_6
            int64_t rcx_3 = arg2[1]
            int64_t rax_7 = *(arg5 + 8)
            float zmm1[0x4] = *(r12_1 + rcx_3)
            float temp0_7[0x4] = __mulps_xmmps_memps(zmm5_1, *(r12_1 + rax_7))
            float temp0_8[0x4] = _mm_mul_ps(zmm1, temp0_7)
            float temp0_9[0x4] = _mm_sub_ps(zx.o(0), temp0_7)
            float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_8, temp0_8, 0x4e))
            *(r12_1 + rcx_3) = __addps_xmmps_memps(
                _mm_and_ps(
                    _mm_cmpeq_ps(zx.o(0), 
                        _mm_add_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0x39), temp0_11), 2), 
                    temp0_9 ^ temp0_7) ^ temp0_9, 
                *(r12_1 + rcx_3))
            *(r12_1 + rcx_3 + 0x10) = __addps_xmmps_memps(
                _mm_mul_ps(*(r12_1 + rax_7 + 0x10), zmm5_1), *(r12_1 + rcx_3 + 0x10))
            *(r12_1 + rcx_3 + 0x20) = __addps_xmmps_memps(
                _mm_mul_ps(*(r12_1 + rax_7 + 0x20), zmm5_1), *(r12_1 + rcx_3 + 0x20))
            r12_1 = &r12_1[3]
        while (rbx_1 != rdi_1)
0x3f800000[0] = 1f f- *(arg3 + 4)
uint64_t result
uint32_t zmm6_1[0x4]
result, zmm6_1 = sub_141decfa0(&arg2[4], arg4 + 0x20)
zmm6_1[0] = zmm6_1[0] f- 1f

if (__andps_xmmxud_memxud(zmm6_1, data_142d3f770)[0] f> 9.99999994e-09f)
    int32_t i_1 = 0
    
    if (*(arg4 + 0x28) s> 0)
        int64_t rdx_8 = 0
        
        do
            rdx_8 += 8
            i_1 += 1
            *(rdx_8 + arg2[4] - 4) = *(rdx_8 + *(arg4 + 0x20) - 4)
            zmm6_1[0] = zmm6_1[0] f* *(rdx_8 + *(arg4 + 0x20) - 8)
            result = arg2[4]
            *(rdx_8 + result - 8) = zmm6_1[0]
        while (i_1 s< *(arg4 + 0x28))
else if (arg4 + 0x20 != &arg2[4])
    int64_t* rdx_4 = *(arg4 + 0x30)
    int32_t rcx_6 = 0
    arg2[6] = rdx_4
    
    if (rdx_4 != 0)
        int64_t i_5 = sx.q(rdx_4[1].d)
        
        if (i_5 s> 0)
            void* rdx_5 = *rdx_4
            int64_t i_2
            
            do
                int32_t rax_11 = rcx_6
                rdx_5 += 2
                rcx_6 += 1
                
                if (*(rdx_5 - 2) == 0xffff)
                    rcx_6 = rax_11
                
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
    
    arg2[7].w = rcx_6.w
    result = zx.q(*(arg2 + 0x2c))
    arg2[5].d = 0
    
    if (result.d s< 0 && result.d != 0)
        result = sub_14083ad10(&arg2[4], 0)
    
    int64_t r14_1 = sx.q(*(arg4 + 0x28))
    
    if (r14_1.d != 0)
        int32_t rax_12 = arg2[5].d
        int32_t rdx_6 = rax_12 + r14_1.d
        
        if (rdx_6 s> *(arg2 + 0x2c))
            sub_14083ad10(&arg2[4], rdx_6)
            rax_12 = arg2[5].d
        
        result = memcpy(arg2[4] + (sx.q(rax_12) << 3), *(arg4 + 0x20), (r14_1 << 3).d)
        arg2[5].d += r14_1.d
    
    *(arg2 + 0x3a) = 1

uint32_t zmm1_1[0x4] = *(arg3 + 4)

if (not(zmm1_1[0] f<= 9.99999975e-06f) && arg2[5].d s> 0)
    int64_t rdx_9 = *(arg5 + 0x20)
    uint32_t* rcx_12 = nullptr
    
    do
        int64_t r8_4 = arg2[4]
        
        if (*(rcx_12 + r8_4 + 4) != 0 || *(rcx_12 + rdx_9 + 4) != 0)
            result.b = 1
        else
            result.b = 0
        
        *(rcx_12 + r8_4 + 4) = result.b
        result = arg2[4]
        i_3 += 1
        rdx_9 = *(arg5 + 0x20)
        zmm1_1[0] = zmm1_1[0] f* *(rcx_12 + rdx_9)
        zmm1_1[0] = zmm1_1[0] f+ *(rcx_12 + result)
        *(rcx_12 + result) = zmm1_1[0]
        rcx_12 = &rcx_12[2]
    while (i_3 s< arg2[5].d)

return result
