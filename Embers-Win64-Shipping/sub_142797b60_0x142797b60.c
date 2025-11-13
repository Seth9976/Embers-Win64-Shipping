// 函数: sub_142797b60
// 地址: 0x142797b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg1 + 0x248) == *(arg1 + 0x274))
    result = zx.q(*(arg1 + 0x298))

if (*(arg1 + 0x248) != *(arg1 + 0x274) || result.d != *(arg1 + 0x2c4))
    if (*(arg1 + 0xa8) == 0)
        sub_141ee69e0(arg1)
    
    int32_t rcx_1 = 0
    int32_t var_84_1 = 1
    int32_t var_88_1 = 0
    int32_t rbx_1 = *(arg1 + 0x2b8)
    void* var_80_1 = arg1 + 0x2a0
    int32_t r8_2 = 0
    int32_t var_78_1 = 0xffffffff
    int64_t var_74_1 = 0
    
    if (rbx_1 != 0)
        void* rax_2 = *(arg1 + 0x2b0)
        void* r9_2 = arg1 + 0x2a0
        
        if (rax_2 != 0)
            r9_2 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_4 = *r9_2
        
        if (rdx_4 != 0)
        label_142797c58:
            int32_t rax_9 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_84_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_74_1.d = r8_2 - rax_10 + 0x1f
            
            if (r8_2 - rax_10 + 0x1f s> rbx_1)
                var_74_1.d = rbx_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_1)
                r8_2 += 0x20
                rcx_1 += 1
                var_74_1:4.d = r8_2
                var_88_1 = rcx_1
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_2 + (rdx_5 << 2) + 4)
                int32_t var_78_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_142797c58
            
            var_74_1.d = rbx_1
    
    int32_t rdx_6 = *(arg1 + 0x2b8)
    int128_t var_28_1 = 0xffffffff
    int32_t r15_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int128_t var_38_1 = var_88_1.o
    int32_t r8_5 = rdx_6 s>> 5
    int32_t r9_4 = rdx_6 & 0xffffffe0
    int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_78_3 = r15_1
    var_74_1.d = rdx_6
    int128_t var_68 = (arg1 + 0x290).o
    int128_t var_58_1 = var_38_1
    
    if (rdx_6 != rbx_1)
        void* rax_12 = *(arg1 + 0x2b0)
        void* r10_2 = arg1 + 0x2a0
        
        if (rax_12 != 0)
            r10_2 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_10 = *(r10_2 + (sx.q(r8_5) << 2)) & r15_1
        
        if (rdx_10 != 0)
        label_142797d22:
            int32_t rax_19 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t r11_2
            
            if (rax_19 == 0)
                r11_2 = 0x20
            else
                r11_2 = 0x1f - temp0_4
            
            var_74_1.d = r9_4 - r11_2 + 0x1f
            
            if (r9_4 - r11_2 + 0x1f s> rbx_1)
                var_74_1.d = rbx_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_5)
                r9_4 += 0x20
                r8_5 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_2 + (rcx_6 << 2) + 4)
                var_78_3 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_142797d22
            
            var_74_1.d = rbx_1
    
    while (true)
        int64_t rcx_8 = sx.q(var_58_1:0xc.d)
        result = var_68.q
        
        if (rcx_8.d == (var_78_3.q u>> 0x20).d && var_58_1.q == arg1 + 0x2a0
                && result == arg1 + 0x290)
            break
        
        void* rcx_10 = *(*result + rcx_8 * 0x10)
        
        if (rcx_10 != 0)
            void* rcx_11 = *(rcx_10 + 0x220)
            
            if (rcx_11 != 0 && *(rcx_11 + 0x700) != 0 && *(rcx_11 + 0xa8) == 0)
                sub_141ee69e0(rcx_11)
        
        int32_t var_5c
        var_58_1:8.d &= not.d(var_5c)
        sub_14059bdd0(&var_68:8)
else if (*(arg1 + 0xa8) == 0)
    return sub_141ee69e0(arg1) __tailcall

return result
