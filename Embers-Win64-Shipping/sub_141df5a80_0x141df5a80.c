// 函数: sub_141df5a80
// 地址: 0x141df5a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 == 0)
    int32_t r10_1 = *(arg1 + 0xb0)
    void* r9_1 = arg1 + 0x98
    int32_t var_64_1 = 1
    void* var_60 = r9_1
    int32_t rcx_3 = 0
    int32_t var_68_1 = 0
    int32_t r8_1 = 0
    int32_t var_58_1 = 0xffffffff
    int64_t var_54_1 = 0
    
    if (r10_1 != 0)
        void* rax_4 = *(r9_1 + 0x10)
        
        if (rax_4 != 0)
            r9_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_141df5b78:
            int32_t rax_11 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            int32_t var_64_2 = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            var_54_1.d = r8_1 - rax_12 + 0x1f
            
            if (r8_1 - rax_12 + 0x1f s> r10_1)
                var_54_1.d = r10_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_3)
                r8_1 += 0x20
                rcx_3 += 1
                var_54_1:4.d = r8_1
                var_68_1 = rcx_3
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                var_58_1 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141df5b78
            
            var_54_1.d = r10_1
    
    int128_t var_28_1 = 0xffffffff
    double var_38_1[0x2] = var_68_1.o
    var_68_1.o = (arg1 + 0x88).o
    int64_t var_48_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_58_1.o = var_38_1
    
    if (0 s< r10_1)
        int32_t i_1
        int32_t i = i_1
        
        do
            if (*(*var_68_1.q + sx.q(i) * 0x18 + 8) == arg2)
                break
            
            var_54_1:4.d &= not.d(var_60:4.d)
            sub_14059bdd0(&var_60)
            i = i_1
        while (i s< *(var_58_1.q + 0x18))
else
    int32_t arg_8
    sub_140865c40(arg1 + 0x88, &arg_8, *arg2)
    int64_t rax_1 = sx.q(arg_8)
    void* const rcx_1
    
    if (rax_1.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x88) + rax_1 * 0x18
    
    int64_t* rax_3 = rcx_1 + 8
    
    if (rcx_1 == 0)
        rax_3 = nullptr
    
    if (rax_3 != 0 && *rax_3 == arg2)
        sub_140868c90(arg1 + 0x88, *arg2)

if (*(arg1 + 0x1e0) == arg2)
    *(arg1 + 0x1e0) = 0

sub_141e2c470(arg2)
return sub_141e2c520(arg2) __tailcall
