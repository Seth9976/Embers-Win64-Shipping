// 函数: sub_141f8b060
// 地址: 0x141f8b060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x238) != 0 && *(arg1 + 0x260) s> 0 && (*(arg1 + 0x268) & 1) != 0)
    int32_t r8_1 = 0
    int32_t rbx_1 = *(arg2 + 0x28)
    int32_t rcx = 0
    int32_t var_e8_1 = 0
    int32_t var_e4_1 = 1
    void* var_e0_1 = arg2 + 0x10
    int32_t var_d8_1 = 0xffffffff
    int32_t var_d4_1 = 0
    int32_t var_d0_1 = 0
    
    if (rbx_1 != 0)
        void* rax = *(arg2 + 0x20)
        void* r9_1 = arg2 + 0x10
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_2 = *r9_1
        int32_t var_d4_3
        
        if (rdx_2 != 0)
        label_141f8b149:
            int32_t rax_7 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_e4_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            int32_t var_d4_2 = rcx - rax_8 + 0x1f
            
            if (rcx - rax_8 + 0x1f s> rbx_1)
                var_d4_3 = rbx_1
        else
            while (true)
                int64_t rdx_3 = sx.q(r8_1)
                rcx += 0x20
                r8_1 += 1
                int32_t var_d0_2 = rcx
                var_e8_1 = r8_1
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_d8_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141f8b149
            
            var_d4_3 = rbx_1
    
    int32_t rdx_5 = *(arg2 + 0x28)
    int128_t var_68_1 = 0xffffffff
    int32_t rsi_1 = 0xffffffff << (rdx_5.b & 0x1f)
    float var_78_1[0x4] = var_e8_1.o
    int32_t r8_3 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_98_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    int32_t var_d8_3 = rsi_1
    int32_t var_d4_4 = rdx_5
    float var_b8[0x4] = arg2.o
    
    if (rdx_5 != rbx_1)
        void* rax_10 = *(arg2 + 0x20)
        void* r10_1 = arg2 + 0x10
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_1
        int32_t var_d4_6
        
        if (rdx_9 != 0)
        label_141f8b212:
            int32_t rax_17 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t r11_1
            
            if (rax_17 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            int32_t var_d4_5 = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_d4_6 = rbx_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
                var_d8_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_141f8b212
            
            var_d4_6 = rbx_1
    
    while (true)
        result = sx.q(var_78_1[3])
        int64_t* rcx_7 = var_b8[0].q
        
        if (result.d == (var_d8_3.q u>> 0x20).d && var_78_1[0].q == arg2 + 0x10 && rcx_7 == arg2)
            break
        
        int64_t rdi_1 = *rcx_7
        void* rbx_2 = result * 3
        void* rsi_2 = *(rdi_1 + (rbx_2 << 3))
        double zmm2[0x2] = *(rsi_2 + 0x1d0)
        float var_88_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
        int64_t var_c8 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
        float var_c0_1 = var_88_1
        char rax_20
        uint32_t zmm6_1[0x4]
        rax_20, zmm6_1 = sub_142432b00(arg1, &var_c8, zx.o(0), nullptr)
        
        if (rax_20 != 0)
            int32_t* i = *(arg1 + 0x258)
            float zmm1[0x4] = 0x7f7fffff
            int64_t rax_21 = sx.q(*(arg1 + 0x260))
            zmm2 = zx.o(0)
            float zmm3[0x4] = *(rsi_2 + 0x118)
            zmm3[0] = zmm3[0] + zmm3[0]
            float zmm0[0x4]
            
            while (i != &i[rax_21 * 2])
                zmm3[0] = zmm3[0] f- *i
                zmm0 = _mm_and_ps(zmm3, zmm6_1)
                
                if (not(zmm0[0] >= zmm1[0]))
                    zmm2 = i[1]
                
                i = &i[2]
                zmm1 = _mm_min_ss(zmm0[0], zmm1[0])
            
            zmm0 = *(rdi_1 + (rbx_2 << 3) + 8)
            
            if (zmm0[0] <= 0f)
                *(rdi_1 + (rbx_2 << 3) + 8) = zmm2[0].d
            else
                *(rdi_1 + (rbx_2 << 3) + 8) = _mm_min_ss(zmm0[0], zmm2[0].d)[0]
        
        var_78_1[2] &= not.d(var_b8[3])
        sub_14059bdd0(&var_b8[2])

return result
