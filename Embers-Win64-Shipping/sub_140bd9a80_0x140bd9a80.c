// 函数: sub_140bd9a80
// 地址: 0x140bd9a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg2
(*(r9 + 8))(arg2, sx.q(*(arg1 + 0x10)) * 0x18, sx.q(*(arg1 + 0x14)) * 0x18, r9)
int64_t r9_1 = *arg2
(*(r9_1 + 8))(arg2, zx.q(*(arg1 + 0x30) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x34) + 0x1f) u>> 5 << 2, 
    r9_1)
int64_t rdx_7 = sx.q(*(arg1 + 0x50)) << 2
(*(*arg2 + 8))(arg2, rdx_7, rdx_7)
int32_t rcx_3 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t rbx_1 = *(arg1 + 0x30)
int32_t r8_7 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (rbx_1 != 0)
    void* rax_3 = *(arg1 + 0x28)
    void* r9_2 = arg1 + 0x18
    
    if (rax_3 != 0)
        r9_2 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1 - 1)
    int32_t rdx_10 = *r9_2
    
    if (rdx_10 != 0)
    label_140bd9b88:
        int32_t rax_10 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_84_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_74.d = r8_7 - rax_11 + 0x1f
        
        if (r8_7 - rax_11 + 0x1f s> rbx_1)
            var_74.d = rbx_1
    else
        while (true)
            int64_t rdx_11 = sx.q(rcx_3)
            r8_7 += 0x20
            rcx_3 += 1
            var_74:4.d = r8_7
            var_88 = rcx_3
            
            if (rdx_11.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r9_2 + (rdx_11 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_140bd9b88
        
        var_74.d = rbx_1

int32_t rdx_12 = *(arg1 + 0x30)
int128_t var_28 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_12.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_10 = rdx_12 s>> 5
int32_t r9_4 = rdx_12 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r14
var_74.d = rdx_12
int128_t var_68 = (arg1 + 8).o
int128_t var_58 = var_38

if (rdx_12 != rbx_1)
    void* rax_13 = *(arg1 + 0x28)
    void* r10_1 = arg1 + 0x18
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_1 - 1)
    int32_t rcx_9 = *(r10_1 + (sx.q(r8_10) << 2)) & r14
    
    if (rcx_9 != 0)
    label_140bd9c52:
        int32_t rax_20 = neg.d(rcx_9) & rcx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t r11_1
        
        if (rax_20 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74.d = r9_4 - r11_1 + 0x1f
        
        if (r9_4 - r11_1 + 0x1f s> rbx_1)
            var_74.d = rbx_1
    else
        while (true)
            int64_t rcx_10 = sx.q(r8_10)
            r9_4 += 0x20
            r8_10 += 1
            
            if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rcx_9 = *(r10_1 + (rcx_10 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rcx_9 != 0)
                goto label_140bd9c52
        
        var_74.d = rbx_1

while (true)
    int64_t result = sx.q(var_58:0xc.d)
    int64_t* rdx_15 = var_68.q
    
    if (result.d == (var_78_2.q u>> 0x20).d && var_58.q == arg1 + 0x18 && rdx_15 == arg1 + 8)
        return result
    
    int64_t rcx_12 = result * 3
    int64_t rax_22 = *rdx_15
    
    if (*(rax_22 + (rcx_12 << 3) + 8) != 0)
        (*(*arg2 + 8))(arg2, 0xd0, 0xd0)
        void* rbx_3 = *(rax_22 + (rcx_12 << 3) + 8)
        (*(*arg2 + 8))(arg2, sx.q(*(rbx_3 + 0x28)) << 5, sx.q(*(rbx_3 + 0x2c)) << 5)
        int64_t r9_6 = *arg2
        (*(r9_6 + 8))(arg2, sx.q(*(rbx_3 + 0x38)) * 0x18, sx.q(*(rbx_3 + 0x3c)) * 0x18, r9_6, 
            var_88, arg1 + 0x18, var_78_2)
        int64_t r9_7 = *arg2
        (*(r9_7 + 8))(arg2, zx.q(*(rbx_3 + 0x58) + 0x1f) u>> 5 << 2, 
            zx.q(*(rbx_3 + 0x5c) + 0x1f) u>> 5 << 2, r9_7)
        int64_t rdx_25 = sx.q(*(rbx_3 + 0x78)) << 2
        (*(*arg2 + 8))(arg2, rdx_25, rdx_25)
        int64_t r9_8 = *arg2
        (*(r9_8 + 8))(arg2, sx.q(*(rbx_3 + 0x88)) * 0x18, sx.q(*(rbx_3 + 0x8c)) * 0x18, r9_8)
        int64_t r9_9 = *arg2
        (*(r9_9 + 8))(arg2, zx.q(*(rbx_3 + 0xa8) + 0x1f) u>> 5 << 2, 
            zx.q(*(rbx_3 + 0xac) + 0x1f) u>> 5 << 2, r9_9)
        int64_t rdx_33 = sx.q(*(rbx_3 + 0xc8)) << 2
        (*(*arg2 + 8))(arg2, rdx_33, rdx_33)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
