// 函数: sub_1417c13e0
// 地址: 0x1417c13e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* r8 = *arg2
char r10 = 0
uint128_t zmm10
zmm10.d = (*(arg1 + 0x10)).d f- *(arg1 + 0x14)
int64_t i_6 = sx.q(r8[1].d)
float zmm7[0x4] = data_143dbb1fc
float zmm8[0x4] = data_143dbb200
uint128_t zmm9 = data_143dbb1f8
uint128_t zmm12 = zmm9
float zmm13[0x4] = zmm7
float zmm14[0x4] = zmm8
uint128_t zmm0
float zmm1[0x4]
float zmm2[0x4]

if (i_6 s> 0)
    int64_t i_5 = i_6
    int32_t* r8_1 = *r8
    int64_t rdx = *arg2[1]
    int64_t i
    
    do
        result = sx.q(*r8_1)
        void* rcx = result * 3
        
        if (r10 == 0)
            zmm0 = zx.o(*(rdx + (rcx << 2)))
            r10 = 1
            result = zx.q(*(rdx + (rcx << 2) + 8))
            zmm9 = zmm0
            int128_t var_d8
            var_d8:0xc.q = zmm0.q
            zmm12 = zmm9
            int32_t var_c8
            zmm7 = var_c8
            zmm13 = zmm7
            zmm8 = result.d
            zmm14 = zmm8
        else
            zmm0 = *(rdx + (rcx << 2))
            
            if (not(zmm12.d f<= zmm0.d))
                zmm12 = zmm0
            
            zmm2 = *(rdx + (rcx << 2) + 4)
            
            if (not(zmm13[0] <= zmm2[0]))
                zmm13 = zmm2
            
            zmm1 = *(rdx + (rcx << 2) + 8)
            
            if (not(zmm14[0] <= zmm1[0]))
                zmm14 = zmm1
            
            if (not(zmm9.d f>= zmm0.d))
                zmm9 = zmm0
            
            if (not(zmm7[0] >= zmm2[0]))
                zmm7 = zmm2
            
            if (not(zmm8[0] >= zmm1[0]))
                zmm8 = zmm1
        
        r8_1 = &r8_1[2]
        i = i_5
        i_5 -= 1
    while (i != 1)

zmm9.d = zmm9.d f- zmm12.d
uint128_t zmm6 = 0x7f7fffff
zmm7[0] = zmm7[0] - zmm13[0]
float zmm15[0x4] = 0xff7fffff
zmm8[0] = zmm8[0] - zmm14[0]
int64_t r14 = 0
float zmm11[0x4] = zx.o(0)
zmm9.d = zmm9.d f* 0.100000001f
zmm7[0] = zmm7[0] * 0.100000001f
zmm8[0] = zmm8[0] * 0.100000001f

if (i_6 s> 0)
    int64_t rsi_1 = 0
    
    do
        bool cond:1_1 = zmm9.d f== zmm11[0]
        int64_t rbp_1 = **arg2
        float zmm4[0x4] = *(arg1 + 0x20)
        int64_t rax_2 = sx.q(*(rbp_1 + (rsi_1 << 3)))
        float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        int64_t rdx_1 = rax_2 * 3
        int64_t rcx_1 = *arg2[1]
        float zmm3[0x4] = *(rcx_1 + (rdx_1 << 2))
        zmm0 = *(rcx_1 + (rdx_1 << 2) + 8)
        zmm3[0] = zmm3[0] f- zmm12.d
        zmm2 = *(rcx_1 + (rdx_1 << 2) + 4)
        zmm0.d = zmm0.d f- zmm14[0]
        zmm2[0] = zmm2[0] - zmm13[0]
        float temp0_5[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), _mm_unpacklo_ps(zmm2, zmm11[0].q)[0].q), 
            *(arg1 + 0x40))
        float temp0_6[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_1)
        float temp0_12[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_6), zmm0)
        float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
        float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_1)
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
        float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_5)
        int96_t var_d8_1 =
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_17, temp0_6), zmm0), temp0_18)[0].12
        
        if (cond:1_1)
            zmm1 = zmm11
        else
            zmm1 = var_d8_1.d
            zmm1[0] = zmm1[0] f/ zmm9.d
        
        if (zmm7[0] == zmm11[0])
            zmm2 = zmm11
        else
            zmm2 = var_d8_1:4.d
            zmm2[0] = zmm2[0] / zmm7[0]
        
        if (zmm8[0] == zmm11[0])
            zmm3 = zmm11
        else
            zmm3 = var_d8_1:8.d
            zmm3[0] = zmm3[0] / zmm8[0]
        
        zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1417c4aa0(*arg3 + (sx.q(*(rbp_1 + (rsi_1 << 3) + 4)) << 2), zmm1, zmm2, zmm3)
        int64_t rax_5 = sx.q(*(rbp_1 + (rsi_1 << 3) + 4))
        int64_t rcx_4 = *arg3
        zmm0.d = zmm10.d f* *(rcx_4 + (rax_5 << 2))
        *(rcx_4 + (rax_5 << 2)) = zmm0.d
        result = sx.q(*(rbp_1 + (rsi_1 << 3) + 4))
        rsi_1 += 1
        zmm1 = *(rcx_4 + (result << 2))
        zmm15 = _mm_max_ss(zmm1[0], zmm15[0])
        zmm6 = _mm_min_ss(zmm1.d, zmm6.d)
    while (rsi_1 s< i_6)

zmm0.d = zmm6.d f- zmm15[0]
zmm10.d = zmm10.d f/ zmm0.d

if (not(zmm0.d f== zmm11[0]))
    if (i_6 s>= 4)
        int64_t rcx_5 = *arg3
        void* rdx_3 = **arg2 + 0xc
        int64_t i_4 = ((i_6 - 4) u>> 2) + 1
        r14 = i_4 << 2
        int64_t i_1
        
        do
            int64_t rax_7 = sx.q(*(rdx_3 - 8))
            zmm0.d = (*(rcx_5 + (rax_7 << 2))).d f- zmm6.d
            zmm0.d = zmm0.d f* zmm10.d
            zmm0.d = zmm0.d f+ *(arg1 + 0x10)
            *(rcx_5 + (rax_7 << 2)) = zmm0.d
            int64_t rax_8 = sx.q(*rdx_3)
            zmm0.d = (*(rcx_5 + (rax_8 << 2))).d f- zmm6.d
            zmm0.d = zmm0.d f* zmm10.d
            zmm0.d = zmm0.d f+ *(arg1 + 0x10)
            *(rcx_5 + (rax_8 << 2)) = zmm0.d
            int64_t rax_9 = sx.q(*(rdx_3 + 8))
            zmm0.d = (*(rcx_5 + (rax_9 << 2))).d f- zmm6.d
            zmm0.d = zmm0.d f* zmm10.d
            zmm0.d = zmm0.d f+ *(arg1 + 0x10)
            *(rcx_5 + (rax_9 << 2)) = zmm0.d
            result = sx.q(*(rdx_3 + 0x10))
            rdx_3 += 0x20
            zmm0.d = (*(rcx_5 + (result << 2))).d f- zmm6.d
            zmm0.d = zmm0.d f* zmm10.d
            zmm0.d = zmm0.d f+ *(arg1 + 0x10)
            *(rcx_5 + (result << 2)) = zmm0.d
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    if (r14 s< i_6)
        int64_t r8_4 = *arg3
        int64_t i_3 = i_6 - r14
        int32_t* rdx_6 = **arg2 + 4 + (r14 << 3)
        int64_t i_2
        
        do
            result = sx.q(*rdx_6)
            rdx_6 = &rdx_6[2]
            zmm0.d = (*(r8_4 + (result << 2))).d f- zmm6.d
            zmm0.d = zmm0.d f* zmm10.d
            zmm0.d = zmm0.d f+ *(arg1 + 0x10)
            *(r8_4 + (result << 2)) = zmm0.d
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)

return result
