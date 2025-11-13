// 函数: sub_141d9c010
// 地址: 0x141d9c010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x20))

if (result.d != *(arg1 + 0x4c))
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    
    do
        int32_t r10_1 = *(arg1 + 0x40)
        int32_t rcx = 0
        int32_t var_a4_1 = 1
        int32_t rdi_1 = 0
        int32_t var_a8_1 = 0
        int32_t r8_1 = 0
        void* var_a0_1 = arg1 + 0x28
        int32_t var_98_1 = 0xffffffff
        zmm6 = zx.o(0)
        int64_t var_94_1 = 0
        int32_t rsi_1 = -1
        
        if (r10_1 != 0)
            void* rax = *(arg1 + 0x38)
            void* r9_1 = arg1 + 0x28
            
            if (rax != 0)
                r9_1 = rax
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_3 = *r9_1
            
            if (rdx_3 != 0)
            label_141d9c0d8:
                int32_t rax_7 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
                int32_t var_a4_2 = rax_7
                int32_t rax_8
                
                if (rax_7 == 0)
                    rax_8 = 0x20
                else
                    rax_8 = 0x1f - temp0_2
                
                var_94_1.d = r8_1 - rax_8 + 0x1f
                
                if (r8_1 - rax_8 + 0x1f s> r10_1)
                    var_94_1.d = r10_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx)
                    r8_1 += 0x20
                    rcx += 1
                    var_94_1:4.d = r8_1
                    var_a8_1 = rcx
                    
                    if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                    int32_t var_98_2 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_141d9c0d8
                
                var_94_1.d = r10_1
        
        int32_t rdx_5 = *(arg1 + 0x40)
        int128_t var_48_1 = 0xffffffff
        int32_t r14_1 = 0xffffffff << (rdx_5.b & 0x1f)
        int128_t var_58_1 = var_a8_1.o
        int32_t r8_4 = rdx_5 s>> 5
        int32_t r9_3 = rdx_5 & 0xffffffe0
        int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_98_3 = r14_1
        var_94_1.d = rdx_5
        int128_t var_88 = (arg1 + 0x18).o
        int128_t var_78_1 = var_58_1
        
        if (rdx_5 != r10_1)
            void* rax_10 = *(arg1 + 0x38)
            void* r11_1 = arg1 + 0x28
            
            if (rax_10 != 0)
                r11_1 = rax_10
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_9 = *(r11_1 + (sx.q(r8_4) << 2)) & r14_1
            
            if (rdx_9 != 0)
            label_141d9c1b2:
                int32_t rax_17 = neg.d(rdx_9) & rdx_9
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
                int32_t rax_18
                
                if (rax_17 == 0)
                    rax_18 = 0x20
                else
                    rax_18 = 0x1f - temp0_4
                
                var_94_1.d = r9_3 - rax_18 + 0x1f
                
                if (r9_3 - rax_18 + 0x1f s> r10_1)
                    var_94_1.d = r10_1
            else
                while (true)
                    int64_t rcx_5 = sx.q(r8_4)
                    r9_3 += 0x20
                    r8_4 += 1
                    
                    if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_9 = *(r11_1 + (rcx_5 << 2) + 4)
                    var_98_3 = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_141d9c1b2
                
                var_94_1.d = r10_1
        
        while (true)
            result = sx.q(var_78_1:0xc.d)
            int64_t rcx_7 = var_88.q
            
            if (result.d == (var_98_3.q u>> 0x20).d && var_78_1.q == arg1 + 0x28
                    && rcx_7 == arg1 + 0x18)
                break
            
            int32_t* rax_21 = (result << 5) + *rcx_7
            void* rcx_8 = *(rax_21 + 8)
            
            if (rcx_8 != 0)
                if (rsi_1 == 0xffffffff || not(zmm6.q f<= *(rcx_8 + 0x10)))
                    zmm6 = zx.o(*(rcx_8 + 0x10))
                    rsi_1 = *rax_21
                
                rdi_1 += *(rcx_8 + 8)
            
            var_78_1:8.d &= not.d(var_88:0xc.d)
            sub_14059bdd0(&var_88:8)
        
        int64_t rbx_3 = data_143f387b8
        int64_t rcx_10
        
        if (data_143de5480 == 0)
            rcx_10 = 0
        else
            result = GetCurrentThreadId()
            rcx_10.b = result.d != data_143de5470
        
        if (rdi_1 u<= *(rbx_3 + (rcx_10 << 2)))
            break
        
        sub_14092f410(arg1 + 0x18, rsi_1)
        result = zx.q(*(arg1 + 0x20))
    while (result.d != *(arg1 + 0x4c))

return result
