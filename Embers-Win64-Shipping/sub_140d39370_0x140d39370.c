// 函数: sub_140d39370
// 地址: 0x140d39370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1 + 0x168
int32_t r12_1 = arg3[1].d - 1
int64_t* arg_18 = rsi
int64_t rdi = sx.q(r12_1) << 3
int64_t arg_10 = rdi
int64_t* result

while (true)
    int32_t arg_8
    sub_140ba6ab0(rsi, &arg_8, arg2)
    int64_t rax_1 = sx.q(arg_8)
    
    if (rax_1.d == 0xffffffff)
        result = nullptr
    else
        result = rax_1 * 0x60 + *rsi
    
    void* r15_1 = &result[1]
    
    if (result == 0)
        r15_1 = nullptr
    
    if (r15_1 != 0)
        int32_t r10_1 = *(r15_1 + 0x28)
        int32_t var_a4_1 = 1
        int32_t rcx_1 = 0
        int32_t var_a8_1 = 0
        int32_t r8_1 = 0
        void* var_a0_1 = r15_1 + 0x10
        int32_t var_98_1 = 0xffffffff
        int64_t var_94_1 = 0
        
        if (r10_1 != 0)
            void* rax_4 = *(r15_1 + 0x20)
            void* r9_1 = r15_1 + 0x10
            
            if (rax_4 != 0)
                r9_1 = rax_4
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_3 = *r9_1
            
            if (rdx_3 != 0)
            label_140d39478:
                int32_t rax_11 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
                int32_t var_a4_2 = rax_11
                int32_t rax_12
                
                if (rax_11 == 0)
                    rax_12 = 0x20
                else
                    rax_12 = 0x1f - temp0_2
                
                var_94_1.d = r8_1 - rax_12 + 0x1f
                
                if (r8_1 - rax_12 + 0x1f s> r10_1)
                    var_94_1.d = r10_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx_1)
                    r8_1 += 0x20
                    rcx_1 += 1
                    var_94_1:4.d = r8_1
                    var_a8_1 = rcx_1
                    
                    if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                    int32_t var_98_2 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_140d39478
                
                var_94_1.d = r10_1
        
        int32_t rdx_5 = *(r15_1 + 0x28)
        int128_t var_48_1 = 0xffffffff
        int32_t rsi_1 = 0xffffffff << (rdx_5.b & 0x1f)
        int128_t var_58_1 = var_a8_1.o
        int32_t r8_4 = rdx_5 s>> 5
        int32_t r9_3 = rdx_5 & 0xffffffe0
        int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_98_3 = rsi_1
        var_94_1.d = rdx_5
        int128_t var_88 = r15_1.o
        int128_t var_78_1 = var_58_1
        
        if (rdx_5 != r10_1)
            void* rax_14 = *(r15_1 + 0x20)
            void* r11_1 = r15_1 + 0x10
            
            if (rax_14 != 0)
                r11_1 = rax_14
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_9 = *(r11_1 + (sx.q(r8_4) << 2)) & rsi_1
            
            if (rdx_9 != 0)
            label_140d39542:
                int32_t rax_21 = neg.d(rdx_9) & rdx_9
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
                int32_t rax_22
                
                if (rax_21 == 0)
                    rax_22 = 0x20
                else
                    rax_22 = 0x1f - temp0_4
                
                var_94_1.d = r9_3 - rax_22 + 0x1f
                
                if (r9_3 - rax_22 + 0x1f s> r10_1)
                    var_94_1.d = r10_1
            else
                while (true)
                    int64_t rcx_6 = sx.q(r8_4)
                    r9_3 += 0x20
                    r8_4 += 1
                    
                    if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_9 = *(r11_1 + (rcx_6 << 2) + 4)
                    var_98_3 = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_140d39542
                
                var_94_1.d = r10_1
        
        while (true)
            int64_t rcx_8 = sx.q(var_78_1:0xc.d)
            result = var_88.q
            
            if (rcx_8.d == (var_98_3.q u>> 0x20).d && var_78_1.q == r15_1 + 0x10 && result == r15_1)
                break
            
            int64_t rdi_1 = sx.q(arg3[1].d)
            int64_t rsi_2 = *(*result + rcx_8 * 0x10)
            int32_t rax_25 = (rdi_1 + 1).d
            arg3[1].d = rax_25
            
            if (rax_25 s> *(arg3 + 0xc))
                sub_1405a4d70(arg3)
            
            *(*arg3 + (rdi_1 << 3)) = rsi_2
            var_78_1:8.d &= not.d(var_88:0xc.d)
            sub_14059bdd0(&var_88:8)
        
        rdi = arg_10
        rsi = arg_18
    
    rdi += 8
    r12_1 += 1
    arg_10 = rdi
    
    if (r12_1 s>= arg3[1].d)
        break
    
    arg2 = *(rdi + *arg3)

return result
