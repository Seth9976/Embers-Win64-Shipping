// 函数: sub_1421cbb00
// 地址: 0x1421cbb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint64_t rbp_1 = zx.q(arg3)
float zmm8[0x4] = arg4
int32_t r8 = *(arg2 + 0x118)
float zmm9[0x4]
float var_48_1[0x4] = zmm9
float zmm12[0x4]
float var_78_1[0x4] = zmm12

if (r8 s<= 0)
    return 

int64_t r9_1 = *(arg2 + 0xf0)

if (r9_1 == 0)
    return 

int16_t* rsi_1 = *(arg2 + 0xf8)

if (rsi_1 == 0)
    return 

int32_t r10_1 = *(arg2 + 0x114)
*rsi_1
void* const* rax
float zmm1[0x4]
float zmm2[0x4]

if ((*(arg1 + 0x30) & 1) != 0 && (*(*(*(arg2 + 0x28) + 0x30) + 0x59) & 1) != 0)
    void* rax_3 = *(arg2 + 0x18)
    zmm12 = *(rax_3 + 0x1c0)
    zmm9 = *(rax_3 + 0x1e0)
    rax = zx.q(r8 - 1)
    int64_t r8_1 = sx.q(rax.d)
    
    if (rax.d s>= 0)
        float zmm10[0x4] = data_143f4eb10
        uint32_t zmm11[0x4] = data_143f4dee0
        float zmm6[0x4]
        float var_18_1[0x4] = zmm6
        float zmm7[0x4]
        float var_28_1[0x4] = zmm7
        int64_t temp1_1
        
        do
            void* rdx_2 = zx.q(zx.d(rsi_1[r8_1]) * r10_1) + r9_1
            
            if ((*(rdx_2 + 0x5c) & 0x4000000) == 0)
                float zmm0[0x4] = *(rbp_1 + rdx_2 + 8)
                zmm2 = *(rbp_1 + rdx_2 + 4)
                float zmm5[0x4] = __mulps_xmmps_memps(zmm12, data_143f4eb20)
                rsi_1[r8_1 + 1]
                zmm6 = *(rbp_1 + rdx_2)
                zmm2 = _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)
                zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0[0].q), zmm2[0].q)
                arg4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm1)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), arg4)
                float zmm4[0x4] = _mm_rcp_ps(zmm9)
                zmm2 = _mm_sub_ps(zmm2, zmm0)
                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                zmm0 = _mm_mul_ps(zmm4, zmm4)
                zmm4 = _mm_add_ps(zmm4, zmm4)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm0 = _mm_mul_ps(zmm0, zmm9)
                zmm5 = _mm_mul_ps(zmm5, zmm2)
                zmm4 = _mm_sub_ps(zmm4, zmm0)
                zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), arg4)
                zmm5 = _mm_add_ps(zmm5, zmm6)
                zmm0 = _mm_mul_ps(zmm4, zmm4)
                zmm4 = _mm_sub_ps(_mm_add_ps(zmm4, zmm4), _mm_mul_ps(zmm0, zmm9))
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm1)
                zmm2 = _mm_cmpeq_ps(_mm_and_ps(zmm9, zmm11), zmm10, 2)
                zmm7 = _mm_sub_ps(zmm7, zmm0)
                zmm2 = _mm_and_ps(zmm2, zmm4 ^ zx.o(0)) ^ zmm4
                zmm7 = _mm_mul_ps(_mm_add_ps(zmm7, zmm5), zmm2)
                zmm2 = zmm7
                arg4 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm2[0] = zmm2[0] * zmm8[0]
                arg4[0] = arg4[0] * zmm8[0]
                zmm7[0] = zmm7[0] * zmm8[0]
                zmm2[0] = zmm2[0] f+ *(rdx_2 + 0x30)
                arg4[0] = arg4[0] f+ *(rdx_2 + 0x34)
                *(rdx_2 + 0x30) = zmm2[0]
                zmm7[0] = zmm7[0] f+ *(rdx_2 + 0x38)
                *(rdx_2 + 0x34) = arg4[0]
                *(rdx_2 + 0x38) = zmm7[0]
                zmm2[0] = zmm2[0] f+ *(rdx_2 + 0x20)
                arg4[0] = arg4[0] f+ *(rdx_2 + 0x24)
                zmm7[0] = zmm7[0] f+ *(rdx_2 + 0x28)
                *(rdx_2 + 0x20) = zmm2[0]
                *(rdx_2 + 0x24) = arg4[0]
                *(rdx_2 + 0x28) = zmm7[0]
            
            temp1_1 = r8_1
            r8_1 -= 1
        while (temp1_1 - 1 s>= 0)
    
    return 

rax = zx.q(r8 - 1)
int64_t rbx_2 = sx.q(rax.d)

if (rax.d s< 0)
    return 

if (rbx_2 s>= 3)
    uint64_t i_1 = (rbx_2 + 1) u>> 2
    void* r11_3 = &rsi_1[-1 + rbx_2]
    rbx_2 += neg.q(i_1) << 2
    uint64_t i
    
    do
        void* r8_4 = zx.q(zx.d(*(r11_3 + 2)) * r10_1) + r9_1
        
        if ((*(r8_4 + 0x5c) & 0x4000000) == 0)
            *(r11_3 + 4)
            zmm1 = *(rbp_1 + r8_4 + 4)
            zmm8[0] = zmm8[0] f* *(rbp_1 + r8_4)
            zmm2 = *(rbp_1 + r8_4 + 8)
            zmm1[0] = zmm1[0] * zmm8[0]
            zmm8[0] = zmm8[0] f+ *(r8_4 + 0x30)
            zmm2[0] = zmm2[0] * zmm8[0]
            *(r8_4 + 0x30) = zmm8[0]
            zmm1[0] = zmm1[0] f+ *(r8_4 + 0x34)
            *(r8_4 + 0x34) = zmm1[0]
            zmm2[0] = zmm2[0] f+ *(r8_4 + 0x38)
            *(r8_4 + 0x38) = zmm2[0]
            zmm8[0] = zmm8[0] f* *(rbp_1 + r8_4)
            zmm1 = *(rbp_1 + r8_4 + 4)
            arg4 = *(rbp_1 + r8_4 + 8)
            zmm8[0] = zmm8[0] f+ *(r8_4 + 0x20)
            zmm1[0] = zmm1[0] * zmm8[0]
            arg4[0] = arg4[0] * zmm8[0]
            *(r8_4 + 0x20) = zmm8[0]
            zmm1[0] = zmm1[0] f+ *(r8_4 + 0x24)
            *(r8_4 + 0x24) = zmm1[0]
            arg4[0] = arg4[0] f+ *(r8_4 + 0x28)
            *(r8_4 + 0x28) = arg4[0]
        
        void* r8_7 = zx.q(zx.d(*r11_3) * r10_1) + r9_1
        
        if ((*(r8_7 + 0x5c) & 0x4000000) == 0)
            *(r11_3 + 2)
            zmm1 = *(rbp_1 + r8_7 + 4)
            zmm8[0] = zmm8[0] f* *(rbp_1 + r8_7)
            zmm2 = *(rbp_1 + r8_7 + 8)
            zmm1[0] = zmm1[0] * zmm8[0]
            zmm8[0] = zmm8[0] f+ *(r8_7 + 0x30)
            zmm2[0] = zmm2[0] * zmm8[0]
            *(r8_7 + 0x30) = zmm8[0]
            zmm1[0] = zmm1[0] f+ *(r8_7 + 0x34)
            *(r8_7 + 0x34) = zmm1[0]
            zmm2[0] = zmm2[0] f+ *(r8_7 + 0x38)
            *(r8_7 + 0x38) = zmm2[0]
            zmm8[0] = zmm8[0] f* *(rbp_1 + r8_7)
            zmm1 = *(rbp_1 + r8_7 + 4)
            arg4 = *(rbp_1 + r8_7 + 8)
            zmm8[0] = zmm8[0] f+ *(r8_7 + 0x20)
            zmm1[0] = zmm1[0] * zmm8[0]
            arg4[0] = arg4[0] * zmm8[0]
            *(r8_7 + 0x20) = zmm8[0]
            zmm1[0] = zmm1[0] f+ *(r8_7 + 0x24)
            *(r8_7 + 0x24) = zmm1[0]
            arg4[0] = arg4[0] f+ *(r8_7 + 0x28)
            *(r8_7 + 0x28) = arg4[0]
        
        void* r8_10 = zx.q(zx.d(*(r11_3 - 2)) * r10_1) + r9_1
        
        if ((*(r8_10 + 0x5c) & 0x4000000) == 0)
            *r11_3
            zmm1 = *(rbp_1 + r8_10 + 4)
            zmm8[0] = zmm8[0] f* *(rbp_1 + r8_10)
            zmm2 = *(rbp_1 + r8_10 + 8)
            zmm1[0] = zmm1[0] * zmm8[0]
            zmm8[0] = zmm8[0] f+ *(r8_10 + 0x30)
            zmm2[0] = zmm2[0] * zmm8[0]
            *(r8_10 + 0x30) = zmm8[0]
            zmm1[0] = zmm1[0] f+ *(r8_10 + 0x34)
            *(r8_10 + 0x34) = zmm1[0]
            zmm2[0] = zmm2[0] f+ *(r8_10 + 0x38)
            *(r8_10 + 0x38) = zmm2[0]
            zmm8[0] = zmm8[0] f* *(rbp_1 + r8_10)
            zmm1 = *(rbp_1 + r8_10 + 4)
            arg4 = *(rbp_1 + r8_10 + 8)
            zmm8[0] = zmm8[0] f+ *(r8_10 + 0x20)
            zmm1[0] = zmm1[0] * zmm8[0]
            arg4[0] = arg4[0] * zmm8[0]
            *(r8_10 + 0x20) = zmm8[0]
            zmm1[0] = zmm1[0] f+ *(r8_10 + 0x24)
            *(r8_10 + 0x24) = zmm1[0]
            arg4[0] = arg4[0] f+ *(r8_10 + 0x28)
            *(r8_10 + 0x28) = arg4[0]
        
        void* r8_13 = zx.q(zx.d(*(r11_3 - 4)) * r10_1) + r9_1
        
        if ((*(r8_13 + 0x5c) & 0x4000000) == 0)
            *(r11_3 - 2)
            zmm1 = *(rbp_1 + r8_13 + 4)
            zmm8[0] = zmm8[0] f* *(rbp_1 + r8_13)
            zmm2 = *(rbp_1 + r8_13 + 8)
            zmm1[0] = zmm1[0] * zmm8[0]
            zmm8[0] = zmm8[0] f+ *(r8_13 + 0x30)
            zmm2[0] = zmm2[0] * zmm8[0]
            *(r8_13 + 0x30) = zmm8[0]
            zmm1[0] = zmm1[0] f+ *(r8_13 + 0x34)
            *(r8_13 + 0x34) = zmm1[0]
            zmm2[0] = zmm2[0] f+ *(r8_13 + 0x38)
            *(r8_13 + 0x38) = zmm2[0]
            zmm8[0] = zmm8[0] f* *(rbp_1 + r8_13)
            zmm1 = *(rbp_1 + r8_13 + 4)
            arg4 = *(rbp_1 + r8_13 + 8)
            zmm8[0] = zmm8[0] f+ *(r8_13 + 0x20)
            zmm1[0] = zmm1[0] * zmm8[0]
            arg4[0] = arg4[0] * zmm8[0]
            *(r8_13 + 0x20) = zmm8[0]
            zmm1[0] = zmm1[0] f+ *(r8_13 + 0x24)
            *(r8_13 + 0x24) = zmm1[0]
            arg4[0] = arg4[0] f+ *(r8_13 + 0x28)
            *(r8_13 + 0x28) = arg4[0]
        
        r11_3 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbx_2 s< 0)
    return 

int64_t temp0_37

do
    void* rcx_20 = zx.q(zx.d(rsi_1[rbx_2]) * r10_1) + r9_1
    
    if ((*(rcx_20 + 0x5c) & 0x4000000) == 0)
        zmm1 = *(rbp_1 + rcx_20 + 4)
        zmm8[0] = zmm8[0] f* *(rbp_1 + rcx_20)
        zmm2 = *(rbp_1 + rcx_20 + 8)
        zmm1[0] = zmm1[0] * zmm8[0]
        zmm8[0] = zmm8[0] f+ *(rcx_20 + 0x30)
        zmm2[0] = zmm2[0] * zmm8[0]
        zmm1[0] = zmm1[0] f+ *(rcx_20 + 0x34)
        zmm2[0] = zmm2[0] f+ *(rcx_20 + 0x38)
        *(rcx_20 + 0x30) = zmm8[0]
        *(rcx_20 + 0x34) = zmm1[0]
        *(rcx_20 + 0x38) = zmm2[0]
        zmm1 = *(rbp_1 + rcx_20 + 4)
        arg4 = *(rbp_1 + rcx_20 + 8)
        zmm8[0] = zmm8[0] f* *(rbp_1 + rcx_20)
        zmm1[0] = zmm1[0] * zmm8[0]
        zmm8[0] = zmm8[0] f+ *(rcx_20 + 0x20)
        arg4[0] = arg4[0] * zmm8[0]
        zmm1[0] = zmm1[0] f+ *(rcx_20 + 0x24)
        arg4[0] = arg4[0] f+ *(rcx_20 + 0x28)
        *(rcx_20 + 0x20) = zmm8[0]
        *(rcx_20 + 0x24) = zmm1[0]
        *(rcx_20 + 0x28) = arg4[0]
    
    temp0_37 = rbx_2
    rbx_2 -= 1
while (temp0_37 - 1 s>= 0)
