// 函数: sub_141e61030
// 地址: 0x141e61030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t* rdx_5

if (*(arg1 + 0x3e0) == *(arg1 + 0x40c))
label_141e610be:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x410
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x420)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e610be_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 5) + *(arg1 + 0x3d8)
            
            if (*rdx_5 == arg2)
                break
            
            rax_4 = rdx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_141e610be_2
        
        if (rax_4 == 0xffffffff)
        label_141e610be_2:
            rdx_5 = nullptr

void* result = &rdx_5[1]

if (rdx_5 == 0)
    result = nullptr

if (result != 0)
    int32_t rcx_2 = 0
    void* r13_2 = *result + 0x88
    int32_t r10_1 = *(r13_2 + 0x28)
    int32_t var_a8_1 = 0
    int32_t var_a4_1 = 1
    void* var_a0_1 = r13_2 + 0x10
    int32_t var_98_1 = 0xffffffff
    int32_t var_94_1 = 0
    int32_t var_90_1 = 0
    
    if (r10_1 != 0)
        void* rax_5 = *(r13_2 + 0x20)
        void* r8_2 = r13_2 + 0x10
        
        if (rax_5 != 0)
            r8_2 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_8 = *r8_2
        int32_t var_94_3
        
        if (rdx_8 != 0)
        label_141e61176:
            int32_t rax_12 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_a4_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            int32_t var_94_2 = rcx_2 - rax_13 + 0x1f
            
            if (rcx_2 - rax_13 + 0x1f s> r10_1)
                var_94_3 = r10_1
        else
            while (true)
                int64_t rdx_9 = sx.q(rdi)
                rcx_2 += 0x20
                rdi += 1
                int32_t var_90_2 = rcx_2
                var_a8_1 = rdi
                
                if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r8_2 + (rdx_9 << 2) + 4)
                int32_t var_98_2 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141e61176
            
            var_94_3 = r10_1
    
    int32_t rdx_11 = *(r13_2 + 0x28)
    int128_t var_48_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_11.b & 0x1f)
    int128_t var_58_1 = var_a8_1.o
    int32_t r8_4 = rdx_11 s>> 5
    int32_t r9_1 = rdx_11 & 0xffffffe0
    int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_98_3 = r12_1
    int32_t var_94_4 = rdx_11
    int128_t var_88 = r13_2.o
    int128_t var_78_1 = var_58_1
    
    if (rdx_11 != r10_1)
        void* rax_15 = *(r13_2 + 0x20)
        void* r10_2 = r13_2 + 0x10
        
        if (rax_15 != 0)
            r10_2 = rax_15
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_15 = *(r10_2 + (sx.q(r8_4) << 2)) & r12_1
        int32_t var_94_6
        
        if (rdx_15 != 0)
        label_141e61242:
            int32_t rax_22 = neg.d(rdx_15) & rdx_15
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t r11_1
            
            if (rax_22 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            int32_t var_94_5 = r9_1 - r11_1 + 0x1f
            
            if (r9_1 - r11_1 + 0x1f s> r10_1)
                var_94_6 = r10_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_4)
                r9_1 += 0x20
                r8_4 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_15 = *(r10_2 + (rcx_7 << 2) + 4)
                var_98_3 = 0xffffffff
                
                if (rdx_15 != 0)
                    goto label_141e61242
            
            var_94_6 = r10_1
    
    while (true)
        result = sx.q(var_78_1:0xc.d)
        int64_t rdx_16 = var_88.q
        
        if (result.d == (var_98_3.q u>> 0x20).d && var_78_1.q == r13_2 + 0x10 && rdx_16 == r13_2)
            break
        
        int64_t* rcx_11 = result * 0x90 + *rdx_16
        
        if ((not.b(arg4) & 1) != 0)
        label_141e612af:
            int64_t rdi_1 = sx.q(arg3[1].d)
            int64_t var_a0_2 = *rcx_11
            var_a8_1.q = arg2
            int32_t rax_26 = (rdi_1 + 1).d
            arg3[1].d = rax_26
            
            if (rax_26 s> *(arg3 + 0xc))
                sub_1405a4f90(arg3)
            
            *(*arg3 + rdi_1 * 0x10) = var_a8_1.o
        else if (rcx_11[0xa].d == 0 && rcx_11[0xe].d == 0)
            goto label_141e612af
        
        var_78_1:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)

result.b = arg3[1].d s> 0
return result
