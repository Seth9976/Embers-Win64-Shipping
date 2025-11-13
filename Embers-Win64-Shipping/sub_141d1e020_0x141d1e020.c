// 函数: sub_141d1e020
// 地址: 0x141d1e020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg3
int64_t result

if (arg3 == 0)
label_141d1e24b:
    result.b = 0
else
    while (true)
        int64_t arg_18
        sub_140b58170(&arg_18, &data_1437020ab, 1)
        int32_t r10_1 = *(arg1 + 0x30)
        int32_t rcx_1 = 0
        int32_t var_98_1 = 0
        int32_t r8 = 0
        int32_t var_94_1 = 1
        int32_t* var_90_1 = arg1 + 0x18
        int32_t var_88_1 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r10_1 != 0)
            int32_t* rax = *(arg1 + 0x28)
            int32_t* r9_1 = arg1 + 0x18
            
            if (rax != 0)
                r9_1 = rax
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_2 = *r9_1
            
            if (rdx_2 != 0)
            label_141d1e0e8:
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
                
                var_84_1.d = r8 - rax_8 + 0x1f
                
                if (r8 - rax_8 + 0x1f s> r10_1)
                    var_84_1.d = r10_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx_1)
                    r8 += 0x20
                    rcx_1 += 1
                    var_84_1:4.d = r8
                    var_98_1 = rcx_1
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = r9_1[rdx_3 + 1]
                    int32_t var_88_2 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_141d1e0e8
                
                var_84_1.d = r10_1
        
        int32_t rdx_4 = *(arg1 + 0x30)
        int128_t var_38_1 = 0xffffffff
        int32_t r15_1 = 0xffffffff << (rdx_4.b & 0x1f)
        int128_t var_48_1 = var_98_1.o
        int32_t r8_3 = rdx_4 s>> 5
        int32_t r9_3 = rdx_4 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_3 = r15_1
        var_84_1.d = rdx_4
        int128_t var_78 = (arg1 + 8).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_4 != r10_1)
            int32_t* rax_10 = *(arg1 + 0x28)
            int32_t* r11_1 = arg1 + 0x18
            
            if (rax_10 != 0)
                r11_1 = rax_10
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_8 = r11_1[sx.q(r8_3)] & r15_1
            
            if (rdx_8 != 0)
            label_141d1e1c2:
                int32_t rax_17 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
                int32_t rax_18
                
                if (rax_17 == 0)
                    rax_18 = 0x20
                else
                    rax_18 = 0x1f - temp0_4
                
                var_84_1.d = r9_3 - rax_18 + 0x1f
                
                if (r9_3 - rax_18 + 0x1f s> r10_1)
                    var_84_1.d = r10_1
            else
                while (true)
                    int64_t rcx_6 = sx.q(r8_3)
                    r9_3 += 0x20
                    r8_3 += 1
                    
                    if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = r11_1[rcx_6 + 1]
                    var_88_3 = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_141d1e1c2
                
                var_84_1.d = r10_1
        
        while (true)
            int32_t result_1
            result = sx.q(result_1)
            int64_t rcx_8 = var_78.q
            
            if (result.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x18
                    && rcx_8 == arg1 + 8)
                break
            
            void* rax_22 = result * 0x30 + *rcx_8
            
            if (*(rax_22 + 8) == rbx)
                arg_18 = *(rax_22 + 0x14)
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
        
        rbx = arg_18
        
        if (rbx == 0)
            goto label_141d1e24b
        
        if (rbx == arg2)
            result.b = 1
            break

return result
