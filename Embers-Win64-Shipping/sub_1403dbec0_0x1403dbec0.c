// 函数: sub_1403dbec0
// 地址: 0x1403dbec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_15
void* i_23 = i_15
int64_t rdi
int64_t var_30 = rdi
int32_t zmm15[0x4]
int32_t var_58[0x4] = zmm15
int32_t zmm14[0x4]
int32_t var_68[0x4] = zmm14
int32_t zmm13[0x4]
int32_t var_78[0x4] = zmm13
int128_t zmm12
int128_t var_88 = zmm12
int32_t zmm11[0x4]
int32_t var_98[0x4] = zmm11
int32_t zmm10[0x4]
int32_t var_a8[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_b8[0x4] = zmm9
int32_t zmm8[0x4]
int32_t var_c8[0x4] = zmm8
int32_t zmm7[0x4]
int32_t var_d8[0x4] = zmm7
int32_t zmm6[0x4]
int32_t var_e8[0x4] = zmm6
uint64_t rax = zx.q(arg5)

if (rax u> 4)
    png_error(arg1, "Ignoring bad adaptive filter type")
    noreturn

void* i_2 = sx.q(jump_table_1403dcdf0[rax]) + &jump_table_1403dcdf0
int32_t zmm0[0x4]
int16_t zmm1[0x8]
int16_t zmm2[0x8]
int32_t zmm3[0x4]
int32_t zmm4[0x4]
int32_t zmm5[0x4]

switch (i_2)
    case 0x1403dbf4d
        int64_t rbp_1 = *(arg2 + 8)
        uint64_t rdx_2 = (zx.q(*(arg2 + 0x13)) + 7) u>> 3
        int64_t r11_2 = rbp_1 - rdx_2
        
        if (rbp_1 u> rdx_2)
            int16_t (* rcx)[0x8] = arg3 + rdx_2
            
            if (r11_2 u< 0x20 || (rcx u< arg3 + r11_2 && arg3 + rbp_1 u> arg3))
                goto label_1403dcd11
            
            int64_t r10_2 = r11_2 & 0xffffffffffffffe0
            i_2 = ((r10_2 - 0x20) u>> 5) + 1
            uint64_t r9_1 = zx.q(i_2.d) & 1
            int64_t rsi_2
            
            if (r10_2 == 0x20)
                rsi_2 = 0
            else
                i_2 = r9_1 + 1 - i_2 - 1
                rsi_2 = 0
                void* i
                
                do
                    zmm1 = *(arg3 + rsi_2 + 0x10)
                    zmm2 = _mm_add_epi8(*(arg3 + rdx_2 + 0x30 + rsi_2 - 0x30), *(arg3 + rsi_2))
                    zmm0 = _mm_add_epi8(*(arg3 + rdx_2 + 0x30 + rsi_2 - 0x20), zmm1)
                    zmm1 = *(arg3 + rdx_2 + 0x30 + rsi_2 - 0x10)
                    zmm3 = *(arg3 + rdx_2 + 0x30 + rsi_2)
                    *(arg3 + rdx_2 + 0x30 + rsi_2 - 0x30) = zmm2
                    *(arg3 + rdx_2 + 0x30 + rsi_2 - 0x20) = zmm0
                    zmm0 = _mm_add_epi8(*(arg3 + rsi_2 + 0x20), zmm1)
                    zmm1 = _mm_add_epi8(*(arg3 + rsi_2 + 0x30), zmm3)
                    *(arg3 + rdx_2 + 0x30 + rsi_2 - 0x10) = zmm0
                    *(arg3 + rdx_2 + 0x30 + rsi_2) = zmm1
                    rsi_2 += 0x40
                    i = i_2
                    i_2 += 2
                while (i != -2)
            
            if (r9_1 != 0)
                zmm1 = *(rcx + rsi_2 + 0x10)
                zmm2 = _mm_add_epi8(*(arg3 + rsi_2), *(rcx + rsi_2))
                zmm0 = _mm_add_epi8(*(arg3 + rsi_2 + 0x10), zmm1)
                *(rcx + rsi_2) = zmm2
                *(rcx + rsi_2 + 0x10) = zmm0
            
            if (r11_2 != r10_2)
                rdx_2 += r10_2
                rcx += r10_2
                arg3 += r10_2
            label_1403dcd11:
                int64_t rdi_20 = not.q(rdx_2) + rbp_1
                i_2 = zx.q(rbp_1.d - rdx_2.d) & 3
                
                if (i_2 != 0)
                    i_2 = neg.q(i_2)
                    void* i_1
                    
                    do
                        *rcx += *arg3
                        arg3 += 1
                        rcx += 1
                        rdx_2 += 1
                        i_1 = i_2
                        i_2 += 1
                    while (i_1 != -1)
                
                if (rdi_20 u>= 3)
                    i_2 = nullptr
                    
                    do
                        *(rcx + i_2) += *(arg3 + i_2)
                        *(rcx + i_2 + 1) += *(arg3 + i_2 + 1)
                        *(rcx + i_2 + 2) += *(arg3 + i_2 + 2)
                        *(rcx + i_2 + 3) += *(arg3 + i_2 + 3)
                        i_2 += 4
                    while (rbp_1 - rdx_2 != i_2)
    case 0x1403dc038
        i_2 = zx.q(*(arg2 + 0x13)) + 7
        uint64_t rbx_2 = i_2 u>> 3
        int64_t r14_1 = *(arg2 + 8)
        void* i_22 = r14_1 - rbx_2
        int128_t* rdx_3 = arg3
        void* rcx_1 = arg4
        
        if (rbx_2 != 0)
            uint64_t rbp_2
            
            if (i_2 u<= 0xff)
            label_1403dc082:
                rbp_2 = 0
                rcx_1 = arg4
                rdx_3 = arg3
            label_1403dc090:
                int64_t rsi_5 = not.q(rbp_2) + rbx_2
                rdi = rbx_2 & 3
                
                if (rdi != 0)
                    int64_t i_3 = 0
                    
                    do
                        i_2 = zx.q(*rcx_1)
                        *rdx_3 += i_2.b
                        rcx_1 += 1
                        rdx_3 += 1
                        i_3 -= 1
                    while (neg.q(rdi) != i_3)
                    
                    rbp_2 -= i_3
                
                if (rsi_5 u>= 3)
                    uint64_t i_16 = rbx_2 - rbp_2
                    uint64_t i_4
                    
                    do
                        *rdx_3 += *rcx_1
                        *(rdx_3 + 1) += *(rcx_1 + 1)
                        *(rdx_3 + 2) += *(rcx_1 + 2)
                        i_2 = zx.q(*(rcx_1 + 3))
                        *(rdx_3 + 3) += i_2.b
                        rcx_1 += 4
                        rdx_3 += 4
                        i_4 = i_16
                        i_16 -= 4
                    while (i_4 != 4)
            else
                if (&arg4[rbx_2] u> arg3)
                    i_2 = arg3 + rbx_2
                
                if (&arg4[rbx_2] u> arg3 && i_2 u> arg4)
                    goto label_1403dc082
                
                rbp_2 = zx.q(rbx_2.d) & 0xffffffe0
                i_2 = rbp_2 - 0x20
                uint64_t rdx_9 = zx.q(((i_2 u>> 5) + 1).d) & 1
                int64_t rcx_19
                
                if (i_2 == 0)
                    rcx_19 = 0
                else
                    i_2 = 0 - (i_2 u>> 5)
                    void* i_18 = rdx_9 + i_2 - 1
                    rcx_19 = 0
                    void* i_5
                    
                    do
                        zmm1 = *(arg4 + rcx_19 + 0x10)
                        zmm2 = _mm_add_epi8(*(arg3 + rcx_19), *(arg4 + rcx_19))
                        zmm0 = _mm_add_epi8(*(arg3 + rcx_19 + 0x10), zmm1)
                        zmm1 = *(arg3 + rcx_19 + 0x20)
                        zmm3 = *(arg3 + rcx_19 + 0x30)
                        *(arg3 + rcx_19) = zmm2
                        *(arg3 + rcx_19 + 0x10) = zmm0
                        zmm0 = _mm_add_epi8(*(arg4 + rcx_19 + 0x20), zmm1)
                        zmm1 = _mm_add_epi8(*(arg4 + rcx_19 + 0x30), zmm3)
                        *(arg3 + rcx_19 + 0x20) = zmm0
                        *(arg3 + rcx_19 + 0x30) = zmm1
                        rcx_19 += 0x40
                        i_5 = i_18
                        i_18 += 2
                    while (i_5 != -2)
                
                if (rdx_9 != 0)
                    zmm1 = *(arg3 + rcx_19 + 0x10)
                    zmm2 = _mm_add_epi8(*(arg4 + rcx_19), *(arg3 + rcx_19))
                    zmm0 = _mm_add_epi8(*(arg4 + rcx_19 + 0x10), zmm1)
                    *(arg3 + rcx_19) = zmm2
                    *(arg3 + rcx_19 + 0x10) = zmm0
                
                rcx_1 = &arg4[rbp_2]
                rdx_3 = arg3 + rbp_2
                
                if (rbx_2 != rbp_2)
                    goto label_1403dc090
        
        if (i_22 != 0)
            void* r10_5
            char* r11_5
            char* r12_1
            void* r13_2
            void* r15_3
            
            if (i_22 u> 0xf)
                void* rbp_7 = rdx_3 + i_22
                int64_t r12
                r12.b = rdx_3 u< arg3 + i_22
                rdi.b = rbp_7 u> arg3
                void* rax_24
                rax_24.b = rdx_3 u< rcx_1 + i_22
                uint64_t r10
                r10.b = rcx_1 u< rbp_7
                void* rbx_16
                rbx_16.b = rdx_3 u< arg4 + i_22
                r15_3 = nullptr
                
                if ((r12.b & rdi.b) != 0)
                label_1403dcada:
                    r12_1 = arg4
                    r13_2 = arg3
                    r10_5 = rcx_1
                    r11_5 = rdx_3
                    goto label_1403dcaf1
                
                rax_24.b &= r10.b
                
                if (rax_24.b != 0)
                    goto label_1403dcada
                
                rbx_16.b &= rbp_7 u> arg4
                
                if (rbx_16.b != 0)
                    goto label_1403dcada
                
                i_2 = i_22
                r15_3 = i_22 & 0xfffffffffffffff0
                r12_1 = arg4 + r15_3
                r13_2 = arg3 + r15_3
                r10_5 = rcx_1 + r15_3
                r11_5 = rdx_3 + r15_3
                int64_t rsi_13 = 0
                
                do
                    zmm3 = *(arg3 + rsi_13)
                    int32_t var_f8_1[0x4] = zmm3
                    zmm4 = _mm_unpackhi_epi8(zmm3, 0)
                    zmm13 = _mm_unpackhi_epi16(zmm4, 0)
                    zmm4 = _mm_unpacklo_epi16(zmm4, 0)
                    zmm3 = _mm_unpacklo_epi8(zmm3, 0)
                    zmm15 = _mm_unpackhi_epi16(zmm3, 0)
                    zmm3 = _mm_unpacklo_epi16(zmm3, 0)
                    zmm10 = *(rcx_1 + rsi_13)
                    int32_t var_108_1[0x4] = zmm10
                    zmm2 = _mm_unpackhi_epi8(zmm10, 0)
                    zmm14 = _mm_unpackhi_epi16(zmm2, 0)
                    zmm2 = _mm_unpacklo_epi16(zmm2, 0)
                    zmm10 = _mm_unpacklo_epi8(zmm10, 0)
                    zmm8 = _mm_unpackhi_epi16(zmm10, 0)
                    zmm10 = _mm_unpacklo_epi16(zmm10, 0)
                    zmm11 = *(arg4 + rsi_13)
                    zmm0 = _mm_unpackhi_epi8(zmm11, 0)
                    zmm1 = _mm_unpackhi_epi16(zmm0, 0)
                    zmm0 = _mm_unpacklo_epi16(zmm0, 0)
                    zmm5 = _mm_unpacklo_epi8(zmm11, 0)
                    zmm6 = _mm_unpackhi_epi16(zmm5, 0)
                    zmm5 = _mm_unpacklo_epi16(zmm5, 0)
                    zmm10 = _mm_sub_epi32(zmm10, zmm5)
                    zmm8 = _mm_sub_epi32(zmm8, zmm6)
                    zmm2 = _mm_sub_epi32(zmm2, zmm0)
                    zmm14 = _mm_sub_epi32(zmm14, zmm1)
                    zmm3 = _mm_sub_epi32(zmm3, zmm5)
                    zmm15 = _mm_sub_epi32(zmm15, zmm6)
                    zmm4 = _mm_sub_epi32(zmm4, zmm0)
                    zmm13 = _mm_sub_epi32(zmm13, zmm1)
                    zmm0 = zmm14
                    zmm9 = zmm13
                    zmm1 = zmm13
                    zmm13 = _mm_add_epi32(zmm13, zmm14)
                    zmm14 = _mm_srai_epi32(zmm14, 0x1f)
                    zmm0 = _mm_add_epi32(zmm0, zmm14) ^ zmm14
                    zmm5 = _mm_srai_epi32(zmm2, 0x1f)
                    zmm14 = _mm_add_epi32(zmm2, zmm5) ^ zmm5
                    zmm5 = _mm_srai_epi32(zmm8, 0x1f)
                    zmm6 = _mm_add_epi32(zmm8, zmm5) ^ zmm5
                    zmm7 = _mm_srai_epi32(zmm10, 0x1f)
                    zmm5 = _mm_add_epi32(zmm10, zmm7) ^ zmm7
                    zmm9 = _mm_srai_epi32(zmm9, 0x1f)
                    zmm1 = _mm_add_epi32(zmm1, zmm9) ^ zmm9
                    zmm7 = _mm_srai_epi32(zmm4, 0x1f)
                    zmm2 = _mm_add_epi32(zmm2, zmm4)
                    zmm4 = _mm_add_epi32(zmm4, zmm7) ^ zmm7
                    zmm7 = _mm_srai_epi32(zmm15, 0x1f)
                    zmm8 = _mm_add_epi32(zmm8, zmm15)
                    zmm15 = _mm_add_epi32(zmm15, zmm7) ^ zmm7
                    zmm7 = _mm_srai_epi32(zmm3, 0x1f)
                    zmm10 = _mm_add_epi32(zmm10, zmm3)
                    zmm3 = _mm_add_epi32(zmm3, zmm7) ^ zmm7
                    zmm7 = _mm_srai_epi32(zmm13, 0x1f)
                    zmm13 = _mm_add_epi32(zmm13, zmm7) ^ zmm7
                    zmm7 = _mm_srai_epi32(zmm2, 0x1f)
                    zmm2 = _mm_add_epi32(zmm2, zmm7) ^ zmm7
                    zmm7 = _mm_srai_epi32(zmm8, 0x1f)
                    zmm8 = _mm_add_epi32(zmm8, zmm7) ^ zmm7
                    zmm7 = _mm_srai_epi32(zmm10, 0x1f)
                    zmm10 = _mm_add_epi32(zmm10, zmm7) ^ zmm7
                    zmm7 = _mm_cmpgt_epi32(zmm5, zmm3)
                    zmm5 = _mm_cmpgt_epi32(zmm5, zmm10) | zmm7
                    zmm7 = _mm_cmpgt_epi32(zmm6, zmm15)
                    zmm6 = _mm_cmpgt_epi32(zmm6, zmm8) | zmm7
                    zmm7 = _mm_cmpgt_epi32(zmm14, zmm4)
                    zmm14 = _mm_cmpgt_epi32(zmm14, zmm2) | zmm7
                    zmm7 = _mm_cmpgt_epi32(zmm0, zmm1)
                    zmm0 = _mm_cmpgt_epi32(zmm0, zmm13) | zmm7
                    zmm7 = data_142ed6810
                    zmm14 = _mm_packus_epi16(zmm14 & zmm7, zmm0 & zmm7)
                    zmm5 = _mm_packus_epi16(_mm_packus_epi16(zmm5 & zmm7, zmm6 & zmm7), zmm14)
                    zmm1 = _mm_cmpgt_epi32(zmm1, zmm13)
                    zmm4 = _mm_packus_epi16(_mm_cmpgt_epi32(zmm4, zmm2) & zmm7, zmm1 & zmm7)
                    zmm15 = _mm_cmpgt_epi32(zmm15, zmm8)
                    zmm3 = _mm_packus_epi16(
                        _mm_packus_epi16(_mm_cmpgt_epi32(zmm3, zmm10) & zmm7, zmm15 & zmm7), zmm4)
                    *(rdx_3 + rsi_13) = _mm_add_epi8(*(rdx_3 + rsi_13), 
                        (zmm5 & not.o(var_f8_1))
                            | (((zmm3 & not.o(var_108_1)) | (zmm11 & zmm3)) & zmm5))
                    rsi_13 += 0x10
                while (r15_3 != rsi_13)
                
                if (i_2 != r15_3)
                    goto label_1403dcaf1
            else
                r15_3 = nullptr
                r12_1 = arg4
                r13_2 = arg3
                r10_5 = rcx_1
                r11_5 = rdx_3
            label_1403dcaf1:
                int64_t i_6 = 0
                
                do
                    uint32_t r9_2 = zx.d(*(r13_2 + i_6))
                    uint32_t rbp_8 = zx.d(*(r10_5 + i_6))
                    uint32_t rdx_17 = zx.d(r12_1[i_6])
                    uint32_t rax_26 = rbp_8 - rdx_17
                    int32_t rdi_17 = neg.d(rax_26)
                    
                    if (neg.d(rax_26) s< 0 != neg.d(rax_26) == 0x80000000)
                        rdi_17 = rax_26
                    
                    uint32_t rsi_15 = r9_2 - rdx_17
                    uint32_t rbx_18 = neg.d(rsi_15)
                    
                    if (neg.d(rsi_15) s< 0 != neg.d(rsi_15) == 0x80000000)
                        rbx_18 = rsi_15
                    
                    uint32_t i_19 = rsi_15 + rax_26
                    i_2 = zx.q(neg.d(i_19))
                    
                    if (neg.d(i_19) s< 0 != neg.d(i_19) == 0x80000000)
                        i_2 = zx.q(i_19)
                    
                    if (rbx_18 s<= i_2.d)
                        rdx_17 = rbp_8
                    
                    uint32_t r8 = rdx_17
                    
                    if (rdi_17 s<= i_2.d)
                        r8 = r9_2
                    
                    if (rdi_17 s<= rbx_18)
                        rdx_17 = r8
                    
                    r11_5[i_6] += rdx_17.b
                    i_6 += 1
                while (r14_1 - r15_3 - rbx_2 != i_6)
    case 0x1403dc10d
        int64_t rsi_7 = *(arg2 + 8)
        
        if (rsi_7 != 0)
            int64_t rcx_2
            
            if (rsi_7 u< 0x20 || (&arg4[rsi_7] u> arg3 && arg3 + rsi_7 u> arg4))
                rcx_2 = 0
            label_1403dc142:
                int64_t rdx_6 = not.q(rcx_2) + rsi_7
                i_2 = rsi_7 & 3
                
                if (i_2 != 0)
                    i_2 = neg.q(i_2)
                    void* i_7
                    
                    do
                        *arg3 += *arg4
                        arg4 = &arg4[1]
                        arg3 += 1
                        rcx_2 += 1
                        i_7 = i_2
                        i_2 += 1
                    while (i_7 != -1)
                
                if (rdx_6 u>= 3)
                    i_2 = nullptr
                    
                    do
                        *(arg3 + i_2) += *(arg4 + i_2)
                        *(arg3 + i_2 + 1) += *(arg4 + i_2 + 1)
                        *(arg3 + i_2 + 2) += *(arg4 + i_2 + 2)
                        *(arg3 + i_2 + 3) += *(arg4 + i_2 + 3)
                        i_2 += 4
                    while (rsi_7 - rcx_2 != i_2)
            else
                rcx_2 = rsi_7 & 0xffffffffffffffe0
                i_2 = ((rcx_2 - 0x20) u>> 5) + 1
                uint64_t rbx_13 = zx.q(i_2.d) & 1
                int64_t rdx_12
                
                if (rcx_2 == 0x20)
                    rdx_12 = 0
                else
                    void* i_21 = rbx_13 + 1 - i_2 - 1
                    rdx_12 = 0
                    void* i_8
                    
                    do
                        zmm1 = *(arg4 + rdx_12 + 0x10)
                        zmm2 = _mm_add_epi8(*(arg3 + rdx_12), *(arg4 + rdx_12))
                        zmm0 = _mm_add_epi8(*(arg3 + rdx_12 + 0x10), zmm1)
                        zmm1 = *(arg3 + rdx_12 + 0x20)
                        zmm3 = *(arg3 + rdx_12 + 0x30)
                        *(arg3 + rdx_12) = zmm2
                        *(arg3 + rdx_12 + 0x10) = zmm0
                        zmm0 = _mm_add_epi8(*(arg4 + rdx_12 + 0x20), zmm1)
                        zmm1 = _mm_add_epi8(*(arg4 + rdx_12 + 0x30), zmm3)
                        *(arg3 + rdx_12 + 0x20) = zmm0
                        *(arg3 + rdx_12 + 0x30) = zmm1
                        rdx_12 += 0x40
                        i_8 = i_21
                        i_21 += 2
                    while (i_8 != -2)
                
                if (rbx_13 != 0)
                    zmm1 = *(arg3 + rdx_12 + 0x10)
                    zmm2 = _mm_add_epi8(*(arg4 + rdx_12), *(arg3 + rdx_12))
                    zmm0 = _mm_add_epi8(*(arg4 + rdx_12 + 0x10), zmm1)
                    *(arg3 + rdx_12) = zmm2
                    *(arg3 + rdx_12 + 0x10) = zmm0
                
                if (rsi_7 != rcx_2)
                    arg3 += rcx_2
                    arg4 = &arg4[rcx_2]
                    goto label_1403dc142
    case 0x1403dc1c8
        int64_t rcx_8 = zx.q(*(arg2 + 0x13)) + 7
        uint64_t r15_2 = rcx_8 u>> 3
        int64_t rbp_3 = *(arg2 + 8)
        int64_t r10_4 = rbp_3 - r15_2
        void* rdx_7
        
        if (r15_2 == 0)
            rdx_7 = arg3
        else
            if (rcx_8 u> 0xff && &arg4[r15_2] u> arg3)
                i_2 = arg3 + r15_2
            
            uint64_t rcx_9
            
            if (rcx_8 u> 0xff && (&arg4[r15_2] u<= arg3 || i_2 u<= arg4))
                rcx_9 = zx.q(r15_2.d) & 0xffffffe0
                i_2 = rcx_9 - 0x20
                uint64_t rbx_15 = zx.q(((i_2 u>> 5) + 1).d) & 1
                int64_t rdx_16
                
                if (i_2 == 0)
                    rdx_16 = 0
                else
                    i_2 = 0 - (i_2 u>> 5)
                    i_15 = rbx_15 + i_2 - 1
                    rdx_16 = 0
                    zmm0 = data_143600c60
                    void* i_9
                    
                    do
                        zmm2 = *(arg4 + rdx_16 + 0x10)
                        zmm1 = _mm_srli_epi16(*(arg4 + rdx_16), 1) & zmm0
                        zmm2 = _mm_srli_epi16(zmm2, 1) & zmm0
                        zmm3 = _mm_add_epi8(*(arg3 + rdx_16), zmm1)
                        zmm1 = _mm_add_epi8(*(arg3 + rdx_16 + 0x10), zmm2)
                        zmm2 = *(arg3 + rdx_16 + 0x20)
                        zmm4 = *(arg3 + rdx_16 + 0x30)
                        *(arg3 + rdx_16) = zmm3
                        *(arg3 + rdx_16 + 0x10) = zmm1
                        zmm3 = *(arg4 + rdx_16 + 0x30)
                        zmm1 = _mm_add_epi8(_mm_srli_epi16(*(arg4 + rdx_16 + 0x20), 1) & zmm0, zmm2)
                        zmm3 = _mm_add_epi8(_mm_srli_epi16(zmm3, 1) & zmm0, zmm4)
                        *(arg3 + rdx_16 + 0x20) = zmm1
                        *(arg3 + rdx_16 + 0x30) = zmm3
                        rdx_16 += 0x40
                        i_9 = i_15
                        i_15 += 2
                    while (i_9 != -2)
                
                if (rbx_15 != 0)
                    zmm0 = *(arg3 + rdx_16)
                    zmm1 = *(arg3 + rdx_16 + 0x10)
                    zmm3 = *(arg4 + rdx_16 + 0x10)
                    zmm2 = _mm_srli_epi16(*(arg4 + rdx_16), 1)
                    zmm4 = data_143600c60
                    zmm2 = _mm_add_epi8(zmm2 & zmm4, zmm0)
                    zmm3 = _mm_add_epi8(_mm_srli_epi16(zmm3, 1) & zmm4, zmm1)
                    *(arg3 + rdx_16) = zmm2
                    *(arg3 + rdx_16 + 0x10) = zmm3
                
                rdx_7 = arg3 + rcx_9
                arg4 = &arg4[rcx_9]
                
                if (r15_2 != rcx_9)
                    goto label_1403dc218
            else
                rcx_9 = 0
                rdx_7 = arg3
            label_1403dc218:
                int64_t rbx_6 = not.q(rcx_9) + r15_2
                int64_t rdi_5 = r15_2 & 3
                
                if (rdi_5 != 0)
                    int64_t i_20 = neg.q(rdi_5)
                    int64_t i_10
                    
                    do
                        i_2.b = *arg4 u>> 1
                        *rdx_7 += i_2.b
                        arg4 = &arg4[1]
                        rdx_7 += 1
                        rcx_9 += 1
                        i_10 = i_20
                        i_20 += 1
                    while (i_10 != -1)
                
                if (rbx_6 u>= 3)
                    uint64_t i_14 = r15_2 - rcx_9
                    uint64_t i_11
                    
                    do
                        *rdx_7 += *arg4 u>> 1
                        *(rdx_7 + 1) += arg4[1] u>> 1
                        *(rdx_7 + 2) += arg4[2] u>> 1
                        i_2.b = arg4[3] u>> 1
                        *(rdx_7 + 3) += i_2.b
                        arg4 = &arg4[4]
                        rdx_7 += 4
                        i_11 = i_14
                        i_14 -= 4
                    while (i_11 != 4)
        
        if (r10_4 != 0)
            void* rcx_10
            void* r14_2
            
            if (r10_4 u> 0xf)
                void* rax_21 = rdx_7 + r10_4
                i_15.b = arg4 u< rax_21
                void* rcx_11
                rcx_11.b = rdx_7 u< arg3 + r10_4
                void* rbx_11
                rbx_11.b = rax_21 u> arg3
                r14_2 = nullptr
                
                if ((rdx_7 u< &arg4[r10_4] & i_15.b) != 0)
                    goto label_1403dc2af
                
                rcx_11.b &= rbx_11.b
                
                if (rcx_11.b != 0)
                    goto label_1403dc2af
                
                r14_2 = r10_4 & 0xfffffffffffffff0
                i_2 = r14_2 - 0x10
                uint64_t r11_4 = zx.q(((i_2 u>> 4) + 1).d) & 1
                int64_t rcx_15
                
                if (i_2 == 0)
                    rcx_15 = 0
                else
                    i_2 = 0 - (i_2 u>> 4)
                    void* i_17 = r11_4 + i_2 - 1
                    rcx_15 = 0
                    zmm0 = zx.o(0)
                    void* i_12
                    
                    do
                        zmm3 = *(arg4 + rcx_15)
                        zmm4 = _mm_unpacklo_epi8(zmm3, zmm0[0].q)
                        zmm5 = _mm_unpackhi_epi16(zmm4, zmm0[0].q)
                        zmm4 = _mm_unpacklo_epi16(zmm4, zmm0[0].q)
                        zmm3 = _mm_unpackhi_epi8(zmm3, zmm0[0].q)
                        zmm6 = _mm_unpackhi_epi16(zmm3, zmm0[0].q)
                        zmm3 = _mm_unpacklo_epi16(zmm3, zmm0[0].q)
                        zmm2 = *(arg3 + rcx_15)
                        zmm1 = _mm_unpacklo_epi8(zmm2, zmm0[0].q)
                        zmm7 = _mm_add_epi32(_mm_unpackhi_epi16(zmm1, zmm0[0].q), zmm5)
                        zmm1 = _mm_add_epi32(_mm_unpacklo_epi16(zmm1, zmm0[0].q), zmm4)
                        zmm2 = _mm_unpackhi_epi8(zmm2, zmm0[0].q)
                        zmm4 = _mm_add_epi32(_mm_unpackhi_epi16(zmm2, zmm0[0].q), zmm6)
                        zmm2 = _mm_add_epi32(_mm_unpacklo_epi16(zmm2, zmm0[0].q), zmm3)
                        zmm7 = _mm_srli_epi32(zmm7, 1)
                        zmm1 = _mm_packus_epi16(_mm_srli_epi32(zmm1, 1), zmm7)
                        zmm4 = _mm_srli_epi32(zmm4, 1)
                        zmm1 =
                            _mm_packus_epi16(zmm1, _mm_packus_epi16(_mm_srli_epi32(zmm2, 1), zmm4))
                        zmm2 = _mm_add_epi8(*(rdx_7 + rcx_15), zmm1)
                        zmm8 = *(rdx_7 + rcx_15 + 0x10)
                        *(rdx_7 + rcx_15) = zmm2
                        zmm4 = *(arg4 + rcx_15 + 0x10)
                        zmm5 = _mm_unpacklo_epi8(zmm4, zmm0[0].q)
                        zmm6 = _mm_unpackhi_epi16(zmm5, zmm0[0].q)
                        zmm5 = _mm_unpacklo_epi16(zmm5, zmm0[0].q)
                        zmm4 = _mm_unpackhi_epi8(zmm4, zmm0[0].q)
                        zmm7 = _mm_unpackhi_epi16(zmm4, zmm0[0].q)
                        zmm4 = _mm_unpacklo_epi16(zmm4, zmm0[0].q)
                        zmm3 = *(arg3 + rcx_15 + 0x10)
                        zmm2 = _mm_unpacklo_epi8(zmm3, zmm0[0].q)
                        zmm1 = _mm_add_epi32(_mm_unpackhi_epi16(zmm2, zmm0[0].q), zmm6)
                        zmm2 = _mm_add_epi32(_mm_unpacklo_epi16(zmm2, zmm0[0].q), zmm5)
                        zmm3 = _mm_unpackhi_epi8(zmm3, zmm0[0].q)
                        zmm5 = _mm_add_epi32(_mm_unpackhi_epi16(zmm3, zmm0[0].q), zmm7)
                        zmm3 = _mm_add_epi32(_mm_unpacklo_epi16(zmm3, zmm0[0].q), zmm4)
                        zmm1 = _mm_srli_epi32(zmm1, 1)
                        zmm2 = _mm_packus_epi16(_mm_srli_epi32(zmm2, 1), zmm1)
                        zmm5 = _mm_srli_epi32(zmm5, 1)
                        *(rdx_7 + rcx_15 + 0x10) = _mm_add_epi8(
                            _mm_packus_epi16(zmm2, 
                                _mm_packus_epi16(_mm_srli_epi32(zmm3, 1), zmm5)), 
                            zmm8)
                        rcx_15 += 0x20
                        i_12 = i_17
                        i_17 += 2
                    while (i_12 != -2)
                
                if (r11_4 != 0)
                    zmm8 = *(rdx_7 + rcx_15)
                    zmm2 = *(arg4 + rcx_15)
                    zmm4 = zx.o(0)
                    zmm5 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
                    zmm6 = _mm_unpackhi_epi16(zmm5, zmm4[0].q)
                    zmm5 = _mm_unpacklo_epi16(zmm5, zmm4[0].q)
                    zmm2 = _mm_unpackhi_epi8(zmm2, zmm4[0].q)
                    zmm7 = _mm_unpackhi_epi16(zmm2, zmm4[0].q)
                    zmm2 = _mm_unpacklo_epi16(zmm2, zmm4[0].q)
                    zmm3 = *(arg3 + rcx_15)
                    zmm1 = _mm_unpacklo_epi8(zmm3, zmm4[0].q)
                    zmm0 = _mm_add_epi32(_mm_unpackhi_epi16(zmm1, zmm4[0].q), zmm6)
                    zmm1 = _mm_add_epi32(_mm_unpacklo_epi16(zmm1, zmm4[0].q), zmm5)
                    zmm3 = _mm_unpackhi_epi8(zmm3, zmm4[0].q)
                    zmm5 = _mm_add_epi32(_mm_unpackhi_epi16(zmm3, zmm4[0].q), zmm7)
                    zmm3 = _mm_add_epi32(_mm_unpacklo_epi16(zmm3, zmm4[0].q), zmm2)
                    zmm0 = _mm_srli_epi32(zmm0, 1)
                    zmm1 = _mm_packus_epi16(_mm_srli_epi32(zmm1, 1), zmm0)
                    zmm5 = _mm_srli_epi32(zmm5, 1)
                    *(rdx_7 + rcx_15) = _mm_add_epi8(
                        _mm_packus_epi16(zmm1, _mm_packus_epi16(_mm_srli_epi32(zmm3, 1), zmm5)), 
                        zmm8)
                
                if (r10_4 != r14_2)
                    rdx_7 += r14_2
                    arg4 += r14_2
                    rcx_10 = arg3 + r14_2
                    goto label_1403dc2b4
            else
                r14_2 = nullptr
            label_1403dc2af:
                rcx_10 = arg3
            label_1403dc2b4:
                i_2 = zx.q(rbp_3.d - r15_2.d)
                int64_t rbx_10 = not.q(r14_2) + rbp_3
                
                if ((i_2.b & 1) != 0)
                    i_2 = zx.q(*arg4)
                    *rdx_7 += ((zx.d(*(arg3 + r14_2)) + i_2.d) u>> 1).b
                    arg4 = &arg4[1]
                    rcx_10 += 1
                    rdx_7 += 1
                    r14_2 |= 1
                
                if (rbx_10 != r15_2)
                    int64_t i_13 = 0
                    
                    do
                        *(rdx_7 + i_13) += ((zx.d(*(rcx_10 + i_13)) + zx.d(arg4[i_13])) u>> 1).b
                        i_2 = zx.q(arg4[i_13 + 1])
                        *(rdx_7 + i_13 + 1) += ((zx.d(*(rcx_10 + i_13 + 1)) + i_2.d) u>> 1).b
                        i_13 += 2
                    while (rbp_3 - r14_2 - r15_2 != i_13)

return i_2
