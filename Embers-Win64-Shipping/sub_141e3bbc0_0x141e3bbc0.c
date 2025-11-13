// 函数: sub_141e3bbc0
// 地址: 0x141e3bbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c9c3e0(arg1 + 0x290, 0)
int64_t* i = *(arg1 + 0x280)
int64_t result = sx.q(*(arg1 + 0x288))

for (void* r14 = &i[result * 3]; i != r14; i = &i[3])
    int64_t* j = i[1]
    result = sx.q(i[2].d)
    
    for (void* rsi_1 = &j[result]; j != rsi_1; j = &j[1])
        result = sub_141e35350(arg1 + 0x290, j, i)

if (arg2 != 0)
    void* r12_1 = *(arg1 + 0x280)
    result = sx.q(*(arg1 + 0x288))
    void* rdi = r12_1 + result * 0x18
    
    if (r12_1 != rdi)
        int32_t* rbx_1 = r12_1 + 0x10
        
        do
            int32_t rdx_1 = *rbx_1
            *rbx_1 = 0
            
            if (rbx_1[1] != rdx_1)
                sub_140638c50(&rbx_1[-2], rdx_1)
            
            int32_t r10_1 = *(arg1 + 0x2b8)
            int32_t rcx_4 = 0
            int32_t var_98_1 = 0
            int32_t r8_2 = 0
            int32_t var_94_1 = 1
            void* var_90_1 = arg1 + 0x2a0
            int32_t var_88_1 = 0xffffffff
            int64_t var_84_1 = 0
            
            if (r10_1 != 0)
                void* rax = *(arg1 + 0x2b0)
                void* r9_1 = arg1 + 0x2a0
                
                if (rax != 0)
                    r9_1 = rax
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r10_1 - 1)
                int32_t rdx_4 = *r9_1
                
                if (rdx_4 != 0)
                label_141e3bd18:
                    int32_t rax_7 = neg.d(rdx_4) & rdx_4
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
                    int32_t var_94_2 = rax_7
                    int32_t rax_8
                    
                    if (rax_7 == 0)
                        rax_8 = 0x20
                    else
                        rax_8 = 0x1f - temp0_2
                    
                    var_84_1.d = r8_2 - rax_8 + 0x1f
                    
                    if (r8_2 - rax_8 + 0x1f s> r10_1)
                        var_84_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_5 = sx.q(rcx_4)
                        r8_2 += 0x20
                        rcx_4 += 1
                        var_84_1:4.d = r8_2
                        var_98_1 = rcx_4
                        
                        if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                        int32_t var_88_2 = 0xffffffff
                        
                        if (rdx_4 != 0)
                            goto label_141e3bd18
                    
                    var_84_1.d = r10_1
            
            int32_t rdx_6 = *(arg1 + 0x2b8)
            int128_t var_38_1 = 0xffffffff
            int32_t rsi_2 = 0xffffffff << (rdx_6.b & 0x1f)
            int128_t var_48_1 = var_98_1.o
            int32_t r8_5 = rdx_6 s>> 5
            int32_t r9_3 = rdx_6 & 0xffffffe0
            int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_88_3 = rsi_2
            var_84_1.d = rdx_6
            int128_t var_78 = (arg1 + 0x290).o
            int96_t var_68_1 = var_48_1:8.12
            
            if (rdx_6 != r10_1)
                void* rax_10 = *(arg1 + 0x2b0)
                void* r11_1 = arg1 + 0x2a0
                
                if (rax_10 != 0)
                    r11_1 = rax_10
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r10_1 - 1)
                int32_t rdx_10 = *(r11_1 + (sx.q(r8_5) << 2)) & rsi_2
                
                if (rdx_10 != 0)
                label_141e3bde2:
                    int32_t rax_17 = neg.d(rdx_10) & rdx_10
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
                        int64_t rcx_9 = sx.q(r8_5)
                        r9_3 += 0x20
                        r8_5 += 1
                        
                        if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_10 = *(r11_1 + (rcx_9 << 2) + 4)
                        var_88_3 = 0xffffffff
                        
                        if (rdx_10 != 0)
                            goto label_141e3bde2
                    
                    var_84_1.d = r10_1
            
            while (true)
                int32_t result_1
                result = sx.q(result_1)
                int64_t* rdx_11 = var_78.q
                
                if (result.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x2a0
                        && rdx_11 == arg1 + 0x290)
                    break
                
                int64_t* rsi_3 = *rdx_11 + result * 0x18
                
                if (rsi_3[1] == *r12_1)
                    int64_t rdi_1 = sx.q(*rbx_1)
                    int32_t rax_22 = (rdi_1 + 1).d
                    *rbx_1 = rax_22
                    
                    if (rax_22 s> rbx_1[1])
                        sub_1405a4d70(&rbx_1[-2])
                    
                    *(*(rbx_1 - 8) + (rdi_1 << 3)) = *rsi_3
                
                var_68_1:8.d &= not.d(var_78:0xc.d)
                sub_14059bdd0(&var_78:8)
            
            r12_1 += 0x18
            rbx_1 = &rbx_1[6]
        while (r12_1 != rdi)

return result
