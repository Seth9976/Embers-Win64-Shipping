// 函数: sub_141840710
// 地址: 0x141840710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg2 + 0x28)
void* r15 = arg2 + 0x10
int32_t var_a4 = 1
int32_t r8 = 0
void* var_a0 = r15
int32_t r9 = 0
int32_t var_a8 = 0
int32_t var_98 = 0xffffffff
void* r12 = arg2
int64_t var_94 = 0

if (rdi != 0)
    void* rax_1 = *(r15 + 0x10)
    void* r10_1 = r15
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_1418407ba:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> rdi)
            var_94.d = rdi
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_94:4.d = r9
            var_a8 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_1418407ba
        
        var_94.d = rdi

int32_t rdx_2 = *(r12 + 0x28)
int32_t r14 = 0xffffffff << (rdx_2.b & 0x1f)
int32_t r8_2 = rdx_2 s>> 5
int32_t r9_3 = rdx_2 & 0xffffffe0
int128_t var_70 = 0xffffffff
int64_t var_40 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_80
var_80:8.d = r14
var_80:0xc.d = rdx_2
int64_t* var_60 = r12.o.q
int128_t var_50 = var_a8.o

if (rdx_2 != rdi)
    void* rax_11 = *(r15 + 0x10)
    void* r10_2 = r15
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_2) << 2)) & r14
    
    if (rdx_6 != 0)
    label_141840882:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_80:0xc.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi)
            var_80:0xc.d = rdi
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
            var_80:8.d = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141840882
        
        var_80:0xc.d = rdi

while (true)
    int64_t result = sx.q(var_50:0xc.d)
    
    if (result.d == (var_80:8.q u>> 0x20).d && var_50.q == r15 && var_60 == r12)
        return result
    
    int32_t arg_20
    sub_140926e00(arg1 + 0x200, &arg_20, *var_60 + result * 0x18)
    int64_t rax_21 = sx.q(arg_20)
    void* const rcx_10
    
    if (rax_21.d == 0xffffffff)
        rcx_10 = nullptr
    else
        rcx_10 = *(arg1 + 0x200) + rax_21 * 0x28
    
    int64_t* rax_23 = rcx_10 + 0x10
    
    if (rcx_10 == 0)
        rax_23 = nullptr
    
    if (rax_23 != 0)
        int64_t* rsi_1 = *rax_23
        int64_t r14_1 = 0
        uint64_t r15_2 = sx.q(rax_23[1].d) << 3 u>> 3
        
        if (rsi_1 u> &rsi_1[rax_23[1]])
            r15_2 = 0
        
        if (r15_2 != 0)
            do
                int64_t rdi_2 = sx.q(arg3[1].d)
                int64_t* r12_1 = *rsi_1
                int32_t rax_26 = (rdi_2 + 1).d
                arg3[1].d = rax_26
                
                if (rax_26 s> *(arg3 + 0xc))
                    sub_1405a4f90(arg3)
                
                sub_140596d10((rdi_2 << 4) + *arg3, r12_1)
                rsi_1 = &rsi_1[1]
                r14_1 += 1
            while (r14_1 != r15_2)
            
            r12 = arg2
        
        r15 = var_a0
    
    int32_t var_54
    var_50:8.d &= not.d(var_54)
    void var_58
    sub_14059bdd0(&var_58)
