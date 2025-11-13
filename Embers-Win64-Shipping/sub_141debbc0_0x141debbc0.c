// 函数: sub_141debbc0
// 地址: 0x141debbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[1].d)
int64_t r10 = 0
float result[0x4] = zx.o(0)
uint32_t zmm0[0x4]
uint32_t zmm1[0x4]
float zmm2[0x4]

if (r8 s>= 4)
    void* rax_1 = *arg1
    void* rdx_1 = rax_1 + 0x10
    void* rax_2 = rax_1 + 0x30
    int64_t i_3 = ((r8 - 4) u>> 2) + 1
    r10 = i_3 << 2
    int64_t i
    
    do
        void* rcx = *(rdx_1 - 0x10)
        
        if (rcx == 0)
            zmm1 = 0x3f800000
        else
            zmm1 = *(rcx + 0x94)
        
        zmm1[0] = zmm1[0] f* *(rdx_1 + 4)
        
        if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f))
            zmm1 = 0x3f800000
        
        zmm0 = zx.o(*(rdx_1 + 8))
        uint32_t temp0_2[0x4] = _mm_and_ps(zmm1, 0x7fffffff)
        zmm2 = *rdx_1
        zmm2[0] = zmm2[0] f- *(rdx_1 - 4)
        void* rcx_1 = *(rdx_1 + 0x10)
        zmm0 = _mm_cvtepi32_ps(zmm0)
        zmm2[0] = zmm2[0] f* zmm0[0]
        zmm2[0] = zmm2[0] f/ temp0_2[0]
        zmm2[0] = zmm2[0] f+ *(rdx_1 - 8)
        float temp0_4[0x4] = _mm_max_ss(zmm2[0], result[0])
        
        if (rcx_1 == 0)
            zmm1 = 0x3f800000
        else
            zmm1 = *(rcx_1 + 0x94)
        
        zmm1[0] = zmm1[0] f* *(rax_2 + 4)
        
        if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f))
            zmm1 = 0x3f800000
        
        zmm0 = zx.o(*(rax_2 + 8))
        uint32_t temp0_6[0x4] = _mm_and_ps(zmm1, 0x7fffffff)
        result = *rax_2
        result[0] = result[0] f- *(rax_2 - 4)
        void* rcx_2 = *(rdx_1 + 0x30)
        zmm0 = _mm_cvtepi32_ps(zmm0)
        result[0] = result[0] f* zmm0[0]
        result[0] = result[0] f/ temp0_6[0]
        result[0] = result[0] f+ *(rax_2 - 8)
        float temp0_8[0x4] = _mm_max_ss(result[0], temp0_4[0])
        
        if (rcx_2 == 0)
            zmm1 = 0x3f800000
        else
            zmm1 = *(rcx_2 + 0x94)
        
        zmm1[0] = zmm1[0] f* *(rax_2 + 0x24)
        
        if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f))
            zmm1 = 0x3f800000
        
        zmm0 = zx.o(*(rax_2 + 0x28))
        uint32_t temp0_10[0x4] = _mm_and_ps(zmm1, 0x7fffffff)
        zmm2 = *(rax_2 + 0x20)
        zmm2[0] = zmm2[0] f- *(rax_2 + 0x1c)
        void* rcx_3 = *(rdx_1 + 0x50)
        zmm0 = _mm_cvtepi32_ps(zmm0)
        zmm2[0] = zmm2[0] f* zmm0[0]
        zmm2[0] = zmm2[0] f/ temp0_10[0]
        zmm2[0] = zmm2[0] f+ *(rax_2 + 0x18)
        float temp0_12[0x4] = _mm_max_ss(zmm2[0], temp0_8[0])
        
        if (rcx_3 == 0)
            zmm1 = 0x3f800000
        else
            zmm1 = *(rcx_3 + 0x94)
        
        zmm1[0] = zmm1[0] f* *(rax_2 + 0x44)
        
        if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f))
            zmm1 = 0x3f800000
        
        zmm0 = zx.o(*(rax_2 + 0x48))
        uint32_t temp0_14[0x4] = _mm_and_ps(zmm1, 0x7fffffff)
        result = *(rax_2 + 0x40)
        rdx_1 -= -0x80
        result[0] = result[0] f- *(rax_2 + 0x3c)
        zmm0 = _mm_cvtepi32_ps(zmm0)
        result[0] = result[0] f* zmm0[0]
        result[0] = result[0] f/ temp0_14[0]
        result[0] = result[0] f+ *(rax_2 + 0x38)
        rax_2 -= -0x80
        result = _mm_max_ss(result[0], temp0_12[0])
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r10 s< r8)
    void* rax_5 = (r10 << 5) + *arg1
    int64_t i_2 = r8 - r10
    int64_t i_1
    
    do
        void* rcx_4 = *rax_5
        
        if (rcx_4 == 0)
            zmm2 = 0x3f800000
        else
            zmm2 = *(rcx_4 + 0x94)
        
        zmm2[0] = zmm2[0] f* *(rax_5 + 0x14)
        
        if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999994e-09f))
            zmm2 = 0x3f800000
        
        zmm1 = *(rax_5 + 0x10)
        zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
        zmm1[0] = zmm1[0] f- *(rax_5 + 0xc)
        zmm0 = _mm_cvtepi32_ps(zx.o(*(rax_5 + 0x18)))
        zmm1[0] = zmm1[0] f* zmm0[0]
        zmm1[0] = zmm1[0] f/ zmm2[0]
        zmm1[0] = zmm1[0] f+ *(rax_5 + 8)
        rax_5 += 0x20
        result = _mm_max_ss(zmm1[0], result[0])
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
