// 函数: sub_1422bf3f0
// 地址: 0x1422bf3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 8)) << 5, sx.q(*(arg1 + 0xc)) << 5)
int64_t r9 = *arg2
(*(r9 + 8))(arg2, zx.q(*(arg1 + 0x28) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x2c) + 0x1f) u>> 5 << 2, 
    r9)
int64_t rdx_7 = sx.q(*(arg1 + 0x48)) << 2
(*(*arg2 + 8))(arg2, rdx_7, rdx_7)
int32_t r11 = *(arg1 + 0x28)
int32_t rcx_3 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t r8_7 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r11 != 0)
    void* rax_2 = *(arg1 + 0x20)
    void* r9_1 = arg1 + 0x10
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *r9_1
    
    if (rdx_10 != 0)
    label_1422bf4e8:
        int32_t rax_9 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_84_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_74.d = r8_7 - rax_10 + 0x1f
        
        if (r8_7 - rax_10 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rdx_11 = sx.q(rcx_3)
            r8_7 += 0x20
            rcx_3 += 1
            var_74:4.d = r8_7
            var_88 = rcx_3
            
            if (rdx_11.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r9_1 + (rdx_11 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1422bf4e8
        
        var_74.d = r11

int32_t rdx_12 = *(arg1 + 0x28)
int128_t var_28 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_12.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_10 = rdx_12 s>> 5
int32_t r9_3 = rdx_12 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r12
var_74.d = rdx_12
int128_t var_68 = arg1.o
int128_t var_58 = var_38

if (rdx_12 != r11)
    void* rax_12 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_16 = *(r10_1 + (sx.q(r8_10) << 2)) & r12
    
    if (rdx_16 != 0)
    label_1422bf5b2:
        int32_t rax_19 = neg.d(rdx_16) & rdx_16
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rbx_1
        
        if (rax_19 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_74.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_10)
            r9_3 += 0x20
            r8_10 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_16 = *(r10_1 + (rcx_8 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_16 != 0)
                goto label_1422bf5b2
        
        var_74.d = r11

while (true)
    int64_t rcx_10 = sx.q(var_58:0xc.d)
    int64_t* result = var_68.q
    
    if (rcx_10.d == (var_78_2.q u>> 0x20).d && var_58.q == arg1 + 0x10 && result == arg1)
        return result
    
    int64_t rax_21 = *result
    int64_t r9_5 = *arg2
    int64_t rcx_11 = rcx_10 << 5
    (*(r9_5 + 8))(arg2, sx.q(*(rcx_11 + rax_21 + 0x10)) * 2, sx.q(*(rcx_11 + rax_21 + 0x14)) * 2, 
        r9_5, var_88, arg1 + 0x10, var_78_2)
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
