// 函数: sub_1422f6a70
// 地址: 0x1422f6a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int128_t zmm8 = arg3
int64_t r12
r12.b = 0
int32_t i = 0
int64_t rsi = 0
uint128_t zmm6
uint128_t var_28 = zmm6
int32_t rbp = 1
float zmm0[0x4]
float zmm1[0x4]
float zmm3

while (i s>= 0)
    if (i s>= *(arg1 + 0x608))
        break
    
    void* rax = *(arg1 + 0x600)
    void* rcx = arg1 + 0x540
    
    if (rax != 0)
        rcx = rax
    
    result = arg2[1].q
    void* rcx_1 = rcx + rsi
    
    if (*(rcx_1 + 0x10) != result)
        zmm0 = *rcx_1
        zmm1 = 0x3f800000
        zmm1[0] = 1f f- zmm8.d
        *rcx_1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm0)
    else
        r12.b = 1
        zmm6.d = (*arg2).d f- *rcx_1
        zmm1 = *(rcx_1 + 4)
        float zmm4 = *(arg2 + 4) - zmm1[0]
        zmm3 = *(arg2 + 8) f- *(rcx_1 + 8)
        zmm0 = *(arg2 + 0xc)
        zmm0[0] = zmm0[0] f- *(rcx_1 + 0xc)
        zmm6.d = zmm6.d f* zmm8.d
        zmm6.d = zmm6.d f+ *rcx_1
        zmm4 = zmm4 f* zmm8.d + zmm1[0]
        zmm0[0] = zmm0[0] f* zmm8.d
        zmm3 = zmm3 f* zmm8.d f+ *(rcx_1 + 8)
        _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm0[0] = zmm0[0] f+ *(rcx_1 + 0xc)
        zmm6.d = zmm4
        _mm_shuffle_ps(zmm6, zmm6, 0xc6)
        zmm6.d = zmm3
        _mm_shuffle_ps(zmm6, zmm6, 0x27)
        zmm6.d = zmm0[0]
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
        uint128_t var_78_1 = zmm6
        *rcx_1 = zmm6
    
    zmm0 = *rcx_1
    zmm0[0] = zmm0[0] * zmm0[0]
    
    if (not(zmm0[0] >= 9.99999975e-06f))
        zmm0 = *(rcx_1 + 4)
        zmm0[0] = zmm0[0] * zmm0[0]
        
        if (not(zmm0[0] >= 9.99999975e-06f))
            zmm0 = *(rcx_1 + 8)
            zmm0[0] = zmm0[0] * zmm0[0]
            
            if (not(zmm0[0] >= 9.99999975e-06f))
                int32_t rax_1 = *(arg1 + 0x608)
                int32_t rcx_3 = rax_1 - i
                
                if (rcx_3 != 1)
                    void* rax_2 = *(arg1 + 0x600)
                    void* r9_1 = arg1 + 0x540
                    
                    if (rax_2 != 0)
                        r9_1 = rax_2
                    
                    memmove(r9_1 + sx.q(i) * 0x18, r9_1 + sx.q(rbp) * 0x18, (rcx_3 - 1) * 0x18)
                    rax_1 = *(arg1 + 0x608)
                
                result = zx.q(rax_1 - 1)
                i -= 1
                rbp -= 1
                *(arg1 + 0x608) = result.d
                rsi -= 0x18
    
    i += 1
    rbp += 1
    rsi += 0x18

if (r12.b == 0)
    zmm1 = *arg2
    zmm6 = zx.o(arg2[1].q)
    zmm3 = zmm1[1]
    arg3 = zmm1[2]
    zmm0 = zmm1[3]
    zmm1[0] = zmm1[0] f* zmm8.d
    zmm3 = zmm3 f* zmm8.d
    zmm1[0] = zmm1[0]
    zmm1[0] = zmm1[0] * zmm1[0]
    arg3.d = arg3.d f* zmm8.d
    bool cond:1_1 = zmm1[0] >= 9.99999975e-06f
    zmm0[0] = zmm0[0] f* zmm8.d
    zmm1[1] = zmm3
    zmm1[2] = arg3.d
    zmm1[3] = zmm0[0]
    
    if (not(cond:1_1) && not(zmm3 * zmm3 >= 9.99999975e-06f))
        arg3.d = arg3.d f* arg3.d
    
    if (cond:1_1 || zmm3 * zmm3 >= 9.99999975e-06f || not(arg3.d f< 9.99999975e-06f))
        int64_t rdi_2 = sx.q(*(arg1 + 0x608))
        void* result_1 = arg1 + 0x540
        int32_t rax_6 = (rdi_2 + 1).d
        *(result_1 + 0xc8) = rax_6
        
        if (rax_6 s> *(result_1 + 0xcc))
            sub_141a63ee0(result_1, rdi_2.d)
        
        result = *(result_1 + 0xc0)
        int64_t rcx_9 = rdi_2 * 3
        
        if (result != 0)
            result_1 = result
        
        *(result_1 + (rcx_9 << 3)) = zmm1
        *(result_1 + (rcx_9 << 3) + 0x10) = zmm6.q

return result
