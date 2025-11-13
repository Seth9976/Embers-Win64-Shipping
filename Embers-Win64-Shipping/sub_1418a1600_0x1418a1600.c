// 函数: sub_1418a1600
// 地址: 0x1418a1600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xf8)
int64_t entry_zmm2

if (*(arg1 + 0x68) != 0)
    int32_t rcx_1 = 0
    int32_t r8_1 = 0
    int32_t r11_1 = *(arg1 + 0x38)
    int32_t var_98_1 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = arg1 + 0x20
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r11_1 != 0)
        void* rax_1 = *(arg1 + 0x30)
        void* r9_1 = arg1 + 0x20
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_1418a16d8:
            int32_t rax_8 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_94_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_84_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_1)
                r8_1 += 0x20
                rcx_1 += 1
                var_84_1:4.d = r8_1
                var_98_1 = rcx_1
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1418a16d8
            
            var_84_1.d = r11_1
    
    int32_t rdx_5 = *(arg1 + 0x38)
    int128_t var_38_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    entry_zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int64_t var_58_1 = entry_zmm2
    int32_t var_88_3 = r12_1
    var_84_1.d = rdx_5
    int128_t var_78 = (arg1 + 0x10).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_5 != r11_1)
        void* rax_11 = *(arg1 + 0x30)
        void* r10_1 = arg1 + 0x20
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
        
        if (rdx_9 != 0)
        label_1418a17a2:
            int32_t rax_18 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t rsi_1
            
            if (rax_18 == 0)
                rsi_1 = 0x20
            else
                rsi_1 = 0x1f - temp0_4
            
            var_84_1.d = r9_3 - rsi_1 + 0x1f
            
            if (r9_3 - rsi_1 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1418a17a2
            
            var_84_1.d = r11_1
    
    int64_t arg_8
    
    while (true)
        int32_t var_5c
        int64_t rcx_8 = sx.q(var_5c)
        int64_t rax_20 = var_78.q
        
        if (rcx_8.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x20
                && rax_20 == arg1 + 0x10)
            break
        
        void* rdx_12 = (rcx_8 << 5) + *rax_20
        int64_t rax_21 = *(rdx_12 + 0x10)
        *(rdx_12 + 0x10) = 0
        int64_t* rcx_9 = *(arg1 + 0x68)
        arg_8 = rax_21
        (*(*rcx_9 + 8))(rcx_9, rdx_12, &arg_8)
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    int64_t rax_25 = *(arg1 + 0xf0)
    
    if (rax_25 != 0)
        *(arg1 + 0xf0) = 0
        int64_t* rcx_11 = *(arg1 + 0x68)
        arg_8 = rax_25
        (*(*rcx_11 + 8))(rcx_11, arg1 + 0xe0, &arg_8)

sub_1418a20f0(arg1 + 0x10, 0)
int64_t* rcx_13 = *(arg1 + 0xf0)

if (rcx_13 != 0)
    *(arg1 + 0xf0) = 0
    (**rcx_13)(rcx_13, 1, entry_zmm2)

*(arg1 + 0xe8) = 0
*(arg1 + 0xe0) = 0
int64_t* rcx_14 = *(arg1 + 0x70)
int64_t result = (*(*rcx_14 + 0x20))(rcx_14, zx.q(*(arg1 + 0x18) - *(arg1 + 0x44)), entry_zmm2)

if (arg1 == -0xf8)
    return result

return LeaveCriticalSection(arg1 + 0xf8)
