// 函数: sub_1407fb000
// 地址: 0x1407fb000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) == 1)
    return zx.q(*(arg1 + 0x34))

if (*(arg1 + 0x258) != 0)
    EnterCriticalSection(arg1 + 0x260)
    int32_t rdi_1 = 0
    int32_t r12_2 = *(arg1 + 0x210) - *(arg1 + 0x23c)
    *(arg1 + 0x25c) = 0
    
    if (r12_2 s> 0)
        char arg_8
        char* arg_10 = &arg_8
        char** arg_18 = &arg_10
        
        if (*(arg1 + 0x210) - *(arg1 + 0x23c) s> 0)
            sub_1407e8ed0(arg1 + 0x208)
            char*** arg_20 = &arg_18
            sub_1407dbbd0(*(arg1 + 0x208), *(arg1 + 0x210) - *(arg1 + 0x23c), arg_8)
        
        sub_1407c1670(arg1 + 0x208)
        int32_t r11_1 = *(arg1 + 0x230)
        int32_t var_b4_1 = 1
        int32_t rcx_4 = 0
        int32_t var_b8_1 = 0
        int32_t r8_2 = 0
        int32_t var_a8_1 = 0xffffffff
        int64_t var_a4_1 = 0
        
        if (r11_1 != 0)
            void* rax_4 = *(arg1 + 0x228)
            void* r9_1 = arg1 + 0x218
            
            if (rax_4 != 0)
                r9_1 = rax_4
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_5 = *r9_1
            
            if (rdx_5 != 0)
            label_1407fb168:
                int32_t rax_11 = neg.d(rdx_5) & rdx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
                int32_t var_b4_2 = rax_11
                int32_t rax_12
                
                if (rax_11 == 0)
                    rax_12 = 0x20
                else
                    rax_12 = 0x1f - temp0_2
                
                var_a4_1.d = r8_2 - rax_12 + 0x1f
                
                if (r8_2 - rax_12 + 0x1f s> r11_1)
                    var_a4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_4)
                    r8_2 += 0x20
                    rcx_4 += 1
                    var_a4_1:4.d = r8_2
                    var_b8_1 = rcx_4
                    
                    if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                    int32_t var_a8_2 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_1407fb168
                
                var_a4_1.d = r11_1
        
        int32_t rdx_7 = *(arg1 + 0x230)
        var_a4_1.d = rdx_7
        int32_t r9_2 = 0xffffffff << (rdx_7.b & 0x1f)
        arg_8.d = r9_2
        int32_t var_a8_3 = r9_2
        int128_t var_68_1 = var_b8_1.o
        int32_t r9_4 = rdx_7 & 0xffffffe0
        int32_t r8_5 = rdx_7 s>> 5
        int128_t var_58_1 = 0xffffffff
        int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_98 = (arg1 + 0x208).o
        int128_t var_88_1 = var_68_1
        
        if (rdx_7 != r11_1)
            void* rax_14 = *(arg1 + 0x228)
            void* r10_1 = arg1 + 0x218
            
            if (rax_14 != 0)
                r10_1 = rax_14
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_11 = *(r10_1 + (sx.q(r8_5) << 2)) & arg_8.d
            
            if (rdx_11 != 0)
            label_1407fb242:
                int32_t rax_21 = neg.d(rdx_11) & rdx_11
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
                int32_t r15_1
                
                if (rax_21 == 0)
                    r15_1 = 0x20
                else
                    r15_1 = 0x1f - temp0_4
                
                var_a4_1.d = r9_4 - r15_1 + 0x1f
                
                if (r9_4 - r15_1 + 0x1f s> r11_1)
                    var_a4_1.d = r11_1
            else
                while (true)
                    int64_t rcx_9 = sx.q(r8_5)
                    r9_4 += 0x20
                    r8_5 += 1
                    
                    if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_11 = *(r10_1 + (rcx_9 << 2) + 4)
                    var_a8_3 = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_1407fb242
                
                var_a4_1.d = r11_1
        
        while (true)
            int64_t rax_23 = sx.q(var_88_1:0xc.d)
            int64_t* rdx_12 = var_98.q
            
            if (rax_23.d == (var_a8_3.q u>> 0x20).d && var_88_1.q == arg1 + 0x218
                    && rdx_12 == arg1 + 0x208)
                break
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r12_2 - 1)
            var_b8_1.o = *(*rdx_12 + rax_23 * 0x18)
            
            if (rdi_1 s>= (temp5_1 - temp4_1) s>> 1)
                *(arg1 + 0x25c) = (arg1 + 0x218).d
                break
            
            rdi_1 += 1
            var_88_1:8.d &= not.d(var_98:0xc.d)
            sub_14059bdd0(&var_98:8)
        
        *(arg1 + 0x258) = 0
    
    if (arg1 != -0x260)
        LeaveCriticalSection(arg1 + 0x260)

return zx.q(*(arg1 + 0x25c))
