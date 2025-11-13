// 函数: sub_1419f6fe0
// 地址: 0x1419f6fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_74 = 1
int32_t rdi = *(arg1 + 0x1c8)
int32_t rcx = 0
void* var_70 = arg1 + 0x1b0
int32_t var_78 = 0
int32_t var_68 = 0xffffffff
int64_t var_64 = 0
int32_t r8 = 0

if (rdi != 0)
    void* rax_1 = *(arg1 + 0x1c0)
    void* r9_1 = arg1 + 0x1b0
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_1419f7085:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rdi)
            var_64.d = rdi
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1419f7085
        
        var_64.d = rdi

int32_t r14 = *(arg1 + 0x1c8)
int128_t var_48 = var_78.o
int32_t r8_3 = r14 s>> 5
int32_t r9_3 = r14 & 0xffffffe0
int128_t var_38 = 0xffffffff
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_78.o = (arg1 + 0x1a0).o
var_68.o = var_48

if (r14 != rdi)
    void* rax_11 = *(arg1 + 0x1c0)
    void* r10_1 = arg1 + 0x1b0
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_7 = *(r10_1 + (sx.q(r8_3) << 2)) & 0xffffffff << (r14.b & 0x1f)
    
    if (rdx_7 != 0)
    label_1419f713b:
        int32_t rax_18 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rsi_1
        
        if (rax_18 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_4
        
        r14 = r9_3 - rsi_1 + 0x1f
        
        if (r14 s> rdi)
            r14 = rdi
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r10_1 + (rcx_5 << 2) + 4)
            
            if (rdx_7 != 0)
                goto label_1419f713b
        
        r14 = rdi

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t* result = var_78.q
    
    if (rcx_7.d == r14 && var_68.q == arg1 + 0x1b0 && result == arg1 + 0x1a0)
        return result
    
    int64_t rsi_2 = *(*result + rcx_7 * 0x10)
    
    if (rsi_2 != 0)
        int64_t rdi_1 = sx.q(*(arg3 + 0xc8))
        int32_t rax_20 = (rdi_1 + 1).d
        *(arg3 + 0xc8) = rax_20
        
        if (rax_20 s> *(arg3 + 0xcc))
            sub_141a14450(arg3, rdi_1.d)
        
        void* rax_21 = *(arg3 + 0xc0)
        void* rcx_10 = arg3
        
        if (rax_21 != 0)
            rcx_10 = rax_21
        
        *(rcx_10 + (rdi_1 << 3)) = rsi_2
    
    var_64:4.d &= not.d(var_70:4.d)
    sub_14059bdd0(&var_70)
