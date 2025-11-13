// 函数: sub_142166170
// 地址: 0x142166170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax
uint128_t zmm6
rax, zmm6 = sub_140b3cdd0()
uint64_t result = sub_140b40280()

if (result.b != 0)
    int32_t rcx_1 = 0
    int32_t r8_1 = 0
    uint128_t var_38_1 = zmm6
    int32_t rbx_1 = arg1[6].d
    int32_t var_a8_1 = 0
    int32_t var_a4_1 = 1
    void* var_a0_1 = &arg1[3]
    int32_t var_98_1 = 0xffffffff
    int32_t var_94_1 = 0
    int32_t var_90_1 = 0
    
    if (rbx_1 != 0)
        void* rax_1 = arg1[5]
        void* r9_1 = &arg1[3]
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_3 = *r9_1
        int32_t var_94_3
        
        if (rdx_3 != 0)
        label_142166258:
            int32_t rax_8 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_a4_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            int32_t var_94_2 = rcx_1 - rax_9 + 0x1f
            
            if (rcx_1 - rax_9 + 0x1f s> rbx_1)
                var_94_3 = rbx_1
        else
            while (true)
                int64_t rdx_4 = sx.q(r8_1)
                rcx_1 += 0x20
                r8_1 += 1
                int32_t var_90_2 = rcx_1
                var_a8_1 = r8_1
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_98_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_142166258
            
            var_94_3 = rbx_1
    
    int32_t rdx_6 = arg1[6].d
    int128_t var_48_1 = 0xffffffff
    int32_t rsi_1 = 0xffffffff << (rdx_6.b & 0x1f)
    uint128_t var_58_1 = var_a8_1.o
    int32_t r8_3 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int64_t var_68_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    int32_t var_98_3 = rsi_1
    int32_t var_94_4 = rdx_6
    uint128_t var_88 = (&arg1[1]).o
    uint128_t var_78_1 = var_58_1
    
    if (rdx_6 != rbx_1)
        void* rax_11 = arg1[5]
        void* r10_1 = &arg1[3]
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_1
        int32_t var_94_6
        
        if (rdx_10 != 0)
        label_142166322:
            int32_t rax_18 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t r11_1
            
            if (rax_18 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            int32_t var_94_5 = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_94_6 = rbx_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
                var_98_3 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_142166322
            
            var_94_6 = rbx_1
    
    zmm6 = 0x408f400000000000
    
    while (true)
        result = sx.q(var_78_1:0xc.d)
        int64_t* rdi_1 = var_88.q
        
        if (result.d == (var_98_3.q u>> 0x20).d && var_78_1.q == &arg1[3] && rdi_1 == &arg1[1])
            break
        
        int64_t rdi_2 = *rdi_1
        uint64_t rbx_3 = result << 5
        uint128_t zmm0_1 = zx.o(*(rbx_3 + rdi_2 + 8))
        
        if (not(zmm0_1.q f< *arg1))
            zmm0_1.q = zmm0_1.q f* zmm6.q
            zmm6 = sub_140b43d20(rdi_2 + 0x10 + rbx_3, data_143f4d0c0, _mm_cvtpd_ps(zmm0_1), 0)
        
        int32_t rax_21 = not.d(var_88:0xc.d)
        *(rbx_3 + rdi_2 + 8) = 0
        var_78_1:8.d &= rax_21
        sub_14059bdd0(&var_88:8)

return result
