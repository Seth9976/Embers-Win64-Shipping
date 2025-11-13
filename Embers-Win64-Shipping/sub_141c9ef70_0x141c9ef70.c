// 函数: sub_141c9ef70
// 地址: 0x141c9ef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t result

if (arg2 == 0)
    result.b = 0
else
    int32_t var_c8
    sub_140a73990(arg1, &var_c8, arg2)
    int64_t rax = sx.q(var_c8)
    int32_t rbx_1 = 0
    void* const rax_3
    
    if (rax.d == 0xffffffff)
        rax_3 = nullptr
    else
        rax_3 = rax * 0x60 + *arg1
    
    void* rsi_1 = rax_3 + 8
    
    if (rax_3 == 0)
        rsi_1 = nullptr
    
    int16_t* var_c0
    int32_t var_b8
    
    if (rsi_1 != 0)
    label_141c9f0f2:
        int32_t r10_2 = *(rsi_1 + 0x28)
        int32_t rcx_6 = 0
        int32_t var_ac_1 = 1
        int32_t var_b0_1 = 0
        void* var_a8_1 = rsi_1 + 0x10
        int32_t var_a0_1 = 0xffffffff
        int64_t var_9c_1 = 0
        
        if (r10_2 != 0)
            void* rax_13 = *(rsi_1 + 0x20)
            void* r8_4 = rsi_1 + 0x10
            
            if (rax_13 != 0)
                r8_4 = rax_13
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_2 - 1)
            int32_t rdx_9 = *r8_4
            
            if (rdx_9 != 0)
            label_141c9f176:
                int32_t rax_20 = neg.d(rdx_9) & rdx_9
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_20)
                int32_t var_ac_2 = rax_20
                int32_t rax_21
                
                if (rax_20 == 0)
                    rax_21 = 0x20
                else
                    rax_21 = 0x1f - temp0_2
                
                var_9c_1.d = rcx_6 - rax_21 + 0x1f
                
                if (rcx_6 - rax_21 + 0x1f s> r10_2)
                    var_9c_1.d = r10_2
            else
                while (true)
                    int64_t rdx_10 = sx.q(rbx_1)
                    rcx_6 += 0x20
                    rbx_1 += 1
                    var_9c_1:4.d = rcx_6
                    var_b0_1 = rbx_1
                    
                    if (rdx_10.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_9 = *(r8_4 + (rdx_10 << 2) + 4)
                    int32_t var_a0_2 = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_141c9f176
                
                var_9c_1.d = r10_2
        
        int32_t rdx_12 = *(rsi_1 + 0x28)
        int128_t var_50_1 = 0xffffffff
        int32_t r13_1 = 0xffffffff << (rdx_12.b & 0x1f)
        int128_t var_60_1 = var_b0_1.o
        int32_t r8_6 = rdx_12 s>> 5
        int32_t r9_2 = rdx_12 & 0xffffffe0
        int64_t var_70_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_a0_3 = r13_1
        var_9c_1.d = rdx_12
        int128_t var_90 = rsi_1.o
        int128_t var_58
        int128_t var_80_1 = var_58
        
        if (rdx_12 != r10_2)
            void* rax_23 = *(rsi_1 + 0x20)
            void* r10_3 = rsi_1 + 0x10
            
            if (rax_23 != 0)
                r10_3 = rax_23
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_2 - 1)
            int32_t rdx_16 = *(r10_3 + (sx.q(r8_6) << 2)) & r13_1
            
            if (rdx_16 != 0)
            label_141c9f252:
                int32_t rax_30 = neg.d(rdx_16) & rdx_16
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
                int32_t r11_2
                
                if (rax_30 == 0)
                    r11_2 = 0x20
                else
                    r11_2 = 0x1f - temp0_4
                
                var_9c_1.d = r9_2 - r11_2 + 0x1f
                
                if (r9_2 - r11_2 + 0x1f s> r10_2)
                    var_9c_1.d = r10_2
            else
                while (true)
                    int64_t rcx_11 = sx.q(r8_6)
                    r9_2 += 0x20
                    r8_6 += 1
                    
                    if (rcx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_16 = *(r10_3 + (rcx_11 << 2) + 4)
                    var_a0_3 = 0xffffffff
                    
                    if (rdx_16 != 0)
                        goto label_141c9f252
                
                var_9c_1.d = r10_2
        
        while (true)
            int64_t rcx_13 = sx.q(var_80_1:0xc.d)
            result = var_90.q
            
            if (rcx_13.d == (var_a0_3.q u>> 0x20).d && var_80_1.q == rsi_1 + 0x10
                    && result == rsi_1)
                break
            
            int64_t* rbx_4 = (rcx_13 << 4) + *result
            var_c8.q = *rbx_4
            int64_t r9_4
            result, r9_4 = (*arg3)(arg3[1], &var_c8)
            
            if (result.b == 0)
                break
            
            if (arg4 != 0)
                int16_t* rax_33 = *arg3
                var_c0 = rax_33
                
                if (rax_33 != 0)
                    var_b8.q = arg3[1]
                
                r9_4.b = 1
                sub_141c9ef70(arg1, *rbx_4, &var_c0, r9_4)
            
            var_80_1:8.d &= not.d(var_90:0xc.d)
            sub_14059bdd0(&var_90:8)
        
        result.b = 1
    else
        sub_140b63b70(&arg_10, &var_c0)
        int32_t rcx_1 = var_b8
        int32_t rax_4 = rcx_1 - 1
        
        if (rcx_1 == 0)
            rax_4 = 0
        
        int16_t* r9 = var_c0
        
        if (r9[sx.q(rax_4) - 1] == 0x2f)
            int32_t r11_1 = rcx_1 - 1
            
            if (rcx_1 == 0)
                r11_1 = 0
            
            int32_t r10_1 = rcx_1 - 1
            
            if (rcx_1 == 0)
                r10_1 = 0
            
            int32_t rdx_3 = r10_1 - (r11_1 - 1)
            int32_t rsi_2 = rdx_3
            
            if (rdx_3 s> 1)
                rsi_2 = 1
            
            if (rsi_2 != 0)
                int32_t rax_6 = rcx_1 - rsi_2
                
                if (rax_6 != r11_1 - 1)
                    if (rdx_3 s> 1)
                        r10_1 = r11_1
                    
                    memmove(&r9[sx.q(r11_1 - 1)], &r9[sx.q(r10_1)], (rax_6 - (r11_1 - 1)) * 2)
                    rcx_1 = var_b8
                    r9 = var_c0
                
                rcx_1 -= rsi_2
                var_b8 = rcx_1
            
            int16_t* const rdx_5 = &data_142d40450
            
            if (rcx_1 != 0)
                rdx_5 = r9
            
            sub_140b58260(&var_c8, rdx_5, 1)
            int64_t r8_3 = var_c8.q
            arg_10 = r8_3
            sub_140a73990(arg1, &var_c8, r8_3)
            int64_t rax_10 = sx.q(var_c8)
            
            if (rax_10.d == 0xffffffff)
                result = 0
            else
                result = rax_10 * 0x60 + *arg1
            
            int16_t* rcx_5 = var_c0
            rsi_1 = result + 8
            
            if (result == 0)
                rsi_1 = nullptr
            
            if (rsi_1 != 0)
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                goto label_141c9f0f2
            
            if (rcx_5 == 0)
                result.b = 0
            else
                sub_140a74f90(rcx_5)
                result.b = 0
        else if (r9 == 0)
            result.b = 0
        else
            sub_140a74f90(r9)
            result.b = 0

return result
