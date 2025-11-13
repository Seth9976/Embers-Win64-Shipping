// 函数: sub_141ffb0b0
// 地址: 0x141ffb0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result

if (arg1 == 0)
label_141ffb2aa:
    result.b = 1
else
    int32_t rbx_1 = *(arg1 + 0x1c8)
    int32_t rcx = 0
    int32_t var_88_1 = 0
    int32_t r8_1 = 0
    int32_t var_84_1 = 1
    void* var_80_1 = arg1 + 0x1b0
    int32_t var_78_1 = 0xffffffff
    int64_t var_74_1 = 0
    
    if (rbx_1 != 0)
        void* rax = *(arg1 + 0x1c0)
        void* r9_1 = arg1 + 0x1b0
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_141ffb158:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_84_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_74_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> rbx_1)
                var_74_1.d = rbx_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_74_1:4.d = r8_1
                var_88_1 = rcx
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_78_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141ffb158
            
            var_74_1.d = rbx_1
    
    int32_t rdx_5 = *(arg1 + 0x1c8)
    int128_t var_28_1 = 0xffffffff
    int32_t r15_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_38_1 = var_88_1.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_78_3 = r15_1
    var_74_1.d = rdx_5
    int128_t var_68 = (arg1 + 0x1a0).o
    int128_t var_58_1 = var_38_1
    
    if (rdx_5 != rbx_1)
        void* rax_10 = *(arg1 + 0x1c0)
        void* r10_1 = arg1 + 0x1b0
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r15_1
        
        if (rdx_9 != 0)
        label_141ffb222:
            int32_t rax_17 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t r11_1
            
            if (rax_17 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_74_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_74_1.d = rbx_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
                var_78_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_141ffb222
            
            var_74_1.d = rbx_1
    
    while (true)
        int64_t rcx_7 = sx.q(var_58_1:0xc.d)
        result = var_68.q
        
        if (rcx_7.d == (var_78_3.q u>> 0x20).d && var_58_1.q == arg1 + 0x1b0
                && result == arg1 + 0x1a0)
            goto label_141ffb2aa
        
        int64_t* rcx_9 = *(*result + rcx_7 * 0x10)
        
        if (rcx_9 != 0 && (*(*rcx_9 + 0x358))(rcx_9).b == 0)
            result.b = 0
            break
        
        int32_t var_5c
        var_58_1:8.d &= not.d(var_5c)
        sub_14059bdd0(&var_68:8)

return result
