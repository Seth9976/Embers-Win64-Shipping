// 函数: sub_1421635c0
// 地址: 0x1421635c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg2
(*(r9 + 8))(arg2, sx.q(*(arg1 + 8)) * 0x18, sx.q(*(arg1 + 0xc)) * 0x18, r9)
int64_t r9_1 = *arg2
(*(r9_1 + 8))(arg2, zx.q(*(arg1 + 0x28) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x2c) + 0x1f) u>> 5 << 2, 
    r9_1)
int64_t rdx_7 = sx.q(*(arg1 + 0x48)) << 2
(*(*arg2 + 8))(arg2, rdx_7, rdx_7)
int64_t r9_2 = *arg2
(*(r9_2 + 8))(arg2, sx.q(*(arg1 + 0x58)) * 0x18, sx.q(*(arg1 + 0x5c)) * 0x18, r9_2)
int64_t r9_3 = *arg2
(*(r9_3 + 8))(arg2, zx.q(*(arg1 + 0x78) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x7c) + 0x1f) u>> 5 << 2, 
    r9_3)
int64_t rdx_15 = sx.q(*(arg1 + 0x98)) << 2
(*(*arg2 + 8))(arg2, rdx_15, rdx_15)
int64_t r9_4 = *arg2
(*(r9_4 + 8))(arg2, sx.q(*(arg1 + 0xa8)) * 0x18, sx.q(*(arg1 + 0xac)) * 0x18, r9_4)
int64_t r9_5 = *arg2
(*(r9_5 + 8))(arg2, zx.q(*(arg1 + 0xc8) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0xcc) + 0x1f) u>> 5 << 2, 
    r9_5)
int64_t rdx_23 = sx.q(*(arg1 + 0xe8)) << 2
(*(*arg2 + 8))(arg2, rdx_23, rdx_23)
int64_t r9_6 = *arg2
(*(r9_6 + 8))(arg2, sx.q(*(arg1 + 0xf8)) * 0x14, sx.q(*(arg1 + 0xfc)) * 0x14, r9_6)
int64_t r9_7 = *arg2
(*(r9_7 + 8))(arg2, zx.q(*(arg1 + 0x118) + 0x1f) u>> 5 << 2, 
    zx.q(*(arg1 + 0x11c) + 0x1f) u>> 5 << 2, r9_7)
int64_t rdx_31 = sx.q(*(arg1 + 0x138)) << 2
(*(*arg2 + 8))(arg2, rdx_31, rdx_31)
int32_t r11 = *(arg1 + 0x28)
int32_t rcx_12 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t r8_28 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r11 != 0)
    void* rax_12 = *(arg1 + 0x20)
    void* r9_8 = arg1 + 0x10
    
    if (rax_12 != 0)
        r9_8 = rax_12
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_34 = *r9_8
    
    if (rdx_34 != 0)
    label_142163808:
        int32_t rax_19 = neg.d(rdx_34) & rdx_34
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_19)
        int32_t var_84_1 = rax_19
        int32_t rax_20
        
        if (rax_19 == 0)
            rax_20 = 0x20
        else
            rax_20 = 0x1f - temp0_2
        
        var_74.d = r8_28 - rax_20 + 0x1f
        
        if (r8_28 - rax_20 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rdx_35 = sx.q(rcx_12)
            r8_28 += 0x20
            rcx_12 += 1
            var_74:4.d = r8_28
            var_88 = rcx_12
            
            if (rdx_35.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_34 = *(r9_8 + (rdx_35 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_34 != 0)
                goto label_142163808
        
        var_74.d = r11

int32_t rdx_36 = *(arg1 + 0x28)
int128_t var_28 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_36.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_31 = rdx_36 s>> 5
int32_t r9_10 = rdx_36 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r12
var_74.d = rdx_36
int128_t var_68 = arg1.o
int128_t var_58 = var_38

if (rdx_36 != r11)
    void* rax_22 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_22 != 0)
        r10_1 = rax_22
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_40 = *(r10_1 + (sx.q(r8_31) << 2)) & r12
    
    if (rdx_40 != 0)
    label_1421638d2:
        int32_t rax_29 = neg.d(rdx_40) & rdx_40
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_29)
        int32_t rdi_1
        
        if (rax_29 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_74.d = r9_10 - rdi_1 + 0x1f
        
        if (r9_10 - rdi_1 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rcx_17 = sx.q(r8_31)
            r9_10 += 0x20
            r8_31 += 1
            
            if (rcx_17.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_40 = *(r10_1 + (rcx_17 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_40 != 0)
                goto label_1421638d2
        
        var_74.d = r11

while (true)
    int64_t result = sx.q(var_58:0xc.d)
    int64_t* rdx_41 = var_68.q
    
    if (result.d == (var_78_2.q u>> 0x20).d && var_58.q == arg1 + 0x10 && rdx_41 == arg1)
        return result
    
    void* rdi_2 = *(*rdx_41 + result * 0x18)
    
    if (rdi_2 != 0)
        (*(*arg2 + 8))(arg2, 0xd8, 0xd8)
        (*(*arg2 + 8))(arg2, sx.q(*(rdi_2 + 0x38)) << 4, sx.q(*(rdi_2 + 0x3c)) << 4)
        int64_t r9_12 = *arg2
        (*(r9_12 + 8))(arg2, zx.q(*(rdi_2 + 0x58) + 0x1f) u>> 5 << 2, 
            zx.q(*(rdi_2 + 0x5c) + 0x1f) u>> 5 << 2, r9_12, var_88, arg1 + 0x10, var_78_2)
        int64_t rdx_49 = sx.q(*(rdi_2 + 0x78)) << 2
        (*(*arg2 + 8))(arg2, rdx_49, rdx_49)
        (*(*arg2 + 8))(arg2, sx.q(*(rdi_2 + 0x88)) << 4, sx.q(*(rdi_2 + 0x8c)) << 4)
        int64_t r9_13 = *arg2
        (*(r9_13 + 8))(arg2, zx.q(*(rdi_2 + 0xa8) + 0x1f) u>> 5 << 2, 
            zx.q(*(rdi_2 + 0xac) + 0x1f) u>> 5 << 2, r9_13)
        int64_t rdx_57 = sx.q(*(rdi_2 + 0xc8)) << 2
        (*(*arg2 + 8))(arg2, rdx_57, rdx_57)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
