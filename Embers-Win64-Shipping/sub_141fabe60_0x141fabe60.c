// 函数: sub_141fabe60
// 地址: 0x141fabe60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x40)

if (rdi != 0)
    (*(*arg2 + 8))(arg2, 0x10, 0x10)
    sub_1422c01b0(rdi, arg2)

int64_t r9 = *arg2
(*(r9 + 8))(arg2, sx.q(*(arg1 + 0x58)) * 0x28, sx.q(*(arg1 + 0x5c)) * 0x28, r9)
int64_t r9_1 = *arg2
(*(r9_1 + 8))(arg2, zx.q(*(arg1 + 0x78) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x7c) + 0x1f) u>> 5 << 2, 
    r9_1)
int64_t rdx_8 = sx.q(*(arg1 + 0x98)) << 2
(*(*arg2 + 8))(arg2, rdx_8, rdx_8)
int32_t rcx_5 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r11 = *(arg1 + 0x78)
void* var_90 = arg1 + 0x60
int32_t r8_7 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_5 = *(arg1 + 0x70)
    void* r9_2 = arg1 + 0x60
    
    if (rax_5 != 0)
        r9_2 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_11 = *r9_2
    
    if (rdx_11 != 0)
    label_141fabf98:
        int32_t rax_12 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_94_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_84.d = r8_7 - rax_13 + 0x1f
        
        if (r8_7 - rax_13 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_12 = sx.q(rcx_5)
            r8_7 += 0x20
            rcx_5 += 1
            var_84:4.d = r8_7
            var_98 = rcx_5
            
            if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r9_2 + (rdx_12 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141fabf98
        
        var_84.d = r11

int32_t rdx_13 = *(arg1 + 0x78)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_13.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_10 = rdx_13 s>> 5
int32_t r9_4 = rdx_13 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_13
int128_t var_78 = (arg1 + 0x50).o
int96_t var_68 = var_48:8.12

if (rdx_13 != r11)
    void* rax_15 = *(arg1 + 0x70)
    void* r10_1 = arg1 + 0x60
    
    if (rax_15 != 0)
        r10_1 = rax_15
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_17 = *(r10_1 + (sx.q(r8_10) << 2)) & r12
    
    if (rdx_17 != 0)
    label_141fac062:
        int32_t rax_22 = neg.d(rdx_17) & rdx_17
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t rdi_1
        
        if (rax_22 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_84.d = r9_4 - rdi_1 + 0x1f
        
        if (r9_4 - rdi_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_10 = sx.q(r8_10)
            r9_4 += 0x20
            r8_10 += 1
            
            if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_17 = *(r10_1 + (rcx_10 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_17 != 0)
                goto label_141fac062
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rax_24 = sx.q(var_5c)
    int64_t* rdx_18 = var_78.q
    
    if (rax_24.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x60 && rdx_18 == arg1 + 0x50)
        *(arg1 + 0xac)
        *(arg1 + 0xa8)
        jump(*(*arg2 + 8))
    
    int64_t rcx_12 = rax_24 * 5
    int64_t rax_25 = *rdx_18
    void* rdi_2 = rax_25 + (rcx_12 << 3)
    (*(*arg2 + 8))(arg2, sx.q(*(rdi_2 + 8)) * 2, sx.q(*(rax_25 + (rcx_12 << 3) + 0xc)) * 2)
    int64_t* rdi_3 = *(rdi_2 + 0x10)
    
    if (rdi_3 != 0)
        (*(*arg2 + 8))(arg2, 0x10, 0x10)
        sub_1422c01b0(rdi_3, arg2)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
