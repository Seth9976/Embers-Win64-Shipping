// 函数: sub_1421cc1b0
// 地址: 0x1421cc1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t r11_1 = *(arg2 + 0x118)

if (r11_1 s<= 0)
    return 

int64_t r8 = *(arg2 + 0xf0)

if (r8 == 0)
    return 

int16_t* rdi_1 = *(arg2 + 0xf8)

if (rdi_1 == 0)
    return 

void* rbx_1 = *(arg2 + 0x28)
int32_t rdx = *(arg2 + 0x114)
*rdi_1
void* const* rax
float zmm5[0x4]
float zmm6[0x4]
float zmm7[0x4]

if ((*(arg1 + 0x30) & 1) == 0 || (*(*(rbx_1 + 0x30) + 0x59) & 1) == 0)
    int32_t rax_5 = *(arg1 + 0x40)
    int64_t var_98_1 = *(arg1 + 0x38)
    
    if ((*(*(rbx_1 + 0x30) + 0x59) & 1) == 0)
        zmm7 = rax_5
        zmm6 = var_98_1:4.d
        zmm5 = var_98_1.d
    else
        int32_t var_8c_1 = 0
        float zmm4[0x4] = var_98_1.o
        zmm4[0] = var_98_1.d[0]
        int64_t var_88_1 = 0
        float temp0_36[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
        temp0_36[0] = var_98_1:4.d[0]
        int32_t var_80_1 = 0
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xc6)
        temp0_37[0] = rax_5[0]
        float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)
        float temp0_40[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_38, temp0_38, 0xff), *(arg2 + 0x90))
        float temp0_42[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_38, temp0_38, 0x55), *(arg2 + 0x70))
        float temp0_44[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_38, temp0_38, 0xaa), *(arg2 + 0x80))
        float temp0_46[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_38, temp0_38, 0), *(arg2 + 0x60))
        zmm5 = _mm_add_ps(_mm_add_ps(temp0_40, temp0_44), _mm_add_ps(temp0_42, temp0_46))
        zmm6 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm7 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
    
    rax = zx.q(r11_1 - 1)
    int64_t r11_3 = sx.q(rax.d)
    
    if (rax.d s>= 0)
        if (r11_3 s>= 3)
            uint64_t i_3 = (r11_3 + 1) u>> 2
            void* r10_5 = &rdi_1[-1 + r11_3]
            r11_3 += neg.q(i_3) << 2
            uint64_t i
            
            do
                void* r9_16 = zx.q(zx.d(*(r10_5 + 2)) * rdx) + r8
                
                if ((*(r9_16 + 0x5c) & 0x4000000) == 0)
                    *(r10_5 + 4)
                    zmm5[0] = zmm5[0] * arg4[0]
                    zmm6[0] = zmm6[0] * arg4[0]
                    zmm7[0] = zmm7[0] * arg4[0]
                    zmm5[0] = zmm5[0] f+ *(r9_16 + 0x30)
                    *(r9_16 + 0x30) = zmm5[0]
                    zmm6[0] = zmm6[0] f+ *(r9_16 + 0x34)
                    *(r9_16 + 0x34) = zmm6[0]
                    zmm7[0] = zmm7[0] f+ *(r9_16 + 0x38)
                    *(r9_16 + 0x38) = zmm7[0]
                    zmm5[0] = zmm5[0] f+ *(r9_16 + 0x20)
                    *(r9_16 + 0x20) = zmm5[0]
                    zmm6[0] = zmm6[0] f+ *(r9_16 + 0x24)
                    *(r9_16 + 0x24) = zmm6[0]
                    zmm7[0] = zmm7[0] f+ *(r9_16 + 0x28)
                    *(r9_16 + 0x28) = zmm7[0]
                
                void* r9_19 = zx.q(zx.d(*r10_5) * rdx) + r8
                
                if ((*(r9_19 + 0x5c) & 0x4000000) == 0)
                    *(r10_5 + 2)
                    zmm5[0] = zmm5[0] * arg4[0]
                    zmm6[0] = zmm6[0] * arg4[0]
                    zmm7[0] = zmm7[0] * arg4[0]
                    zmm5[0] = zmm5[0] f+ *(r9_19 + 0x30)
                    *(r9_19 + 0x30) = zmm5[0]
                    zmm6[0] = zmm6[0] f+ *(r9_19 + 0x34)
                    *(r9_19 + 0x34) = zmm6[0]
                    zmm7[0] = zmm7[0] f+ *(r9_19 + 0x38)
                    *(r9_19 + 0x38) = zmm7[0]
                    zmm5[0] = zmm5[0] f+ *(r9_19 + 0x20)
                    *(r9_19 + 0x20) = zmm5[0]
                    zmm6[0] = zmm6[0] f+ *(r9_19 + 0x24)
                    *(r9_19 + 0x24) = zmm6[0]
                    zmm7[0] = zmm7[0] f+ *(r9_19 + 0x28)
                    *(r9_19 + 0x28) = zmm7[0]
                
                void* r9_22 = zx.q(zx.d(*(r10_5 - 2)) * rdx) + r8
                
                if ((*(r9_22 + 0x5c) & 0x4000000) == 0)
                    *r10_5
                    zmm5[0] = zmm5[0] * arg4[0]
                    zmm6[0] = zmm6[0] * arg4[0]
                    zmm7[0] = zmm7[0] * arg4[0]
                    zmm5[0] = zmm5[0] f+ *(r9_22 + 0x30)
                    *(r9_22 + 0x30) = zmm5[0]
                    zmm6[0] = zmm6[0] f+ *(r9_22 + 0x34)
                    *(r9_22 + 0x34) = zmm6[0]
                    zmm7[0] = zmm7[0] f+ *(r9_22 + 0x38)
                    *(r9_22 + 0x38) = zmm7[0]
                    zmm5[0] = zmm5[0] f+ *(r9_22 + 0x20)
                    *(r9_22 + 0x20) = zmm5[0]
                    zmm6[0] = zmm6[0] f+ *(r9_22 + 0x24)
                    *(r9_22 + 0x24) = zmm6[0]
                    zmm7[0] = zmm7[0] f+ *(r9_22 + 0x28)
                    *(r9_22 + 0x28) = zmm7[0]
                
                void* r9_25 = zx.q(zx.d(*(r10_5 - 4)) * rdx) + r8
                
                if ((*(r9_25 + 0x5c) & 0x4000000) == 0)
                    *(r10_5 - 2)
                    zmm5[0] = zmm5[0] * arg4[0]
                    zmm6[0] = zmm6[0] * arg4[0]
                    zmm7[0] = zmm7[0] * arg4[0]
                    zmm5[0] = zmm5[0] f+ *(r9_25 + 0x30)
                    *(r9_25 + 0x30) = zmm5[0]
                    zmm6[0] = zmm6[0] f+ *(r9_25 + 0x34)
                    *(r9_25 + 0x34) = zmm6[0]
                    zmm7[0] = zmm7[0] f+ *(r9_25 + 0x38)
                    *(r9_25 + 0x38) = zmm7[0]
                    zmm5[0] = zmm5[0] f+ *(r9_25 + 0x20)
                    *(r9_25 + 0x20) = zmm5[0]
                    zmm6[0] = zmm6[0] f+ *(r9_25 + 0x24)
                    *(r9_25 + 0x24) = zmm6[0]
                    zmm7[0] = zmm7[0] f+ *(r9_25 + 0x28)
                    *(r9_25 + 0x28) = zmm7[0]
                
                r10_5 -= 8
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        if (r11_3 s>= 0)
            int64_t temp1_1
            
            do
                void* rcx_32 = zx.q(zx.d(rdi_1[r11_3]) * rdx) + r8
                
                if ((*(rcx_32 + 0x5c) & 0x4000000) == 0)
                    zmm5[0] = zmm5[0] * arg4[0]
                    zmm6[0] = zmm6[0] * arg4[0]
                    zmm7[0] = zmm7[0] * arg4[0]
                    zmm5[0] = zmm5[0] f+ *(rcx_32 + 0x30)
                    zmm6[0] = zmm6[0] f+ *(rcx_32 + 0x34)
                    *(rcx_32 + 0x30) = zmm5[0]
                    zmm7[0] = zmm7[0] f+ *(rcx_32 + 0x38)
                    *(rcx_32 + 0x34) = zmm6[0]
                    *(rcx_32 + 0x38) = zmm7[0]
                    zmm5[0] = zmm5[0] f+ *(rcx_32 + 0x20)
                    zmm6[0] = zmm6[0] f+ *(rcx_32 + 0x24)
                    zmm7[0] = zmm7[0] f+ *(rcx_32 + 0x28)
                    *(rcx_32 + 0x20) = zmm5[0]
                    *(rcx_32 + 0x24) = zmm6[0]
                    *(rcx_32 + 0x28) = zmm7[0]
                
                temp1_1 = r11_3
                r11_3 -= 1
            while (temp1_1 - 1 s>= 0)
else
    void* rax_3 = *(arg2 + 0x18)
    float zmm0[0x4] = *(arg1 + 0x40)
    float zmm2[0x4] = *(arg1 + 0x3c)
    zmm6 = *(arg1 + 0x38)
    float temp0_1[0x4] = __mulps_xmmps_memps(*(rax_3 + 0x1c0), data_143f4eb20)
    float temp0_4[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
    float zmm8[0x4] = *(rax_3 + 0x1e0)
    float temp0_5[0x4] = _mm_rcp_ps(zmm8)
    rax = zx.q(r11_1 - 1)
    int64_t r11_2 = sx.q(rax.d)
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_6)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_9)
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
    float temp0_13[0x4] = _mm_sub_ps(temp0_11, temp0_8)
    float temp0_14[0x4] = _mm_mul_ps(temp0_5, temp0_5)
    float temp0_15[0x4] = _mm_add_ps(temp0_5, temp0_5)
    float temp0_16[0x4] = _mm_add_ps(temp0_13, temp0_13)
    float temp0_17[0x4] = _mm_mul_ps(temp0_14, zmm8)
    float temp0_18[0x4] = _mm_mul_ps(temp0_12, temp0_16)
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
    float temp0_20[0x4] = _mm_sub_ps(temp0_15, temp0_17)
    float temp0_21[0x4] = _mm_mul_ps(temp0_19, temp0_9)
    float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_4)
    float temp0_23[0x4] = _mm_mul_ps(temp0_20, temp0_20)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_20)
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm8)
    float temp0_27[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm8, data_143f4dee0), data_143f4eb10, 2)
    float temp0_28[0x4] = _mm_sub_ps(temp0_24, temp0_25)
    float temp0_31[0x4] =
        _mm_sub_ps(temp0_21, _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_6))
    zmm8 = _mm_and_ps(temp0_27, temp0_28 ^ zx.o(0)) ^ temp0_28
    int64_t var_98
    var_98.o = _mm_mul_ps(_mm_add_ps(temp0_31, temp0_22), zmm8)
    
    if (rax.d s>= 0)
        int32_t var_90
        zmm5 = var_90
        zmm6 = var_98:4.d
        zmm7 = var_98.d
        
        if (r11_2 s>= 3)
            uint64_t i_2 = (r11_2 + 1) u>> 2
            void* r10_3 = &rdi_1[-1 + r11_2]
            r11_2 += neg.q(i_2) << 2
            uint64_t i_1
            
            do
                void* r9_4 = zx.q(zx.d(*(r10_3 + 2)) * rdx) + r8
                
                if ((*(r9_4 + 0x5c) & 0x4000000) == 0)
                    *(r10_3 + 4)
                    zmm7[0] = zmm7[0] * arg4[0]
                    zmm6[0] = zmm6[0] * arg4[0]
                    zmm5[0] = zmm5[0] * arg4[0]
                    zmm7[0] = zmm7[0] f+ *(r9_4 + 0x30)
                    *(r9_4 + 0x30) = zmm7[0]
                    zmm6[0] = zmm6[0] f+ *(r9_4 + 0x34)
                    *(r9_4 + 0x34) = zmm6[0]
                    zmm5[0] = zmm5[0] f+ *(r9_4 + 0x38)
                    *(r9_4 + 0x38) = zmm5[0]
                    zmm7[0] = zmm7[0] f+ *(r9_4 + 0x20)
                    *(r9_4 + 0x20) = zmm7[0]
                    zmm6[0] = zmm6[0] f+ *(r9_4 + 0x24)
                    *(r9_4 + 0x24) = zmm6[0]
                    zmm5[0] = zmm5[0] f+ *(r9_4 + 0x28)
                    *(r9_4 + 0x28) = zmm5[0]
                
                void* r9_7 = zx.q(zx.d(*r10_3) * rdx) + r8
                
                if ((*(r9_7 + 0x5c) & 0x4000000) == 0)
                    *(r10_3 + 2)
                    zmm7[0] = zmm7[0] * arg4[0]
                    zmm6[0] = zmm6[0] * arg4[0]
                    zmm5[0] = zmm5[0] * arg4[0]
                    zmm7[0] = zmm7[0] f+ *(r9_7 + 0x30)
                    *(r9_7 + 0x30) = zmm7[0]
                    zmm6[0] = zmm6[0] f+ *(r9_7 + 0x34)
                    *(r9_7 + 0x34) = zmm6[0]
                    zmm5[0] = zmm5[0] f+ *(r9_7 + 0x38)
                    *(r9_7 + 0x38) = zmm5[0]
                    zmm7[0] = zmm7[0] f+ *(r9_7 + 0x20)
                    *(r9_7 + 0x20) = zmm7[0]
                    zmm6[0] = zmm6[0] f+ *(r9_7 + 0x24)
                    *(r9_7 + 0x24) = zmm6[0]
                    zmm5[0] = zmm5[0] f+ *(r9_7 + 0x28)
                    *(r9_7 + 0x28) = zmm5[0]
                
                void* r9_10 = zx.q(zx.d(*(r10_3 - 2)) * rdx) + r8
                
                if ((*(r9_10 + 0x5c) & 0x4000000) == 0)
                    *r10_3
                    zmm7[0] = zmm7[0] * arg4[0]
                    zmm6[0] = zmm6[0] * arg4[0]
                    zmm5[0] = zmm5[0] * arg4[0]
                    zmm7[0] = zmm7[0] f+ *(r9_10 + 0x30)
                    *(r9_10 + 0x30) = zmm7[0]
                    zmm6[0] = zmm6[0] f+ *(r9_10 + 0x34)
                    *(r9_10 + 0x34) = zmm6[0]
                    zmm5[0] = zmm5[0] f+ *(r9_10 + 0x38)
                    *(r9_10 + 0x38) = zmm5[0]
                    zmm7[0] = zmm7[0] f+ *(r9_10 + 0x20)
                    *(r9_10 + 0x20) = zmm7[0]
                    zmm6[0] = zmm6[0] f+ *(r9_10 + 0x24)
                    *(r9_10 + 0x24) = zmm6[0]
                    zmm5[0] = zmm5[0] f+ *(r9_10 + 0x28)
                    *(r9_10 + 0x28) = zmm5[0]
                
                void* r9_13 = zx.q(zx.d(*(r10_3 - 4)) * rdx) + r8
                
                if ((*(r9_13 + 0x5c) & 0x4000000) == 0)
                    *(r10_3 - 2)
                    zmm7[0] = zmm7[0] * arg4[0]
                    zmm6[0] = zmm6[0] * arg4[0]
                    zmm5[0] = zmm5[0] * arg4[0]
                    zmm7[0] = zmm7[0] f+ *(r9_13 + 0x30)
                    *(r9_13 + 0x30) = zmm7[0]
                    zmm6[0] = zmm6[0] f+ *(r9_13 + 0x34)
                    *(r9_13 + 0x34) = zmm6[0]
                    zmm5[0] = zmm5[0] f+ *(r9_13 + 0x38)
                    *(r9_13 + 0x38) = zmm5[0]
                    zmm7[0] = zmm7[0] f+ *(r9_13 + 0x20)
                    *(r9_13 + 0x20) = zmm7[0]
                    zmm6[0] = zmm6[0] f+ *(r9_13 + 0x24)
                    *(r9_13 + 0x24) = zmm6[0]
                    zmm5[0] = zmm5[0] f+ *(r9_13 + 0x28)
                    *(r9_13 + 0x28) = zmm5[0]
                
                r10_3 -= 8
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (r11_2 s>= 0)
            int64_t temp0_35
            
            do
                void* rcx_17 = zx.q(zx.d(rdi_1[r11_2]) * rdx) + r8
                
                if ((*(rcx_17 + 0x5c) & 0x4000000) == 0)
                    zmm7[0] = zmm7[0] * arg4[0]
                    zmm6[0] = zmm6[0] * arg4[0]
                    zmm5[0] = zmm5[0] * arg4[0]
                    zmm7[0] = zmm7[0] f+ *(rcx_17 + 0x30)
                    zmm6[0] = zmm6[0] f+ *(rcx_17 + 0x34)
                    *(rcx_17 + 0x30) = zmm7[0]
                    zmm5[0] = zmm5[0] f+ *(rcx_17 + 0x38)
                    *(rcx_17 + 0x34) = zmm6[0]
                    *(rcx_17 + 0x38) = zmm5[0]
                    zmm7[0] = zmm7[0] f+ *(rcx_17 + 0x20)
                    zmm6[0] = zmm6[0] f+ *(rcx_17 + 0x24)
                    zmm5[0] = zmm5[0] f+ *(rcx_17 + 0x28)
                    *(rcx_17 + 0x20) = zmm7[0]
                    *(rcx_17 + 0x24) = zmm6[0]
                    *(rcx_17 + 0x28) = zmm5[0]
                
                temp0_35 = r11_2
                r11_2 -= 1
            while (temp0_35 - 1 s>= 0)
