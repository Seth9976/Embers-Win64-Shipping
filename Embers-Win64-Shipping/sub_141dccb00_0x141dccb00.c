// 函数: sub_141dccb00
// 地址: 0x141dccb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result

if ((*(arg1 + 0x5a) & 4) == 0)
label_141dccd40:
    result.b = 0
else
    int32_t r10_1 = *(arg1 + 0x1c8)
    int32_t rcx = 0
    int32_t var_84_1 = 1
    int32_t var_88_1 = 0
    int32_t r8_1 = 0
    void* var_80_1 = arg1 + 0x1b0
    int32_t var_78_1 = 0xffffffff
    int64_t var_74_1 = 0
    
    if (r10_1 != 0)
        void* rax = *(arg1 + 0x1c0)
        void* r9_1 = arg1 + 0x1b0
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_141dccba9:
            int32_t rax_7 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
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
            
            if (r8_1 - rax_8 + 0x1f s> r10_1)
                var_74_1.d = r10_1
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
                    goto label_141dccba9
            
            var_74_1.d = r10_1
    
    int32_t rdx_5 = *(arg1 + 0x1c8)
    var_74_1.d = rdx_5
    int128_t var_28_1 = 0xffffffff
    int128_t var_38_1 = var_88_1.o
    int32_t r15_1 = 0xffffffff << (rdx_5 & 0x1f).b
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_78_3 = r15_1
    int128_t var_68 = (arg1 + 0x1a0).o
    int128_t var_58_1 = var_38_1
    
    if (rdx_5 != r10_1)
        void* rax_11 = *(arg1 + 0x1c0)
        void* r11_1 = arg1 + 0x1b0
        
        if (rax_11 != 0)
            r11_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_9 = *(r11_1 + (sx.q(r8_4) << 2)) & r15_1
        
        if (rdx_9 != 0)
        label_141dccc86:
            int32_t rax_17 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t rbx_1
            
            if (rax_17 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_4
            
            result = zx.q(r9_3 - rbx_1 + 0x1f)
            var_74_1.d = result.d
            
            if (result.d s> r10_1)
                var_74_1.d = r10_1
        else
            while (true)
                int64_t rcx_4 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r11_1 + (rcx_4 << 2) + 4)
                var_78_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_141dccc86
            
            var_74_1.d = r10_1
    
    while (true)
        int64_t rdx_10 = sx.q(var_58_1:0xc.d)
        
        if (rdx_10.d != (var_78_3.q u>> 0x20).d || var_58_1.q != arg1 + 0x1b0)
            result.b = 0
        else
            result.b = 1
        
        int64_t* rcx_6 = var_68.q
        
        if (result.b == 0 || rcx_6 != arg1 + 0x1a0)
            result.b = 1
        else
            result.b = 0
        
        if (result.b == 0)
            goto label_141dccd40
        
        void* rbx_2 = *(*rcx_6 + rdx_10 * 0x10)
        
        if (rbx_2 != 0)
            void* rax_20 = sub_142486350()
            void* rdx_11 = *(rbx_2 + 0x10)
            int64_t rax_21 = sx.q(*(rax_20 + 0x38))
            
            if (rax_21.d s<= *(rdx_11 + 0x38) && (*(rdx_11 + 0x30))[rax_21] == rax_20 + 0x30
                    && (*(rbx_2 + 0x8a) & 1) != 0)
                result.b = 1
                break
        
        int32_t var_5c
        var_58_1:8.d &= not.d(var_5c)
        sub_14059bdd0(&var_68:8)

return result
