// 函数: sub_1418027e0
// 地址: 0x1418027e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* result = arg2
*arg2 = 0
arg2[1] = 0

if (*(arg1 + 0x98) != 0)
    int32_t rdx_1 = *(arg1 + 0x30) - *(arg1 + 0x5c)
    
    if (rdx_1 s> *(result + 0xc))
        sub_14061cd70(result, rdx_1)
    
    int32_t var_c4_1 = 1
    int32_t r11_1 = *(arg1 + 0x50)
    void* var_c0_1 = arg1 + 0x38
    int32_t rcx_1 = 0
    int32_t var_c8_1 = 0
    int32_t r8_1 = 0
    int32_t var_b8_1 = 0xffffffff
    int64_t var_b4_1 = 0
    
    if (r11_1 != 0)
        void* rax_1 = *(arg1 + 0x48)
        void* r9_1 = arg1 + 0x38
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_1418028b8:
            int32_t rax_8 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_c4_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_b4_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r11_1)
                var_b4_1.d = r11_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_1)
                r8_1 += 0x20
                rcx_1 += 1
                var_b4_1:4.d = r8_1
                var_c8_1 = rcx_1
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                int32_t var_b8_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_1418028b8
            
            var_b4_1.d = r11_1
    
    int32_t rdx_6 = *(arg1 + 0x50)
    int128_t var_48_1 = var_c8_1.o
    int32_t r14_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int32_t r8_4 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int32_t var_70_1 = r14_1
    int32_t var_6c_1 = rdx_6
    int128_t var_38_1 = 0xffffffff
    int64_t var_88_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_a8 = (arg1 + 0x28).o
    int128_t var_98_1 = var_48_1
    
    if (rdx_6 != r11_1)
        void* rax_11 = *(arg1 + 0x48)
        void* r10_1 = arg1 + 0x38
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_4) << 2)) & r14_1
        int32_t var_6c_3
        
        if (rdx_10 != 0)
        label_141802982:
            int32_t rax_18 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t rdi_1
            
            if (rax_18 == 0)
                rdi_1 = 0x20
            else
                rdi_1 = 0x1f - temp0_4
            
            int32_t var_6c_2 = r9_3 - rdi_1 + 0x1f
            
            if (r9_3 - rdi_1 + 0x1f s> r11_1)
                var_6c_3 = r11_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
                var_70_1 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_141802982
            
            var_6c_3 = r11_1
    
    while (true)
        int64_t rax_20 = sx.q(var_98_1:0xc.d)
        int64_t* rdx_11 = var_a8.q
        
        if (rax_20.d == (var_70_1.q u>> 0x20).d && var_98_1.q == arg1 + 0x38
                && rdx_11 == arg1 + 0x28)
            break
        
        int64_t* rdx_12 = *rdx_11 + rax_20 * 0x28
        int64_t var_60
        int64_t* rax_22 = sub_1418005b0(&var_60, rdx_12, &rdx_12[2])
        int64_t rsi_1 = sx.q(result[1].d)
        int32_t rcx_10 = (rsi_1 + 1).d
        result[1].d = rcx_10
        
        if (rcx_10 s> *(result + 0xc))
            sub_1405a4f90(result)
        
        int64_t rcx_14 = (rsi_1 << 4) + *result
        *rcx_14 = 0
        *rcx_14 = *rax_22
        *rax_22 = 0
        *(rcx_14 + 8) = rax_22[1].d
        *(rcx_14 + 0xc) = *(rax_22 + 0xc)
        rax_22[1] = 0
        int64_t rcx_15 = var_60
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        var_98_1:8.d &= not.d(var_a8:0xc.d)
        sub_14059bdd0(&var_a8:8)

return result
