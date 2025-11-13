// 函数: sub_141e76dd0
// 地址: 0x141e76dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* r15_1 = arg1
int32_t rsi_1 = 0

if (arg2 == *(arg1 + 0x200))
    *(arg1 + 0x200) = 0

sub_141e842d0(arg1 + 0x210, arg2)
int64_t rcx_1 = sx.q(*(r15_1 + 0x5c0))
int32_t arg_10

if (rcx_1.d != 0)
    int32_t r13_1 = 0
    int32_t rdi_1 = 0
    int64_t rbx_1 = 0
    bool r8_1 = **(r15_1 + 0x5b8) != arg2
    arg_10.b = r8_1
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rcx_1)
            int64_t rcx_2 = *(r15_1 + 0x5b8) + (rbx_1 << 3)
            
            do
                int32_t rax_3
                rax_3.b = *rcx_2 != arg2
                
                if (zx.d(r8_1) != rax_3)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_2 += 8
            while (rbx_1 s< rcx_1)
        
        int32_t r15_3 = rdi_1 - r9_1.d
        
        if (r8_1 != 0)
            if (r13_1 != r9_1.d)
                int64_t rcx_4 = *(arg1 + 0x5b8)
                memmove(rcx_4 + (sx.q(r13_1) << 3), rcx_4 + (r9_1 << 3), r15_3 << 3)
                r8_1 = arg_10.b
            
            r13_1 += r15_3
        
        r15_1 = arg1
        r8_1 ^= 1
        arg_10.b = r8_1
    while (rbx_1 s< rcx_1)
    
    *(r15_1 + 0x5c0) = r13_1

sub_140ba6ab0(r15_1 + 0x260, &arg_10, arg2)
int64_t rax_5 = sx.q(arg_10)
void* const rax_8

if (rax_5.d == 0xffffffff)
    rax_8 = nullptr
else
    rax_8 = rax_5 * 0x60 + *(r15_1 + 0x260)

void* rdi_2 = rax_8 + 8

if (rax_8 == 0)
    rdi_2 = nullptr

if (rdi_2 != 0)
    int32_t r10_1 = *(rdi_2 + 0x28)
    int32_t var_a8_1 = 0
    int32_t rcx_7 = 0
    int32_t var_a4_1 = 1
    void* var_a0_1 = rdi_2 + 0x10
    int32_t var_98_1 = 0xffffffff
    int32_t var_94_1 = 0
    int32_t var_90_1 = 0
    
    if (r10_1 != 0)
        void* rax_9 = *(rdi_2 + 0x20)
        void* r8_5 = rdi_2 + 0x10
        
        if (rax_9 != 0)
            r8_5 = rax_9
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_5 = *r8_5
        int32_t var_94_3
        
        if (rdx_5 != 0)
        label_141e76fb6:
            int32_t rax_16 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
            int32_t var_a4_2 = rax_16
            int32_t rax_17
            
            if (rax_16 == 0)
                rax_17 = 0x20
            else
                rax_17 = 0x1f - temp0_2
            
            int32_t var_94_2 = rcx_7 - rax_17 + 0x1f
            
            if (rcx_7 - rax_17 + 0x1f s> r10_1)
                var_94_3 = r10_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rsi_1)
                rcx_7 += 0x20
                rsi_1 += 1
                int32_t var_90_2 = rcx_7
                var_a8_1 = rsi_1
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r8_5 + (rdx_6 << 2) + 4)
                int32_t var_98_2 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141e76fb6
            
            var_94_3 = r10_1
    
    int32_t rdx_8 = *(rdi_2 + 0x28)
    int128_t var_48_1 = 0xffffffff
    int32_t r13_2 = 0xffffffff << (rdx_8.b & 0x1f)
    int128_t var_58_1 = var_a8_1.o
    int32_t r8_7 = rdx_8 s>> 5
    int32_t r9_3 = rdx_8 & 0xffffffe0
    int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_98_3 = r13_2
    int32_t var_94_4 = rdx_8
    int128_t var_88 = rdi_2.o
    int128_t var_78_1 = var_58_1
    
    if (rdx_8 != r10_1)
        void* rax_19 = *(rdi_2 + 0x20)
        void* r10_2 = rdi_2 + 0x10
        
        if (rax_19 != 0)
            r10_2 = rax_19
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_12 = *(r10_2 + (sx.q(r8_7) << 2)) & r13_2
        int32_t var_94_6
        
        if (rdx_12 != 0)
        label_141e77082:
            int32_t rax_26 = neg.d(rdx_12) & rdx_12
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
            int32_t r11_1
            
            if (rax_26 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            int32_t var_94_5 = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> r10_1)
                var_94_6 = r10_1
        else
            while (true)
                int64_t rcx_12 = sx.q(r8_7)
                r9_3 += 0x20
                r8_7 += 1
                
                if (rcx_12.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_12 = *(r10_2 + (rcx_12 << 2) + 4)
                var_98_3 = 0xffffffff
                
                if (rdx_12 != 0)
                    goto label_141e77082
            
            var_94_6 = r10_1
    
    while (true)
        int64_t rax_28 = sx.q(var_78_1:0xc.d)
        int64_t rdx_13 = var_88.q
        
        if (rax_28.d == (var_98_3.q u>> 0x20).d && var_78_1.q == rdi_2 + 0x10 && rdx_13 == rdi_2)
            break
        
        void* rcx_15 = rax_28 * 0x70 + *rdx_13
        var_78_1:8.d &= not.d(var_88:0xc.d)
        *(rcx_15 + 0x64) &= 0xfe
        sub_14059bdd0(&var_88:8)

void* rax = *(r15_1 + 0x2c0)

if (rax == 0 || *(rax + 0x160) != arg2)
    return 

void* rax_31 = sub_141e7b050(r15_1, arg2)
void* rcx_18 = *(r15_1 + 0x2c0)

if (rax_31 != 0)
    return sub_141e871e0(rcx_18, rax_31, 1, 0) __tailcall

sub_141e76c60(rcx_18)
