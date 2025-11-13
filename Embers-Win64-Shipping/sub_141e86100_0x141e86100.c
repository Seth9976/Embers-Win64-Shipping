// 函数: sub_141e86100
// 地址: 0x141e86100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x120) == 0xffffffff)
    EnterCriticalSection(arg1 + 0xf0)
    int32_t r8_1 = 0
    int32_t var_94_1 = 1
    int32_t var_98_1 = 0
    int32_t rdi_1 = *(arg1 + 0xc8)
    void* var_90_1 = arg1 + 0xb0
    int32_t rcx_1 = 0
    int32_t var_88_1 = 0xffffffff
    int32_t var_84_1 = 0
    int32_t var_80_1 = 0
    
    if (rdi_1 != 0)
        void* rax = *(arg1 + 0xc0)
        void* r9_1 = arg1 + 0xb0
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_2 = *r9_1
        int32_t var_84_3
        
        if (rdx_2 != 0)
        label_141e861d8:
            int32_t rax_7 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_94_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            int32_t var_84_2 = rcx_1 - rax_8 + 0x1f
            
            if (rcx_1 - rax_8 + 0x1f s> rdi_1)
                var_84_3 = rdi_1
        else
            while (true)
                int64_t rdx_3 = sx.q(r8_1)
                rcx_1 += 0x20
                r8_1 += 1
                int32_t var_80_2 = rcx_1
                var_98_1 = r8_1
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141e861d8
            
            var_84_3 = rdi_1
    
    int32_t rdx_8 = *(arg1 + 0xc8)
    int32_t var_84_4 = rdx_8
    int32_t r9_2 = 0xffffffff << (rdx_8.b & 0x1f)
    int32_t var_88_3 = r9_2
    int128_t var_48_1 = var_98_1.o
    int32_t r9_4 = rdx_8 & 0xffffffe0
    int32_t r8_3 = rdx_8 s>> 5
    int128_t var_38_1 = 0xffffffff
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_78 = (arg1 + 0xa0).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_8 != rdi_1)
        void* rax_10 = *(arg1 + 0xc0)
        void* r10_1 = arg1 + 0xb0
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_1 - 1)
        rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r9_2
        int32_t var_84_6
        
        if (rdx_8 != 0)
        label_141e862a2:
            int32_t rax_17 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t r11_1
            
            if (rax_17 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            int32_t var_84_5 = r9_4 - r11_1 + 0x1f
            
            if (r9_4 - r11_1 + 0x1f s> rdi_1)
                var_84_6 = rdi_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_3)
                r9_4 += 0x20
                r8_3 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_1 + (rcx_6 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141e862a2
            
            var_84_6 = rdi_1
    
    while (true)
        int32_t result_1
        result = sx.q(result_1)
        int64_t rcx_8 = var_78.q
        
        if (result.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0xb0
                && rcx_8 == arg1 + 0xa0)
            break
        
        int32_t* rax_20 = (result << 6) + *rcx_8
        void* rcx_9 = *(rax_20 + 8)
        
        if (*rax_20 != arg2)
            rdx_8.b = 1
        else
            *(arg1 + 0x124) = arg2
            rdx_8.b = 0
        
        sub_141e867d0(rcx_9, rdx_8.b, r8_3.b)
        var_68_1:8.d &= not.d(var_78:0xc.d)
        rdx_8, r8_3 = sub_14059bdd0(&var_78:8)
    
    if (arg1 != -0xf0)
        return LeaveCriticalSection(arg1 + 0xf0)

return result
