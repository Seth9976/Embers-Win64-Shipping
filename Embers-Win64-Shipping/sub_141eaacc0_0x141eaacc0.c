// 函数: sub_141eaacc0
// 地址: 0x141eaacc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *(arg2 + 0x14f) != 2)
    return 

sub_1423c7420(arg1, arg2, arg2 + 0x30)
void* rbx_2 = *(arg2 + 0xa0)

if (rbx_2 == 0)
    return 

sub_1423c7420(arg1, rbx_2, rbx_2 + 0x28)
int32_t rcx_1 = 0
int32_t var_84_1 = 1
int32_t var_88_1 = 0
int32_t rbx_3 = *(rbx_2 + 0x1c8)
void* var_80_1 = rbx_2 + 0x1b0
int32_t r8_3 = 0
int32_t var_78_1 = 0xffffffff
int64_t var_74_1 = 0

if (rbx_3 != 0)
    void* rax_1 = *(rbx_2 + 0x1c0)
    void* r9_1 = rbx_2 + 0x1b0
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_3 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141eaadb8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74_1.d = r8_3 - rax_9 + 0x1f
        
        if (r8_3 - rax_9 + 0x1f s> rbx_3)
            var_74_1.d = rbx_3
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_3 += 0x20
            rcx_1 += 1
            var_74_1:4.d = r8_3
            var_88_1 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_78_2 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141eaadb8
        
        var_74_1.d = rbx_3

int32_t rdx_5 = *(rbx_2 + 0x1c8)
int128_t var_28_1 = 0xffffffff
int32_t r12_1 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_38_1 = var_88_1.o
int32_t r8_6 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_3 = r12_1
var_74_1.d = rdx_5
int128_t var_68 = (rbx_2 + 0x1a0).o
int128_t var_58_1 = var_38_1

if (rdx_5 != rbx_3)
    void* rax_11 = *(rbx_2 + 0x1c0)
    void* r10_1 = rbx_2 + 0x1b0
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_3 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_6) << 2)) & r12_1
    
    if (rdx_9 != 0)
    label_141eaae82:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74_1.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx_3)
            var_74_1.d = rbx_3
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_6)
            r9_3 += 0x20
            r8_6 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
            var_78_3 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141eaae82
        
        var_74_1.d = rbx_3

while (true)
    int64_t rcx_8 = sx.q(var_58_1:0xc.d)
    int64_t rax = var_68.q
    
    if (rcx_8.d == (var_78_3.q u>> 0x20).d && var_58_1.q == rbx_2 + 0x1b0 && rax == rbx_2 + 0x1a0)
        break
    
    void* rdx_10 = *(*rax + rcx_8 * 0x10)
    
    if (rdx_10 != 0 && (*(rdx_10 + 0x3a) & 2) != 0)
        sub_1423c7420(arg1, rdx_10, rdx_10 + 0x30)
    
    int32_t var_5c
    var_58_1:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
