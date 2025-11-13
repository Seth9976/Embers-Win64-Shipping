// 函数: sub_141dc3180
// 地址: 0x141dc3180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_142459c10()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(arg2 + 0x38) && *(*(arg2 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            int32_t rcx_1 = 0
            int32_t r8 = 0
            int32_t r9 = *(arg1 + 0x1c8)
            int32_t var_88 = 0
            int32_t var_84 = 1
            void* var_80 = arg1 + 0x1b0
            int32_t var_78 = 0xffffffff
            int64_t var_74 = 0
            
            if (r9 != 0)
                void* rax_4 = *(arg1 + 0x1c0)
                void* r10_1 = arg1 + 0x1b0
                
                if (rax_4 != 0)
                    r10_1 = rax_4
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r9 - 1)
                int32_t rdx_3 = *r10_1
                
                if (rdx_3 != 0)
                label_141dc3279:
                    int32_t rax_10 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
                    int32_t var_84_1 = rax_10
                    int32_t rax_11
                    
                    if (rax_10 == 0)
                        rax_11 = 0x20
                    else
                        rax_11 = 0x1f - temp0_2
                    
                    var_74.d = r8 - rax_11 + 0x1f
                    
                    if (r8 - rax_11 + 0x1f s> r9)
                        var_74.d = r9
                else
                    while (true)
                        int64_t rax_7 = sx.q(rcx_1)
                        r8 += 0x20
                        rcx_1 += 1
                        var_74:4.d = r8
                        var_88 = rcx_1
                        
                        if (rax_7.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                            break
                        
                        rdx_3 = *(r10_1 + (rax_7 << 2) + 4)
                        int32_t var_78_1 = 0xffffffff
                        
                        if (rdx_3 != 0)
                            goto label_141dc3279
                    
                    var_74.d = r9
            
            int32_t rdx_4 = *(arg1 + 0x1c8)
            var_74.d = rdx_4
            int32_t r15 = 0xffffffff << (rdx_4 & 0x1f).b
            int128_t var_38 = var_88.o
            int32_t rcx_5 = rdx_4 & 0xffffffe0
            int32_t r8_3 = rdx_4 s>> 5
            int32_t var_78_2 = r15
            int128_t var_28 = 0xffffffff
            int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int128_t var_68 = (arg1 + 0x1a0).o
            int128_t var_58 = var_38
            uint64_t rax_14
            
            if (rdx_4 != r9)
                void* rax_15 = *(arg1 + 0x1c0)
                void* r10_2 = arg1 + 0x1b0
                
                if (rax_15 != 0)
                    r10_2 = rax_15
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r9 - 1)
                int32_t rdx_8 = *(r10_2 + (sx.q(r8_3) << 2)) & r15
                
                if (rdx_8 != 0)
                label_141dc3352:
                    int32_t rax_21 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
                    int32_t r11_1
                    
                    if (rax_21 == 0)
                        r11_1 = 0x20
                    else
                        r11_1 = 0x1f - temp0_4
                    
                    rax_14 = zx.q(rcx_5 - r11_1 + 0x1f)
                    var_74.d = rax_14.d
                    
                    if (rax_14.d s> r9)
                        var_74.d = r9
                else
                    while (true)
                        rax_14 = sx.q(r8_3)
                        rcx_5 += 0x20
                        r8_3 += 1
                        
                        if (rax_14.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                            break
                        
                        rdx_8 = *(r10_2 + (rax_14 << 2) + 4)
                        var_78_2 = 0xffffffff
                        
                        if (rdx_8 != 0)
                            goto label_141dc3352
                    
                    var_74.d = r9
            
            while (true)
                int64_t rdx_10 = sx.q(var_58:0xc.d)
                
                if (rdx_10.d != (var_78_2.q u>> 0x20).d || var_58.q != arg1 + 0x1b0)
                    rax_14.b = 0
                else
                    rax_14.b = 1
                
                int64_t* rcx_7 = var_68.q
                
                if (rax_14.b == 0 || rcx_7 != arg1 + 0x1a0)
                    rax_14.b = 1
                else
                    rax_14.b = 0
                
                if (rax_14.b == 0)
                    break
                
                void* result = *(*rcx_7 + rdx_10 * 0x10)
                
                if (result != 0)
                    void* rax_24 = *(result + 0x10)
                    int64_t rcx_9 = sx.q(*(arg2 + 0x38))
                    
                    if (rcx_9.d s<= *(rax_24 + 0x38)
                            && *(*(rax_24 + 0x30) + (rcx_9 << 3)) == arg2 + 0x30)
                        return result
                
                int32_t var_5c
                var_58:8.d &= not.d(var_5c)
                sub_14059bdd0(&var_68:8)
            
            return nullptr

return 0
