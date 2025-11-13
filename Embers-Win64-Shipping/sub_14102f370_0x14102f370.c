// 函数: sub_14102f370
// 地址: 0x14102f370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
uint64_t result = sub_14102ef10(arg1, *(arg2 + 0xc0), arg2, arg2 + 0x190)

if (*(arg2 + 0xc4) != 0 || *(arg2 + 0x1a1) != 0 || *(arg2 + 0x1a0) != 0)
    float r11_1 = 0f
    float zmm4_1[0x4] = zx.o(0)
    void var_a8
    
    if (*(arg2 + 0xc4) != 0)
        int32_t r9_1 = *(arg2 + 0xc0)
        uint32_t r10_1 = 0
        float zmm2_1[0x4]
        
        if (r9_1 s>= 4)
            void var_98
            void* rcx = &var_98
            uint64_t rax_4 = zx.q(((r9_1 - 4) u>> 2) + 1)
            void* rdx_1 = arg2 + 0x30
            uint64_t i_2 = zx.q(rax_4.d)
            r10_1 = (rax_4 << 2).d
            uint64_t i
            
            do
                void* rax_5 = *(rdx_1 - 0x30)
                
                if (rax_5 == 0)
                    *(rcx - 0x10) = zx.o(0)
                else
                    zmm2_1 = *(rax_5 + 0x20)
                    int32_t rax_6 = *(rax_5 + 0x30)
                    float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xe1)
                    temp0_2[0] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
                    float temp0_4[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                    float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
                    temp0_5[0] = temp0_4[0]
                    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
                    temp0_6[0] = rax_6
                    *(rcx - 0x10) = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
                
                void* rax_7 = *(rdx_1 - 0x18)
                
                if (rax_7 == 0)
                    *rcx = zx.o(0)
                else
                    zmm2_1 = *(rax_7 + 0x20)
                    int32_t rax_8 = *(rax_7 + 0x30)
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                    float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
                    temp0_9[0] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
                    float temp0_11[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                    float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
                    temp0_12[0] = temp0_11[0]
                    float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x27)
                    temp0_13[0] = rax_8
                    *rcx = _mm_shuffle_ps(temp0_13, temp0_13, 0x39)
                
                void* rax_9 = *rdx_1
                
                if (rax_9 == 0)
                    *(rcx + 0x10) = zx.o(0)
                else
                    zmm2_1 = *(rax_9 + 0x20)
                    int32_t rax_10 = *(rax_9 + 0x30)
                    float temp0_15[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                    float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xe1)
                    temp0_16[0] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
                    float temp0_18[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                    float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc6)
                    temp0_19[0] = temp0_18[0]
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x27)
                    temp0_20[0] = rax_10
                    *(rcx + 0x10) = _mm_shuffle_ps(temp0_20, temp0_20, 0x39)
                
                void* rax_11 = *(rdx_1 + 0x18)
                
                if (rax_11 == 0)
                    *(rcx + 0x20) = zx.o(0)
                else
                    zmm2_1 = *(rax_11 + 0x20)
                    int32_t rax_12 = *(rax_11 + 0x30)
                    float temp0_22[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                    float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xe1)
                    temp0_23[0] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
                    float temp0_25[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                    float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc6)
                    temp0_26[0] = temp0_25[0]
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x27)
                    temp0_27[0] = rax_12
                    *(rcx + 0x20) = _mm_shuffle_ps(temp0_27, temp0_27, 0x39)
                
                rdx_1 += 0x60
                rcx += 0x40
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        if (r10_1 s< r9_1)
            int64_t rcx_1 = sx.q(r10_1)
            void* rdx_2 = &var_a8 + (rcx_1 << 4)
            uint64_t i_3 = zx.q(r9_1 - r10_1)
            void* rcx_2 = arg2 + rcx_1 * 0x18
            uint64_t i_1
            
            do
                void* rax_16 = *rcx_2
                
                if (rax_16 == 0)
                    *rdx_2 = zx.o(0)
                else
                    zmm2_1 = *(rax_16 + 0x20)
                    int32_t rax_17 = *(rax_16 + 0x30)
                    float temp0_29[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                    float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xe1)
                    temp0_30[0] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
                    float temp0_32[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                    float temp0_33[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc6)
                    temp0_33[0] = temp0_32[0]
                    float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x27)
                    temp0_34[0] = rax_17
                    *rdx_2 = _mm_shuffle_ps(temp0_34, temp0_34, 0x39)
                
                rcx_2 += 0x18
                rdx_2 += 0x10
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    
    char r9_3 = *(arg2 + 0x1a0)
    char r8_1 = *(arg2 + 0x1a1)
    
    if (r9_3 != 0 || r8_1 != 0)
        float zmm0_1[0x4] = *(*(arg2 + 0x190) + 0x20)
        zmm4_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
        r11_1 = _mm_bsrli_si128(zmm0_1, 8)[0]
    
    result = (*(*arg1 + 0x320))(arg1, zx.q(*(arg2 + 0xc4)), zx.q(*(arg2 + 0xc0)), &var_a8, r9_3, 
        zmm4_1[0], r8_1, r11_1)

__security_check_cookie(rax_1 ^ &var_118)
return result
