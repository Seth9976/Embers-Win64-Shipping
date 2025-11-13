// 函数: sub_140a723b0
// 地址: 0x140a723b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x148)
int32_t arg_8
sub_140a73b50(arg1 + 0xf8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int32_t r9 = 0
void* const result

if (rax.d == 0xffffffff)
    result = nullptr
else
    result = rax * 0x68 + *(arg1 + 0xf8)

void* rsi_1 = result + 0x10

if (result == 0)
    rsi_1 = nullptr

if (rsi_1 != 0)
    int32_t rdi_1 = *(rsi_1 + 0x28)
    int32_t rcx_2 = 0
    int32_t var_98_1 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = rsi_1 + 0x10
    int32_t var_88_1 = 0xffffffff
    int32_t var_84_1 = 0
    int32_t var_80_1 = 0
    
    if (rdi_1 != 0)
        void* rax_2 = *(rsi_1 + 0x20)
        void* r8_1 = rsi_1 + 0x10
        
        if (rax_2 != 0)
            r8_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_3 = *r8_1
        int32_t var_84_3
        
        if (rdx_3 != 0)
        label_140a724c8:
            int32_t rax_9 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_94_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            int32_t var_84_2 = rcx_2 - rax_10 + 0x1f
            
            if (rcx_2 - rax_10 + 0x1f s> rdi_1)
                var_84_3 = rdi_1
        else
            while (true)
                int64_t rdx_4 = sx.q(r9)
                rcx_2 += 0x20
                r9 += 1
                int32_t var_80_2 = rcx_2
                var_98_1 = r9
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r8_1 + (rdx_4 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_140a724c8
            
            var_84_3 = rdi_1
    
    int32_t rdx_6 = *(rsi_1 + 0x28)
    int128_t var_38_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_3 = rdx_6 s>> 5
    int32_t r9_2 = rdx_6 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_3 = r12_1
    int32_t var_84_4 = rdx_6
    int128_t var_78 = rsi_1.o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_6 != rdi_1)
        void* rax_12 = *(rsi_1 + 0x20)
        void* r10_1 = rsi_1 + 0x10
        
        if (rax_12 != 0)
            r10_1 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r12_1
        int32_t var_84_6
        
        if (rdx_10 != 0)
        label_140a72592:
            int32_t rax_19 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t r11_1
            
            if (rax_19 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            int32_t var_84_5 = r9_2 - r11_1 + 0x1f
            
            if (r9_2 - r11_1 + 0x1f s> rdi_1)
                var_84_6 = rdi_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_3)
                r9_2 += 0x20
                r8_3 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_7 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_140a72592
            
            var_84_6 = rdi_1
    
    while (true)
        int32_t var_5c
        int64_t rcx_9 = sx.q(var_5c)
        result = var_78.q
        
        if (rcx_9.d == (var_88_3.q u>> 0x20).d && var_68_1.q == rsi_1 + 0x10 && result == rsi_1)
            break
        
        int64_t* r8_6 = (rcx_9 << 5) + *result
        arg_8.q = *r8_6
        result = (*arg3)(*(arg3 + 8), &arg_8, &r8_6[1])
        
        if (result.b == 0)
            break
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)

if (arg1 == -0x148)
    return result

return LeaveCriticalSection(arg1 + 0x148)
